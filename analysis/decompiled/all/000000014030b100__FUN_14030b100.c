// Function: FUN_14030b100
// Addr: 14030b100
// Size: 214 bytes


undefined8 FUN_14030b100(longlong param_1,ushort param_2,ushort param_3,undefined2 *param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int local_res8;
  int local_resc;
  
  if ((*(ushort *)(param_1 + 0xb0) <= param_2) || (*(ushort *)(param_1 + 0x78) <= param_3)) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x86;
    }
    return 1;
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x88) + 4 + (ulonglong)param_3 * 8);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x88) + (ulonglong)param_3 * 8) -
          *(int *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)param_2 * 8);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0xc0) + 4 + (ulonglong)param_2 * 8);
  local_resc = iVar1 - iVar2;
  if ((iVar4 == 0) && (local_resc == 0)) {
    local_res8 = 0x4000;
  }
  else {
    bVar3 = *(byte *)(param_1 + 0x1f0) & 1;
    if (bVar3 != 0) {
      local_resc = iVar4;
    }
    local_res8 = iVar2 - iVar1;
    if (bVar3 == 0) {
      local_res8 = iVar4;
    }
    if ((local_res8 == 0) && (local_resc == 0)) {
      return 0;
    }
  }
  FUN_1402f5e70(&local_res8);
  *param_4 = (short)((int)(local_res8 + (local_res8 >> 0x1f & 3U)) >> 2);
  param_4[1] = (short)((int)(local_resc + (local_resc >> 0x1f & 3U)) >> 2);
  return 0;
}

