// Function: FUN_140366c80
// Addr: 140366c80
// Size: 857 bytes


void FUN_140366c80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  
  puVar17 = param_3 + 4;
  if (param_2 < param_3) {
    while( true ) {
      uVar2 = *(uint *)(param_3 + 2);
      uVar3 = *(uint *)(param_3 + -2);
      pcVar4 = (char *)param_3[1];
      pcVar5 = (char *)param_3[-3];
      uVar6 = uVar2;
      if (uVar3 <= uVar2) {
        uVar6 = uVar3;
      }
      iVar14 = strncmp(pcVar5,pcVar4,(ulonglong)uVar6);
      iVar18 = uVar3 - uVar2;
      if (iVar14 != 0) {
        iVar18 = iVar14;
      }
      if (iVar18 < 0) break;
      uVar6 = uVar3;
      if (uVar2 <= uVar3) {
        uVar6 = uVar2;
      }
      iVar14 = strncmp(pcVar4,pcVar5,(ulonglong)uVar6);
      iVar18 = uVar2 - uVar3;
      if (iVar14 != 0) {
        iVar18 = iVar14;
      }
      if ((iVar18 < 0) || (param_3 = param_3 + -4, param_3 <= param_2)) break;
    }
  }
  puVar12 = puVar17;
  puVar15 = param_3;
  if (puVar17 < param_4) {
    uVar2 = *(uint *)(param_3 + 2);
    pcVar4 = (char *)param_3[1];
    while( true ) {
      uVar3 = *(uint *)(puVar17 + 2);
      pcVar5 = (char *)puVar17[1];
      uVar6 = uVar2;
      if (uVar3 <= uVar2) {
        uVar6 = uVar3;
      }
      iVar14 = strncmp(pcVar5,pcVar4,(ulonglong)uVar6);
      iVar18 = uVar3 - uVar2;
      if (iVar14 != 0) {
        iVar18 = iVar14;
      }
      puVar12 = puVar17;
      if (iVar18 < 0) break;
      uVar6 = uVar3;
      if (uVar2 <= uVar3) {
        uVar6 = uVar2;
      }
      iVar14 = strncmp(pcVar4,pcVar5,(ulonglong)uVar6);
      iVar18 = uVar2 - uVar3;
      if (iVar14 != 0) {
        iVar18 = iVar14;
      }
      if ((iVar18 < 0) || (puVar17 = puVar17 + 4, puVar12 = puVar17, param_4 <= puVar17)) break;
    }
  }
joined_r0x000140366d93:
  do {
    puVar13 = param_3;
    if (param_4 <= puVar12) {
joined_r0x000140366e32:
      for (; param_2 < puVar13; puVar13 = puVar13 + -4) {
        uVar2 = *(uint *)(puVar15 + 2);
        uVar3 = *(uint *)(puVar13 + -2);
        pcVar4 = (char *)puVar15[1];
        uVar6 = uVar2;
        if (uVar3 <= uVar2) {
          uVar6 = uVar3;
        }
        iVar14 = strncmp((char *)puVar13[-3],pcVar4,(ulonglong)uVar6);
        iVar18 = uVar3 - uVar2;
        if (iVar14 != 0) {
          iVar18 = iVar14;
        }
        puVar16 = puVar15;
        if (-1 < iVar18) {
          uVar6 = uVar3;
          if (uVar2 <= uVar3) {
            uVar6 = uVar2;
          }
          iVar14 = strncmp(pcVar4,(char *)puVar13[-3],(ulonglong)uVar6);
          iVar18 = uVar2 - uVar3;
          if (iVar14 != 0) {
            iVar18 = iVar14;
          }
          if (iVar18 < 0) break;
          puVar1 = puVar13 + -4;
          puVar16 = puVar15 + -4;
          if (puVar16 != puVar1) {
            uVar7 = puVar13[-3];
            uVar8 = *puVar16;
            uVar9 = puVar15[-3];
            uVar10 = puVar15[-2];
            uVar11 = puVar15[-1];
            *puVar16 = *puVar1;
            puVar15[-3] = uVar7;
            uVar7 = puVar13[-1];
            puVar15[-2] = puVar13[-2];
            puVar15[-1] = uVar7;
            *puVar1 = uVar8;
            puVar13[-3] = uVar9;
            puVar13[-2] = uVar10;
            puVar13[-1] = uVar11;
          }
        }
        puVar15 = puVar16;
      }
      if (puVar13 == param_2) {
        if (puVar12 == param_4) {
          *param_1 = puVar15;
          param_1[1] = puVar17;
          return;
        }
        if (puVar17 != puVar12) {
          uVar7 = puVar17[1];
          uVar8 = *puVar15;
          uVar9 = puVar15[1];
          uVar10 = puVar15[2];
          uVar11 = puVar15[3];
          *puVar15 = *puVar17;
          puVar15[1] = uVar7;
          uVar7 = puVar17[3];
          puVar15[2] = puVar17[2];
          puVar15[3] = uVar7;
          *puVar17 = uVar8;
          puVar17[1] = uVar9;
          puVar17[2] = uVar10;
          puVar17[3] = uVar11;
        }
        uVar7 = puVar12[1];
        uVar8 = *puVar15;
        uVar9 = puVar15[1];
        uVar10 = puVar15[2];
        uVar11 = puVar15[3];
        *puVar15 = *puVar12;
        puVar15[1] = uVar7;
        uVar7 = puVar12[3];
        puVar15[2] = puVar12[2];
        puVar15[3] = uVar7;
        *puVar12 = uVar8;
        puVar12[1] = uVar9;
        puVar12[2] = uVar10;
        puVar12[3] = uVar11;
        puVar17 = puVar17 + 4;
        puVar12 = puVar12 + 4;
        param_3 = puVar13;
        puVar15 = puVar15 + 4;
      }
      else {
        param_3 = puVar13 + -4;
        if (puVar12 == param_4) {
          puVar16 = puVar15 + -4;
          if (param_3 != puVar16) {
            uVar7 = puVar15[-3];
            uVar8 = *param_3;
            uVar9 = puVar13[-3];
            uVar10 = puVar13[-2];
            uVar11 = puVar13[-1];
            *param_3 = *puVar16;
            puVar13[-3] = uVar7;
            uVar7 = puVar15[-1];
            puVar13[-2] = puVar15[-2];
            puVar13[-1] = uVar7;
            *puVar16 = uVar8;
            puVar15[-3] = uVar9;
            puVar15[-2] = uVar10;
            puVar15[-1] = uVar11;
          }
          uVar7 = puVar17[-3];
          uVar8 = *puVar16;
          uVar9 = puVar15[-3];
          uVar10 = puVar15[-2];
          uVar11 = puVar15[-1];
          *puVar16 = puVar17[-4];
          puVar15[-3] = uVar7;
          uVar7 = puVar17[-1];
          puVar15[-2] = puVar17[-2];
          puVar15[-1] = uVar7;
          puVar17[-4] = uVar8;
          puVar17[-3] = uVar9;
          puVar17[-2] = uVar10;
          puVar17[-1] = uVar11;
          puVar17 = puVar17 + -4;
          puVar15 = puVar16;
        }
        else {
          uVar7 = *puVar12;
          uVar8 = puVar12[1];
          uVar9 = puVar12[2];
          uVar10 = puVar12[3];
          uVar11 = puVar13[-3];
          *puVar12 = *param_3;
          puVar12[1] = uVar11;
          uVar11 = puVar13[-1];
          puVar12[2] = puVar13[-2];
          puVar12[3] = uVar11;
          *param_3 = uVar7;
          puVar13[-3] = uVar8;
          puVar13[-2] = uVar9;
          puVar13[-1] = uVar10;
          puVar12 = puVar12 + 4;
        }
      }
      goto joined_r0x000140366d93;
    }
    uVar2 = *(uint *)(puVar12 + 2);
    uVar3 = *(uint *)(puVar15 + 2);
    uVar6 = uVar2;
    if (uVar3 <= uVar2) {
      uVar6 = uVar3;
    }
    iVar14 = strncmp((char *)puVar15[1],(char *)puVar12[1],(ulonglong)uVar6);
    iVar18 = uVar3 - uVar2;
    if (iVar14 != 0) {
      iVar18 = iVar14;
    }
    if (-1 < iVar18) {
      uVar6 = uVar3;
      if (uVar2 <= uVar3) {
        uVar6 = uVar2;
      }
      iVar14 = strncmp((char *)puVar12[1],(char *)puVar15[1],(ulonglong)uVar6);
      iVar18 = uVar2 - uVar3;
      if (iVar14 != 0) {
        iVar18 = iVar14;
      }
      if (iVar18 < 0) goto joined_r0x000140366e32;
      if (puVar17 != puVar12) {
        uVar7 = puVar12[1];
        uVar8 = *puVar17;
        uVar9 = puVar17[1];
        uVar10 = puVar17[2];
        uVar11 = puVar17[3];
        *puVar17 = *puVar12;
        puVar17[1] = uVar7;
        uVar7 = puVar12[3];
        puVar17[2] = puVar12[2];
        puVar17[3] = uVar7;
        *puVar12 = uVar8;
        puVar12[1] = uVar9;
        puVar12[2] = uVar10;
        puVar12[3] = uVar11;
      }
      puVar17 = puVar17 + 4;
    }
    puVar12 = puVar12 + 4;
  } while( true );
}

