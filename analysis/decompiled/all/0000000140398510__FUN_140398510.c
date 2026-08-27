// Function: FUN_140398510
// Addr: 140398510
// Size: 237 bytes


undefined8 * FUN_140398510(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  while( true ) {
    if (puVar3 != (undefined8 *)0x0) {
      return puVar3;
    }
    lVar1 = param_1[-0x10];
    if (lVar1 == 0) break;
    puVar3 = (undefined8 *)_calloc_base(1,0x138);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = &DAT_14045dd10;
    }
    else {
      FUN_14038ef80(puVar3,lVar1);
      puVar3[0x26] = 0;
      puVar3[0x26] = 0;
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
      piVar2 = (int *)puVar3[0x26];
      if (piVar2 != (int *)0x0) {
        if (1 < *piVar2 + 1U) {
          piVar2[1] = 0;
          thunk_FUN_1402d9040(*(undefined8 *)(piVar2 + 2));
        }
        piVar2[0] = 0;
        piVar2[1] = 0;
        piVar2[2] = 0;
        piVar2[3] = 0;
        thunk_FUN_1402d9040(piVar2);
      }
      FUN_140395e10(puVar3);
      thunk_FUN_1402d9040(puVar3);
    }
    puVar3 = (undefined8 *)*param_1;
  }
  return &DAT_14045dd10;
}

