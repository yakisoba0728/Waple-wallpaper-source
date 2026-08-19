// Function: FUN_14034e6c0
// Addr: 14034e6c0
// Size: 1167 bytes


undefined8
FUN_14034e6c0(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
             undefined1 param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char cVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  char *pcVar11;
  ushort *puVar12;
  undefined8 uVar13;
  uint uVar14;
  char *pcVar15;
  undefined1 *puVar16;
  uint uVar17;
  undefined1 *puVar18;
  char *pcVar19;
  int iVar20;
  
  if (param_5 < 0x65) {
    puVar16 = (undefined1 *)((ulonglong)*(uint *)(param_1 + 0x2c) + *(longlong *)(param_1 + 0x38));
    puVar18 = puVar16;
    for (iVar20 = *(int *)(param_1 + 0x30); iVar20 != 0; iVar20 = iVar20 + -1) {
      uVar17 = (uint)CONCAT11(*puVar18,puVar18[1]);
      if ((uVar17 <= param_2) && (param_2 <= CONCAT11(puVar18[2],puVar18[3]))) {
        pcVar11 = *(char **)(param_1 + 0x40);
        uVar14 = CONCAT31(CONCAT21(CONCAT11(puVar18[4],puVar18[5]),puVar18[6]),puVar18[7]);
        if ((uint)((int)pcVar11 - (int)puVar16) < uVar14) goto LAB_14034eb99;
        puVar16 = puVar16 + uVar14;
        pcVar15 = puVar16 + 8;
        if ((pcVar15 <= pcVar11) && (CONCAT11(*puVar16,puVar16[1]) - 1 < 0x13)) {
          uVar1 = puVar16[2];
          uVar2 = puVar16[3];
          uVar3 = puVar16[4];
          uVar4 = puVar16[5];
          uVar5 = puVar16[6];
          uVar6 = puVar16[7];
          switch((uint)CONCAT11(*puVar16,puVar16[1])) {
          case 1:
            pcVar15 = pcVar15 + (param_2 - uVar17) * 4;
            if (pcVar15 + 8 <= pcVar11) {
              uVar14 = CONCAT31(CONCAT21(CONCAT11(*pcVar15,pcVar15[1]),pcVar15[2]),pcVar15[3]);
              uVar17 = CONCAT31(CONCAT21(CONCAT11(pcVar15[4],pcVar15[5]),pcVar15[6]),pcVar15[7]);
              if (uVar14 != uVar17) goto LAB_14034eb32;
            }
            break;
          case 2:
            if ((puVar16 + 0x14 <= pcVar11) && (puVar16 + 0x11 <= pcVar11)) {
              puVar12 = *(ushort **)(param_1 + 0x18);
              cVar7 = *pcVar15;
              uVar8 = puVar16[9];
              uVar9 = puVar16[10];
              uVar10 = puVar16[0xb];
              *puVar12 = (ushort)(byte)puVar16[0xc];
              puVar12[1] = (ushort)(byte)puVar16[0xd];
              puVar12[2] = (short)(char)puVar16[0xe];
              puVar12[3] = (short)(char)puVar16[0xf];
              puVar12[4] = (ushort)(byte)puVar16[0x10];
              if (puVar16 + 0x14 <= pcVar11) {
                puVar12[5] = (short)(char)puVar16[0x11];
                puVar12[6] = (short)(char)puVar16[0x12];
                puVar12[7] = (ushort)(byte)puVar16[0x13];
                *(undefined1 *)(param_1 + 0x20) = 1;
                iVar20 = CONCAT31(CONCAT21(CONCAT11(cVar7,uVar8),uVar9),uVar10);
                uVar14 = (param_2 - uVar17) * iVar20;
                goto LAB_14034eb0b;
              }
            }
            break;
          case 3:
            pcVar15 = pcVar15 + (param_2 - uVar17) * 2;
            if (pcVar15 + 4 <= pcVar11) {
              uVar14 = (uint)CONCAT11(*pcVar15,pcVar15[1]);
              uVar17 = (uint)CONCAT11(pcVar15[2],pcVar15[3]);
              if (uVar14 != uVar17) goto LAB_14034eb32;
            }
            break;
          case 4:
            pcVar19 = puVar16 + 0xc;
            if ((((pcVar19 <= pcVar11) && (puVar16 + 0x10 <= pcVar11)) &&
                (uVar17 = CONCAT31(CONCAT21(CONCAT11(*pcVar15,puVar16[9]),puVar16[10]),puVar16[0xb])
                , uVar17 <= (int)((longlong)pcVar11 - (longlong)pcVar19 >> 2) - 1U)) &&
               (uVar14 = 0, uVar17 != 0)) goto LAB_14034e9b0;
            break;
          case 5:
          case 0x13:
            if ((puVar16 + 0x18 <= pcVar11) && (puVar16 + 0x11 <= pcVar11)) {
              puVar12 = *(ushort **)(param_1 + 0x18);
              cVar7 = *pcVar15;
              uVar8 = puVar16[9];
              uVar9 = puVar16[10];
              uVar10 = puVar16[0xb];
              *puVar12 = (ushort)(byte)puVar16[0xc];
              puVar12[1] = (ushort)(byte)puVar16[0xd];
              puVar12[2] = (short)(char)puVar16[0xe];
              puVar12[3] = (short)(char)puVar16[0xf];
              puVar12[4] = (ushort)(byte)puVar16[0x10];
              if (puVar16 + 0x14 <= pcVar11) {
                puVar18 = puVar16 + 0x18;
                puVar12[5] = (short)(char)puVar16[0x11];
                puVar12[6] = (short)(char)puVar16[0x12];
                puVar12[7] = (ushort)(byte)puVar16[0x13];
                *(undefined1 *)(param_1 + 0x20) = 1;
                uVar17 = CONCAT31(CONCAT21(CONCAT11(puVar16[0x14],puVar16[0x15]),puVar16[0x16]),
                                  puVar16[0x17]);
                if ((uVar17 <= (uint)((longlong)pcVar11 - (longlong)puVar18 >> 1)) &&
                   (uVar14 = 0, uVar17 != 0)) goto LAB_14034ead0;
              }
            }
          }
        }
        break;
      }
      puVar18 = puVar18 + 8;
    }
switchD_14034e7fe_caseD_6:
    uVar13 = 0x9d;
    if (param_5 != 0) {
      uVar13 = 0x15;
    }
  }
  else {
LAB_14034eb99:
    uVar13 = 8;
  }
  return uVar13;
LAB_14034ead0:
  if (CONCAT11(*puVar18,puVar18[1]) != param_2) goto code_r0x00014034eae6;
  iVar20 = CONCAT31(CONCAT21(CONCAT11(cVar7,uVar8),uVar9),uVar10);
  uVar14 = iVar20 * uVar14;
LAB_14034eb0b:
  uVar17 = iVar20 + uVar14;
  goto LAB_14034eb32;
code_r0x00014034eae6:
  uVar14 = uVar14 + 1;
  puVar18 = puVar18 + 2;
  if (uVar17 <= uVar14) goto switchD_14034e7fe_caseD_6;
  goto LAB_14034ead0;
LAB_14034e9b0:
  if (CONCAT11(*pcVar19,pcVar19[1]) != param_2) goto code_r0x00014034e9c2;
  uVar14 = (uint)CONCAT11(pcVar19[2],pcVar19[3]);
  uVar17 = (uint)CONCAT11(pcVar19[6],pcVar19[7]);
LAB_14034eb32:
  if (uVar14 <= uVar17) {
    uVar13 = func_0x00014034df90(param_1,CONCAT11(uVar1,uVar2),
                                 CONCAT31(CONCAT21(CONCAT11(uVar3,uVar4),uVar5),uVar6) + uVar14,
                                 uVar17 - uVar14,param_3,param_4,param_5,param_6);
    return uVar13;
  }
  goto switchD_14034e7fe_caseD_6;
code_r0x00014034e9c2:
  uVar14 = uVar14 + 1;
  pcVar19 = pcVar19 + 4;
  if (uVar17 <= uVar14) goto switchD_14034e7fe_caseD_6;
  goto LAB_14034e9b0;
}

