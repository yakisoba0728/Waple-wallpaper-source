// Function: FUN_1403d06a0
// Addr: 1403d06a0
// Size: 23 bytes


void FUN_1403d06a0(longlong param_1,undefined4 param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1404dc110 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
  uVar6 = 0;
  if (lVar1 != 0) {
    uVar6 = *(undefined8 *)(lVar1 + 0x28);
  }
  iVar3 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x48))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,uVar6);
  iVar5 = *(int *)(param_1 + 0x40);
  if ((iVar5 != 0) && (*(char *)(param_1 + 0x3c) == '\0')) {
    if (*(int *)(param_1 + 0x28) < 0) {
      iVar5 = -iVar5;
    }
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = iVar5;
    }
    iVar3 = iVar3 + iVar4;
  }
  *param_3 = iVar3 / 2;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x90) + 0x10);
  uVar6 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar6 = *puVar2;
  }
  iVar5 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x20))
                    (param_1,*(undefined8 *)(param_1 + 0x98),&uStack_58,uVar6);
  if (iVar5 == 0) {
    iVar5 = (int)((double)*(int *)(param_1 + 0x2c) * DAT_140471b48);
  }
  else {
    iVar5 = -*(int *)(param_1 + 0x44);
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar5 = *(int *)(param_1 + 0x44);
    }
    iVar5 = (int)uStack_58 + iVar5;
  }
  *param_4 = iVar5;
  func_0x0001402ed2f0(local_28 ^ (ulonglong)auStack_78);
  return;
}

