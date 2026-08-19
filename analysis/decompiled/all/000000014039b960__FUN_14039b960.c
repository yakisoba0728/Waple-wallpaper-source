// Function: FUN_14039b960
// Addr: 14039b960
// Size: 146 bytes


undefined2 FUN_14039b960(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0xfefd) {
    uVar1 = (param_1 >> 6 & 0xf) +
            ((byte)(&DAT_14046f78f)[param_1 >> 0xb] >> (sbyte)((param_1 >> 10 & 1) << 2) & 0xf) *
            0x10;
    return *(undefined2 *)
            (&DAT_14046f8e0 +
            (ulonglong)
            ((uint)(byte)(&DAT_14046f710)
                         [(param_1 >> 2 & 0xf) + 0xc5 +
                          ((byte)(&DAT_14046f7af)[uVar1 >> 1] >> (sbyte)((uVar1 & 1) << 2) & 0xf) *
                          0x10] * 4 + 0x13d + (param_1 & 3)) * 2);
  }
  return 0;
}

