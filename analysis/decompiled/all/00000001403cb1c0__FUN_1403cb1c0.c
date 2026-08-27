// Function: FUN_1403cb1c0
// Addr: 1403cb1c0
// Size: 165 bytes


byte FUN_1403cb1c0(uint param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  
  if ((param_1 < 0x1e94c) &&
     (uVar1 = (param_1 & 7) +
              (uint)(byte)(&DAT_14046e6d0)
                          [(param_1 >> 3 & 7) + 0xd1 +
                           (uint)(byte)(&DAT_14046e6d0)
                                       [(param_1 >> 6 & 7) +
                                        ((byte)(&DAT_14046e6d0)[param_1 >> 10] >>
                                         (sbyte)((param_1 >> 9 & 1) << 2) & 0xf) * 8 + 0x7b]] * 8,
     bVar2 = (byte)(&DAT_14046e889)[uVar1 >> 1] >> (((byte)uVar1 & 1) << 2) & 0xf, bVar2 != 7)) {
    return bVar2;
  }
  uVar1 = 1 << ((byte)param_2 & 0x1f);
  if (0x1f < param_2) {
    uVar1 = 0;
  }
  return -((uVar1 & 0x1802) != 0) & 6;
}

