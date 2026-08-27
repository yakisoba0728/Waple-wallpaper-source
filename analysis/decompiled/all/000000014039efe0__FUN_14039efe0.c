// Function: FUN_14039efe0
// Addr: 14039efe0
// Size: 106 bytes


void FUN_14039efe0(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  do {
    if (puVar1 == (undefined8 *)0x0) {
LAB_14039f022:
      FUN_1403b35d0(param_1 + 0x30);
      FUN_1403b35d0(param_1 + 0x20);
      FUN_1403b35d0(param_1 + 0x10);
      thunk_FUN_1402d9040(param_1);
      return;
    }
    LOCK();
    bVar2 = puVar1 == *(undefined8 **)(param_1 + 0x40);
    if (bVar2) {
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    UNLOCK();
    if (bVar2) {
      if ((puVar1 != &DAT_14045dd10) && (puVar1 != (undefined8 *)0x0)) {
        thunk_FUN_1402d9040();
      }
      goto LAB_14039f022;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x40);
  } while( true );
}

