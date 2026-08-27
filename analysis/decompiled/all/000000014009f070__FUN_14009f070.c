// Function: FUN_14009f070
// Addr: 14009f070
// Size: 241 bytes


ulonglong FUN_14009f070(uint *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       uint *param_5,ulonglong param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  param_6 = param_6 >> 2;
  param_2 = param_2 >> 2;
  uVar4 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar4 = param_2;
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
        uVar5 = (uVar1 >> 0x18) * 0x101;
        uVar3 = ((((uVar1 & 0xff) * 0x100feff) / uVar5 & 0xffffff00) << 8 |
                 (((uVar1 & 0xff00) >> 8) * 0x100feff) / uVar5 | uVar3 & 0xff0000ff) & 0xffffff00 |
                (uint)((ulonglong)(uVar2 * 0x100feff) / (ulonglong)uVar5 >> 8);
      }
    }
    *param_1 = uVar3;
    param_5 = param_5 + 1;
    param_1 = param_1 + 1;
  }
  return uVar4;
}

