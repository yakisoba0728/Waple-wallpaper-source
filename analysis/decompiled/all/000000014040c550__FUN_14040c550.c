// Function: FUN_14040c550
// Addr: 14040c550
// Size: 710 bytes


double FUN_14040c550(char *param_1,undefined8 *param_2)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  double *pdVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  double *pdVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar16 = DAT_140492778;
  uVar12 = 0;
  bVar3 = false;
  pcVar2 = (char *)*param_2;
  bVar5 = false;
  bVar4 = false;
  dVar17 = 0.0;
  dVar18 = 0.0;
  dVar19 = 0.0;
  for (; (param_1 < pcVar2 && ((*param_1 == ' ' || ((byte)(*param_1 - 9U) < 5))));
      param_1 = param_1 + 1) {
  }
  if (param_1 != pcVar2) {
    iVar13 = 1;
    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    do {
      lVar9 = (longlong)iVar13;
      iVar14 = (int)(char)(&DAT_14045c2b8)[iVar13];
      if ('\0' < (char)(&DAT_14045c2b8)[iVar13]) {
        iVar7 = (int)*param_1;
        if (((int)(uint)(byte)(&DAT_14045c2a0)[iVar13 * 2] <= iVar7) &&
           (iVar7 <= (int)(uint)(byte)(&DAT_14045c2a1)[iVar13 * 2])) {
          iVar14 = iVar7 - (uint)(byte)(&DAT_14045c2a0)[iVar13 * 2];
        }
      }
      cVar1 = (&DAT_14045c3b0)
              [(char)(&DAT_14045c2e0)[(longlong)iVar14 + (ulonglong)(byte)(&DAT_14045c2c8)[lVar9]]];
      iVar13 = (int)(char)(&DAT_14045c3a0)
                          [(char)(&DAT_14045c2e0)
                                 [(longlong)iVar14 + (ulonglong)(byte)(&DAT_14045c2c8)[lVar9]]];
      uVar8 = uVar12;
      if (cVar1 != '\0') {
        if (cVar1 == '\x01') {
          bVar3 = true;
        }
        else if (cVar1 == '\x02') {
          dVar17 = dVar17 * DAT_140492810 + (double)(*param_1 + -0x30);
        }
        else if (cVar1 == '\x03') {
          if (dVar18 <= DAT_140471a80) {
            dVar19 = dVar19 + DAT_140492778;
            dVar18 = dVar18 * DAT_140492810 + (double)(*param_1 + -0x30);
          }
        }
        else if (cVar1 == '\x04') {
          bVar5 = true;
        }
        else if ((cVar1 == '\x05') && (uVar8 = (int)*param_1 + uVar12 * 10 + -0x30, 0x7ff < uVar8))
        {
          bVar4 = true;
          uVar8 = uVar12;
        }
      }
      uVar12 = uVar8;
    } while (((&DAT_14045c3a0)
              [(char)(&DAT_14045c2e0)[(longlong)iVar14 + (ulonglong)(byte)(&DAT_14045c2c8)[lVar9]]]
              != '\0') && (param_1 = param_1 + 1, param_1 != pcVar2));
  }
  pdVar6 = (double *)&DAT_140470c30;
  uVar8 = 0x100;
  *param_2 = param_1;
  if (dVar19 != 0.0) {
    uVar11 = 0x100;
    pdVar10 = (double *)&DAT_140470c30;
    dVar15 = dVar16;
    do {
      if ((uVar11 & (uint)(longlong)dVar19) != 0) {
        dVar15 = dVar15 * *pdVar10;
      }
      pdVar10 = pdVar10 + 1;
      uVar11 = uVar11 >> 1;
    } while (uVar11 != 0);
    dVar17 = dVar17 + dVar18 / dVar15;
  }
  if (bVar3) {
    dVar17 = dVar17 * DAT_1404929d0;
  }
  if (bVar4) {
    if (dVar17 != 0.0) {
      if (!bVar5) {
        if (!bVar3) {
          return DAT_140492988;
        }
        return DAT_140492a30;
      }
      if (!bVar3) {
        return DAT_140471a50;
      }
      return DAT_140471a90;
    }
  }
  else if (uVar12 != 0) {
    if (bVar5) {
      do {
        if ((uVar12 & uVar8) != 0) {
          dVar16 = dVar16 * *pdVar6;
        }
        pdVar6 = pdVar6 + 1;
        uVar8 = uVar8 >> 1;
      } while (uVar8 != 0);
      return dVar17 / dVar16;
    }
    do {
      if ((uVar12 & uVar8) != 0) {
        dVar16 = dVar16 * *pdVar6;
      }
      pdVar6 = pdVar6 + 1;
      uVar8 = uVar8 >> 1;
    } while (uVar8 != 0);
    dVar17 = dVar17 * dVar16;
  }
  return dVar17;
}

