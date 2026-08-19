// Function: FUN_1402d4c70
// Addr: 1402d4c70
// Size: 326 bytes


longlong FUN_1402d4c70(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = 0;
  if (param_1 != 0) {
    if (param_2 == 0) {
      lVar2 = func_0x0001402bf8e0(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
      return lVar2;
    }
    if (((param_3 != 0) && ((param_3 & param_3 - 1) == 0)) &&
       ((param_4 == 0 || (param_4 < param_2)))) {
      lVar2 = func_0x0001402e7470(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
      return lVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  if (((param_3 == 0) || ((param_3 & param_3 - 1) != 0)) || ((param_4 != 0 && (param_2 <= param_4)))
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  uVar4 = 8;
  if (8 < param_3) {
    uVar4 = param_3;
  }
  uVar3 = (ulonglong)(-(int)param_4 & 7);
  lVar5 = uVar4 + 7 + uVar3;
  if (lVar5 + param_2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  lVar1 = thunk_FUN_1402da070();
  if (lVar1 != 0) {
    lVar2 = (lVar5 + lVar1 + param_4 & ~(uVar4 - 1)) - param_4;
    *(longlong *)((lVar2 - uVar3) + -8) = lVar1;
  }
  return lVar2;
}

