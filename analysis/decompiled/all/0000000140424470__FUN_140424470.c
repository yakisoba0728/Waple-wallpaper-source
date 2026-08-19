// Function: FUN_140424470
// Addr: 140424470
// Size: 42 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140424470(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar3 = auStack_28;
  FUN_1400818d0(&DAT_1404e6bb0);
  if (DAT_1404e6b48 != -1) {
    (*DAT_1404262f0)(DAT_1404e6b48,0xffffffffffffffff);
    DAT_1404e6b48 = -1;
  }
  if (_DAT_1404e6b40 != -1) {
    (*DAT_140426368)();
    _DAT_1404e6b40 = -1;
  }
  if (plRam00000001404e6e08 != (longlong *)0x0) {
    (**(code **)(*plRam00000001404e6e08 + 0x20))
              (plRam00000001404e6e08,
               CONCAT71(0x1404e6d,plRam00000001404e6e08 != (longlong *)0x1404e6dd0));
    plRam00000001404e6e08 = (longlong *)0x0;
  }
  if (lRam00000001404e6db0 != 0) {
    lVar2 = lRam00000001404e6db0;
    puVar3 = auStack_28;
    if ((0xfff < (ulonglong)(lRam00000001404e6dc0 - lRam00000001404e6db0)) &&
       (lVar2 = *(longlong *)(lRam00000001404e6db0 + -8), puVar3 = auStack_28,
       0x1f < (lRam00000001404e6db0 - lVar2) - 8U)) {
      pcVar1 = (code *)swi(0x29);
      lVar2 = (*pcVar1)(5);
      puVar3 = auStack_20;
    }
    *(undefined **)(puVar3 + -8) = &UNK_140081864;
    func_0x00014028b040(lVar2);
    lRam00000001404e6db0 = 0;
    uRam00000001404e6db8 = 0;
    lRam00000001404e6dc0 = 0;
  }
  *(undefined **)(puVar3 + -8) = &UNK_140081885;
  func_0x000140082d30(0x1404e6d40);
  *(undefined **)(puVar3 + -8) = &UNK_140081891;
  FUN_140082e30(0x1404e6c80);
  if ((iRam00000001404e6c28 == 0) && (iRam00000001404e6c18 == 0)) {
    if (plRam00000001404e6c08 != (longlong *)0x0) {
      pcVar1 = *(code **)(*plRam00000001404e6c08 + 0x20);
      *(undefined **)(puVar3 + -8) = &UNK_1400818b5;
      (*pcVar1)(plRam00000001404e6c08,plRam00000001404e6c08 != (longlong *)0x1404e6bd0);
      plRam00000001404e6c08 = (longlong *)0x0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar3 + -8) = &UNK_1400818c9;
  FUN_1400151e0();
}

