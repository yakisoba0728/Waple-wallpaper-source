// Function: FUN_1403986a0
// Addr: 1403986a0
// Size: 159 bytes


undefined8 * FUN_1403986a0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  while( true ) {
    if (puVar2 != (undefined8 *)0x0) {
      return puVar2;
    }
    lVar1 = param_1[-3];
    if (lVar1 == 0) break;
    puVar2 = (undefined8 *)_calloc_base(1,0x60);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = &DAT_14045dd10;
    }
    else {
      FUN_140393180(puVar2,lVar1);
    }
    LOCK();
    lVar1 = *param_1;
    if (lVar1 == 0) {
      *param_1 = (longlong)puVar2;
    }
    UNLOCK();
    if (lVar1 == 0) {
      return puVar2;
    }
    if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
      thunk_FUN_1402d9040(puVar2[10]);
      FUN_1403bde80(puVar2 + 0xb);
      thunk_FUN_1402d9040(puVar2);
    }
    puVar2 = (undefined8 *)*param_1;
  }
  return &DAT_14045dd10;
}

