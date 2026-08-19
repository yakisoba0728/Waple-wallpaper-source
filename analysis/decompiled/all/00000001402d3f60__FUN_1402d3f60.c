// Function: FUN_1402d3f60
// Addr: 1402d3f60
// Size: 104 bytes


longlong FUN_1402d3f60(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar3 = 0;
  if (((param_2 == 0) || ((param_2 & param_2 - 1) != 0)) || ((param_3 != 0 && (param_1 <= param_3)))
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  uVar5 = 8;
  if (8 < param_2) {
    uVar5 = param_2;
  }
  uVar4 = (ulonglong)(-(int)param_3 & 7);
  lVar6 = uVar5 + 7 + uVar4;
  uVar1 = lVar6 + param_1;
  if (uVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  lVar2 = thunk_FUN_1402da070(uVar1);
  if (lVar2 != 0) {
    lVar3 = (lVar6 + lVar2 + param_3 & ~(uVar5 - 1)) - param_3;
    *(longlong *)((lVar3 - uVar4) + -8) = lVar2;
  }
  return lVar3;
}

