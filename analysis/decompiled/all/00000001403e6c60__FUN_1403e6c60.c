// Function: FUN_1403e6c60
// Addr: 1403e6c60
// Size: 169 bytes


undefined8 FUN_1403e6c60(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_res8 [8];
  
  local_res8[0] = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
  uVar5 = 0;
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
  }
  iVar2 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x30))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,local_res8,uVar5);
  if (iVar2 != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
    if (lVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar1 + 0x28);
    }
    iVar3 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x48))
                      (param_1,*(undefined8 *)(param_1 + 0x98),local_res8[0],uVar5);
    iVar2 = *(int *)(param_1 + 0x40);
    if ((iVar2 != 0) && (*(char *)(param_1 + 0x3c) == '\0')) {
      if (*(int *)(param_1 + 0x28) < 0) {
        iVar2 = -iVar2;
      }
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = iVar2;
      }
      iVar3 = iVar3 + iVar4;
    }
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}

