// Function: _aligned_offset_malloc_base
// Addr: 1402d4ae0
// Size: 184 bytes


/* Library Function - Single Match
    _aligned_offset_malloc_base
   
   Library: Visual Studio 2015 Release */

longlong _aligned_offset_malloc_base(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (((param_2 == 0) || ((param_2 & param_2 - 1) != 0)) || ((param_3 != 0 && (param_1 <= param_3)))
     ) {
    puVar2 = (undefined4 *)FUN_1402caf34();
    *puVar2 = 0x16;
    FUN_1402cad8c();
  }
  else {
    uVar5 = 8;
    if (8 < param_2) {
      uVar5 = param_2;
    }
    uVar4 = (ulonglong)(-(int)param_3 & 7);
    lVar6 = uVar5 + 7 + uVar4;
    uVar1 = lVar6 + param_1;
    if (uVar1 < param_1) {
      puVar2 = (undefined4 *)FUN_1402caf34();
      *puVar2 = 0xc;
    }
    else {
      lVar3 = _malloc_base(uVar1);
      if (lVar3 != 0) {
        lVar6 = (lVar3 + lVar6 + param_3 & ~(uVar5 - 1)) - param_3;
        *(longlong *)((lVar6 - uVar4) + -8) = lVar3;
        return lVar6;
      }
    }
  }
  return 0;
}

