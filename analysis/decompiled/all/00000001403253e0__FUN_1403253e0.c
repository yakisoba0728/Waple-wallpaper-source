// Function: FUN_1403253e0
// Addr: 1403253e0
// Size: 190 bytes


int FUN_1403253e0(longlong param_1,uint param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int local_res10 [2];
  
  lVar2 = 0;
  local_res10[0] = 0;
  if (*param_4 != 0) {
    FUN_1402f7f90(param_3);
    *param_4 = 0;
  }
  uVar1 = param_2;
  if ((param_2 != 0) && (uVar1 = param_2 - 1, *(char *)((ulonglong)(param_2 - 1) + param_1) != '\0')
     ) {
    uVar1 = param_2;
  }
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      if (0x5f < (byte)(*(char *)(uVar4 + param_1) - 0x20U)) goto LAB_140325488;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < uVar1);
    lVar2 = FUN_1402f7fa0(param_3,uVar1 + 1,local_res10);
    if (local_res10[0] == 0) {
      FUN_1404210f0(lVar2,param_1,(ulonglong)uVar1);
      *(undefined1 *)((ulonglong)uVar1 + lVar2) = 0;
    }
  }
LAB_140325488:
  *param_4 = lVar2;
  return local_res10[0];
}

