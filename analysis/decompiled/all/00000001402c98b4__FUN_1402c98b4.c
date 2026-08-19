// Function: FUN_1402c98b4
// Addr: 1402c98b4
// Size: 85 bytes


void FUN_1402c98b4(void)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar4 = auStack_28;
  lVar2 = __acrt_get_sigabrt_handler();
  if (lVar2 != 0) {
    FUN_1402dcf48(0x16);
  }
  if ((DAT_1404dc460 & 2) != 0) {
    iVar3 = (*DAT_140426500)(0x17);
    puVar4 = auStack_28;
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x1402c98ff;
    FUN_1402cab90(3,0x40000015);
  }
  *(undefined **)(puVar4 + -8) = &UNK_1402c9909;
  func_0x0001402d106c(3);
  return;
}

