// Function: FUN_1403cdfa0
// Addr: 1403cdfa0
// Size: 848 bytes


bool FUN_1403cdfa0(undefined8 *param_1,longlong param_2,uint param_3,int *param_4,char param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qb;
  
  puVar9 = (undefined8 *)*param_1;
  puVar7 = &DAT_14045dd10;
  puVar3 = &DAT_14045dd10;
  if (puVar9 != (undefined8 *)0x0) {
    puVar3 = puVar9;
  }
  if (*(uint *)(puVar3 + 3) < 8) {
    pbVar4 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar4 = (byte *)puVar3[2];
  }
  if ((uint)*pbVar4 * 0x100 + (uint)pbVar4[1] == 0) {
    return false;
  }
  pbVar4 = (byte *)FUN_1403b3410(param_1);
  iVar1 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
  if (iVar1 != 0) {
    iVar13 = (int)pbVar4 - *(int *)(puVar9 + 2);
    iVar12 = 8;
    if (param_3 < *(uint *)(param_1 + 1)) {
      while( true ) {
        uVar8 = (ulonglong)param_3;
        uVar11 = (ulonglong)(param_3 + 1);
        uVar5 = (uint)pbVar4[uVar8 * 4 + 7] +
                (uint)pbVar4[uVar8 * 4 + 5] * 0x10000 + (uint)pbVar4[uVar8 * 4 + 6] * 0x100 +
                (uint)pbVar4[uVar8 * 4 + 4] * 0x1000000;
        uVar10 = (uint)pbVar4[uVar11 * 4 + 7] +
                 (uint)pbVar4[uVar11 * 4 + 5] * 0x10000 + (uint)pbVar4[uVar11 * 4 + 6] * 0x100 +
                 (uint)pbVar4[uVar11 * 4 + 4] * 0x1000000;
        if (((uVar10 <= uVar5) || (uVar10 - uVar5 < 9)) ||
           ((uint)(*(int *)(puVar9 + 3) - iVar13) < uVar10)) goto LAB_1403ce128;
        if (uVar5 == 0) {
          pbVar6 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar6 = pbVar4 + uVar5;
        }
        iVar2 = (uint)pbVar6[7] +
                (uint)pbVar6[5] * 0x10000 + (uint)pbVar6[6] * 0x100 + (uint)pbVar6[4] * 0x1000000;
        if (iVar2 != 0x64757065) break;
        if (((uVar10 - uVar5) - 8 < 2) || (iVar12 == 0)) goto LAB_1403ce128;
        iVar12 = iVar12 + -1;
        param_3 = (uint)pbVar6[9] + (uint)pbVar6[8] * 0x100;
        if (*(uint *)(param_1 + 1) <= param_3) goto LAB_1403ce128;
      }
      if (iVar2 == 0x706e6720) {
        iVar2 = (int)(short)((ushort)*pbVar6 * 0x100 + (ushort)pbVar6[1]);
        iVar12 = (int)(short)((ushort)pbVar6[3] + (ushort)pbVar6[2] * 0x100);
        puVar9 = (undefined8 *)FUN_140413f90(puVar9,uVar5 + iVar13 + 8);
        goto LAB_1403ce12b;
      }
    }
  }
LAB_1403ce128:
  iVar2 = 0;
  iVar12 = 0;
  puVar9 = &DAT_14045dd10;
  iVar1 = 0;
LAB_1403ce12b:
  if (0x1c < *(uint *)(puVar9 + 3)) {
    puVar7 = (undefined8 *)puVar9[2];
  }
  if (((uint)*(byte *)((longlong)puVar7 + 0x15) * 0x10000 +
       (uint)*(byte *)((longlong)puVar7 + 0x14) * 0x1000000 +
       (uint)*(byte *)((longlong)puVar7 + 0x16) * 0x100 + (uint)*(byte *)((longlong)puVar7 + 0x17) <
       0x10000) &&
     ((uint)*(byte *)(puVar7 + 2) * 0x1000000 + (uint)*(byte *)((longlong)puVar7 + 0x12) * 0x100 +
      (uint)*(byte *)((longlong)puVar7 + 0x11) * 0x10000 + (uint)*(byte *)((longlong)puVar7 + 0x13)
      < 0x10000)) {
    *param_4 = iVar2;
    param_4[1] = (uint)*(byte *)((longlong)puVar7 + 0x17) +
                 ((uint)*(byte *)((longlong)puVar7 + 0x16) +
                 ((uint)*(byte *)((longlong)puVar7 + 0x14) * 0x100 +
                 (uint)*(byte *)((longlong)puVar7 + 0x15)) * 0x100) * 0x100 + iVar12;
    param_4[2] = (((uint)*(byte *)(puVar7 + 2) * 0x100 + (uint)*(byte *)((longlong)puVar7 + 0x11)) *
                  0x100 + (uint)*(byte *)((longlong)puVar7 + 0x12)) * 0x100 +
                 (uint)*(byte *)((longlong)puVar7 + 0x13);
    param_4[3] = -((uint)*(byte *)((longlong)puVar7 + 0x15) * 0x10000 +
                   (uint)*(byte *)((longlong)puVar7 + 0x14) * 0x1000000 +
                   (uint)*(byte *)((longlong)puVar7 + 0x16) * 0x100 +
                  (uint)*(byte *)((longlong)puVar7 + 0x17));
    if (param_5 != '\0') {
      if (iVar1 != 0) {
        FUN_1403cf3a0(*(undefined8 *)(param_2 + 0x20));
        uVar15 = FUN_14041bee0();
        *param_4 = (int)(float)uVar15;
        param_4[1] = (int)(float)((ulonglong)uVar15 >> 0x20);
        param_4[2] = (int)(float)extraout_XMM0_Qb;
        param_4[3] = (int)(float)((ulonglong)extraout_XMM0_Qb >> 0x20);
      }
      FUN_14040a0f0(param_2,param_4);
    }
    FUN_140414150(puVar9);
    bVar14 = iVar1 != 0;
  }
  else {
    FUN_140414150(puVar9);
    bVar14 = false;
  }
  return bVar14;
}

