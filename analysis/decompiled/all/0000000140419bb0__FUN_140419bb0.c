// Function: FUN_140419bb0
// Addr: 140419bb0
// Size: 111 bytes


undefined4 * FUN_140419bb0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  puVar2 = DAT_1404e5220;
  if (DAT_1404e5220 == (undefined4 *)0x0) {
    while( true ) {
      puVar1 = (undefined4 *)FUN_1403bbee0();
      puVar2 = &DAT_1404dee58;
      if (puVar1 != (undefined4 *)0x0) {
        puVar2 = puVar1;
      }
      LOCK();
      bVar3 = DAT_1404e5220 == (undefined4 *)0x0;
      puVar1 = puVar2;
      if (!bVar3) {
        puVar1 = DAT_1404e5220;
      }
      DAT_1404e5220 = puVar1;
      UNLOCK();
      if (bVar3) break;
      if ((puVar2 != (undefined4 *)0x0) && (puVar2 != &DAT_1404dee58)) {
        FUN_140419a90();
      }
      if (DAT_1404e5220 != (undefined4 *)0x0) {
        return DAT_1404e5220;
      }
    }
  }
  return puVar2;
}

