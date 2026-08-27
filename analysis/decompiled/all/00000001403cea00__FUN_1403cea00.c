// Function: FUN_1403cea00
// Addr: 1403cea00
// Size: 162 bytes


undefined8 * FUN_1403cea00(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)*param_1;
  while( true ) {
    if (puVar4 != (undefined8 *)0x0) {
      return puVar4;
    }
    if (param_1[-1] == 0) break;
    puVar2 = (undefined8 *)FUN_1403c4e30(*(longlong *)(param_1[-1] + 0x20) + 0x138);
    puVar4 = &DAT_14045dd10;
    if ((undefined8 *)*puVar2 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)*puVar2;
    }
    puVar2 = &DAT_14045dd10;
    if (3 < *(uint *)(puVar4 + 3)) {
      puVar2 = (undefined8 *)puVar4[2];
    }
    uVar3 = FUN_1403d0040(puVar2);
    puVar4 = (undefined8 *)FUN_1403bc8b0(uVar3);
    LOCK();
    lVar1 = *param_1;
    if (lVar1 == 0) {
      *param_1 = (longlong)puVar4;
    }
    UNLOCK();
    if (lVar1 == 0) {
      return puVar4;
    }
    if ((puVar4 != (undefined8 *)0x0) && (puVar4 != &DAT_14045dd10)) {
      thunk_FUN_1402d9040(puVar4);
    }
    puVar4 = (undefined8 *)*param_1;
  }
  return (undefined8 *)0x0;
}

