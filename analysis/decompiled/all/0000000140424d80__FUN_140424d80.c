// Function: FUN_140424d80
// Addr: 140424d80
// Size: 107 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140424d80(void)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (0xf < DAT_1404dfd18) {
    lVar2 = CONCAT71(DAT_1404dfd00._1_7_,(undefined1)DAT_1404dfd00);
    uVar4 = DAT_1404dfd18 + 1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar3) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = DAT_1404dfd18 + 0x28;
    }
    thunk_FUN_14028af80(lVar3,uVar4);
  }
  _DAT_1404dfd10 = 0;
  DAT_1404dfd18 = 0xf;
  DAT_1404dfd00._0_1_ = 0;
  return;
}

