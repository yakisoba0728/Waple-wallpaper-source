// Function: FUN_140004970
// Addr: 140004970
// Size: 80 bytes


void FUN_140004970(void)

{
  undefined4 *puVar1;
  
  LOCK();
  DAT_1404dc15c = DAT_1404dc15c + 1;
  UNLOCK();
  if (DAT_1404dc15c == 0) {
    puVar1 = (undefined4 *)&DAT_1404e3c20;
    do {
      FUN_140293b70(puVar1);
      puVar1 = puVar1 + 10;
    } while (puVar1 != &DAT_1404e3d60);
  }
  FUN_14028b4e0(FUN_1404257d0);
  return;
}

