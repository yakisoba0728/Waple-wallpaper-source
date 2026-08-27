// Function: FUN_140331c90
// Addr: 140331c90
// Size: 966 bytes


undefined8 FUN_140331c90(longlong param_1,byte *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  byte *pbVar9;
  int *piVar10;
  int iVar11;
  longlong lVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  
  puVar1 = (ulonglong *)(param_1 + 0x4b8);
  *(ulonglong **)(param_1 + 0x650) = puVar1;
  *(longlong *)(param_1 + 0x4b0) = param_1 + 0xb0;
  pbVar9 = param_2 + (param_3 & 0xffffffff);
  *(undefined4 *)(param_1 + 0x58) = 0;
  bVar3 = false;
  *(byte **)(param_1 + 0x4c0) = param_2;
  *(byte **)(param_1 + 0x4c8) = pbVar9;
  *puVar1 = (ulonglong)param_2;
  puVar14 = puVar1;
  if (param_2 < pbVar9) {
    do {
      bVar2 = *param_2;
      lVar12 = 0;
      pbVar15 = param_2 + 1;
      iVar11 = 0;
      iVar7 = 0;
      pbVar16 = pbVar15;
      switch(bVar2) {
      case 1:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xe:
      case 0xf:
      case 0x15:
      case 0x16:
      case 0x1e:
      case 0x1f:
        goto switchD_140331d22_caseD_1;
      default:
        if (bVar2 < 0x20) {
          return 0xa0;
        }
        if (bVar2 < 0xf7) {
          iVar7 = bVar2 - 0x8b;
        }
        else {
          pbVar16 = param_2 + 2;
          if (pbVar9 < pbVar16) {
            return 0xa0;
          }
          if (bVar2 < 0xfb) {
            iVar7 = (*pbVar15 - 0xf694) + (uint)bVar2 * 0x100;
          }
          else {
            iVar7 = ((uint)bVar2 * -0x100 + 0xfa94) - (uint)*pbVar15;
          }
        }
        if (bVar3) goto LAB_140331dd9;
        piVar10 = *(int **)(param_1 + 0x4b0);
        iVar7 = iVar7 << 0x10;
        lVar6 = (longlong)piVar10 + (-0xb0 - param_1) >> 2;
        goto LAB_140331dfa;
      case 10:
        lVar12 = 0x16;
        break;
      case 0xb:
        lVar12 = 0x18;
        break;
      case 0xc:
        if (pbVar9 <= pbVar15) {
          return 0xa0;
        }
        if (*pbVar15 == 7) {
          lVar12 = 4;
          pbVar16 = param_2 + 2;
          iVar7 = iVar11;
        }
        else {
          if (*pbVar15 != 0xc) {
            return 0xa0;
          }
          lVar12 = 0x14;
          pbVar16 = param_2 + 2;
          iVar7 = iVar11;
        }
        break;
      case 0xd:
        lVar12 = 2;
        iVar7 = iVar11;
        break;
      case 0xff:
        pbVar16 = param_2 + 5;
        if (pbVar9 < pbVar16) {
          return 0xa0;
        }
        iVar7 = CONCAT31(CONCAT21(CONCAT11(*pbVar15,param_2[2]),param_2[3]),param_2[4]);
        if (iVar7 + 32000U < 0xfa01) {
          if (!bVar3) {
            iVar7 = iVar7 << 0x10;
          }
        }
        else {
          if (bVar3) {
            return 0xa0;
          }
          bVar3 = true;
        }
      }
      if (((bVar3) && ((int)lVar12 != 0)) && ((int)lVar12 != 0x14)) {
        return 0xa0;
      }
LAB_140331dd9:
      piVar10 = *(int **)(param_1 + 0x4b0);
      lVar6 = (longlong)piVar10 + (-0xb0 - param_1) >> 2;
      iVar11 = (int)lVar12;
      if (iVar11 == 0) {
LAB_140331dfa:
        if (0xff < lVar6) {
          return 0xa0;
        }
        *piVar10 = iVar7;
        piVar10 = piVar10 + 1;
      }
      else {
        if (lVar6 < *(int *)(&UNK_140441600 + lVar12 * 4)) {
          return 0xa1;
        }
        piVar10 = piVar10 + -(longlong)*(int *)(&UNK_140441600 + lVar12 * 4);
        if (iVar11 == 2) {
          *(undefined4 *)(param_1 + 0x58) = 1;
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *piVar10;
          *(int *)(param_1 + 0x40) = piVar10[1];
          *(undefined4 *)(param_1 + 0x44) = 0;
          return 0;
        }
        if (iVar11 == 4) {
          *(undefined4 *)(param_1 + 0x58) = 1;
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *piVar10;
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + piVar10[1];
          *(int *)(param_1 + 0x40) = piVar10[2];
          *(int *)(param_1 + 0x44) = piVar10[3];
          return 0;
        }
        if (iVar11 == 0x14) {
          iVar7 = FUN_1402efa10(*piVar10);
          *piVar10 = iVar7;
          piVar10 = piVar10 + 1;
          bVar3 = false;
        }
        else if (iVar11 == 0x16) {
          iVar7 = (int)*(short *)((longlong)piVar10 + 2);
          if (*(longlong *)(param_1 + 0x688) != 0) {
            piVar4 = (int *)FUN_1402f7790();
            if (piVar4 == (int *)0x0) {
              return 0xa0;
            }
            iVar7 = *piVar4;
          }
          if (iVar7 < 0) {
            return 0xa0;
          }
          if (*(int *)(param_1 + 0x674) <= iVar7) {
            return 0xa0;
          }
          if (0x17f < (longlong)puVar14 + (-0x4b8 - param_1)) {
            return 0xa0;
          }
          *puVar14 = (ulonglong)pbVar16;
          puVar13 = puVar14 + 3;
          lVar12 = (longlong)iVar7;
          uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x678) + lVar12 * 8);
          puVar14[4] = uVar8;
          if (*(longlong *)(param_1 + 0x680) == 0) {
            iVar7 = *(int *)(param_1 + 0x670);
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            uVar8 = uVar8 + (longlong)iVar7;
            puVar14[4] = uVar8;
            uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x678) + 8 + lVar12 * 8);
          }
          else {
            uVar5 = *(uint *)(*(longlong *)(param_1 + 0x680) + lVar12 * 4) + uVar8;
          }
          puVar14[5] = uVar5;
          *puVar13 = uVar8;
          if (uVar8 == 0) {
            return 0xa0;
          }
          *(ulonglong **)(param_1 + 0x650) = puVar13;
          pbVar16 = (byte *)puVar14[4];
          pbVar9 = (byte *)puVar14[5];
          puVar14 = puVar13;
        }
        else {
          if (iVar11 != 0x18) {
            return 0xa0;
          }
          if (puVar14 <= puVar1) {
            return 0xa0;
          }
          pbVar16 = (byte *)puVar14[-3];
          pbVar9 = (byte *)puVar14[-1];
          *(ulonglong **)(param_1 + 0x650) = puVar14 + -3;
          puVar14 = puVar14 + -3;
        }
      }
      *(int **)(param_1 + 0x4b0) = piVar10;
      param_2 = pbVar16;
    } while (pbVar16 < pbVar9);
  }
switchD_140331d22_caseD_1:
  return 0xa0;
}

