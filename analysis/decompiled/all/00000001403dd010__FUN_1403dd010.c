// Function: FUN_1403dd010
// Addr: 1403dd010
// Size: 111 bytes


undefined * FUN_1403dd010(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  
  puVar2 = DAT_1404e5208;
  if (DAT_1404e5208 == (undefined *)0x0) {
    while( true ) {
      puVar1 = (undefined *)FUN_1403bb910();
      puVar2 = &DAT_1404df140;
      if (puVar1 != (undefined *)0x0) {
        puVar2 = puVar1;
      }
      LOCK();
      bVar3 = DAT_1404e5208 == (undefined *)0x0;
      puVar1 = puVar2;
      if (!bVar3) {
        puVar1 = DAT_1404e5208;
      }
      DAT_1404e5208 = puVar1;
      UNLOCK();
      if (bVar3) break;
      if ((puVar2 != (undefined *)0x0) && (puVar2 != &DAT_1404df140)) {
        FUN_140418960();
      }
      if (DAT_1404e5208 != (undefined *)0x0) {
        return DAT_1404e5208;
      }
    }
  }
  return puVar2;
}

