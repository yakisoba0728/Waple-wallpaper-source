// Function: FUN_1401989e0
// Addr: 1401989e0
// Size: 384 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1401989e0(longlong param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
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
  
  fVar18 = DAT_140492784;
  if ((*(uint *)(param_1 + 0x90) & 0x10000) == 0) {
    return &stack0x00000000;
  }
  param_3[0] = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  fVar12 = (*param_2 / *(float *)(param_1 + 0x304)) * DAT_140492938;
  fVar19 = *(float *)(*(longlong *)(param_1 + 0x88) + 0x130);
  fVar10 = (fVar19 + fVar12) * _DAT_140492774;
  fVar11 = fVar10 + fVar12;
  fVar10 = fVar10 + fVar19;
  iVar6 = (int)fVar10;
  iVar5 = iVar6 + -1;
  if ((float)iVar6 <= fVar10) {
    iVar5 = iVar6;
  }
  uVar7 = (uint)fVar11;
  uVar9 = uVar7 - 1;
  if ((float)(int)uVar7 <= fVar11) {
    uVar9 = uVar7;
  }
  fVar10 = (float)(int)(uVar9 + iVar5) * DAT_140492750;
  fVar19 = fVar19 - ((float)iVar5 - fVar10);
  fVar12 = fVar12 - ((float)(int)uVar9 - fVar10);
  fVar15 = fVar19 - (float)(fVar12 < fVar19);
  bVar3 = fVar19 <= fVar12;
  bVar4 = fVar12 < fVar19;
  fVar10 = fVar12 - (float)(fVar19 <= fVar12);
  fVar14 = fVar19 - DAT_1404927d4;
  fVar11 = fVar12 - DAT_1404927d4;
  fVar17 = fVar14 + fVar18;
  fVar18 = fVar11 + fVar18;
  fVar16 = (DAT_140492790 - fVar19 * fVar19) - fVar12 * fVar12;
  cVar8 = (char)iVar5;
  if (0.0 <= fVar16) {
    bVar2 = (&DAT_140485010)[(byte)(cVar8 + (&DAT_140485010)[uVar9 & 0xff])];
    fVar13 = fVar19;
    if ((bVar2 & 0x3c) == 0) {
      fVar13 = fVar12;
      fVar12 = fVar19;
    }
    if ((bVar2 & 1) != 0) {
      fVar12 = (float)((uint)fVar12 ^ DAT_1404930c0);
    }
    if ((bVar2 & 2) == 0) {
      fVar13 = fVar13 + fVar13;
    }
    else {
      fVar13 = fVar13 * _DAT_140492ab0;
    }
    fVar19 = (fVar13 + fVar12) * fVar16 * fVar16 * fVar16 * fVar16;
  }
  else {
    fVar19 = 0.0;
  }
  fVar12 = (DAT_140492790 - (fVar15 + DAT_140492750) * (fVar15 + DAT_140492750)) -
           (fVar10 + DAT_140492750) * (fVar10 + DAT_140492750);
  if (0.0 <= fVar12) {
    bVar2 = (&DAT_140485010)[(byte)(bVar4 + (&DAT_140485010)[(byte)(bVar3 + (char)uVar9)] + cVar8)];
    fVar16 = fVar15;
    if ((bVar2 & 0x3c) == 0) {
      fVar16 = fVar10;
      fVar10 = fVar15;
    }
    fVar10 = fVar10 + DAT_140492750;
    fVar16 = fVar16 + DAT_140492750;
    if ((bVar2 & 1) != 0) {
      fVar10 = (float)((uint)fVar10 ^ DAT_1404930c0);
    }
    if ((bVar2 & 2) == 0) {
      fVar16 = fVar16 + fVar16;
    }
    else {
      fVar16 = fVar16 * _DAT_140492ab0;
    }
    fVar12 = (fVar16 + fVar10) * fVar12 * fVar12 * fVar12 * fVar12;
  }
  else {
    fVar12 = 0.0;
  }
  fVar18 = (DAT_140492790 - fVar17 * fVar17) - fVar18 * fVar18;
  if (0.0 <= fVar18) {
    bVar2 = (&DAT_140485010)[(byte)(cVar8 + '\x01' + (&DAT_140485010)[(byte)((char)uVar9 + 1)])];
    fVar10 = fVar14;
    if ((bVar2 & 0x3c) == 0) {
      fVar10 = fVar11;
      fVar11 = fVar14;
    }
    fVar11 = fVar11 + DAT_140492784;
    fVar10 = fVar10 + DAT_140492784;
    if ((bVar2 & 1) != 0) {
      fVar11 = (float)((uint)fVar11 ^ DAT_1404930c0);
    }
    if ((bVar2 & 2) == 0) {
      fVar10 = fVar10 + fVar10;
    }
    else {
      fVar10 = fVar10 * _DAT_140492ab0;
    }
    fVar18 = (fVar10 + fVar11) * fVar18 * fVar18 * fVar18 * fVar18;
  }
  else {
    fVar18 = 0.0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x3a8);
  fVar19 = (fVar12 + fVar19 + fVar18) * _UNK_140492998;
  fVar18 = 0.0;
  if (0.0 <= fVar19) {
    fVar18 = fVar19;
  }
  fVar19 = *(float *)(param_1 + 0x3b0);
  *param_3 = fVar18 * *(float *)(param_1 + 0x3a4) * fVar19 + *param_3;
  *(ulonglong *)(param_3 + 1) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20) +
                (float)((ulonglong)uVar1 >> 0x20) * fVar18 * fVar19,
                (float)*(undefined8 *)(param_3 + 1) + (float)uVar1 * fVar18 * fVar19);
  return (undefined1 *)0x1;
}

