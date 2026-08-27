// Function: FUN_14030a860
// Addr: 14030a860
// Size: 417 bytes


void FUN_14030a860(longlong param_1,ushort *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int local_res8;
  int local_resc;
  
  if ((*(ushort *)(param_1 + 0x78) <= *param_2) || (*(ushort *)(param_1 + 0xb0) <= param_2[2])) {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x86;
    }
    return;
  }
  lVar1 = (ulonglong)param_2[2] * 8;
  lVar2 = (ulonglong)*param_2 * 8;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x80) + 4 + lVar2);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xb8) + 4 + lVar1);
  iVar5 = iVar4 - iVar3;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x80) + lVar2) -
          *(int *)(*(longlong *)(param_1 + 0xb8) + lVar1);
  if ((iVar7 == 0) && (iVar5 == 0)) {
    bVar6 = 0;
    iVar4 = 0x4000;
LAB_14030a909:
    local_resc = iVar5;
    local_res8 = iVar4;
    FUN_1402f5e70(&local_res8);
    *(short *)(param_1 + 0x198) = (short)((int)(local_res8 + (local_res8 >> 0x1f & 3U)) >> 2);
    *(short *)(param_1 + 0x19a) = (short)((int)(local_resc + (local_resc >> 0x1f & 3U)) >> 2);
  }
  else {
    bVar6 = *(byte *)(param_1 + 0x1f0);
    if ((bVar6 & 1) != 0) {
      iVar5 = iVar7;
    }
    iVar4 = iVar3 - iVar4;
    if ((bVar6 & 1) == 0) {
      iVar4 = iVar7;
    }
    if ((iVar4 != 0) || (iVar5 != 0)) goto LAB_14030a909;
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x88) + 4 + lVar2);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xc0) + 4 + lVar1);
  iVar5 = iVar4 - iVar3;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x88) + lVar2) -
          *(int *)(*(longlong *)(param_1 + 0xc0) + lVar1);
  if ((iVar7 == 0) && (iVar5 == 0)) {
    iVar4 = 0x4000;
  }
  else {
    if ((bVar6 & 1) != 0) {
      iVar5 = iVar7;
    }
    iVar4 = iVar3 - iVar4;
    if ((bVar6 & 1) == 0) {
      iVar4 = iVar7;
    }
    if ((iVar4 == 0) && (iVar5 == 0)) goto LAB_14030a9d4;
  }
  local_resc = iVar5;
  local_res8 = iVar4;
  FUN_1402f5e70(&local_res8);
  *(short *)(param_1 + 0x19c) = (short)((int)(local_res8 + (local_res8 >> 0x1f & 3U)) >> 2);
  *(short *)(param_1 + 0x19e) = (short)((int)(local_resc + (local_resc >> 0x1f & 3U)) >> 2);
LAB_14030a9d4:
  FUN_140309220(param_1);
  return;
}

