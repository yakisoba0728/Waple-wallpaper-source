// Function: FUN_14027b170
// Addr: 14027b170
// Size: 827 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14027b170(undefined8 param_1,undefined8 param_2)

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
  fVar12 = (fVar18 + fVar13) * _DAT_1404926a4;
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
  fVar10 = (float)(int)(uVar8 + iVar4) * DAT_140492680;
  fVar18 = fVar18 - ((float)iVar4 - fVar10);
  fVar13 = fVar13 - ((float)(int)uVar8 - fVar10);
  fVar16 = fVar18 - (float)(fVar13 < fVar18);
  bVar2 = fVar18 <= fVar13;
  bVar3 = fVar13 < fVar18;
  fVar10 = fVar13 - (float)(fVar18 <= fVar13);
  fVar15 = fVar18 - DAT_140492704;
  fVar12 = fVar13 - DAT_140492704;
  fVar17 = (DAT_1404926c0 - fVar18 * fVar18) - fVar13 * fVar13;
  fVar11 = 0.0;
  cVar7 = (char)iVar4;
  if (0.0 <= fVar17) {
    bVar1 = (&DAT_140484f40)[(byte)(cVar7 + (&DAT_140484f40)[uVar8 & 0xff])];
    fVar14 = fVar18;
    if ((bVar1 & 0x3c) == 0) {
      fVar14 = fVar13;
      fVar13 = fVar18;
    }
    if ((bVar1 & 1) != 0) {
      fVar13 = (float)((uint)fVar13 ^ DAT_140492ff0);
    }
    if ((bVar1 & 2) == 0) {
      fVar14 = fVar14 + fVar14;
    }
    else {
      fVar14 = fVar14 * _DAT_1404929e0;
    }
    fVar13 = (fVar14 + fVar13) * fVar17 * fVar17 * fVar17 * fVar17;
  }
  else {
    fVar13 = 0.0;
  }
  fVar18 = (DAT_1404926c0 - (fVar16 + DAT_140492680) * (fVar16 + DAT_140492680)) -
           (fVar10 + DAT_140492680) * (fVar10 + DAT_140492680);
  if (0.0 <= fVar18) {
    bVar1 = (&DAT_140484f40)[(byte)(bVar3 + (&DAT_140484f40)[(byte)(bVar2 + (char)uVar8)] + cVar7)];
    fVar17 = fVar16;
    if ((bVar1 & 0x3c) == 0) {
      fVar17 = fVar10;
      uVar9 = (int)((ulonglong)param_2 >> 0x20);
      fVar10 = fVar16;
    }
    fVar10 = fVar10 + DAT_140492680;
    fVar17 = fVar17 + DAT_140492680;
    if ((bVar1 & 1) != 0) {
      fVar10 = (float)((uint)fVar10 ^ DAT_140492ff0);
    }
    if ((bVar1 & 2) == 0) {
      fVar17 = fVar17 + fVar17;
    }
    else {
      fVar17 = fVar17 * _DAT_1404929e0;
    }
    fVar18 = (fVar17 + fVar10) * fVar18 * fVar18 * fVar18 * fVar18;
  }
  else {
    fVar18 = 0.0;
    uVar9 = 0;
  }
  fVar10 = (DAT_1404926c0 - (fVar15 + DAT_1404926b4) * (fVar15 + DAT_1404926b4)) -
           (fVar12 + DAT_1404926b4) * (fVar12 + DAT_1404926b4);
  if (0.0 <= fVar10) {
    bVar1 = (&DAT_140484f40)[(byte)(cVar7 + '\x01' + (&DAT_140484f40)[(byte)((char)uVar8 + 1)])];
    fVar11 = fVar15;
    if ((bVar1 & 0x3c) == 0) {
      fVar11 = fVar12;
      fVar12 = fVar15;
    }
    fVar12 = fVar12 + DAT_1404926b4;
    fVar11 = fVar11 + DAT_1404926b4;
    if ((bVar1 & 1) != 0) {
      fVar12 = (float)((uint)fVar12 ^ DAT_140492ff0);
    }
    if ((bVar1 & 2) == 0) {
      fVar11 = fVar11 + fVar11;
    }
    else {
      fVar11 = fVar11 * _DAT_1404929e0;
    }
    fVar11 = (fVar11 + fVar12) * fVar10 * fVar10 * fVar10 * fVar10;
  }
  return CONCAT44(uVar9,(fVar18 + fVar13 + fVar11) * _DAT_1404928c8);
}

