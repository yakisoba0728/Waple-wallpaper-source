// Function: _aligned_offset_malloc
// Addr: 1402d3e90
// Size: 197 bytes


/* Library Function - Single Match
    _aligned_offset_malloc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __cdecl _aligned_offset_malloc(size_t _Size,size_t _Alignment,size_t _Offset)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  size_t sVar6;
  longlong lVar7;
  
  pvVar4 = (void *)0x0;
  if (((_Alignment == 0) || ((_Alignment & _Alignment - 1) != 0)) ||
     ((_Offset != 0 && (_Size <= _Offset)))) {
    puVar2 = (undefined4 *)FUN_1402caf34();
    *puVar2 = 0x16;
    FUN_1402cad8c();
  }
  else {
    sVar6 = 8;
    if (8 < _Alignment) {
      sVar6 = _Alignment;
    }
    uVar5 = (ulonglong)(-(int)_Offset & 7);
    lVar7 = sVar6 + 7 + uVar5;
    uVar1 = lVar7 + _Size;
    if (uVar1 < _Size) {
      puVar2 = (undefined4 *)FUN_1402caf34();
      *puVar2 = 0xc;
    }
    else {
      lVar3 = _malloc_base(uVar1);
      if (lVar3 != 0) {
        pvVar4 = (void *)((lVar7 + lVar3 + _Offset & ~(sVar6 - 1)) - _Offset);
        *(longlong *)((longlong)pvVar4 + (-8 - uVar5)) = lVar3;
      }
    }
  }
  return pvVar4;
}

