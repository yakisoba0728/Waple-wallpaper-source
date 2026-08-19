// Function: FUN_14028b340
// Addr: 14028b340
// Size: 110 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14028b340(uint param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_1404e3b21 == '\0') {
    if (1 < param_1) {
      FUN_14028bcc0(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    iVar2 = FUN_14028bca0();
    if ((iVar2 == 0) || (param_1 != 0)) {
      DAT_1404e3b28 = _DAT_1404931a0;
      uRam00000001404e3b30 = _UNK_1404931a8;
      uRam00000001404e3b38 = 0xffffffffffffffff;
      _DAT_1404e3b40 = _DAT_1404931a0;
      uRam00000001404e3b48 = _UNK_1404931a8;
      uRam00000001404e3b50 = 0xffffffffffffffff;
    }
    else {
      iVar2 = func_0x0001402d1de8(&DAT_1404e3b28);
      if (iVar2 != 0) {
        return 0;
      }
      iVar2 = func_0x0001402d1de8(&DAT_1404e3b40);
      if (iVar2 != 0) {
        return 0;
      }
    }
    DAT_1404e3b21 = '\x01';
  }
  return 1;
}

