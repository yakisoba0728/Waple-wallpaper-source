// Function: FUN_140130fc0
// Addr: 140130fc0
// Size: 96 bytes


void FUN_140130fc0(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_1404e8ed0;
  lVar2 = DAT_1404e8ec8;
  if (DAT_1404e8ec8 != DAT_1404e8ed0) {
    do {
      FUN_140017240(lVar2 + 0x58);
      FUN_140017240(lVar2 + 0x38);
      FUN_140017240(lVar2 + 0x18);
      lVar2 = lVar2 + 0x88;
    } while (lVar2 != lVar1);
    DAT_1404e8ed0 = DAT_1404e8ec8;
  }
  return;
}

