// Function: FUN_1403d2170
// Addr: 1403d2170
// Size: 111 bytes


undefined * FUN_1403d2170(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  
  puVar2 = DAT_1404e5290;
  if (DAT_1404e5290 == (undefined *)0x0) {
    while( true ) {
      puVar1 = (undefined *)FUN_1403ba9c0();
      puVar2 = &DAT_1404df1c8;
      if (puVar1 != (undefined *)0x0) {
        puVar2 = puVar1;
      }
      LOCK();
      bVar3 = DAT_1404e5290 == (undefined *)0x0;
      puVar1 = puVar2;
      if (!bVar3) {
        puVar1 = DAT_1404e5290;
      }
      DAT_1404e5290 = puVar1;
      UNLOCK();
      if (bVar3) break;
      if ((puVar2 != (undefined *)0x0) && (puVar2 != &DAT_1404df1c8)) {
        FUN_140414f40();
      }
      if (DAT_1404e5290 != (undefined *)0x0) {
        return DAT_1404e5290;
      }
    }
  }
  return puVar2;
}

