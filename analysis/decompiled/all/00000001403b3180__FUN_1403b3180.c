// Function: FUN_1403b3180
// Addr: 1403b3180
// Size: 166 bytes


undefined8 * FUN_1403b3180(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_2 + 0x14);
  if (*(int *)(param_1 + 8) != iVar1) {
    FUN_1403b35d0(param_1 + 0x30);
    *(int *)(param_1 + 8) = iVar1;
  }
  uVar2 = *(uint *)(param_2 + 0x14);
  puVar4 = (undefined8 *)(ulonglong)*(uint *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 0xc) != uVar2) {
    FUN_1403b35d0(param_1 + 0x10);
    puVar4 = (undefined8 *)FUN_1403b35d0();
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
        puVar4 = &DAT_14045dd10;
        if ((puVar3 != &DAT_14045dd10) && (puVar3 != (undefined8 *)0x0)) {
          puVar4 = (undefined8 *)thunk_FUN_1402d9040(puVar3);
        }
        break;
      }
      puVar3 = *(undefined8 **)(param_1 + 0x40);
    }
    *(uint *)(param_1 + 0xc) = uVar2;
  }
  return puVar4;
}

