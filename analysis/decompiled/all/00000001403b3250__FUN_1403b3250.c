// Function: FUN_1403b3250
// Addr: 1403b3250
// Size: 166 bytes


undefined8 * FUN_1403b3250(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_2 + 0x14);
  if (*(int *)(param_1 + 8) != iVar1) {
    FUN_1403b36a0(param_1 + 0x30);
    *(int *)(param_1 + 8) = iVar1;
  }
  uVar2 = *(uint *)(param_2 + 0x14);
  puVar4 = (undefined8 *)(ulonglong)*(uint *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 0xc) != uVar2) {
    FUN_1403b36a0(param_1 + 0x10);
    puVar4 = (undefined8 *)FUN_1403b36a0();
    puVar3 = *(undefined8 **)(param_1 + 0x40);
    while (puVar3 != (undefined8 *)0x0) {
      LOCK();
      puVar4 = *(undefined8 **)(param_1 + 0x40);
      bVar5 = puVar3 == puVar4;
      if (bVar5) {
        *(undefined8 *)(param_1 + 0x40) = 0;
        puVar4 = puVar3;
      }
      UNLOCK();
      if (bVar5) {
        puVar4 = &DAT_14045dde0;
        if ((puVar3 != &DAT_14045dde0) && (puVar3 != (undefined8 *)0x0)) {
          puVar4 = (undefined8 *)func_0x0001402bf8e0(puVar3);
          return puVar4;
        }
        break;
      }
      puVar3 = *(undefined8 **)(param_1 + 0x40);
    }
    *(uint *)(param_1 + 0xc) = uVar2;
  }
  return puVar4;
}

