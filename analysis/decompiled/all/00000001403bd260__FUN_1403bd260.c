// Function: FUN_1403bd260
// Addr: 1403bd260
// Size: 646 bytes


ulonglong FUN_1403bd260(longlong param_1,char param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 local_res8 [2];
  int local_res20 [2];
  undefined4 local_38;
  undefined4 local_34 [3];
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar8 = 0;
  local_res8[0] = 0;
  local_res20[0] = 0;
  local_34[0] = 0;
  local_38 = 0;
  cVar4 = (**(code **)(param_1 + 0x20))(param_1,param_3,local_res8,local_res20);
  if (cVar4 == '\0') {
    return 0;
  }
  if (local_res20[0] != 0) {
    local_38 = 0;
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x90) + 0x10);
    uVar6 = uVar8;
    if (lVar3 != 0) {
      uVar6 = *(ulonglong *)(lVar3 + 0x10);
    }
    iVar5 = (**(code **)(*(longlong *)(lVar2 + 0x90) + 0x30))
                      (lVar2,*(undefined8 *)(lVar2 + 0x98),local_res20[0],&local_38,uVar6);
    if (iVar5 == 0) {
      return 0;
    }
  }
  local_34[0] = 0;
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x90) + 0x10);
  uVar6 = uVar8;
  if (lVar3 != 0) {
    uVar6 = *(ulonglong *)(lVar3 + 0x10);
  }
  iVar5 = (**(code **)(*(longlong *)(lVar2 + 0x90) + 0x30))
                    (lVar2,*(undefined8 *)(lVar2 + 0x98),local_res8[0],local_34,uVar6);
  if ((param_2 == '\0') || (iVar5 == 0)) {
    uVar6 = FUN_1403bd260(param_1,param_2,local_res8[0]);
    if ((int)uVar6 != 0) {
      if (local_res20[0] != 0) {
        *(undefined4 *)
         (*(longlong *)(lVar1 + 0x70) + 0xc + (ulonglong)*(uint *)(lVar1 + 0x5c) * 0x14) = local_38;
        FUN_1403ed5a0(lVar1);
        uVar7 = (ulonglong)(*(int *)(lVar1 + 100) - 1);
        if (*(int *)(lVar1 + 100) == 0) {
          uVar7 = uVar8;
        }
        FUN_14039ef10(*(longlong *)(lVar1 + 0x78) + uVar7 * 0x14,lVar1);
        return (ulonglong)((int)uVar6 + 1);
      }
      return uVar6;
    }
    if (iVar5 == 0) {
      return 0;
    }
    *(undefined4 *)(*(longlong *)(lVar1 + 0x70) + 0xc + (ulonglong)*(uint *)(lVar1 + 0x5c) * 0x14) =
         local_34[0];
    FUN_1403ed5a0(lVar1,local_res8[0]);
    uVar6 = (ulonglong)(*(int *)(lVar1 + 100) - 1);
    if (*(int *)(lVar1 + 100) == 0) {
      uVar6 = uVar8;
    }
    FUN_14039ef10(*(longlong *)(lVar1 + 0x78) + uVar6 * 0x14,lVar1);
    if (local_res20[0] == 0) {
      return 1;
    }
    *(undefined4 *)(*(longlong *)(lVar1 + 0x70) + 0xc + (ulonglong)*(uint *)(lVar1 + 0x5c) * 0x14) =
         local_38;
    FUN_1403ed5a0(lVar1);
    uVar6 = (ulonglong)(*(int *)(lVar1 + 100) - 1);
    if (*(int *)(lVar1 + 100) == 0) {
      uVar6 = uVar8;
    }
  }
  else {
    *(undefined4 *)(*(longlong *)(lVar1 + 0x70) + 0xc + (ulonglong)*(uint *)(lVar1 + 0x5c) * 0x14) =
         local_34[0];
    FUN_1403ed5a0(lVar1,local_res8[0]);
    uVar6 = (ulonglong)(*(int *)(lVar1 + 100) - 1);
    if (*(int *)(lVar1 + 100) == 0) {
      uVar6 = uVar8;
    }
    FUN_14039ef10(*(longlong *)(lVar1 + 0x78) + uVar6 * 0x14,lVar1);
    if (local_res20[0] == 0) {
      return 1;
    }
    *(undefined4 *)(*(longlong *)(lVar1 + 0x70) + 0xc + (ulonglong)*(uint *)(lVar1 + 0x5c) * 0x14) =
         local_38;
    FUN_1403ed5a0(lVar1);
    uVar6 = (ulonglong)(*(int *)(lVar1 + 100) - 1);
    if (*(int *)(lVar1 + 100) == 0) {
      uVar6 = uVar8;
    }
  }
  FUN_14039ef10(*(longlong *)(lVar1 + 0x78) + uVar6 * 0x14,lVar1);
  return 2;
}

