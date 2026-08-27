// Function: FUN_1403b35d0
// Addr: 1403b35d0
// Size: 129 bytes


undefined8 * FUN_1403b35d0(undefined8 *param_1)

{
  undefined8 *in_RAX;
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  puVar2 = (undefined8 *)*param_1;
  do {
    if (puVar2 == (undefined8 *)0x0) {
LAB_1403b3601:
      puVar2 = (undefined8 *)param_1[1];
      if (puVar2 != (undefined8 *)0x0) {
        while( true ) {
          LOCK();
          puVar1 = (undefined8 *)param_1[1];
          bVar3 = puVar2 == puVar1;
          if (bVar3) {
            param_1[1] = 0;
            puVar1 = puVar2;
          }
          UNLOCK();
          if (bVar3) break;
          puVar2 = (undefined8 *)param_1[1];
          if (puVar2 == (undefined8 *)0x0) {
            return puVar1;
          }
        }
        in_RAX = &DAT_14045dd10;
        if ((puVar2 != &DAT_14045dd10) && (puVar2 != (undefined8 *)0x0)) {
          puVar2 = (undefined8 *)thunk_FUN_1402d9040(puVar2);
          return puVar2;
        }
      }
      return in_RAX;
    }
    LOCK();
    in_RAX = (undefined8 *)*param_1;
    bVar3 = puVar2 == in_RAX;
    if (bVar3) {
      *param_1 = 0;
      in_RAX = puVar2;
    }
    UNLOCK();
    if (bVar3) {
      in_RAX = (undefined8 *)thunk_FUN_1402d9040();
      goto LAB_1403b3601;
    }
    puVar2 = (undefined8 *)*param_1;
  } while( true );
}

