// Function: FUN_1402d4ee0
// Addr: 1402d4ee0
// Size: 90 bytes


longlong FUN_1402d4ee0(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                      ulonglong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  if ((param_2 != 0) &&
     (uVar4 = 0xffffffffffffffe0 % param_2, 0xffffffffffffffe0 / param_2 < param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  param_2 = param_2 * param_3;
  if (param_1 != 0) {
    lVar2 = func_0x0001402e7470(*(undefined8 *)((param_1 & 0xfffffffffffffff8) - 8));
    return lVar2;
  }
  if (((param_4 == 0) || ((param_4 & param_4 - 1) != 0)) || ((param_5 != 0 && (param_2 <= param_5)))
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004(0,uVar4);
  }
  uVar4 = 8;
  if (8 < param_4) {
    uVar4 = param_4;
  }
  uVar5 = (ulonglong)(-(int)param_5 & 7);
  lVar2 = uVar5 + 8 + (uVar4 - 1);
  uVar1 = lVar2 + param_2;
  if (uVar1 <= param_2 && param_2 - uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  lVar3 = thunk_FUN_1402da070();
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (lVar2 + lVar3 + param_5 & ~(uVar4 - 1)) - param_5;
    *(longlong *)((lVar2 - uVar5) + -8) = lVar3;
  }
  if ((lVar2 != 0) && (param_2 != 0)) {
    lVar2 = func_0x000140421870(lVar2,0,param_2);
    return lVar2;
  }
  return lVar2;
}

