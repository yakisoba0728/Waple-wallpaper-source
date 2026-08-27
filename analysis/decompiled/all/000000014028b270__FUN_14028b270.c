// Function: FUN_14028b270
// Addr: 14028b270
// Size: 147 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14028b270(uint param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_1404e3a51 == '\0') {
    if (1 < param_1) {
      FUN_14028bbf0(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    iVar2 = FUN_14028bbd0();
    if ((iVar2 == 0) || (param_1 != 0)) {
      DAT_1404e3a58 = _DAT_1404930d0;
      uRam00000001404e3a60 = _UNK_1404930d8;
      _DAT_1404e3a68 = 0xffffffffffffffff;
      _DAT_1404e3a70 = _DAT_1404930d0;
      uRam00000001404e3a78 = _UNK_1404930d8;
      _DAT_1404e3a80 = 0xffffffffffffffff;
    }
    else {
      iVar2 = _initialize_onexit_table(&DAT_1404e3a58);
      if (iVar2 != 0) {
        return 0;
      }
      iVar2 = _initialize_onexit_table(&DAT_1404e3a70);
      if (iVar2 != 0) {
        return 0;
      }
    }
    DAT_1404e3a51 = '\x01';
  }
  return 1;
}

