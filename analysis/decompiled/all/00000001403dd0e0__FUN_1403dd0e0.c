// Function: FUN_1403dd0e0
// Addr: 1403dd0e0
// Size: 54 bytes


undefined * FUN_1403dd0e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  
  puVar2 = DAT_1404e52d8;
  if (DAT_1404e52d8 == (undefined *)0x0) {
    while( true ) {
      puVar1 = (undefined *)FUN_1403bb9e0();
      puVar2 = &DAT_1404df210;
      if (puVar1 != (undefined *)0x0) {
        puVar2 = puVar1;
      }
      LOCK();
      bVar3 = DAT_1404e52d8 == (undefined *)0x0;
      puVar1 = puVar2;
      if (!bVar3) {
        puVar1 = DAT_1404e52d8;
      }
      DAT_1404e52d8 = puVar1;
      UNLOCK();
      if (bVar3) break;
      if ((puVar2 != (undefined *)0x0) && (puVar2 != &DAT_1404df210)) {
        func_0x000140418a30();
      }
      if (DAT_1404e52d8 != (undefined *)0x0) {
        return DAT_1404e52d8;
      }
    }
  }
  return puVar2;
}

