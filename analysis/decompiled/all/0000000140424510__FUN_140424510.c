// Function: FUN_140424510
// Addr: 140424510
// Size: 115 bytes


void FUN_140424510(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_1404e8bc8 != 0) {
    lVar2 = DAT_1404e8bc8;
    puVar3 = auStack_28;
    if ((0xfff < (ulonglong)((DAT_1404e8bd8 - DAT_1404e8bc8 >> 2) * 4)) &&
       (lVar2 = *(longlong *)(DAT_1404e8bc8 + -8), puVar3 = auStack_28,
       0x1f < (DAT_1404e8bc8 - lVar2) - 8U)) {
      lVar2 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar3 = auStack_20;
    }
    *(undefined8 *)(puVar3 + -8) = 0x140424568;
    thunk_FUN_14028af80(lVar2);
    DAT_1404e8bd8 = 0;
    DAT_1404e8bc8 = 0;
    DAT_1404e8bd0 = 0;
  }
  return;
}

