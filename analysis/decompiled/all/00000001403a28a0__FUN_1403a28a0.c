// Function: FUN_1403a28a0
// Addr: 1403a28a0
// Size: 170 bytes


int * FUN_1403a28a0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)*param_1;
  while( true ) {
    if (piVar4 == (int *)0x0) {
      puVar3 = &DAT_14045dd10;
      if ((undefined8 *)*param_2 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*param_2;
      }
      puVar1 = &DAT_14045dd10;
      if (0x13 < *(uint *)(puVar3 + 3)) {
        puVar1 = (undefined8 *)puVar3[2];
      }
      iVar5 = (uint)*(byte *)((longlong)puVar1 + 6) * 0x100 + (uint)*(byte *)((longlong)puVar1 + 7);
      piVar4 = (int *)&DAT_14045dd10;
      if ((iVar5 != 0) && (piVar2 = (int *)_malloc_base(iVar5 * 4 + 4), piVar2 != (int *)0x0)) {
        *piVar2 = iVar5;
        FUN_1403b3730(piVar2);
        piVar4 = piVar2;
      }
      return piVar4;
    }
    LOCK();
    piVar2 = (int *)*param_1;
    if (piVar4 == piVar2) {
      *param_1 = 0;
    }
    UNLOCK();
    if (piVar4 == piVar2) break;
    piVar4 = (int *)*param_1;
  }
  return piVar4;
}

