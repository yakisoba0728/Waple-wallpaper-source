// Function: FUN_14009ffa0
// Addr: 14009ffa0
// Size: 325 bytes


ulonglong FUN_14009ffa0(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       uint *param_5,ulonglong param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  param_6 = param_6 >> 2;
  param_2 = param_2 >> 3;
  uVar5 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar5 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar1 = *param_5;
    uVar2 = uVar1 >> 0x10 & 0xff;
    uVar3 = uVar2 | (uVar1 & 0xff) << 0x10 | uVar1 & 0xff00ff00;
    if (uVar1 >> 0x18 != 0xff) {
      if (uVar3 < 0x1000000) {
        uVar3 = 0;
      }
      else {
        uVar4 = (uVar1 >> 0x18) * 0x101;
        uVar3 = ((((uVar1 & 0xff) * 0x100feff) / uVar4 & 0xffffff00) << 8 |
                 (((uVar1 & 0xff00) >> 8) * 0x100feff) / uVar4 | uVar3 & 0xff0000ff) & 0xffffff00 |
                (uint)((ulonglong)(uVar2 * 0x100feff) / (ulonglong)uVar4 >> 8);
      }
    }
    param_5 = param_5 + 1;
    *param_1 = (((ulonglong)((uVar3 >> 0x10 & 0xff) * 0x101) |
                (ulonglong)((uVar3 >> 0x18) * 0x101) << 0x10) << 0x10 |
               (ulonglong)((uVar3 >> 8 & 0xff) * 0x101)) << 0x10 |
               (ulonglong)((uVar3 & 0xff) * 0x101);
    param_1 = param_1 + 1;
  }
  return uVar5;
}

