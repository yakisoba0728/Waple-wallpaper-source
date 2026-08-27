// Function: FUN_1400a2210
// Addr: 1400a2210
// Size: 181 bytes


ulonglong FUN_1400a2210(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4,
                       byte *param_5,ulonglong param_6)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_4 == 0x400) {
    param_2 = param_2 >> 3;
    uVar2 = param_6;
    if (param_2 < param_6) {
      param_6 = param_2;
      uVar2 = param_2;
    }
    for (; param_6 != 0; param_6 = param_6 - 1) {
      uVar1 = *(uint *)(param_3 + (ulonglong)*param_5 * 4);
      if (uVar1 != 0) {
        *param_1 = (((ulonglong)((uVar1 >> 0x10 & 0xff) * 0x101) |
                    (ulonglong)((uVar1 >> 0x18) * 0x101) << 0x10) << 0x10 |
                   (ulonglong)((uVar1 >> 8 & 0xff) * 0x101)) << 0x10 |
                   (ulonglong)((uVar1 & 0xff) * 0x101);
      }
      param_5 = param_5 + 1;
      param_1 = param_1 + 1;
    }
    return uVar2;
  }
  return 0;
}

