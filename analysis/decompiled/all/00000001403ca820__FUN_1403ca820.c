// Function: FUN_1403ca820
// Addr: 1403ca820
// Size: 493 bytes


void FUN_1403ca820(longlong param_1,undefined4 param_2,uint param_3,int *param_4,int *param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_res18 [4];
  int local_28 [4];
  
  uVar5 = 0;
  *param_5 = 0;
  *param_4 = 0;
  lVar1 = *(longlong *)(param_1 + 0x90);
  lVar2 = *(longlong *)(lVar1 + 0x10);
  if ((param_3 & 0xfffffffe) == 4) {
    uVar4 = uVar5;
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x48);
    }
    iVar3 = (**(code **)(lVar1 + 0x68))
                      (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_4,param_5,uVar4);
    if (iVar3 == 0) {
      *param_5 = 0;
      *param_4 = 0;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
      if (lVar1 != 0) {
        uVar5 = *(undefined8 *)(lVar1 + 0x50);
      }
      iVar3 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x70))
                        (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_4,param_5,uVar5);
      if (iVar3 == 0) {
        return;
      }
      if (*(char *)(param_1 + 0x3c) == '\0') {
        iVar3 = -*(int *)(param_1 + 0x40);
        if (-1 < *(int *)(param_1 + 0x28)) {
          iVar3 = *(int *)(param_1 + 0x40);
        }
        *param_4 = *param_4 + iVar3;
        iVar3 = -*(int *)(param_1 + 0x44);
        if (-1 < *(int *)(param_1 + 0x2c)) {
          iVar3 = *(int *)(param_1 + 0x44);
        }
        *param_5 = *param_5 + iVar3;
      }
      FUN_1403d05d0(param_1,param_2,local_res18,local_28);
      *param_4 = *param_4 - local_res18[0];
      *param_5 = *param_5 - local_28[0];
      return;
    }
  }
  else {
    uVar4 = uVar5;
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x50);
    }
    iVar3 = (**(code **)(lVar1 + 0x70))
                      (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_4,param_5,uVar4);
    if (iVar3 == 0) {
      *param_5 = 0;
      *param_4 = 0;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
      if (lVar1 != 0) {
        uVar5 = *(undefined8 *)(lVar1 + 0x48);
      }
      iVar3 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x68))
                        (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_4,param_5,uVar5);
      if (iVar3 == 0) {
        return;
      }
      if (*(char *)(param_1 + 0x3c) == '\0') {
        iVar3 = -*(int *)(param_1 + 0x40);
        if (-1 < *(int *)(param_1 + 0x28)) {
          iVar3 = *(int *)(param_1 + 0x40);
        }
        *param_4 = *param_4 + iVar3;
        iVar3 = -*(int *)(param_1 + 0x44);
        if (-1 < *(int *)(param_1 + 0x2c)) {
          iVar3 = *(int *)(param_1 + 0x44);
        }
        *param_5 = *param_5 + iVar3;
      }
      FUN_1403d05d0(param_1,param_2,local_res18,local_28);
      *param_4 = *param_4 + local_res18[0];
      goto LAB_1403ca9f8;
    }
  }
  if (*(char *)(param_1 + 0x3c) != '\0') {
    return;
  }
  iVar3 = -*(int *)(param_1 + 0x40);
  if (-1 < *(int *)(param_1 + 0x28)) {
    iVar3 = *(int *)(param_1 + 0x40);
  }
  *param_4 = *param_4 + iVar3;
  local_28[0] = -*(int *)(param_1 + 0x44);
  if (-1 < *(int *)(param_1 + 0x2c)) {
    local_28[0] = *(int *)(param_1 + 0x44);
  }
LAB_1403ca9f8:
  *param_5 = *param_5 + local_28[0];
  return;
}

