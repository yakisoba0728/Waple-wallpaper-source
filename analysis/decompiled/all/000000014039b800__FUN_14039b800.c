// Function: FUN_14039b800
// Addr: 14039b800
// Size: 130 bytes


undefined2 FUN_14039b800(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0xfefd) {
    uVar1 = (param_1 >> 7 & 0xf) +
            ((uint)((0xc000000000000201U >> ((byte)(param_1 >> 10) & 0x3e)) << 4) & 0x30);
    return *(undefined2 *)
            (&DAT_14046f810 +
            (ulonglong)
            ((param_1 & 7) +
            (uint)(byte)(&DAT_14046f640)
                        [(param_1 >> 3 & 0xf) + 0x1f +
                         ((byte)(&DAT_14046f640)[uVar1 >> 1] >> (sbyte)((uVar1 & 1) << 2) & 0xf) *
                         0x10] * 8) * 2);
  }
  return 0;
}

