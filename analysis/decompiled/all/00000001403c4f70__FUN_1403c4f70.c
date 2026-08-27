// Function: FUN_1403c4f70
// Addr: 1403c4f70
// Size: 151 bytes


undefined8 * FUN_1403c4f70(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  while( true ) {
    if (puVar2 != (undefined8 *)0x0) {
      return puVar2;
    }
    lVar1 = param_1[-0x1a];
    if (lVar1 == 0) break;
    puVar2 = (undefined8 *)_calloc_base(1,0x18);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = &DAT_14045dd10;
    }
    else {
      FUN_14038eac0(puVar2,lVar1);
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
      FUN_140395d80(puVar2);
      thunk_FUN_1402d9040(puVar2);
    }
    puVar2 = (undefined8 *)*param_1;
  }
  return &DAT_14045dd10;
}

