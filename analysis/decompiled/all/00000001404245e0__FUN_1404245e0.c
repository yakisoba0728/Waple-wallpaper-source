// Function: FUN_1404245e0
// Addr: 1404245e0
// Size: 93 bytes


void FUN_1404245e0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1404e8c98 != 0) {
    lVar2 = DAT_1404e8c98;
    puVar3 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1404e8ca8 - DAT_1404e8c98 >> 2) * 4)) &&
       (lVar2 = *(longlong *)(DAT_1404e8c98 + -8), puVar3 = auStack_28,
       0x1f < (DAT_1404e8c98 - lVar2) - 8U)) {
      lVar2 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar3 = auStack_20;
    }
    *(undefined **)(puVar3 + -8) = &UNK_140424638;
    func_0x00014028b040(lVar2);
    return;
  }
  return;
}

