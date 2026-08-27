// Function: FUN_1403bc8b0
// Addr: 1403bc8b0
// Size: 155 bytes


int * FUN_1403bc8b0(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(byte *)(param_1 + 3) * 0x10000 + (uint)*(byte *)(param_1 + 4) * 0x100 +
          (uint)*(byte *)(param_1 + 2) * 0x1000000 + (uint)*(byte *)(param_1 + 5);
  if (uVar4 == 0) {
    puVar1 = &DAT_14045dd10;
  }
  else {
    puVar1 = (undefined8 *)((ulonglong)uVar4 + param_1);
  }
  iVar3 = (uint)*(byte *)((longlong)puVar1 + 2) * 0x100 + (uint)*(byte *)((longlong)puVar1 + 3);
  if (iVar3 == 0) {
    return (int *)&DAT_14045dd10;
  }
  piVar2 = (int *)_malloc_base(iVar3 * 4 + 4);
  if (piVar2 == (int *)0x0) {
    return (int *)&DAT_14045dd10;
  }
  *piVar2 = iVar3;
  FUN_1403b3730(piVar2);
  return piVar2;
}

