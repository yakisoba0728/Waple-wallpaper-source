// Function: FUN_140377260
// Addr: 140377260
// Size: 424 bytes


undefined8 FUN_140377260(byte *param_1,undefined8 param_2,longlong param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  iVar6 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar6 == 1) {
    puVar1 = (undefined2 *)0x0;
    if ((*(uint *)(param_3 + 0x10) < 8) &&
       (puVar1 = (undefined2 *)_malloc_base(0x200), puVar1 != (undefined2 *)0x0)) {
      for (puVar2 = puVar1; puVar2 != puVar1 + 0x100; puVar2 = puVar2 + 1) {
        *puVar2 = 0xffff;
      }
    }
    puVar5 = (undefined8 *)
             ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
    puVar5[1] = &LAB_14036c8e0;
    puVar5[2] = &LAB_14036c8e0;
  }
  else {
    if (iVar6 != 2) {
      return param_2;
    }
    puVar1 = (undefined2 *)0x0;
    if ((*(uint *)(param_3 + 0x10) < 8) &&
       (puVar1 = (undefined2 *)_malloc_base(0x600), puVar1 != (undefined2 *)0x0)) {
      puVar2 = puVar1 + 0x100;
      for (puVar4 = puVar1; puVar4 != puVar2; puVar4 = puVar4 + 1) {
        *puVar4 = 0xffff;
      }
      for (; puVar2 != puVar1 + 0x200; puVar2 = puVar2 + 1) {
        *puVar2 = 0xffff;
      }
      for (puVar2 = puVar1 + 0x200; puVar2 != puVar1 + 0x300; puVar2 = puVar2 + 1) {
        *puVar2 = 0xffff;
      }
    }
    puVar5 = (undefined8 *)
             ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
    puVar5[1] = &LAB_14036c8f0;
    puVar5[2] = &LAB_14036c8f0;
  }
  *puVar5 = param_1;
  puVar5[3] = &LAB_14036e160;
  puVar5[4] = puVar1;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  uVar3 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
  if (uVar3 == 0) {
    param_1 = (byte *)&DAT_14045dd10;
  }
  else {
    param_1 = param_1 + uVar3;
  }
  FUN_14036f580(param_1);
  return param_2;
}

