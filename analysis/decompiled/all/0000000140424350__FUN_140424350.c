// Function: FUN_140424350
// Addr: 140424350
// Size: 72 bytes


void FUN_140424350(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar3 = auStack_28;
  FUN_1400818d0(&DAT_1404e6610);
  if (DAT_1404e65a8 != -1) {
    (*DAT_1404262f0)(DAT_1404e65a8,0xffffffffffffffff);
    DAT_1404e65a8 = -1;
  }
  if (DAT_1404e65a0 != -1) {
    (*DAT_140426368)();
    DAT_1404e65a0 = -1;
  }
  if (DAT_1404e6868 != (longlong *)0x0) {
    (**(code **)(*DAT_1404e6868 + 0x20))
              (DAT_1404e6868,CONCAT71(0x1404e68,DAT_1404e6868 != (longlong *)&DAT_1404e6830));
    DAT_1404e6868 = (longlong *)0x0;
  }
  if (lRam00000001404e6810 != 0) {
    lVar2 = lRam00000001404e6810;
    puVar3 = auStack_28;
    if ((0xfff < (ulonglong)(lRam00000001404e6820 - lRam00000001404e6810)) &&
       (lVar2 = *(longlong *)(lRam00000001404e6810 + -8), puVar3 = auStack_28,
       0x1f < (lRam00000001404e6810 - lVar2) - 8U)) {
      pcVar1 = (code *)swi(0x29);
      lVar2 = (*pcVar1)(5);
      puVar3 = auStack_20;
    }
    *(undefined **)(puVar3 + -8) = &UNK_140081864;
    func_0x00014028b040(lVar2);
    lRam00000001404e6810 = 0;
    uRam00000001404e6818 = 0;
    lRam00000001404e6820 = 0;
  }
  *(undefined **)(puVar3 + -8) = &UNK_140081885;
  func_0x000140082d30(0x1404e67a0);
  *(undefined **)(puVar3 + -8) = &UNK_140081891;
  FUN_140082e30(0x1404e66e0);
  if ((iRam00000001404e6688 == 0) && (iRam00000001404e6678 == 0)) {
    if (plRam00000001404e6668 != (longlong *)0x0) {
      pcVar1 = *(code **)(*plRam00000001404e6668 + 0x20);
      *(undefined **)(puVar3 + -8) = &UNK_1400818b5;
      (*pcVar1)(plRam00000001404e6668,plRam00000001404e6668 != (longlong *)0x1404e6630);
      plRam00000001404e6668 = (longlong *)0x0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar3 + -8) = &UNK_1400818c9;
  FUN_1400151e0();
}

