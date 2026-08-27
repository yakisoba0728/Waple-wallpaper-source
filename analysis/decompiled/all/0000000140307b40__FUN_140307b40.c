// Function: FUN_140307b40
// Addr: 140307b40
// Size: 266 bytes


ulonglong FUN_140307b40(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint local_res8 [2];
  undefined8 local_res18 [2];
  
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x408) == 0) {
    uVar3 = FUN_1403073d0(param_1,0);
    local_res8[0] = (uint)uVar3;
    if (local_res8[0] != 0) {
      return uVar3;
    }
  }
  if (*(ushort *)(param_1 + 0xe) < param_2) {
    return 6;
  }
  if (param_2 == 0) {
    FUN_1402f7f90(uVar4,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    uVar4 = FUN_1402f8160(uVar4,*(undefined8 *)(param_1 + 0x428),local_res8);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    if (local_res8[0] != 0) {
      return (ulonglong)local_res8[0];
    }
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x408) + 0x18);
    lVar6 = (ulonglong)param_2 * 0x10 + *(longlong *)(puVar1 + 6);
    uVar3 = (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x158))
                      (param_1,*(undefined2 *)(lVar6 + -8),local_res18);
    local_res8[0] = (uint)uVar3;
    if (local_res8[0] != 0) {
      return uVar3;
    }
    FUN_1402f7f90(uVar4,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = local_res18[0];
    uVar4 = *(undefined8 *)(lVar6 + -0x10);
    uVar5 = *puVar1;
  }
  uVar2 = FUN_1403071d0(param_1,uVar5,uVar4);
  if (1 < uVar2 + 2) {
    return (ulonglong)uVar2;
  }
  return 0;
}

