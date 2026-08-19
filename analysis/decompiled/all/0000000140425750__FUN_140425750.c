// Function: FUN_140425750
// Addr: 140425750
// Size: 118 bytes


void FUN_140425750(void)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (DAT_1404dfc78 < 8) {
    DAT_1404dfc70 = 0;
    DAT_1404dfc60._0_2_ = 0;
    DAT_1404dfc78 = 7;
    return;
  }
  lVar2 = CONCAT62(DAT_1404dfc60._2_6_,(undefined2)DAT_1404dfc60);
  uVar4 = DAT_1404dfc78 * 2 + 2;
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
    uVar4 = DAT_1404dfc78 * 2 + 0x29;
  }
  func_0x00014028b040(lVar3,uVar4);
  return;
}

