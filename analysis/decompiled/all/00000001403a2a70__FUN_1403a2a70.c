// Function: FUN_1403a2a70
// Addr: 1403a2a70
// Size: 22 bytes


int * FUN_1403a2a70(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  piVar2 = *(int **)(param_1 + 8);
  while (piVar2 != (int *)0x0) {
    LOCK();
    bVar5 = piVar2 == *(int **)(param_1 + 8);
    if (bVar5) {
      *(longlong *)(param_1 + 8) = 0;
    }
    UNLOCK();
    if (bVar5) {
      return piVar2;
    }
    piVar2 = *(int **)(param_1 + 8);
  }
  uVar4 = (uint)*(byte *)(param_2 + 3) * 0x10000 + (uint)*(byte *)(param_2 + 4) * 0x100 +
          (uint)*(byte *)(param_2 + 2) * 0x1000000 + (uint)*(byte *)(param_2 + 5);
  if (uVar4 == 0) {
    puVar1 = &DAT_14045dde0;
  }
  else {
    puVar1 = (undefined8 *)((ulonglong)uVar4 + param_2);
  }
  iVar3 = (uint)*(byte *)((longlong)puVar1 + 2) * 0x100 + (uint)*(byte *)((longlong)puVar1 + 3);
  if (iVar3 == 0) {
    return (int *)&DAT_14045dde0;
  }
  piVar2 = (int *)thunk_FUN_1402da070(iVar3 * 4 + 4);
  if (piVar2 == (int *)0x0) {
    return (int *)&DAT_14045dde0;
  }
  *piVar2 = iVar3;
  func_0x0001403b3800(piVar2);
  return piVar2;
}

