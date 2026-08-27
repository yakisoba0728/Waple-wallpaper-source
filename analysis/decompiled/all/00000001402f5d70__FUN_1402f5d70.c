// Function: FUN_1402f5d70
// Addr: 1402f5d70
// Size: 243 bytes


ulonglong FUN_1402f5d70(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_res8;
  int local_resc;
  
  if (param_1 == (ulonglong *)0x0) {
    return 0;
  }
  uVar1 = *param_1;
  local_res8 = (int)uVar1;
  uVar6 = (uint)(uVar1 >> 0x20);
  if (local_res8 == 0) {
    uVar5 = (ulonglong)-uVar6;
    if ((int)-uVar6 < 0) {
      uVar5 = uVar1 >> 0x20;
    }
    return uVar5;
  }
  uVar5 = (ulonglong)(uint)-local_res8;
  if (-local_res8 < 0) {
    uVar5 = uVar1 & 0xffffffff;
  }
  if (uVar6 == 0) {
    return uVar5;
  }
  uVar3 = -uVar6;
  if ((int)-uVar6 < 0) {
    uVar3 = uVar6;
  }
  uVar3 = uVar3 | (uint)uVar5;
  iVar8 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar8 == 0; iVar8 = iVar8 + -1) {
    }
  }
  if (iVar8 < 0x1e) {
    iVar8 = 0x1d - iVar8;
    local_res8 = local_res8 << ((byte)iVar8 & 0x1f);
    local_resc = uVar6 << ((byte)iVar8 & 0x1f);
  }
  else {
    bVar4 = (byte)(iVar8 + -0x1d);
    local_res8 = local_res8 >> (bVar4 & 0x1f);
    local_resc = (int)uVar6 >> (bVar4 & 0x1f);
    iVar8 = -(iVar8 + -0x1d);
  }
  FUN_1402f9000(&local_res8);
  iVar2 = -local_res8;
  if (-local_res8 < 0) {
    iVar2 = local_res8;
  }
  iVar7 = (int)((ulonglong)((longlong)iVar2 * 0xdbd95b16 + 0x40000000) >> 0x20);
  iVar2 = -iVar7;
  if (-2 < (int)(local_res8 >> 0x1f & 0xfffffffeU)) {
    iVar2 = iVar7;
  }
  bVar4 = (byte)iVar8;
  if (0 < iVar8) {
    return (ulonglong)(uint)((1 << (bVar4 - 1 & 0x1f)) + iVar2 >> (bVar4 & 0x1f));
  }
  return (ulonglong)(uint)(iVar2 << (-bVar4 & 0x1f));
}

