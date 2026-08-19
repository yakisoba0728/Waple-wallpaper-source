// Function: FUN_140424e50
// Addr: 140424e50
// Size: 27 bytes


void FUN_140424e50(void)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (0xf < DAT_1404dfde8) {
    lVar2 = CONCAT71(DAT_1404dfdd0._1_7_,(undefined1)DAT_1404dfdd0);
    uVar4 = DAT_1404dfde8 + 1;
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
      uVar4 = DAT_1404dfde8 + 0x28;
    }
    func_0x00014028b040(lVar3,uVar4);
  }
  uRam00000001404dfde0 = 0;
  DAT_1404dfde8 = 0xf;
  DAT_1404dfdd0._0_1_ = 0;
  return;
}

