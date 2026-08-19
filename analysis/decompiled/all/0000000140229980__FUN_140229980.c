// Function: FUN_140229980
// Addr: 140229980
// Size: 1760 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140229980(longlong param_1,longlong param_2)

{
  float *pfVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_c8;
  float fStack_c4;
  float local_c0;
  
  fVar10 = DAT_1404927d4;
  bVar2 = ~*(byte *)(param_2 + 0x30) & 1;
  pfVar1 = *(float **)(param_1 + 0x30);
  fVar14 = (float)*(undefined8 *)(pfVar1 + 9);
  fVar16 = (float)((ulonglong)*(undefined8 *)(pfVar1 + 9) >> 0x20);
  fVar11 = (float)*(undefined8 *)(pfVar1 + 1);
  fVar12 = (float)((ulonglong)*(undefined8 *)(pfVar1 + 1) >> 0x20);
  fVar15 = (float)*(undefined8 *)(pfVar1 + 5);
  fVar13 = (float)((ulonglong)*(undefined8 *)(pfVar1 + 5) >> 0x20);
  fVar3 = *pfVar1;
  fVar9 = pfVar1[4];
  fVar7 = pfVar1[8];
  if (*(int *)(param_2 + 8) == 0) {
    fVar8 = (float)(*(uint *)(param_1 + 0x168) ^ DAT_1404930c0);
    fVar4 = (float)((uint)*(undefined8 *)(param_1 + 0x160) ^ DAT_1404930c0);
    fVar5 = (float)((uint)((ulonglong)*(undefined8 *)(param_1 + 0x160) >> 0x20) ^ _UNK_1404930c4);
    *(float *)(param_1 + 0x18c) = fVar8;
    *(ulonglong *)(param_1 + 0x184) = CONCAT44(fVar5,fVar4);
    if (bVar2 == 0) {
      local_c0 = *(float *)(param_1 + 0x180);
      local_c8 = (float)*(undefined8 *)(param_1 + 0x178);
      fStack_c4 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x178) >> 0x20);
    }
    else {
      local_c8 = fVar9 + fVar3 * 0.0 + fVar7 * 0.0;
      fStack_c4 = _DAT_140492f00 * fVar15 + fVar11 * 0.0 + fVar14 * 0.0;
      local_c0 = _UNK_140492f04 * fVar13 + fVar12 * 0.0 + fVar16 * 0.0;
    }
    *(ulonglong *)(param_1 + 0x19c) = CONCAT44(fStack_c4,local_c8);
    *(float *)(param_1 + 0x1a4) = local_c0;
    fVar8 = *(float *)(param_1 + 0x188) * *(float *)(param_1 + 0x1a0) +
            *(float *)(param_1 + 0x184) * *(float *)(param_1 + 0x19c) +
            fVar8 * *(float *)(param_1 + 0x1a4);
    *(ulonglong *)(param_1 + 0x19c) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x19c) >> 0x20) - fVar5 * fVar8,
                  (float)*(undefined8 *)(param_1 + 0x19c) - fVar4 * fVar8);
    *(float *)(param_1 + 0x1a4) = *(float *)(param_1 + 0x1a4) - fVar8 * *(float *)(param_1 + 0x18c);
  }
  else if (*(int *)(param_2 + 8) == 1) {
    if (bVar2 == 0) {
      local_c8 = 0.0;
      fStack_c4 = 1.0;
      local_c0 = 0.0;
    }
    else {
      fVar4 = *(float *)(param_2 + 0x10);
      fVar5 = *(float *)(param_2 + 0xc);
      fVar8 = *(float *)(param_2 + 0x14);
      local_c8 = fVar4 * fVar9 + fVar3 * fVar5 + fVar8 * fVar7;
      fStack_c4 = fVar4 * fVar15 + fVar5 * fVar11 + fVar8 * fVar14;
      local_c0 = fVar4 * fVar13 + fVar5 * fVar12 + fVar8 * fVar16;
    }
    *(ulonglong *)(param_1 + 0x19c) = CONCAT44(fStack_c4,local_c8);
    *(float *)(param_1 + 0x1a4) = local_c0;
    fVar5 = *(float *)(param_1 + 0x164) * *(float *)(param_1 + 0x1a4) -
            *(float *)(param_1 + 0x168) * *(float *)(param_1 + 0x1a0);
    fVar4 = *(float *)(param_1 + 0x1a0) * *(float *)(param_1 + 0x160) -
            *(float *)(param_1 + 0x164) * *(float *)(param_1 + 0x19c);
    *(float *)(param_1 + 400) = fVar5;
    fVar8 = *(float *)(param_1 + 0x168) * *(float *)(param_1 + 0x19c) -
            *(float *)(param_1 + 0x1a4) * *(float *)(param_1 + 0x160);
    *(float *)(param_1 + 0x198) = fVar4;
    *(float *)(param_1 + 0x194) = fVar8;
    *(float *)(param_1 + 0x184) =
         fVar8 * *(float *)(param_1 + 0x1a4) - fVar4 * *(float *)(param_1 + 0x1a0);
    *(float *)(param_1 + 0x18c) =
         *(float *)(param_1 + 0x1a0) * fVar5 - fVar8 * *(float *)(param_1 + 0x19c);
    *(float *)(param_1 + 0x188) =
         fVar4 * *(float *)(param_1 + 0x19c) - *(float *)(param_1 + 0x1a4) * fVar5;
  }
  else if (bVar2 == 0) {
    *(undefined8 *)(param_1 + 0x184) = *(undefined8 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x19c) = *(undefined8 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_2 + 0x2c);
  }
  else {
    fVar4 = *(float *)(param_2 + 0x10);
    fVar5 = *(float *)(param_2 + 0xc);
    fVar8 = *(float *)(param_2 + 0x14);
    *(float *)(param_1 + 0x184) = fVar4 * fVar9 + fVar3 * fVar5 + fVar8 * fVar7;
    *(float *)(param_1 + 0x188) = fVar4 * fVar15 + fVar5 * fVar11 + fVar8 * fVar14;
    *(float *)(param_1 + 0x18c) = fVar4 * fVar13 + fVar5 * fVar12 + fVar8 * fVar16;
    fVar4 = *(float *)(param_2 + 0x28);
    fVar5 = *(float *)(param_2 + 0x24);
    fVar8 = *(float *)(param_2 + 0x2c);
    *(float *)(param_1 + 0x19c) = fVar4 * fVar9 + fVar5 * fVar3 + fVar8 * fVar7;
    *(float *)(param_1 + 0x1a0) = fVar4 * fVar15 + fVar5 * fVar11 + fVar8 * fVar14;
    *(float *)(param_1 + 0x1a4) = fVar4 * fVar13 + fVar5 * fVar12 + fVar8 * fVar16;
  }
  fVar4 = *(float *)(param_1 + 0x188);
  fVar5 = *(float *)(param_1 + 0x184);
  fVar8 = *(float *)(param_1 + 0x18c);
  fVar6 = fVar4 * fVar11 + fVar3 * fVar5 + fVar8 * fVar12;
  *(float *)(param_1 + 0x184) = fVar6;
  fVar17 = fVar4 * fVar14 + fVar5 * fVar7 + fVar8 * fVar16;
  fVar19 = fVar4 * fVar15 + fVar5 * fVar9 + fVar8 * fVar13;
  *(float *)(param_1 + 0x18c) = fVar17;
  *(float *)(param_1 + 0x188) = fVar19;
  fVar4 = *(float *)(param_1 + 0x1a0);
  fVar5 = *(float *)(param_1 + 0x19c);
  fVar8 = *(float *)(param_1 + 0x1a4);
  fVar18 = fVar4 * fVar11 + fVar3 * fVar5 + fVar8 * fVar12;
  *(float *)(param_1 + 0x19c) = fVar18;
  fVar7 = fVar4 * fVar14 + fVar5 * fVar7 + fVar8 * fVar16;
  fVar9 = fVar4 * fVar15 + fVar5 * fVar9 + fVar8 * fVar13;
  *(float *)(param_1 + 0x1a4) = fVar7;
  *(float *)(param_1 + 0x1a0) = fVar9;
  fVar15 = fVar9 * fVar17 - fVar7 * fVar19;
  fVar11 = fVar7 * fVar6 - fVar17 * fVar18;
  fVar12 = fVar19 * fVar18 - fVar9 * fVar6;
  fVar3 = fVar19 * fVar19 + fVar6 * fVar6 + fVar17 * fVar17;
  if (fVar3 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_14041ade0(fVar3);
  }
  fVar3 = fVar10 / SQRT(fVar3);
  *(float *)(param_1 + 0x184) = fVar3 * fVar6;
  *(float *)(param_1 + 0x188) = fVar19 * fVar3;
  *(float *)(param_1 + 0x18c) = fVar17 * fVar3;
  fVar3 = fVar11 * fVar11 + fVar15 * fVar15 + fVar12 * fVar12;
  if (fVar3 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_14041ade0(fVar3);
  }
  fVar3 = fVar10 / SQRT(fVar3);
  *(float *)(param_1 + 400) = fVar3 * fVar15;
  *(float *)(param_1 + 0x194) = fVar11 * fVar3;
  *(float *)(param_1 + 0x198) = fVar12 * fVar3;
  fVar3 = fVar9 * fVar9 + fVar18 * fVar18 + fVar7 * fVar7;
  if (0.0 <= fVar3) {
    fVar10 = fVar10 / SQRT(fVar3);
    *(float *)(param_1 + 0x1a0) = fVar9 * fVar10;
    *(float *)(param_1 + 0x1a4) = fVar7 * fVar10;
    *(float *)(param_1 + 0x19c) = fVar10 * fVar18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14041ade0(fVar3);
}

