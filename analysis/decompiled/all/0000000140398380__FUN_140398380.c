// Function: FUN_140398380
// Addr: 140398380
// Size: 151 bytes


undefined8 * FUN_140398380(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  while( true ) {
    if (puVar2 != (undefined8 *)0x0) {
      return puVar2;
    }
    lVar1 = param_1[-0x17];
    if (lVar1 == 0) break;
    puVar2 = (undefined8 *)_calloc_base(1,0x10);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = &DAT_14045dd10;
    }
    else {
      FUN_140392fa0(puVar2,lVar1);
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
      FUN_140396bd0(puVar2);
      thunk_FUN_1402d9040(puVar2);
    }
    puVar2 = (undefined8 *)*param_1;
  }
  return &DAT_14045dd10;
}

