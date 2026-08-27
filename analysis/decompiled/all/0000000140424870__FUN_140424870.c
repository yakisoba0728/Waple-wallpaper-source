// Function: FUN_140424870
// Addr: 140424870
// Size: 84 bytes


void FUN_140424870(void)

{
  undefined *puVar1;
  longlong lVar2;
  
  lVar2 = 10;
  puVar1 = &DAT_1404df9b0;
  do {
    puVar1 = puVar1 + -0x28;
    FUN_1400929a0(puVar1);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_14000d9e0(&DAT_1404df7f8);
  FUN_140049340(&DAT_1404df7e8);
  return;
}

