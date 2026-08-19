// Function: FUN_14032faf0
// Addr: 14032faf0
// Size: 28 bytes


undefined8 FUN_14032faf0(longlong *param_1,int param_2,longlong param_3,uint param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((param_2 < 0) || (*(int *)((longlong)param_1 + 0x1c) <= param_2)) {
    return 6;
  }
  uVar3 = param_1[2];
  uVar2 = param_1[1] + (ulonglong)param_4;
  if (uVar3 < uVar2) {
    uVar5 = param_3 - *param_1;
    if (((longlong)uVar5 < 0) || (uVar3 <= uVar5)) {
      uVar5 = 0xffffffffffffffff;
    }
    do {
      uVar3 = uVar3 + 0x400 + (uVar3 >> 2) & 0xfffffffffffffc00;
    } while (uVar3 < uVar2);
    uVar1 = func_0x00014033c1d0(param_1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (-1 < (longlong)uVar5) {
      param_3 = *param_1 + uVar5;
    }
  }
  if (*param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1[1] + *param_1;
  }
  *(longlong *)(param_1[4] + (longlong)param_2 * 8) = lVar4;
  *(uint *)(param_1[5] + (longlong)param_2 * 4) = param_4;
  if (param_4 == 0) {
    param_1[1] = param_1[1];
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(param_1[1] + *param_1,param_3,(ulonglong)param_4);
}

