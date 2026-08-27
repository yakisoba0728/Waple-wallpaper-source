// Function: FUN_140425470
// Addr: 140425470
// Size: 61 bytes


void FUN_140425470(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 10;
  puVar1 = &DAT_1404e9cd0;
  do {
    puVar1 = puVar1 + -5;
    FUN_140017240(puVar1);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

