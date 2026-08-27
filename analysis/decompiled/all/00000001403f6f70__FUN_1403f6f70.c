// Function: FUN_1403f6f70
// Addr: 1403f6f70
// Size: 340 bytes


void FUN_1403f6f70(undefined8 *param_1,uint param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  
  param_1 = (undefined8 *)*param_1;
  puVar3 = &DAT_14045dd10;
  puVar4 = &DAT_14045dd10;
  if (param_1 != (undefined8 *)0x0) {
    puVar4 = param_1;
  }
  if (9 < *(uint *)(puVar4 + 3)) {
    puVar3 = (undefined8 *)puVar4[2];
  }
  puVar4 = &DAT_14045dd10;
  if (param_1 != (undefined8 *)0x0) {
    puVar4 = param_1;
  }
  if (*(uint *)(puVar4 + 3) < 10) {
    puVar4 = &DAT_14045dd10;
  }
  else {
    puVar4 = (undefined8 *)puVar4[2];
  }
  uVar5 = (uint)*(byte *)((longlong)puVar4 + 3) * 0x10000 +
          (uint)*(byte *)((longlong)puVar4 + 4) * 0x100 +
          (uint)*(byte *)((longlong)puVar4 + 2) * 0x1000000 + (uint)*(byte *)((longlong)puVar4 + 5);
  if (uVar5 == 0) {
    pbVar1 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar1 = (byte *)((ulonglong)uVar5 + (longlong)puVar4);
  }
  iVar7 = 0;
  iVar6 = (pbVar1[1] - 1) + (uint)*pbVar1 * 0x100;
  if (-1 < iVar6) {
    do {
      uVar5 = (uint)(iVar6 + iVar7) >> 1;
      uVar2 = (ulonglong)uVar5;
      pbVar8 = pbVar1 + uVar2 * 0xc + 2;
      if (param_2 < (uint)pbVar1[uVar2 * 0xc + 3] + (uint)pbVar1[uVar2 * 0xc + 2] * 0x100) {
        iVar6 = uVar5 - 1;
      }
      else {
        if (param_2 <= (uint)pbVar8[3] + (uint)pbVar8[2] * 0x100) goto LAB_1403f7069;
        iVar7 = uVar5 + 1;
      }
    } while (iVar7 <= iVar6);
  }
  pbVar8 = (byte *)&DAT_14045dd10;
LAB_1403f7069:
  FUN_140413f90(param_1,(uint)pbVar8[7] +
                        (uint)pbVar8[4] * 0x1000000 +
                        (uint)*(byte *)((longlong)puVar3 + 3) * 0x10000 +
                        (uint)*(byte *)((longlong)puVar3 + 4) * 0x100 +
                        (uint)*(byte *)((longlong)puVar3 + 2) * 0x1000000 +
                        (uint)*(byte *)((longlong)puVar3 + 5) +
                        (uint)pbVar8[5] * 0x10000 + (uint)pbVar8[6] * 0x100,
                (uint)pbVar8[9] * 0x10000 + (uint)pbVar8[10] * 0x100 + (uint)pbVar8[8] * 0x1000000 +
                (uint)pbVar8[0xb]);
  return;
}

