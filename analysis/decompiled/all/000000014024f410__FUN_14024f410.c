// Function: FUN_14024f410
// Addr: 14024f410
// Size: 146 bytes


int FUN_14024f410(int *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 local_res8;
  
  iVar4 = param_1[1];
  iVar2 = *param_1;
  iVar3 = iVar4 - iVar2;
  local_res8 = param_2;
  if (iVar3 != -1) {
    uVar1 = iVar3 + 1;
    uVar5 = FUN_14007d8f0(&local_res8);
    lVar6 = (ulonglong)uVar5 * (ulonglong)uVar1;
    uVar5 = (uint)lVar6;
    if (uVar5 < uVar1) {
      while (uVar5 < ((iVar2 - iVar4) - 1U) % uVar1) {
        uVar5 = FUN_14007d8f0(&local_res8);
        lVar6 = (ulonglong)uVar5 * (ulonglong)uVar1;
        uVar5 = (uint)lVar6;
      }
    }
    return (int)((ulonglong)lVar6 >> 0x20) + iVar2;
  }
  iVar4 = FUN_14007d8f0(&local_res8);
  return iVar4 + iVar2;
}

