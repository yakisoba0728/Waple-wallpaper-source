// Function: FUN_14027b240
// Addr: 14027b240
// Size: 616 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14027b240(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar13 = (float)param_2;
  uVar9 = (undefined4)((ulonglong)param_1 >> 0x20);
  fVar18 = (float)param_1;
  fVar12 = (fVar18 + fVar13) * _DAT_140492774;
  fVar10 = fVar12 + fVar18;
  fVar12 = fVar12 + fVar13;
  iVar5 = (int)fVar10;
  iVar4 = iVar5 + -1;
  if ((float)iVar5 <= fVar10) {
    iVar4 = iVar5;
  }
  uVar6 = (uint)fVar12;
  uVar8 = uVar6 - 1;
  if ((float)(int)uVar6 <= fVar12) {
    uVar8 = uVar6;
  }
  fVar10 = (float)(int)(uVar8 + iVar4) * DAT_140492750;
  fVar18 = fVar18 - ((float)iVar4 - fVar10);
  fVar13 = fVar13 - ((float)(int)uVar8 - fVar10);
  fVar16 = fVar18 - (float)(fVar13 < fVar18);
  bVar2 = fVar18 <= fVar13;
  bVar3 = fVar13 < fVar18;
  fVar10 = fVar13 - (float)(fVar18 <= fVar13);
  fVar15 = fVar18 - DAT_1404927d4;
  fVar12 = fVar13 - DAT_1404927d4;
  fVar17 = (DAT_140492790 - fVar18 * fVar18) - fVar13 * fVar13;
  fVar11 = 0.0;
  cVar7 = (char)iVar4;
  if (0.0 <= fVar17) {
    bVar1 = (&DAT_140485010)[(byte)(cVar7 + (&DAT_140485010)[uVar8 & 0xff])];
    fVar14 = fVar18;
    if ((bVar1 & 0x3c) == 0) {
      fVar14 = fVar13;
      fVar13 = fVar18;
    }
    if ((bVar1 & 1) != 0) {
      fVar13 = (float)((uint)fVar13 ^ DAT_1404930c0);
    }
    if ((bVar1 & 2) == 0) {
      fVar14 = fVar14 + fVar14;
    }
    else {
      fVar14 = fVar14 * _DAT_140492ab0;
    }
    fVar13 = (fVar14 + fVar13) * fVar17 * fVar17 * fVar17 * fVar17;
  }
  else {
    fVar13 = 0.0;
  }
  fVar18 = (DAT_140492790 - (fVar16 + DAT_140492750) * (fVar16 + DAT_140492750)) -
           (fVar10 + DAT_140492750) * (fVar10 + DAT_140492750);
  if (0.0 <= fVar18) {
    bVar1 = (&DAT_140485010)[(byte)(bVar3 + (&DAT_140485010)[(byte)(bVar2 + (char)uVar8)] + cVar7)];
    fVar17 = fVar16;
    if ((bVar1 & 0x3c) == 0) {
      fVar17 = fVar10;
      uVar9 = (int)((ulonglong)param_2 >> 0x20);
      fVar10 = fVar16;
    }
    fVar10 = fVar10 + DAT_140492750;
    fVar17 = fVar17 + DAT_140492750;
    if ((bVar1 & 1) != 0) {
      fVar10 = (float)((uint)fVar10 ^ DAT_1404930c0);
    }
    if ((bVar1 & 2) == 0) {
      fVar17 = fVar17 + fVar17;
    }
    else {
      fVar17 = fVar17 * _DAT_140492ab0;
    }
    fVar18 = (fVar17 + fVar10) * fVar18 * fVar18 * fVar18 * fVar18;
  }
  else {
    fVar18 = 0.0;
    uVar9 = 0;
  }
  fVar10 = (DAT_140492790 - (fVar15 + DAT_140492784) * (fVar15 + DAT_140492784)) -
           (fVar12 + DAT_140492784) * (fVar12 + DAT_140492784);
  if (0.0 <= fVar10) {
    bVar1 = (&DAT_140485010)[(byte)(cVar7 + '\x01' + (&DAT_140485010)[(byte)((char)uVar8 + 1)])];
    fVar11 = fVar15;
    if ((bVar1 & 0x3c) == 0) {
      fVar11 = fVar12;
      fVar12 = fVar15;
    }
    fVar12 = fVar12 + DAT_140492784;
    fVar11 = fVar11 + DAT_140492784;
    if ((bVar1 & 1) != 0) {
      fVar12 = (float)((uint)fVar12 ^ DAT_1404930c0);
    }
    if ((bVar1 & 2) == 0) {
      fVar11 = fVar11 + fVar11;
    }
    else {
      fVar11 = fVar11 * _DAT_140492ab0;
    }
    fVar11 = (fVar11 + fVar12) * fVar10 * fVar10 * fVar10 * fVar10;
  }
  return CONCAT44(uVar9,(fVar18 + fVar13 + fVar11) * _UNK_140492998);
}

