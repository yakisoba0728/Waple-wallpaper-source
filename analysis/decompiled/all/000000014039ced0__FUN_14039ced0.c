// Function: FUN_14039ced0
// Addr: 14039ced0
// Size: 348 bytes


undefined4 * FUN_14039ced0(int *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)&DAT_1404def30;
  if (param_1 != (int *)0x0) {
    piVar5 = param_1;
  }
  puVar1 = (undefined4 *)_calloc_base(1,200);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)((longlong)puVar1 + 5) = 0;
    *(undefined1 *)((longlong)puVar1 + 7) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 10) = 0;
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x12) = 0;
    *(undefined8 *)(puVar1 + 0x14) = 0;
    *(undefined8 *)(puVar1 + 0x16) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)(puVar1 + 0x1a) = 0;
    *(undefined8 *)(puVar1 + 0x1c) = 0;
    *(undefined8 *)(puVar1 + 0x1e) = 0;
    *(undefined8 *)(puVar1 + 0x20) = 0;
    *(undefined8 *)(puVar1 + 0x22) = 0;
    *(undefined8 *)(puVar1 + 0x24) = 0;
    *(undefined8 *)(puVar1 + 0x26) = 0;
    *(undefined8 *)(puVar1 + 0x28) = 0;
    *(undefined8 *)(puVar1 + 0x2a) = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 0x2c) = 0;
    *(undefined8 *)(puVar1 + 0x2e) = 0;
    *(undefined8 *)(puVar1 + 0x30) = 0;
    *puVar1 = 1;
    *(undefined1 *)(puVar1 + 1) = 1;
    *(undefined8 *)(puVar1 + 2) = 0;
    if ((char)piVar5[1] != '\0') {
      *(undefined1 *)(piVar5 + 1) = 0;
    }
    *(undefined **)(puVar1 + 6) = &DAT_1404ded88;
    if (*piVar5 != 0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    *(int **)(puVar1 + 8) = piVar5;
    *(undefined4 **)(puVar1 + 0x24) = &DAT_1404df428;
    *(undefined4 **)(puVar1 + 0x2a) = puVar1;
    iVar3 = piVar5[5];
    if (iVar3 == 0) {
      lVar2 = FUN_1403c5340(piVar5 + 0x1e);
      iVar4 = (uint)*(byte *)(lVar2 + 0x12) * 0x100 + (uint)*(byte *)(lVar2 + 0x13);
      iVar3 = 1000;
      if (iVar4 - 0x10U < 0x3ff1) {
        iVar3 = iVar4;
      }
      piVar5[5] = iVar3;
    }
    puVar1[0xb] = iVar3;
    puVar1[10] = iVar3;
    *(undefined1 *)(puVar1 + 0xf) = 1;
    puVar1[0x15] = 0x3f800000;
    puVar1[0x14] = 0x3f800000;
    *(undefined8 *)(puVar1 + 0x18) = 0x10000;
    *(undefined8 *)(puVar1 + 0x16) = 0x10000;
    puVar1[0x1d] = 0xffffffff;
    return puVar1;
  }
  return (undefined4 *)&DAT_1404ded88;
}

