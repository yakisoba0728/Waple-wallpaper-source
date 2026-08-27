// Function: FUN_1403a27f0
// Addr: 1403a27f0
// Size: 167 bytes


undefined8 * FUN_1403a27f0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)*param_1;
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)_malloc_base(0x400);
      if (puVar1 != (undefined8 *)0x0) {
        lVar3 = 8;
        puVar2 = puVar1;
        do {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[6] = 0;
          puVar2[7] = 0;
          puVar2[8] = 0;
          puVar2[9] = 0;
          puVar2[10] = 0;
          puVar2[0xb] = 0;
          puVar2[0xc] = 0;
          puVar2[0xd] = 0;
          puVar2[0xe] = 0;
          puVar2[0xf] = 0;
          puVar2 = puVar2 + 0x10;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        for (puVar2 = puVar1; puVar2 != puVar1 + 0x80; puVar2 = (undefined8 *)((longlong)puVar2 + 4)
            ) {
          *(undefined4 *)puVar2 = 0xffffffff;
        }
        return puVar1;
      }
      return (undefined8 *)0x0;
    }
    LOCK();
    puVar2 = (undefined8 *)*param_1;
    if (puVar1 == puVar2) {
      *param_1 = 0;
    }
    UNLOCK();
    if (puVar1 == puVar2) break;
    puVar1 = (undefined8 *)*param_1;
  }
  return puVar1;
}

