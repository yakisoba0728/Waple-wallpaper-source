// Function: FUN_140386f40
// Addr: 140386f40
// Size: 496 bytes


undefined8
FUN_140386f40(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,int *param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  short sVar9;
  short sVar10;
  longlong lVar11;
  
  puVar4 = *(uint **)(param_3 + 8);
  uVar3 = *puVar4;
  if (param_4 < uVar3) {
    puVar8 = &DAT_14045dd10;
    if (*(undefined8 **)(puVar4 + 6) != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)(puVar4 + 6);
    }
    bVar1 = *(byte *)(puVar8[2] + 3 + (ulonglong)param_4 * 4);
    bVar2 = *(byte *)(puVar8[2] + 2 + (ulonglong)param_4 * 4);
  }
  else {
    if (puVar4[1] <= param_4) {
      iVar6 = 0;
      goto LAB_140386fcf;
    }
    puVar8 = &DAT_14045dd10;
    if (*(undefined8 **)(puVar4 + 6) != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)(puVar4 + 6);
    }
    lVar7 = (ulonglong)(param_4 - uVar3) + (ulonglong)uVar3 * 2;
    bVar1 = *(byte *)(puVar8[2] + 1 + lVar7 * 2);
    bVar2 = *(byte *)(puVar8[2] + lVar7 * 2);
  }
  iVar6 = (int)(short)((ushort)bVar2 * 0x100 + (ushort)bVar1);
LAB_140386fcf:
  *param_5 = iVar6;
  lVar7 = 8;
  if ((short)((ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9)) <=
      (short)((ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5))) {
    lVar7 = 4;
  }
  param_5[1] = (int)(short)((ushort)*(byte *)(lVar7 + 1 + param_1) +
                           (ushort)*(byte *)(lVar7 + param_1) * 0x100);
  sVar10 = (ushort)*(byte *)(param_1 + 6) * 0x100 + (ushort)*(byte *)(param_1 + 7);
  sVar9 = (ushort)*(byte *)(param_1 + 3) + (ushort)*(byte *)(param_1 + 2) * 0x100;
  uVar3 = 6;
  if (sVar9 <= sVar10) {
    uVar3 = 2;
  }
  uVar5 = 6;
  if (sVar10 <= sVar9) {
    uVar5 = 2;
  }
  param_5[2] = (int)(short)((ushort)*(byte *)((ulonglong)uVar5 + 1 + param_1) +
                           (ushort)*(byte *)((ulonglong)uVar5 + param_1) * 0x100) -
               (int)(short)((ushort)*(byte *)((ulonglong)uVar3 + param_1) * 0x100 +
                           (ushort)*(byte *)((ulonglong)uVar3 + 1 + param_1));
  sVar10 = (ushort)*(byte *)(param_1 + 8) * 0x100 + (ushort)*(byte *)(param_1 + 9);
  sVar9 = (ushort)*(byte *)(param_1 + 4) * 0x100 + (ushort)*(byte *)(param_1 + 5);
  lVar7 = 8;
  if (sVar10 <= sVar9) {
    lVar7 = 4;
  }
  lVar11 = 8;
  if (sVar9 <= sVar10) {
    lVar11 = 4;
  }
  param_5[3] = (int)(short)((ushort)*(byte *)(lVar11 + param_1) * 0x100 +
                           (ushort)*(byte *)(lVar11 + 1 + param_1)) -
               (int)(short)((ushort)*(byte *)(lVar7 + 1 + param_1) +
                           (ushort)*(byte *)(lVar7 + param_1) * 0x100);
  FUN_14040a0f0(param_2,param_5);
  return 1;
}

