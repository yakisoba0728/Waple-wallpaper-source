// Function: FUN_1403c4b50
// Addr: 1403c4b50
// Size: 89 bytes


/* WARNING: Removing unreachable block (ram,0x0001403c4b6d) */

undefined8 FUN_1403c4b50(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = DAT_1404e51a8;
  LOCK();
  DAT_1404e51a8 = (undefined8 *)0x0;
  UNLOCK();
  uVar3 = 0;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    thunk_FUN_1402d9040(puVar2[1]);
    uVar3 = thunk_FUN_1402d9040(puVar2);
    puVar2 = puVar1;
  }
  return uVar3;
}

