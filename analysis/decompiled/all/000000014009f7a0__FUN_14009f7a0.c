// Function: FUN_14009f7a0
// Addr: 14009f7a0
// Size: 301 bytes


ulonglong FUN_14009f7a0(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       uint *param_5,ulonglong param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  param_6 = param_6 >> 2;
  param_2 = param_2 >> 3;
  uVar3 = param_6;
  if (param_2 < param_6) {
    param_6 = param_2;
    uVar3 = param_2;
  }
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar1 = *param_5;
    if (uVar1 >> 0x18 != 0xff) {
      if (uVar1 < 0x1000000) {
        uVar1 = 0;
      }
      else {
        uVar2 = (uVar1 >> 0x18) * 0x101;
        uVar1 = ((((uVar1 >> 0x10 & 0xff) * 0x100feff) / uVar2 & 0xffffff00) << 8 |
                 ((uVar1 >> 8 & 0xff) * 0x100feff) / uVar2 | uVar1 & 0xff0000ff) & 0xffffff00 |
                (uint)((ulonglong)((uVar1 & 0xff) * 0x100feff) / (ulonglong)uVar2 >> 8);
      }
    }
    param_5 = param_5 + 1;
    *param_1 = (((ulonglong)((uVar1 >> 0x10 & 0xff) * 0x101) |
                (ulonglong)((uVar1 >> 0x18) * 0x101) << 0x10) << 0x10 |
               (ulonglong)((uVar1 >> 8 & 0xff) * 0x101)) << 0x10 |
               (ulonglong)((uVar1 & 0xff) * 0x101);
    param_1 = param_1 + 1;
  }
  return uVar3;
}

