// Function: FUN_14035f550
// Addr: 14035f550
// Size: 235 bytes


bool FUN_14035f550(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x90) + 0x10);
  uVar6 = 0;
  if (lVar3 != 0) {
    uVar6 = *(undefined8 *)(lVar3 + 8);
  }
  iVar4 = (**(code **)(*(longlong *)(lVar2 + 0x90) + 0x28))
                    (lVar2,*(undefined8 *)(lVar2 + 0x98),param_3,uVar6);
  if (iVar4 != 0) {
    iVar5 = *param_3;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x28);
      if ((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 0x28))) {
        iVar5 = (int)(((longlong)*(int *)(param_1 + 0x28) * (longlong)iVar5) / (longlong)iVar1);
      }
    }
    *param_3 = iVar5;
    iVar5 = param_3[1];
    if (*(longlong *)(param_1 + 0x18) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x28);
      if ((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 0x28))) {
        iVar5 = (int)(((longlong)*(int *)(param_1 + 0x28) * (longlong)iVar5) / (longlong)iVar1);
      }
    }
    param_3[1] = iVar5;
    iVar5 = param_3[2];
    if (*(longlong *)(param_1 + 0x18) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x28);
      if ((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 0x28))) {
        iVar5 = (int)(((longlong)iVar5 * (longlong)*(int *)(param_1 + 0x28)) / (longlong)iVar1);
      }
    }
    param_3[2] = iVar5;
  }
  return iVar4 != 0;
}

