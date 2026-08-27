// Function: FUN_140291450
// Addr: 140291450
// Size: 84 bytes


undefined8 FUN_140291450(undefined8 param_1)

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
  return param_1;
}

