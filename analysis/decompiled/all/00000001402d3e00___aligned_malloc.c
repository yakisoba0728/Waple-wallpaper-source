// Function: _aligned_malloc
// Addr: 1402d3e00
// Size: 127 bytes


/* Library Function - Single Match
    _aligned_malloc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __cdecl _aligned_malloc(size_t _Size,size_t _Alignment)

{
  size_t sVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  void *pvVar5;
  
  pvVar5 = (void *)0x0;
  if ((_Alignment == 0) || ((_Alignment & _Alignment - 1) != 0)) {
    puVar3 = (undefined4 *)FUN_1402caf34();
    *puVar3 = 0x16;
    FUN_1402cad8c();
  }
  else {
    sVar1 = 8;
    if (8 < _Alignment) {
      sVar1 = _Alignment;
    }
    uVar2 = _Size + 8 + (sVar1 - 1);
    if (uVar2 < _Size) {
      puVar3 = (undefined4 *)FUN_1402caf34();
      *puVar3 = 0xc;
    }
    else {
      lVar4 = _malloc_base(uVar2);
      if (lVar4 != 0) {
        pvVar5 = (void *)(sVar1 + 7 + lVar4 & ~(sVar1 - 1));
        *(longlong *)((longlong)pvVar5 + -8) = lVar4;
      }
    }
  }
  return pvVar5;
}

