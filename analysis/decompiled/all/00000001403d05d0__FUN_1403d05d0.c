// Function: FUN_1403d05d0
// Addr: 1403d05d0
// Size: 237 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403d05d0(longlong param_1,undefined4 param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1404dc040 ^ (ulonglong)auStack_78;
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
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x90) + 0x10);
  uVar6 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar6 = *puVar2;
  }
  iVar5 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x20))
                    (param_1,*(undefined8 *)(param_1 + 0x98),&local_58,uVar6);
  if (iVar5 == 0) {
    local_58._0_4_ = (int)((double)*(int *)(param_1 + 0x2c) * DAT_140471a78);
  }
  else {
    iVar5 = -*(int *)(param_1 + 0x44);
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar5 = *(int *)(param_1 + 0x44);
    }
    local_58._0_4_ = (int)local_58 + iVar5;
  }
  *param_4 = (int)local_58;
  return;
}

