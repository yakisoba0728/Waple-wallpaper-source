// Function: FUN_1403d3c00
// Addr: 1403d3c00
// Size: 180 bytes


undefined2 FUN_1403d3c00(uint param_1)

{
  if (param_1 < 0x116e4) {
    return *(undefined2 *)
            (&DAT_14045a670 +
            (ulonglong)
            (byte)(&DAT_14045a6d0)
                  [(uint)(byte)(&DAT_14045a6d0)
                               [(param_1 >> 1 & 3) +
                                (uint)(byte)(&DAT_14045a6d0)
                                            [(param_1 >> 3 & 7) +
                                             (uint)(byte)(&DAT_14045a6d0)
                                                         [(param_1 >> 6 & 7) +
                                                          ((byte)(&DAT_14045a6d0)[param_1 >> 10] >>
                                                           (sbyte)((param_1 >> 9 & 1) << 2) & 0xf) *
                                                          8 + 0x46] * 8 + 0xba] * 4 + 0x1e8] +
                   (param_1 & 1) + 0x3e4] * 2);
  }
  return DAT_14045a6ba;
}

