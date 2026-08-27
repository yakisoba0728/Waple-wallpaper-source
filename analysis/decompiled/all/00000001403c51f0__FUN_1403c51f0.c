// Function: FUN_1403c51f0
// Addr: 1403c51f0
// Size: 167 bytes


undefined8 * FUN_1403c51f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  while( true ) {
    if (puVar3 != (undefined8 *)0x0) {
      return puVar3;
    }
    lVar1 = param_1[-0xf];
    if (lVar1 == 0) break;
    lVar2 = _calloc_base(1,0x38);
    if ((lVar2 == 0) ||
       (puVar3 = (undefined8 *)FUN_1403944d0(lVar2,lVar1), puVar3 == (undefined8 *)0x0)) {
      puVar3 = &DAT_14045dd10;
    }
    LOCK();
    lVar1 = *param_1;
    if (lVar1 == 0) {
      *param_1 = (longlong)puVar3;
    }
    UNLOCK();
    if (lVar1 == 0) {
      return puVar3;
    }
    if ((puVar3 != (undefined8 *)0x0) && (puVar3 != &DAT_14045dd10)) {
      FUN_140396e30(puVar3);
      thunk_FUN_1402d9040(puVar3);
    }
    puVar3 = (undefined8 *)*param_1;
  }
  return &DAT_14045dd10;
}

