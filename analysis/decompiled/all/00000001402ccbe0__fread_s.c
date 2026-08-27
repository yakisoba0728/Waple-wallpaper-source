// Function: fread_s
// Addr: 1402ccbe0
// Size: 165 bytes


/* Library Function - Single Match
    fread_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  undefined4 *puVar1;
  size_t sVar2;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      FUN_1402c9b24(_File);
      sVar2 = FUN_1402cc954(_DstBuf,_DstSize,_ElementSize,_Count,_File);
      FUN_1402c9b30(_File);
      return sVar2;
    }
    if (_DstSize != 0xffffffffffffffff) {
      FUN_1404217a0(_DstBuf,0,_DstSize);
    }
    puVar1 = (undefined4 *)FUN_1402caf34();
    *puVar1 = 0x16;
    FUN_1402cad8c();
  }
  return 0;
}

