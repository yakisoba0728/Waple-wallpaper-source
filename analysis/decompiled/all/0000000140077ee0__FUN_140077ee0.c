// Function: FUN_140077ee0
// Addr: 140077ee0
// Size: 70 bytes


uint FUN_140077ee0(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 local_res8;
  
  uVar2 = param_1[1];
  uVar6 = *param_1 ^ 0x80000000;
  iVar3 = (uVar2 ^ 0x80000000) - uVar6;
  local_res8 = param_2;
  if (iVar3 != -1) {
    uVar1 = iVar3 + 1;
    uVar4 = FUN_14007d9c0(&local_res8);
    lVar5 = (ulonglong)uVar4 * (ulonglong)uVar1;
    uVar4 = (uint)lVar5;
    if (uVar4 < uVar1) {
      while (uVar4 < ((uVar6 - (uVar2 ^ 0x80000000)) - 1) % uVar1) {
        uVar4 = FUN_14007d9c0(&local_res8);
        lVar5 = (ulonglong)uVar4 * (ulonglong)uVar1;
        uVar4 = (uint)lVar5;
      }
    }
    return (int)((ulonglong)lVar5 >> 0x20) + uVar6 ^ 0x80000000;
  }
  iVar3 = FUN_14007d9c0(&local_res8);
  return iVar3 + uVar6 ^ 0x80000000;
}

