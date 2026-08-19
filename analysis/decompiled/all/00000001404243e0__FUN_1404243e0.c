// Function: FUN_1404243e0
// Addr: 1404243e0
// Size: 72 bytes


void FUN_1404243e0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar3 = auStack_28;
  FUN_1400818d0(&DAT_1404e68e0);
  if (DAT_1404e6878 != -1) {
    (*DAT_1404262f0)(DAT_1404e6878,0xffffffffffffffff);
    DAT_1404e6878 = -1;
  }
  if (DAT_1404e6870 != -1) {
    (*DAT_140426368)();
    DAT_1404e6870 = -1;
  }
  if (DAT_1404e6b38 != (longlong *)0x0) {
    (**(code **)(*DAT_1404e6b38 + 0x20))
              (DAT_1404e6b38,CONCAT71(0x1404e6b,DAT_1404e6b38 != (longlong *)&DAT_1404e6b00));
    DAT_1404e6b38 = (longlong *)0x0;
  }
  if (lRam00000001404e6ae0 != 0) {
    lVar2 = lRam00000001404e6ae0;
    puVar3 = auStack_28;
    if ((0xfff < (ulonglong)(lRam00000001404e6af0 - lRam00000001404e6ae0)) &&
       (lVar2 = *(longlong *)(lRam00000001404e6ae0 + -8), puVar3 = auStack_28,
       0x1f < (lRam00000001404e6ae0 - lVar2) - 8U)) {
      pcVar1 = (code *)swi(0x29);
      lVar2 = (*pcVar1)(5);
      puVar3 = auStack_20;
    }
    *(undefined **)(puVar3 + -8) = &UNK_140081864;
    func_0x00014028b040(lVar2);
    lRam00000001404e6ae0 = 0;
    uRam00000001404e6ae8 = 0;
    lRam00000001404e6af0 = 0;
  }
  *(undefined **)(puVar3 + -8) = &UNK_140081885;
  func_0x000140082d30(0x1404e6a70);
  *(undefined **)(puVar3 + -8) = &UNK_140081891;
  FUN_140082e30(0x1404e69b0);
  if ((iRam00000001404e6958 == 0) && (iRam00000001404e6948 == 0)) {
    if (plRam00000001404e6938 != (longlong *)0x0) {
      pcVar1 = *(code **)(*plRam00000001404e6938 + 0x20);
      *(undefined **)(puVar3 + -8) = &UNK_1400818b5;
      (*pcVar1)(plRam00000001404e6938,plRam00000001404e6938 != (longlong *)0x1404e6900);
      plRam00000001404e6938 = (longlong *)0x0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar3 + -8) = &UNK_1400818c9;
  FUN_1400151e0();
}

