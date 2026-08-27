// Function: FUN_1400a1ad0
// Addr: 1400a1ad0
// Size: 421 bytes


ulonglong FUN_1400a1ad0(byte *param_1,ulonglong param_2,longlong param_3,longlong param_4,
                       byte *param_5,ulonglong param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_4 == 0x400) {
    param_2 = param_2 / 3;
    uVar4 = param_6;
    if (param_2 < param_6) {
      param_6 = param_2;
      uVar4 = param_2;
    }
    for (; param_6 != 0; param_6 = param_6 - 1) {
      bVar1 = *param_5;
      param_5 = param_5 + 1;
      uVar2 = *(uint *)(param_3 + (ulonglong)bVar1 * 4);
      uVar7 = uVar2 >> 0x18;
      iVar5 = uVar7 * -0x10201 + 0x100feff;
      uVar6 = ((uVar2 & 0xff) * uVar7 * 0x10201 + (uint)*param_1 * iVar5) / 0xffff;
      uVar3 = ((uVar2 >> 8 & 0xff) * uVar7 * 0x10201 + (uint)param_1[1] * iVar5) / 0xffff &
              0xffffff00;
      *param_1 = (byte)(uVar6 >> 8);
      param_1[1] = (byte)(uVar3 >> 8) | (byte)(uVar6 >> 0x10);
      param_1[2] = (byte)(((uVar2 >> 0x10 & 0xff) * uVar7 * 0x10201 + (uint)param_1[2] * iVar5) /
                          0xffff >> 8) | (byte)(uVar3 >> 0x10);
      param_1 = param_1 + 3;
    }
    return uVar4;
  }
  return 0;
}

