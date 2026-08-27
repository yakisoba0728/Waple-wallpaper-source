#!/usr/bin/env py
"""Categorize extracted strings into themed files under analysis/strings/.
Each themed file starts with a count header and lists `offset  string` lines.
"""
import json, os, re

OUTDIR = r"C:\Users\<user>\Desktop\wallpaper_source\analysis\strings"
allhits = json.load(open(os.path.join(OUTDIR, "_all.json"), "r", encoding="utf-8"))
ascii_hits = [(int(o,16) if isinstance(o,str) else o, s) for o,s in allhits["ascii"]]
utf16_hits = [(int(o,16) if isinstance(o,str) else o, s) for o,s in allhits["utf16"]]
# NOTE: _all.json stored offsets as ints already; ensure int
ascii_hits = [(int(o), s) for o,s in ascii_hits]
utf16_hits = [(int(o), s) for o,s in utf16_hits]

# Combine into single tagged list
def combined():
    for off, s in ascii_hits: yield ("A", off, s)
    for off, s in utf16_hits: yield ("U", off, s)

ALL = list(combined())

def write_themed(name, predicate, desc, restrict=None):
    """restrict: optional (lo, hi) file-offset range to restrict matches to."""
    rows = []
    for enc, off, s in ALL:
        if restrict and not (restrict[0] <= off < restrict[1]):
            continue
        if predicate(s):
            rows.append((enc, off, s))
    seen = set(); uniq = []
    for r in rows:
        if r[2] in seen: continue
        seen.add(r[2]); uniq.append(r)
    path = os.path.join(OUTDIR, name)
    with open(path, "w", encoding="utf-8", errors="replace") as f:
        f.write(f"# {desc}\n")
        f.write(f"# total matches: {len(rows)} (incl. duplicates) | unique: {len(uniq)}\n")
        f.write(f"# column 1: encoding (A=ASCII, U=UTF-16LE)  column 2: file offset  column 3: string\n")
        if restrict:
            f.write(f"# NOTE: restricted to file-offset range 0x{restrict[0]:x}..0x{restrict[1]:x} (data/read-only sections)\n")
        f.write("\n")
        for enc, off, s in uniq:
            disp = s if len(s) <= 200 else (s[:197] + "...")
            f.write(f"{enc} {off:#010x}  {disp}\n")
    return len(uniq)

# ---------- predicates ----------
EXT_RE = re.compile(r"(?i)\.(pkg|json|tex|mdl|frag|vert|png|jpe?g|tga|dds|bmp|webm|mp4|gif|webp|hlsl|glsl|fx|fxh|wav|ogg|mp3|ttf|otf|cso|spv|ase|asec|bin|txt|xml|html|js|css|so|dll|exe|ini|cfg|conf|zip|dat|mesh|anim|particle|sprite|material|ShaderParams|woff2?)\b")

SHADER_KEYWORDS = {
    # HLSL types
    "cbuffer","SamplerState","SamplerComparisonState","Texture2D","Texture3D",
    "Texture2DMS","Texture2DMSArray","TextureCube","RWByteAddressBuffer",
    "RWStructuredBuffer","StructuredBuffer","ByteAddressBuffer","Texture1D",
    "RWTexture2D","RWTexture3D","SamplerFeedbackTexture","RasterizerOrdered",
    "Texture2DArray","Sampler","register(","SV_Position","SV_Target","SV_Depth",
    "SV_DispatchThreadID","SV_GroupID","SV_GroupIndex","SV_GroupThreadID",
    "SV_InstanceID","SV_VertexID","SV_PrimitiveID","SV_OutputControlPointID",
    "SV_TessFactor","nointerpolation","unorm","snorm","row_major","column_major",
    "groupshared","precise","cbuffer","tbuffer",
    # GLSL/MSL keywords
    "uniform","varying","attribute","gl_Position","gl_FragColor","gl_FragCoord",
    "sampler2D","samplerCube","sampler3D","#version","#extension","layout(",
    "invariant","precision","#define","#include","vertex/","fragment/",
    "vertex","fragment","#pragma","texelFetch","texture(","glsl",  # glsl only if used as a word
    # SM targets / shader-stage keywords
    "vs_5_0","vs_5_1","vs_6_0","vs_4_0","vs_4_1",
    "ps_5_0","ps_5_1","ps_6_0","ps_4_0","ps_4_1",
    "gs_5_0","gs_4_0","ds_5_0","hs_5_0","cs_5_0","cs_5_1","cs_6_0",
    "lib_6_","ms_","as_",
    "vs_main","ps_main","gs_main","cs_main","VSMain","PSMain","GSMain","CSMain",
    "DSMain","HSMain",
    " HLSL"," HLSL)","HLSL ","GLSL","MSL","OpTypeImage","OpTypeSampler","OpTypeStruct",
    "DXIL","DXBC","SPIR","SpirV","spirv",
}
def is_shader(s):
    if len(s) > 300: return False   # skip huge airport-code / random blobs
    if any(k in s for k in SHADER_KEYWORDS): return True
    if re.search(r"register\s*\(\s*[sbctu][0-9]", s): return True
    if re.search(r"register\s*\(\s*[sbctu]\d", s): return True
    return False

JSON_KEY_RE = re.compile(r"^[a-z][a-zA-Z0-9]{2,30}$")  # camelCase / lower word
def is_json_key(s):
    # Require camelCase or lowercase identifier: start lower, contain at least one
    # lowercase letter, and at least one uppercase OR be a clean known dictionary word.
    if not JSON_KEY_RE.match(s): return False
    if len(s) < 3 or len(s) > 28: return False
    if s.upper() == s: return False        # not pure acronym
    # Require at least one vowel somewhere (filters random gibberish like 'wXH9oHu')
    if not re.search(r"[aeiouAEIOU]", s): return False
    # Reject strings that contain a digit-only tail of length>=4 (random)
    if re.search(r"\d{4,}$", s): return False
    # Reject if it starts/ends with non-alphabetic
    if not (s[0].isalpha() and s[-1].isalnum()): return False
    # camelCase = must contain a transition lower->Upper, OR be all-lower with >=3 alpha
    has_camel = bool(re.search(r"[a-z][A-Z]", s))
    has_dash_underscore = ("_" in s)
    # Heuristic: require camelCase transition OR a length>=6 all-lower identifier
    if not (has_camel or has_dash_underscore or len(s) >= 6):
        return False
    return True

ERR_RE = re.compile(r"(?i)(error|fail|invalid|missing|cannot|unable|exception|corrupt|out of (range|memory)|denied|uninitialized|unsupported|fatal|aborted|overflow|underflow|timed?\s*out|too (large|small|long|short)|not found|no such|undefined|abort)")
# Strings produced by CRT/STL that bloat the error file but are not application messages:
CRT_NOISE_RE = re.compile(r"(?i)(regex_error|^bad (function call|allocation|array)|^Unknown exception|^executable format error|^argument list too long|^connection aborted|^function not supported|^bad exception|^map/set too long|^ios_base|^bad cast|^bad typeid|operator new|deprecat)")
def is_error(s):
    if len(s) < 6 or len(s) > 300: return False
    if CRT_NOISE_RE.search(s): return False
    return bool(ERR_RE.search(s))

D3D_DXGI_RE = re.compile(r"(?i)\b(D3D11|D3D12|D3D10|DXGI|D2D1|D3D|DWrite|DXBC|DXIL|IDXGISwapChain|IDXGI|ID3D11|ID3D12|ID3D10|CreateDevice|CreateSwapChain|IASetVertexBuffers|IASetIndexBuffer|IASetInputLayout|VSSetShader|PSSetShader|GSSetShader|CSSetShader|CSSetUnordered|OMSetRenderTargets|OMSetDepthStencil|RSSetState|RSSetViewports|RSSetScissorRects|DrawIndexed|DrawIndexedInstanced|DrawInstanced|DrawAuto|Dispatch|DispatchIndirect|UpdateSubresource|Map|Unmap|CopyResource|CopySubresource|ResolveSubresource|GenerateMips|CreateBuffer|CreateTexture2D|CreateTexture3D|CreateRenderTargetView|CreateShaderResourceView|CreateDepthStencilView|CreateUnorderedAccessView|CreateVertexShader|CreatePixelShader|CreateGeometryShader|CreateHullShader|CreateDomainShader|CreateComputeShader|CreateInputLayout|CreateSamplerState|CreateBlendState|CreateDepthStencilState|CreateRasterizerState|CreateQuery|CreatePredicate|CreateCounter|CreateDeferredContext|FinishCommandList|ClearRenderTargetView|ClearDepthStencilView|ClearUnorderedAccess|ClearState|Flush|SetPredication|CopyStructureCount|SwapChain|Present|ResizeBuffers|GetBuffer|SetFullscreenState|GetParent|EnumAdapters|EnumOutputs|GetDisplayModeList|FindClosestMatchingMode|QueryInterface|AddRef|Release)\b")
def is_d3d_dxgi(s):
    return bool(D3D_DXGI_RE.search(s))

FORMAT_MAGIC_WORDS = ("PKGV","PLPV0005","PLPV","TEXC","TEXS","TEXB","TEXI","TEXV","TEX0",
                       "MDLV","MDLA","MDLE","MDLS","MDL0","MDL","WEBM","OggS","RIFF","KTX ",
                       "DDS ","PVR ","ASTC","DXT1","DXT3","DXT5","BC1","BC2","BC3","BC4",
                       "BC5","BC6","BC7","glTF","glb","\x89PNG","PKGB","PKGS")
def is_format_spec(s):
    if len(s) > 60: return False   # kill the giant tzdata / airport-code blobs
    # Only accept chunk-magic regex if the string is short (looks like a chunk header)
    if any(w in s for w in FORMAT_MAGIC_WORDS):
        # But avoid catching random words that merely contain "TEX"/"MDL"
        # Accept if the magic appears at start or as a standalone token.
        if re.match(r"^[A-Z]{3,4}[0-9]{2,4}", s): return True
        for w in FORMAT_MAGIC_WORDS:
            if s.startswith(w) or (" " + w) in s or (w + " ") in s:
                return True
        # Still keep hits where the whole string is a known format word
        if s in FORMAT_MAGIC_WORDS: return True
    if re.search(r"(?i)\b(BC[1-7][a-z]?|Dxt[1-5]|DXT[1-5])\b", s) and len(s) <= 12: return True
    if re.match(r"^[A-Z][A-Z0-9]{3}[0-9]{2,4}$", s): return True   # like PLPV0005, MDLV0023
    return False

CLASS_RE = re.compile(r"(::|vftable|vbtable|type_info|RTTI|typeid|__cdecl|__fastcall|__vectorcall|__thiscall|class\s+\w|struct\s+\w|::~|operator\s|std::|boost::|cxa|libc|msvcr|ucrt|concrt|allocator|deque|list|map|unordered|vector|tuple|shared_ptr|unique_ptr|weak_ptr|function|bind|mutex|condition_variable|future|promise|atomic|chrono|thread|filesystem|exception|runtime_error|logic_error|bad_alloc|bad_cast|char_traits|basic_string|basic_ostream|basic_istream|ios_base|streambuf|sstream|iomanip|regex|iterator)")
def is_class(s):
    if len(s) > 250 or len(s) < 5: return False
    return bool(CLASS_RE.search(s))

URL_RE = re.compile(r"(?i)\b(https?://|www\.|\.com|\.net|\.org|ftp://|file://|steam)")
def is_misc_notable(s):
    if URL_RE.search(s): return True
    if re.search(r"(?i)\.(dll|exe|pdb|sys)\b", s): return True
    if re.search(r"\b\d+\.\d+\.\d+\.\d+\b", s): return True   # version quadruple
    if re.search(r"(?i)wallpaper|wallpaperengine", s): return True
    if re.search(r"(?i)\b(steam|valve|github)\b", s): return True
    return False

# ---------- write ----------
counts = {}
counts["file-extensions.txt"]   = write_themed("file-extensions.txt", lambda s: bool(EXT_RE.search(s)),
                                  "File extensions referenced in the binary (asset / shader / config types)")
counts["shader-strings.txt"]    = write_themed("shader-strings.txt", is_shader,
                                  "HLSL/GLSL/MSL keywords, sampler/texture names, cbuffer, shader-model targets")
# Restrict JSON-key search to .rdata region (file 0x424e00 .. 0x4da000) so we
# don't pollute the output with random 5-char runs from .text instructions.
counts["json-keys.txt"]         = write_themed("json-keys.txt", is_json_key,
                                  "Likely scene.json / project.json keys (camelCase identifiers, 3-28 chars)",
                                  restrict=(0x424e00, 0x4da000))
counts["error-messages.txt"]    = write_themed("error-messages.txt", is_error,
                                  'Strings containing error / fail / invalid / missing / cannot / etc.')
counts["d3d-dxgi.txt"]          = write_themed("d3d-dxgi.txt", is_d3d_dxgi,
                                  "D3D11/DXGI/DWrite API names and shader-model targets")
counts["format-spec.txt"]       = write_themed("format-spec.txt", is_format_spec,
                                  "Magic words / chunk ids (PKGV, TEX, MDL, BCn, DXTn, KTX, glTF, etc.)")
counts["classes-symbols.txt"]   = write_themed("classes-symbols.txt", is_class,
                                  "C++ class/method/RTTI/vtable hints (std::, ::, vftable, operator, etc.)")
counts["misc-notable.txt"]      = write_themed("misc-notable.txt", is_misc_notable,
                                  "URLs, version strings, DLL/EXE names, Wallpaper Engine references")

import sys
print("Per-file unique counts:", file=sys.stderr)
for k,v in counts.items():
    print(f"  {k:24s} {v}", file=sys.stderr)
