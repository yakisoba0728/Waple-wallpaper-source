// Function: FUN_1402f10a0
// Addr: 1402f10a0
// Size: 220 bytes


uint FUN_1402f10a0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_res18;
  int local_res1c;
  
  if (param_1 == 0) {
    uVar4 = -param_2;
    if ((int)-param_2 < 0) {
      uVar4 = param_2;
    }
    return uVar4;
  }
  uVar4 = -param_1;
  if ((int)-param_1 < 0) {
    uVar4 = param_1;
  }
  if (param_2 == 0) {
    return uVar4;
  }
  uVar2 = -param_2;
  if ((int)-param_2 < 0) {
    uVar2 = param_2;
  }
  iVar6 = 0x1f;
  if ((uVar2 | uVar4) != 0) {
    for (; (uVar2 | uVar4) >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  if (iVar6 < 0x1e) {
    iVar6 = 0x1d - iVar6;
    local_res18 = param_1 << ((byte)iVar6 & 0x1f);
    local_res1c = param_2 << ((byte)iVar6 & 0x1f);
  }
  else {
    bVar3 = (byte)(iVar6 + -0x1d);
    local_res18 = (int)param_1 >> (bVar3 & 0x1f);
    local_res1c = (int)param_2 >> (bVar3 & 0x1f);
    iVar6 = -(iVar6 + -0x1d);
  }
  FUN_1402f9000(&local_res18);
  iVar1 = -local_res18;
  if (-local_res18 < 0) {
    iVar1 = local_res18;
  }
  iVar5 = (int)((ulonglong)((longlong)iVar1 * 0xdbd95b16 + 0x40000000) >> 0x20);
  iVar1 = -iVar5;
  if (-2 < (int)(local_res18 >> 0x1f & 0xfffffffeU)) {
    iVar1 = iVar5;
  }
  bVar3 = (byte)iVar6;
  if (0 < iVar6) {
    return (1 << (bVar3 - 1 & 0x1f)) + iVar1 >> (bVar3 & 0x1f);
  }
  return iVar1 << (-bVar3 & 0x1f);
}

