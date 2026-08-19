// Function: FUN_140098d00
// Addr: 140098d00
// Size: 27 bytes


uint FUN_140098d00(undefined8 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  
  piVar9 = (int *)param_1[1];
  piVar10 = (int *)*param_1;
  uVar12 = 0;
  uVar13 = (ulonglong)((longlong)piVar9 + (3 - (longlong)piVar10)) >> 2;
  if (piVar9 < piVar10) {
    uVar13 = 0;
  }
  if (7 < uVar13) {
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    do {
      piVar1 = piVar10 + 3;
      uVar11 = uVar11 + 8;
      piVar2 = piVar10 + 2;
      piVar3 = piVar10 + 1;
      iVar8 = *piVar10;
      piVar4 = piVar10 + 7;
      piVar5 = piVar10 + 6;
      piVar6 = piVar10 + 5;
      piVar7 = piVar10 + 4;
      piVar10 = piVar10 + 8;
      uVar17 = uVar17 | *(uint *)(&DAT_140484af0 + (longlong)iVar8 * 4);
      uVar18 = uVar18 | *(uint *)(&DAT_140484af0 + (longlong)*piVar3 * 4);
      uVar19 = uVar19 | *(uint *)(&DAT_140484af0 + (longlong)*piVar2 * 4);
      uVar20 = uVar20 | *(uint *)(&DAT_140484af0 + (longlong)*piVar1 * 4);
      uVar12 = uVar12 | *(uint *)(&DAT_140484af0 + (longlong)*piVar7 * 4);
      uVar14 = uVar14 | *(uint *)(&DAT_140484af0 + (longlong)*piVar6 * 4);
      uVar15 = uVar15 | *(uint *)(&DAT_140484af0 + (longlong)*piVar5 * 4);
      uVar16 = uVar16 | *(uint *)(&DAT_140484af0 + (longlong)*piVar4 * 4);
    } while (uVar11 != (uVar13 & 0xfffffffffffffff8));
    uVar12 = uVar12 | uVar17 | uVar15 | uVar19 | uVar14 | uVar18 | uVar16 | uVar20;
  }
  for (; piVar10 != piVar9; piVar10 = piVar10 + 1) {
    uVar12 = uVar12 | *(uint *)(&DAT_140484af0 + (longlong)*piVar10 * 4);
  }
  return uVar12;
}

