// Function: FUN_1400048a0
// Addr: 1400048a0
// Size: 80 bytes


void FUN_1400048a0(void)

{
  undefined4 *puVar1;
  
  LOCK();
  DAT_1404dc08c = DAT_1404dc08c + 1;
  UNLOCK();
  if (DAT_1404dc08c == 0) {
    puVar1 = (undefined4 *)&DAT_1404e3b50;
    do {
      FUN_140293aa0(puVar1);
      puVar1 = puVar1 + 10;
    } while (puVar1 != &DAT_1404e3c90);
  }
  FUN_14028b410(FUN_140425700);
  return;
}

