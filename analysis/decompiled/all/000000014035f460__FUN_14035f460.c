// Function: FUN_14035f460
// Addr: 14035f460
// Size: 230 bytes


bool FUN_14035f460(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
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
  puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 0x90) + 0x10);
  uVar6 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar6 = *puVar2;
  }
  iVar3 = (**(code **)(*(longlong *)(lVar1 + 0x90) + 0x20))
                    (lVar1,*(undefined8 *)(lVar1 + 0x98),param_3,uVar6);
  if (iVar3 != 0) {
    iVar4 = *param_3;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
      if ((iVar5 != 0) && (iVar5 != *(int *)(param_1 + 0x2c))) {
        iVar4 = (int)(((longlong)*(int *)(param_1 + 0x2c) * (longlong)iVar4) / (longlong)iVar5);
      }
    }
    iVar5 = param_3[1];
    *param_3 = iVar4;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
      if ((iVar4 != 0) && (iVar4 != *(int *)(param_1 + 0x2c))) {
        iVar5 = (int)(((longlong)iVar5 * (longlong)*(int *)(param_1 + 0x2c)) / (longlong)iVar4);
      }
    }
    param_3[1] = iVar5;
    iVar4 = param_3[2];
    if (*(longlong *)(param_1 + 0x18) != 0) {
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
      if ((iVar5 != 0) && (iVar5 != *(int *)(param_1 + 0x2c))) {
        iVar4 = (int)(((longlong)iVar4 * (longlong)*(int *)(param_1 + 0x2c)) / (longlong)iVar5);
      }
    }
    param_3[2] = iVar4;
  }
  return iVar3 != 0;
}

