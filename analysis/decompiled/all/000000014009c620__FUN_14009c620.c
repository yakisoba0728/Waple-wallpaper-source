// Function: FUN_14009c620
// Addr: 14009c620
// Size: 372 bytes


ulonglong FUN_14009c620(uint *param_1,ulonglong param_2,uint *param_3,ulonglong param_4,char param_5
                       )

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_2 < param_4) {
    param_4 = param_2;
  }
  uVar3 = param_4 >> 2;
  if (param_5 == '\0') {
    uVar5 = uVar3;
    if (3 < param_4) {
      do {
        uVar1 = *param_3;
        param_3 = param_3 + 1;
        *param_1 = ((uVar1 >> 3 & 0x1f0000 | uVar1 & 0xfc00) >> 2 | uVar1 & 0xf8) >> 3 |
                   uVar1 & 0xff000000;
        uVar5 = uVar5 - 1;
        param_1 = param_1 + 1;
      } while (uVar5 != 0);
      return uVar3;
    }
  }
  else {
    uVar5 = uVar3;
    if (3 < param_4) {
      do {
        uVar1 = *param_3;
        param_3 = param_3 + 1;
        uVar4 = uVar1 >> 0x18;
        uVar2 = ((uVar1 >> 0x10 & 0xff) * uVar4 * 0x10201) / 0xffff;
        *param_1 = (((uVar2 & 0xf800) << 5 |
                    ((uVar1 >> 8 & 0xff) * uVar4 * 0x10201) / 0xffff & 0xfc00) >> 2 |
                   (uint)((ulonglong)((uVar1 & 0xff) * uVar4 * 0x10201) / 0xffff >> 8) & 0xf8) >> 3
                   | ((uVar2 & 0xffffff00) << 8 | uVar1 & 0xff0000ff) & 0xff000000;
        uVar5 = uVar5 - 1;
        param_1 = param_1 + 1;
      } while (uVar5 != 0);
    }
  }
  return uVar3;
}

