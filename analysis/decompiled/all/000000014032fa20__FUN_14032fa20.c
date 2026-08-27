// Function: FUN_14032fa20
// Addr: 14032fa20
// Size: 257 bytes


undefined8 FUN_14032fa20(longlong *param_1,int param_2,longlong param_3,uint param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_4;
  if ((param_2 < 0) || (*(int *)((longlong)param_1 + 0x1c) <= param_2)) {
    return 6;
  }
  uVar2 = param_1[2];
  if (uVar2 < param_1[1] + uVar5) {
    uVar4 = param_3 - *param_1;
    if (((longlong)uVar4 < 0) || (uVar2 <= uVar4)) {
      uVar4 = 0xffffffffffffffff;
    }
    do {
      uVar2 = uVar2 + 0x400 + (uVar2 >> 2) & 0xfffffffffffffc00;
    } while (uVar2 < param_1[1] + uVar5);
    uVar1 = FUN_14033c100(param_1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (-1 < (longlong)uVar4) {
      param_3 = *param_1 + uVar4;
    }
  }
  if (*param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1[1] + *param_1;
  }
  *(longlong *)(param_1[4] + (longlong)param_2 * 8) = lVar3;
  *(uint *)(param_1[5] + (longlong)param_2 * 4) = param_4;
  if (param_4 != 0) {
    FUN_1404210f0(param_1[1] + *param_1,param_3,uVar5);
  }
  param_1[1] = param_1[1] + uVar5;
  return 0;
}

