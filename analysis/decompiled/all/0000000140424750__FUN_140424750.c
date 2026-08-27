// Function: FUN_140424750
// Addr: 140424750
// Size: 61 bytes


void FUN_140424750(void)

{
  undefined *puVar1;
  longlong lVar2;
  
  puVar1 = &DAT_1404e7e68;
  FUN_140017240(&DAT_1404e7e68);
  lVar2 = 0x6c;
  do {
    puVar1 = puVar1 + -0x28;
    FUN_140085440(puVar1);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

