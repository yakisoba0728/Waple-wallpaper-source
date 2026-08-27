// Function: FUN_1400ea5b0
// Addr: 1400ea5b0
// Size: 276 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1400ea5b0(uint param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = 0x18;
  iVar2 = (~-(uint)((param_1 & _DAT_140484a70) == 0) & _DAT_1404930d0 & _DAT_140484a00) +
          (~-(uint)((param_1 & _DAT_140484a60) == 0) & _DAT_1404930d0 & _DAT_1404849f0) +
          (~-(uint)((param_1 & _DAT_140484a50) == 0) & _DAT_1404930d0 & _DAT_1404849e0) +
          (~-(uint)((param_1 & _DAT_140484a40) == 0) & _DAT_1404930d0 & _DAT_1404849d0) +
          (~-(uint)((param_1 & _DAT_140484a30) == 0) & _DAT_1404930d0 & _DAT_1404849c0) +
          (~-(uint)((param_1 & DAT_140484a20) == 0) & _DAT_1404930d0 & DAT_1404849b0) +
          (~-(uint)((param_1 & _UNK_140484a78) == 0) & _UNK_1404930d8 & _UNK_140484a08) +
          (~-(uint)((param_1 & _UNK_140484a68) == 0) & _UNK_1404930d8 & _UNK_1404849f8) +
          (~-(uint)((param_1 & _UNK_140484a58) == 0) & _UNK_1404930d8 & _UNK_1404849e8) +
          (~-(uint)((param_1 & _UNK_140484a48) == 0) & _UNK_1404930d8 & _UNK_1404849d8) +
          (~-(uint)((param_1 & _UNK_140484a38) == 0) & _UNK_1404930d8 & _UNK_1404849c8) +
          (~-(uint)((param_1 & DAT_140484a28) == 0) & _UNK_1404930d8 & DAT_1404849b8) +
          (~-(uint)((param_1 & _UNK_140484a74) == 0) & _UNK_1404930d4 & _UNK_140484a04) +
          (~-(uint)((param_1 & _UNK_140484a64) == 0) & _UNK_1404930d4 & _UNK_1404849f4) +
          (~-(uint)((param_1 & _UNK_140484a54) == 0) & _UNK_1404930d4 & _UNK_1404849e4) +
          (~-(uint)((param_1 & _UNK_140484a44) == 0) & _UNK_1404930d4 & _UNK_1404849d4) +
          (~-(uint)((param_1 & _UNK_140484a34) == 0) & _UNK_1404930d4 & _UNK_1404849c4) +
          (~-(uint)((param_1 & DAT_140484a24) == 0) & _UNK_1404930d4 & DAT_1404849b4) +
          (~-(uint)((param_1 & _UNK_140484a7c) == 0) & _UNK_1404930dc & _UNK_140484a0c) +
          (~-(uint)((param_1 & _UNK_140484a6c) == 0) & _UNK_1404930dc & _UNK_1404849fc) +
          (~-(uint)((param_1 & _UNK_140484a5c) == 0) & _UNK_1404930dc & _UNK_1404849ec) +
          (~-(uint)((param_1 & _UNK_140484a4c) == 0) & _UNK_1404930dc & _UNK_1404849dc) +
          (~-(uint)((param_1 & _UNK_140484a3c) == 0) & _UNK_1404930dc & _UNK_1404849cc) +
          (~-(uint)((param_1 & DAT_140484a2c) == 0) & _UNK_1404930dc & DAT_1404849bc);
  do {
    if (((&DAT_140484a20)[lVar1] & param_1) != 0) {
      iVar2 = iVar2 + (&DAT_1404849b0)[lVar1];
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x1a);
  return iVar2;
}

