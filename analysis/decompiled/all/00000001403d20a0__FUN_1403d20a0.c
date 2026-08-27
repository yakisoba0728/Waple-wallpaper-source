// Function: FUN_1403d20a0
// Addr: 1403d20a0
// Size: 111 bytes


undefined * FUN_1403d20a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  
  puVar2 = DAT_1404e51c0;
  if (DAT_1404e51c0 == (undefined *)0x0) {
    while( true ) {
      puVar1 = (undefined *)FUN_1403ba8f0();
      puVar2 = &DAT_1404df0f8;
      if (puVar1 != (undefined *)0x0) {
        puVar2 = puVar1;
      }
      LOCK();
      bVar3 = DAT_1404e51c0 == (undefined *)0x0;
      puVar1 = puVar2;
      if (!bVar3) {
        puVar1 = DAT_1404e51c0;
      }
      DAT_1404e51c0 = puVar1;
      UNLOCK();
      if (bVar3) break;
      if ((puVar2 != (undefined *)0x0) && (puVar2 != &DAT_1404df0f8)) {
        FUN_140414e70();
      }
      if (DAT_1404e51c0 != (undefined *)0x0) {
        return DAT_1404e51c0;
      }
    }
  }
  return puVar2;
}

