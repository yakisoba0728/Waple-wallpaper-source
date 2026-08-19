// Function: FUN_1403b34e0
// Addr: 1403b34e0
// Size: 190 bytes


undefined8 * FUN_1403b34e0(undefined8 *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  param_1 = (undefined8 *)*param_1;
  puVar5 = &DAT_14045dde0;
  puVar3 = &DAT_14045dde0;
  if (param_1 != (undefined8 *)0x0) {
    puVar3 = param_1;
  }
  if (*(uint *)(puVar3 + 3) < 8) {
    puVar3 = &DAT_14045dde0;
  }
  else {
    puVar3 = (undefined8 *)puVar3[2];
  }
  uVar7 = (uint)*(byte *)((longlong)puVar3 + 5) * 0x10000 +
          (uint)*(byte *)((longlong)puVar3 + 6) * 0x100 +
          (uint)*(byte *)((longlong)puVar3 + 4) * 0x1000000 + (uint)*(byte *)((longlong)puVar3 + 7);
  if (uVar7 == 0) {
    return &DAT_14045dde0;
  }
  uVar6 = *(uint *)(param_2 + 0x6c);
  if (*(uint *)(param_2 + 0x6c) <= *(uint *)(param_2 + 0x68)) {
    uVar6 = *(uint *)(param_2 + 0x68);
  }
  if (uVar6 == 0) {
    uVar6 = 0x40000000;
  }
  uVar10 = 0;
  puVar3 = &DAT_14045dde0;
  if (param_1 != (undefined8 *)0x0) {
    puVar3 = param_1;
  }
  if (*(uint *)(puVar3 + 3) < 8) {
    puVar3 = &DAT_14045dde0;
  }
  else {
    puVar3 = (undefined8 *)puVar3[2];
  }
  pbVar1 = (byte *)FUN_1403ced90(puVar3,0);
  if (1 < uVar7) {
    uVar8 = 1;
    uVar9 = (uint)pbVar1[1] + (uint)*pbVar1 * 0x100;
    do {
      puVar3 = &DAT_14045dde0;
      puVar2 = &DAT_14045dde0;
      if (param_1 != (undefined8 *)0x0) {
        puVar2 = param_1;
      }
      if (7 < *(uint *)(puVar2 + 3)) {
        puVar3 = (undefined8 *)puVar2[2];
      }
      if (uVar8 < (uint)*(byte *)((longlong)puVar3 + 5) * 0x10000 +
                  (uint)*(byte *)((longlong)puVar3 + 6) * 0x100 +
                  (uint)*(byte *)((longlong)puVar3 + 4) * 0x1000000 +
                  (uint)*(byte *)((longlong)puVar3 + 7)) {
        pbVar1 = (byte *)((longlong)puVar3 + ((ulonglong)uVar8 + 2) * 4);
      }
      else {
        pbVar1 = (byte *)&DAT_14045dde0;
      }
      uVar4 = (uint)pbVar1[3] +
              (uint)pbVar1[1] * 0x10000 + (uint)pbVar1[2] * 0x100 + (uint)*pbVar1 * 0x1000000;
      if (uVar4 == 0) {
        pbVar1 = (byte *)&DAT_14045dde0;
      }
      else {
        pbVar1 = (byte *)((ulonglong)uVar4 + (longlong)puVar3);
      }
      uVar4 = (uint)pbVar1[1] + (uint)*pbVar1 * 0x100;
      if (((uVar6 <= uVar4) && (uVar4 < uVar9)) || ((uVar9 < uVar6 && (uVar9 < uVar4)))) {
        uVar10 = (ulonglong)uVar8;
        uVar9 = uVar4;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  puVar3 = &DAT_14045dde0;
  if (param_1 != (undefined8 *)0x0) {
    puVar3 = param_1;
  }
  if (7 < *(uint *)(puVar3 + 3)) {
    puVar5 = (undefined8 *)puVar3[2];
  }
  if ((uint)uVar10 <
      (uint)*(byte *)((longlong)puVar5 + 5) * 0x10000 +
      (uint)*(byte *)((longlong)puVar5 + 6) * 0x100 +
      (uint)*(byte *)((longlong)puVar5 + 4) * 0x1000000 + (uint)*(byte *)((longlong)puVar5 + 7)) {
    pbVar1 = (byte *)((longlong)puVar5 + (uVar10 + 2) * 4);
  }
  else {
    pbVar1 = (byte *)&DAT_14045dde0;
  }
  uVar7 = (uint)pbVar1[1] * 0x10000 + (uint)pbVar1[2] * 0x100 + (uint)*pbVar1 * 0x1000000 +
          (uint)pbVar1[3];
  if (uVar7 == 0) {
    return &DAT_14045dde0;
  }
  return (undefined8 *)((ulonglong)uVar7 + (longlong)puVar5);
}

