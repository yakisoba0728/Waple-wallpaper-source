// Function: FUN_1402f5e40
// Addr: 1402f5e40
// Size: 11 bytes


ulonglong FUN_1402f5e40(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iStackX_8;
  int iStackX_c;
  
  if (param_1 == (ulonglong *)0x0) {
    return 0;
  }
  uVar1 = *param_1;
  iStackX_8 = (int)uVar1;
  uVar6 = (uint)(uVar1 >> 0x20);
  if (iStackX_8 == 0) {
    uVar5 = (ulonglong)-uVar6;
    if ((int)-uVar6 < 0) {
      uVar5 = uVar1 >> 0x20;
    }
    return uVar5;
  }
  uVar5 = (ulonglong)(uint)-iStackX_8;
  if (-iStackX_8 < 0) {
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
    iStackX_8 = iStackX_8 << ((byte)iVar8 & 0x1f);
    iStackX_c = uVar6 << ((byte)iVar8 & 0x1f);
  }
  else {
    bVar4 = (byte)(iVar8 + -0x1d);
    iStackX_8 = iStackX_8 >> (bVar4 & 0x1f);
    iStackX_c = (int)uVar6 >> (bVar4 & 0x1f);
    iVar8 = -(iVar8 + -0x1d);
  }
  func_0x0001402f90d0(&iStackX_8);
  iVar2 = -iStackX_8;
  if (-iStackX_8 < 0) {
    iVar2 = iStackX_8;
  }
  iVar7 = (int)((ulonglong)((longlong)iVar2 * 0xdbd95b16 + 0x40000000) >> 0x20);
  iVar2 = -iVar7;
  if (-2 < (int)(iStackX_8 >> 0x1f & 0xfffffffeU)) {
    iVar2 = iVar7;
  }
  bVar4 = (byte)iVar8;
  if (0 < iVar8) {
    return (ulonglong)(uint)((1 << (bVar4 - 1 & 0x1f)) + iVar2 >> (bVar4 & 0x1f));
  }
  return (ulonglong)(uint)(iVar2 << (-bVar4 & 0x1f));
}

