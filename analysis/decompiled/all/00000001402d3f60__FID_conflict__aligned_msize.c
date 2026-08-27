// Function: FID_conflict:_aligned_msize
// Addr: 1402d3f60
// Size: 101 bytes


/* Library Function - Multiple Matches With Different Base Names
    _aligned_msize
    _aligned_msize_base
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl FID_conflict__aligned_msize(void *_Memory,size_t _Alignment,size_t _Offset)

{
  undefined4 *puVar1;
  size_t sVar2;
  longlong lVar3;
  
  if (_Memory == (void *)0x0) {
    puVar1 = (undefined4 *)FUN_1402caf34();
    *puVar1 = 0x16;
    FUN_1402cad8c();
    sVar2 = 0xffffffffffffffff;
  }
  else {
    lVar3 = _msize_base(*(undefined8 *)(((ulonglong)_Memory & 0xfffffffffffffff8) - 8));
    sVar2 = 8;
    if (8 < _Alignment) {
      sVar2 = _Alignment;
    }
    sVar2 = lVar3 + ((-7 - sVar2) - (ulonglong)(-(int)_Offset & 7));
  }
  return sVar2;
}

