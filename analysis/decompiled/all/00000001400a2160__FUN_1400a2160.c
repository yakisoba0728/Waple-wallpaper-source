// Function: FUN_1400a2160
// Addr: 1400a2160
// Size: 172 bytes


ulonglong FUN_1400a2160(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4,
                       byte *param_5,ulonglong param_6)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (param_4 == 0x400) {
    param_2 = param_2 >> 3;
    uVar3 = param_6;
    if (param_2 < param_6) {
      param_6 = param_2;
      uVar3 = param_2;
    }
    for (; param_6 != 0; param_6 = param_6 - 1) {
      bVar1 = *param_5;
      param_5 = param_5 + 1;
      uVar2 = *(uint *)(param_3 + (ulonglong)bVar1 * 4);
      *param_1 = (((ulonglong)((uVar2 >> 0x10 & 0xff) * 0x101) |
                  (ulonglong)((uVar2 >> 0x18) * 0x101) << 0x10) << 0x10 |
                 (ulonglong)((uVar2 >> 8 & 0xff) * 0x101)) << 0x10 |
                 (ulonglong)((uVar2 & 0xff) * 0x101);
      param_1 = param_1 + 1;
    }
    return uVar3;
  }
  return 0;
}

