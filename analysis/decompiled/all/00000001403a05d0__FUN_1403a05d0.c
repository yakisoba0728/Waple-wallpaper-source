// Function: FUN_1403a05d0
// Addr: 1403a05d0
// Size: 4572 bytes


void FUN_1403a05d0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  
  if ((*(byte *)(param_2 + 0x18) & 0x10) == 0) {
    uVar4 = *(uint *)(param_2 + 0x60);
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
    uVar5 = *(uint *)(param_2 + 0x3c);
    *(undefined2 *)(param_2 + 0x59) = 1;
    *(undefined4 *)(param_2 + 0x5c) = 0;
    *(undefined4 *)(param_2 + 100) = 0;
    if (uVar5 < 0x4d6f646a) {
      if (uVar5 == 0x4d6f6469) {
        if (1 < uVar4) {
          uVar12 = 0;
          do {
            if (*(char *)(param_2 + 0x58) == '\0') break;
            lVar13 = *(longlong *)(param_2 + 0x70);
            bVar16 = false;
            iVar14 = *(int *)(lVar13 + uVar12 * 0x14);
            if (((iVar14 == 0x11600) || (iVar14 == 0x11601)) &&
               ((iVar14 = *(int *)(lVar13 + (ulonglong)((int)uVar12 + 1) * 0x14), iVar14 == 0x11639
                || (iVar14 == 0x1163a)))) {
              bVar16 = true;
            }
            if (*(char *)(param_2 + 0x59) == '\0') {
LAB_1403a0f0b:
              *(int *)(param_2 + 0x5c) = (int)uVar12 + 1;
            }
            else {
              if ((*(longlong *)(param_2 + 0x78) == lVar13) &&
                 (*(int *)(param_2 + 100) == (int)uVar12)) {
LAB_1403a0f08:
                *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
                goto LAB_1403a0f0b;
              }
              cVar11 = FUN_1403bf1a0(param_2,*(int *)(param_2 + 100) + 1);
              if (cVar11 != '\0') {
                uVar5 = *(uint *)(param_2 + 0x5c);
                lVar13 = *(longlong *)(param_2 + 0x70);
                uVar6 = *(uint *)(param_2 + 100);
                puVar1 = (undefined4 *)(lVar13 + (ulonglong)uVar5 * 0x14);
                uVar8 = puVar1[1];
                uVar9 = puVar1[2];
                uVar10 = puVar1[3];
                lVar7 = *(longlong *)(param_2 + 0x78);
                puVar2 = (undefined4 *)(lVar7 + (ulonglong)uVar6 * 0x14);
                *puVar2 = *puVar1;
                puVar2[1] = uVar8;
                puVar2[2] = uVar9;
                puVar2[3] = uVar10;
                *(undefined4 *)(lVar7 + (ulonglong)uVar6 * 0x14 + 0x10) =
                     *(undefined4 *)(lVar13 + 0x10 + (ulonglong)uVar5 * 0x14);
                uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
                goto LAB_1403a0f08;
              }
            }
            if (bVar16) {
              cVar11 = FUN_1403eaf70(param_2,0,1);
              if (cVar11 != '\0') {
                uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
                if (*(uint *)(param_2 + 0x5c) < *(uint *)(param_2 + 0x60)) {
                  lVar13 = *(longlong *)(param_2 + 0x70);
                }
                else {
                  lVar13 = *(longlong *)(param_2 + 0x78);
                  uVar12 = (ulonglong)(*(int *)(param_2 + 100) - 1);
                  if (*(int *)(param_2 + 100) == 0) {
                    uVar12 = 0;
                  }
                }
                puVar1 = (undefined4 *)(lVar13 + uVar12 * 0x14);
                uVar8 = puVar1[1];
                uVar9 = puVar1[2];
                uVar10 = puVar1[3];
                uVar5 = *(uint *)(param_2 + 100);
                lVar7 = *(longlong *)(param_2 + 0x78);
                puVar2 = (undefined4 *)(lVar7 + (ulonglong)uVar5 * 0x14);
                *puVar2 = *puVar1;
                puVar2[1] = uVar8;
                puVar2[2] = uVar9;
                puVar2[3] = uVar10;
                puVar1 = (undefined4 *)(lVar7 + (ulonglong)uVar5 * 0x14);
                puVar1[4] = *(undefined4 *)(lVar13 + uVar12 * 0x14 + 0x10);
                *puVar1 = 0x25cc;
                *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
                *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
              }
              uVar12 = (ulonglong)(*(int *)(param_2 + 100) - 1);
              if (*(int *)(param_2 + 100) == 0) {
                uVar12 = 0;
              }
              puVar3 = (ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + uVar12 * 0x14);
              *puVar3 = *puVar3 & 0xff7f;
              if (*(char *)(param_2 + 0x59) != '\0') {
                if ((*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) ||
                   (*(int *)(param_2 + 100) != *(int *)(param_2 + 0x5c))) {
                  cVar11 = FUN_1403bf1a0(param_2,*(int *)(param_2 + 100) + 1);
                  if (cVar11 == '\0') goto LAB_1403a0ffb;
                  uVar5 = *(uint *)(param_2 + 0x5c);
                  lVar13 = *(longlong *)(param_2 + 0x70);
                  uVar6 = *(uint *)(param_2 + 100);
                  puVar1 = (undefined4 *)(lVar13 + (ulonglong)uVar5 * 0x14);
                  uVar8 = puVar1[1];
                  uVar9 = puVar1[2];
                  uVar10 = puVar1[3];
                  lVar7 = *(longlong *)(param_2 + 0x78);
                  puVar2 = (undefined4 *)(lVar7 + (ulonglong)uVar6 * 0x14);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar8;
                  puVar2[2] = uVar9;
                  puVar2[3] = uVar10;
                  *(undefined4 *)(lVar7 + (ulonglong)uVar6 * 0x14 + 0x10) =
                       *(undefined4 *)(lVar13 + 0x10 + (ulonglong)uVar5 * 0x14);
                }
                *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
              }
              *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
            }
LAB_1403a0ffb:
            uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
          } while (*(uint *)(param_2 + 0x5c) + 1 < uVar4);
        }
      }
      else if (uVar5 < 0x47757276) {
        if (uVar5 == 0x47757275) {
          if (1 < uVar4) {
            uVar12 = 0;
            do {
              if (*(char *)(param_2 + 0x58) == '\0') break;
              lVar13 = *(longlong *)(param_2 + 0x70);
              bVar16 = false;
              iVar15 = (int)uVar12;
              iVar14 = *(int *)(lVar13 + uVar12 * 0x14);
              if (iVar14 == 0xa05) {
                iVar14 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14);
                if ((iVar14 == 0xa3e) || (iVar14 == 0xa48)) goto LAB_1403a0ae8;
                bVar17 = iVar14 == 0xa4c;
LAB_1403a0ae6:
                if (bVar17) goto LAB_1403a0ae8;
              }
              else {
                if (iVar14 == 0xa72) {
                  iVar14 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14);
                  if ((iVar14 != 0xa3f) && (iVar14 != 0xa40)) {
                    bVar17 = iVar14 == 0xa47;
                    goto LAB_1403a0ae6;
                  }
                }
                else {
                  if (iVar14 != 0xa73) goto LAB_1403a0aeb;
                  iVar14 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14);
                  if ((iVar14 != 0xa41) && (iVar14 != 0xa42)) {
                    bVar17 = iVar14 == 0xa4b;
                    goto LAB_1403a0ae6;
                  }
                }
LAB_1403a0ae8:
                bVar16 = true;
              }
LAB_1403a0aeb:
              if (*(char *)(param_2 + 0x59) == '\0') {
LAB_1403a0b41:
                *(int *)(param_2 + 0x5c) = (int)uVar12 + 1;
              }
              else {
                if ((*(longlong *)(param_2 + 0x78) == lVar13) && (*(int *)(param_2 + 100) == iVar15)
                   ) {
LAB_1403a0b3e:
                  *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
                  goto LAB_1403a0b41;
                }
                cVar11 = FUN_1403bf1a0(param_2,*(int *)(param_2 + 100) + 1);
                if (cVar11 != '\0') {
                  uVar5 = *(uint *)(param_2 + 0x5c);
                  lVar13 = *(longlong *)(param_2 + 0x70);
                  uVar6 = *(uint *)(param_2 + 100);
                  puVar1 = (undefined4 *)(lVar13 + (ulonglong)uVar5 * 0x14);
                  uVar8 = puVar1[1];
                  uVar9 = puVar1[2];
                  uVar10 = puVar1[3];
                  lVar7 = *(longlong *)(param_2 + 0x78);
                  puVar2 = (undefined4 *)(lVar7 + (ulonglong)uVar6 * 0x14);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar8;
                  puVar2[2] = uVar9;
                  puVar2[3] = uVar10;
                  *(undefined4 *)(lVar7 + (ulonglong)uVar6 * 0x14 + 0x10) =
                       *(undefined4 *)(lVar13 + 0x10 + (ulonglong)uVar5 * 0x14);
                  uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
                  goto LAB_1403a0b3e;
                }
              }
              if (bVar16) {
                FUN_1403ed4d0(param_2,0x25cc);
                uVar12 = (ulonglong)(*(int *)(param_2 + 100) - 1);
                if (*(int *)(param_2 + 100) == 0) {
                  uVar12 = 0;
                }
                puVar3 = (ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + uVar12 * 0x14);
                *puVar3 = *puVar3 & 0xff7f;
                FUN_1403ecfd0(param_2);
              }
              uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
            } while (*(uint *)(param_2 + 0x5c) + 1 < uVar4);
          }
        }
        else if (uVar5 == 0x42656e67) {
          if (1 < uVar4) {
            uVar12 = 0;
            do {
              if (*(char *)(param_2 + 0x58) == '\0') break;
              lVar13 = *(longlong *)(param_2 + 0x70);
              bVar16 = false;
              iVar14 = *(int *)(lVar13 + uVar12 * 0x14);
              iVar15 = (int)uVar12;
              if (iVar14 == 0x985) {
                bVar16 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14) == 0x9be;
              }
              else if (iVar14 == 0x98b) {
                bVar16 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14) == 0x9c3;
              }
              else if (iVar14 == 0x98c) {
                bVar16 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14) == 0x9e2;
              }
              FUN_1403ecfd0(param_2);
              if (bVar16) {
                FUN_1403ed4d0(param_2,0x25cc);
                uVar12 = (ulonglong)(*(int *)(param_2 + 100) - 1);
                if (*(int *)(param_2 + 100) == 0) {
                  uVar12 = 0;
                }
                puVar3 = (ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + uVar12 * 0x14);
                *puVar3 = *puVar3 & 0xff7f;
                FUN_1403ecfd0(param_2);
              }
              uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
            } while (*(uint *)(param_2 + 0x5c) + 1 < uVar4);
          }
        }
        else if (uVar5 == 0x42726168) {
          if (1 < uVar4) {
            uVar12 = 0;
            do {
              if (*(char *)(param_2 + 0x58) == '\0') break;
              lVar13 = *(longlong *)(param_2 + 0x70);
              bVar16 = false;
              iVar14 = *(int *)(lVar13 + uVar12 * 0x14);
              iVar15 = (int)uVar12;
              if (iVar14 == 0x11005) {
                bVar16 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14) == 0x11038;
              }
              else if (iVar14 == 0x1100b) {
                bVar16 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14) == 0x1103e;
              }
              else if (iVar14 == 0x1100f) {
                bVar16 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14) == 0x11042;
              }
              FUN_1403ecfd0(param_2);
              if (bVar16) {
                FUN_1403ed4d0(param_2,0x25cc);
                uVar12 = (ulonglong)(*(int *)(param_2 + 100) - 1);
                if (*(int *)(param_2 + 100) == 0) {
                  uVar12 = 0;
                }
                puVar3 = (ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + uVar12 * 0x14);
                *puVar3 = *puVar3 & 0xff7f;
                FUN_1403ecfd0(param_2);
              }
              uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
            } while (*(uint *)(param_2 + 0x5c) + 1 < uVar4);
          }
        }
        else if (uVar5 == 0x44657661) {
          if (1 < uVar4) {
            uVar12 = 0;
            do {
              if (*(char *)(param_2 + 0x58) == '\0') break;
              lVar13 = *(longlong *)(param_2 + 0x70);
              bVar16 = false;
              iVar15 = (int)uVar12;
              iVar14 = *(int *)(lVar13 + uVar12 * 0x14);
              if (iVar14 == 0x905) {
                switch(*(undefined4 *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14)) {
                case 0x93a:
                case 0x93b:
                case 0x93e:
                case 0x945:
                case 0x946:
                case 0x949:
                case 0x94a:
                case 0x94b:
                case 0x94c:
                case 0x94f:
                case 0x956:
                case 0x957:
switchD_1403a08a7_caseD_93a:
                  FUN_1403ecfd0(param_2);
                  break;
                default:
                  goto switchD_1403a08a7_caseD_93c;
                }
LAB_1403a0809:
                FUN_1403ed4d0(param_2,0x25cc);
                uVar12 = (ulonglong)(*(int *)(param_2 + 100) - 1);
                if (*(int *)(param_2 + 100) == 0) {
                  uVar12 = 0;
                }
                puVar3 = (ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + uVar12 * 0x14);
                *puVar3 = *puVar3 & 0xff7f;
                FUN_1403ecfd0(param_2);
              }
              else {
                if (iVar14 == 0x906) {
                  iVar14 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14);
                  if ((iVar14 != 0x93a) && (iVar14 != 0x945)) {
                    iVar14 = iVar14 + -0x946;
LAB_1403a0869:
                    if (((iVar14 != 0) && (iVar14 != 1)) && (iVar14 != 2))
                    goto switchD_1403a08a7_caseD_93c;
                  }
                  bVar16 = true;
                }
                else if (iVar14 == 0x909) {
                  bVar16 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14) == 0x941;
                }
                else {
                  if (iVar14 == 0x90f) {
                    iVar14 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14) + -0x945;
                    goto LAB_1403a0869;
                  }
                  if (((iVar14 == 0x930) &&
                      (*(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14) == 0x94d)) &&
                     ((iVar15 + 2U < uVar4 &&
                      (*(int *)(lVar13 + (ulonglong)(iVar15 + 2U) * 0x14) == 0x907)))) {
                    FUN_1403ecfd0(param_2);
                    goto switchD_1403a08a7_caseD_93a;
                  }
                }
switchD_1403a08a7_caseD_93c:
                FUN_1403ecfd0(param_2);
                if (bVar16) goto LAB_1403a0809;
              }
              uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
            } while (*(uint *)(param_2 + 0x5c) + 1 < uVar4);
          }
        }
        else if ((uVar5 == 0x47756a72) && (1 < uVar4)) {
          uVar12 = 0;
          do {
            if (*(char *)(param_2 + 0x58) == '\0') break;
            lVar13 = *(longlong *)(param_2 + 0x70);
            bVar16 = false;
            iVar14 = *(int *)(lVar13 + uVar12 * 0x14);
            if (iVar14 == 0xa85) {
              switch(*(undefined4 *)(lVar13 + (ulonglong)((int)uVar12 + 1) * 0x14)) {
              case 0xabe:
              case 0xac5:
              case 0xac7:
              case 0xac8:
              case 0xac9:
              case 0xacb:
              case 0xacc:
                FUN_1403ecfd0(param_2);
                break;
              default:
                goto switchD_1403a0731_caseD_abf;
              }
LAB_1403a06cc:
              FUN_1403ed4d0(param_2,0x25cc);
              uVar12 = (ulonglong)(*(int *)(param_2 + 100) - 1);
              if (*(int *)(param_2 + 100) == 0) {
                uVar12 = 0;
              }
              puVar3 = (ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + uVar12 * 0x14);
              *puVar3 = *puVar3 & 0xff7f;
              FUN_1403ecfd0(param_2);
            }
            else {
              if (iVar14 == 0xac5) {
                bVar16 = *(int *)(lVar13 + (ulonglong)((int)uVar12 + 1) * 0x14) == 0xabe;
              }
switchD_1403a0731_caseD_abf:
              FUN_1403ecfd0(param_2);
              if (bVar16) goto LAB_1403a06cc;
            }
            uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
          } while (*(uint *)(param_2 + 0x5c) + 1 < uVar4);
        }
      }
      else if (uVar5 == 0x4b686f6a) {
        if (1 < uVar4) {
          uVar12 = 0;
          do {
            if (*(char *)(param_2 + 0x58) == '\0') break;
            lVar13 = *(longlong *)(param_2 + 0x70);
            bVar16 = false;
            iVar14 = *(int *)(lVar13 + uVar12 * 0x14);
            iVar15 = (int)uVar12;
            if (iVar14 == 0x11200) {
              iVar14 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14);
              if (((iVar14 != 0x1122c) && (iVar14 != 0x11231)) && (iVar14 != 0x11233))
              goto LAB_1403a0dfb;
              FUN_1403ecfd0(param_2);
LAB_1403a0e12:
              FUN_1403ed4d0(param_2,0x25cc);
              uVar12 = (ulonglong)(*(int *)(param_2 + 100) - 1);
              if (*(int *)(param_2 + 100) == 0) {
                uVar12 = 0;
              }
              puVar3 = (ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + uVar12 * 0x14);
              *puVar3 = *puVar3 & 0xff7f;
              FUN_1403ecfd0(param_2);
            }
            else {
              if (iVar14 == 0x11206) {
                bVar16 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14) == 0x1122c;
              }
              else if (iVar14 == 0x1122c) {
                iVar14 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14);
                if ((iVar14 == 0x11230) || (iVar14 == 0x11231)) {
                  bVar16 = true;
                }
              }
              else if (iVar14 == 0x11240) {
                bVar16 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14) == 0x1122e;
              }
LAB_1403a0dfb:
              FUN_1403ecfd0(param_2);
              if (bVar16) goto LAB_1403a0e12;
            }
            uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
          } while (*(uint *)(param_2 + 0x5c) + 1 < uVar4);
        }
      }
      else if (uVar5 == 0x4b6e6461) {
        if (1 < uVar4) {
          uVar12 = 0;
          do {
            if (*(char *)(param_2 + 0x58) == '\0') break;
            lVar13 = *(longlong *)(param_2 + 0x70);
            bVar16 = false;
            iVar14 = *(int *)(lVar13 + uVar12 * 0x14);
            if ((iVar14 == 0xc89) || (iVar14 == 0xc8b)) {
              bVar16 = *(int *)(lVar13 + (ulonglong)((int)uVar12 + 1) * 0x14) == 0xcbe;
            }
            else if (iVar14 == 0xc92) {
              bVar16 = *(int *)(lVar13 + (ulonglong)((int)uVar12 + 1) * 0x14) == 0xccc;
            }
            FUN_1403ecfd0(param_2);
            if (bVar16) {
              FUN_1403ed4d0(param_2,0x25cc);
              uVar12 = (ulonglong)(*(int *)(param_2 + 100) - 1);
              if (*(int *)(param_2 + 100) == 0) {
                uVar12 = 0;
              }
              puVar3 = (ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + uVar12 * 0x14);
              *puVar3 = *puVar3 & 0xff7f;
              FUN_1403ecfd0(param_2);
            }
            uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
          } while (*(uint *)(param_2 + 0x5c) + 1 < uVar4);
        }
      }
      else if ((uVar5 == 0x4d6c796d) && (1 < uVar4)) {
        uVar12 = 0;
        do {
          if (*(char *)(param_2 + 0x58) == '\0') break;
          lVar13 = *(longlong *)(param_2 + 0x70);
          bVar16 = false;
          iVar14 = *(int *)(lVar13 + uVar12 * 0x14);
          iVar15 = (int)uVar12;
          if ((iVar14 == 0xd07) || (iVar14 == 0xd09)) {
            bVar16 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14) == 0xd57;
LAB_1403a0c40:
            FUN_1403ecfd0(param_2);
            if (bVar16) goto LAB_1403a0c4d;
          }
          else {
            if (iVar14 == 0xd0e) {
              bVar16 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14) == 0xd46;
              goto LAB_1403a0c40;
            }
            if ((iVar14 != 0xd12) ||
               ((iVar14 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14), iVar14 != 0xd3e &&
                (iVar14 != 0xd57)))) goto LAB_1403a0c40;
            FUN_1403ecfd0(param_2);
LAB_1403a0c4d:
            FUN_1403ed4d0(param_2,0x25cc);
            uVar12 = (ulonglong)(*(int *)(param_2 + 100) - 1);
            if (*(int *)(param_2 + 100) == 0) {
              uVar12 = 0;
            }
            puVar3 = (ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + uVar12 * 0x14);
            *puVar3 = *puVar3 & 0xff7f;
            FUN_1403ecfd0(param_2);
          }
          uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
        } while (*(uint *)(param_2 + 0x5c) + 1 < uVar4);
      }
    }
    else if (uVar5 < 0x54616b73) {
      if (uVar5 == 0x54616b72) {
        if (1 < uVar4) {
          uVar12 = 0;
          do {
            if (*(char *)(param_2 + 0x58) == '\0') break;
            lVar13 = *(longlong *)(param_2 + 0x70);
            bVar16 = false;
            iVar15 = (int)uVar12;
            iVar14 = *(int *)(lVar13 + uVar12 * 0x14);
            if (iVar14 == 0x11680) {
              iVar14 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14);
              if (((iVar14 == 0x116ad) || (iVar14 == 0x116b4)) || (iVar14 == 0x116b5)) {
                bVar16 = true;
              }
            }
            else if (iVar14 == 0x11686) {
              bVar16 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14) == 0x116b2;
            }
            if (*(char *)(param_2 + 0x59) == '\0') {
LAB_1403a1386:
              *(int *)(param_2 + 0x5c) = (int)uVar12 + 1;
            }
            else {
              if ((*(longlong *)(param_2 + 0x78) == lVar13) && (*(int *)(param_2 + 100) == iVar15))
              {
LAB_1403a1383:
                *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
                goto LAB_1403a1386;
              }
              cVar11 = FUN_1403bf1a0(param_2,*(int *)(param_2 + 100) + 1);
              if (cVar11 != '\0') {
                uVar5 = *(uint *)(param_2 + 0x5c);
                lVar13 = *(longlong *)(param_2 + 0x70);
                uVar6 = *(uint *)(param_2 + 100);
                puVar1 = (undefined4 *)(lVar13 + (ulonglong)uVar5 * 0x14);
                uVar8 = puVar1[1];
                uVar9 = puVar1[2];
                uVar10 = puVar1[3];
                lVar7 = *(longlong *)(param_2 + 0x78);
                puVar2 = (undefined4 *)(lVar7 + (ulonglong)uVar6 * 0x14);
                *puVar2 = *puVar1;
                puVar2[1] = uVar8;
                puVar2[2] = uVar9;
                puVar2[3] = uVar10;
                *(undefined4 *)(lVar7 + (ulonglong)uVar6 * 0x14 + 0x10) =
                     *(undefined4 *)(lVar13 + 0x10 + (ulonglong)uVar5 * 0x14);
                uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
                goto LAB_1403a1383;
              }
            }
            if (bVar16) {
              FUN_1403ed4d0(param_2,0x25cc);
              uVar12 = (ulonglong)(*(int *)(param_2 + 100) - 1);
              if (*(int *)(param_2 + 100) == 0) {
                uVar12 = 0;
              }
              puVar3 = (ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + uVar12 * 0x14);
              *puVar3 = *puVar3 & 0xff7f;
              FUN_1403ecfd0(param_2);
            }
            uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
          } while (*(uint *)(param_2 + 0x5c) + 1 < uVar4);
        }
      }
      else if (uVar5 == 0x4f727961) {
        if (1 < uVar4) {
          uVar12 = 0;
          do {
            if (*(char *)(param_2 + 0x58) == '\0') break;
            lVar13 = *(longlong *)(param_2 + 0x70);
            bVar16 = false;
            iVar14 = *(int *)(lVar13 + uVar12 * 0x14);
            if (iVar14 == 0xb05) {
              bVar16 = *(int *)(lVar13 + (ulonglong)((int)uVar12 + 1) * 0x14) == 0xb3e;
            }
            else if ((iVar14 == 0xb0f) || (iVar14 == 0xb13)) {
              bVar16 = *(int *)(lVar13 + (ulonglong)((int)uVar12 + 1) * 0x14) == 0xb57;
            }
            FUN_1403ecfd0(param_2);
            if (bVar16) {
              FUN_1403ed4d0(param_2,0x25cc);
              uVar12 = (ulonglong)(*(int *)(param_2 + 100) - 1);
              if (*(int *)(param_2 + 100) == 0) {
                uVar12 = 0;
              }
              puVar3 = (ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + uVar12 * 0x14);
              *puVar3 = *puVar3 & 0xff7f;
              FUN_1403ecfd0(param_2);
            }
            uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
          } while (*(uint *)(param_2 + 0x5c) + 1 < uVar4);
        }
      }
      else if (uVar5 == 0x53696e64) {
        if (1 < uVar4) {
          uVar12 = 0;
          do {
            if (*(char *)(param_2 + 0x58) == '\0') break;
            if ((*(int *)(*(longlong *)(param_2 + 0x70) + uVar12 * 0x14) == 0x112b0) &&
               ((((iVar14 = *(int *)(*(longlong *)(param_2 + 0x70) +
                                    (ulonglong)((int)uVar12 + 1) * 0x14), iVar14 == 0x112e0 ||
                  (iVar14 == 0x112e5)) || (iVar14 == 0x112e6)) ||
                ((iVar14 == 0x112e7 || (iVar14 == 0x112e8)))))) {
              FUN_1403ecfd0(param_2);
              FUN_1403ed4d0(param_2,0x25cc);
              uVar12 = (ulonglong)(*(int *)(param_2 + 100) - 1);
              if (*(int *)(param_2 + 100) == 0) {
                uVar12 = 0;
              }
              puVar3 = (ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + uVar12 * 0x14);
              *puVar3 = *puVar3 & 0xff7f;
            }
            FUN_1403ecfd0(param_2);
            uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
          } while (*(uint *)(param_2 + 0x5c) + 1 < uVar4);
        }
      }
      else if ((uVar5 == 0x53696e68) && (1 < uVar4)) {
        uVar12 = 0;
        do {
          if (*(char *)(param_2 + 0x58) == '\0') break;
          lVar13 = *(longlong *)(param_2 + 0x70);
          bVar16 = false;
          iVar14 = (int)uVar12;
          switch(*(undefined4 *)(lVar13 + uVar12 * 0x14)) {
          case 0xd85:
            iVar14 = *(int *)(lVar13 + (ulonglong)(iVar14 + 1) * 0x14);
            if (((iVar14 == 0xdcf) || (iVar14 == 0xdd0)) || (iVar14 == 0xdd1)) {
              bVar16 = true;
            }
            break;
          case 0xd8b:
          case 0xd8f:
          case 0xd94:
            bVar16 = *(int *)(lVar13 + (ulonglong)(iVar14 + 1) * 0x14) == 0xddf;
            break;
          case 0xd8d:
            bVar16 = *(int *)(lVar13 + (ulonglong)(iVar14 + 1) * 0x14) == 0xdd8;
            break;
          case 0xd91:
            switch(*(undefined4 *)(lVar13 + (ulonglong)(iVar14 + 1) * 0x14)) {
            case 0xdca:
            case 0xdd9:
            case 0xdda:
            case 0xddc:
            case 0xddd:
            case 0xdde:
              FUN_1403ecfd0(param_2);
              break;
            default:
              goto switchD_1403a108f_caseD_d86;
            }
            goto LAB_1403a10d3;
          }
switchD_1403a108f_caseD_d86:
          FUN_1403ecfd0(param_2);
          if (bVar16) {
LAB_1403a10d3:
            FUN_1403ed4d0(param_2,0x25cc);
            uVar12 = (ulonglong)(*(int *)(param_2 + 100) - 1);
            if (*(int *)(param_2 + 100) == 0) {
              uVar12 = 0;
            }
            puVar3 = (ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + uVar12 * 0x14);
            *puVar3 = *puVar3 & 0xff7f;
            FUN_1403ecfd0(param_2);
          }
          uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
        } while (*(uint *)(param_2 + 0x5c) + 1 < uVar4);
      }
    }
    else if (uVar5 == 0x54616d6c) {
      if (1 < uVar4) {
        uVar12 = 0;
        do {
          iVar14 = (int)uVar12;
          if (*(char *)(param_2 + 0x58) == '\0') break;
          lVar13 = *(longlong *)(param_2 + 0x70);
          bVar16 = false;
          if ((*(int *)(lVar13 + uVar12 * 0x14) == 0xb85) &&
             (*(int *)(lVar13 + (ulonglong)(iVar14 + 1) * 0x14) == 0xbc2)) {
            bVar16 = true;
          }
          if (*(char *)(param_2 + 0x59) == '\0') {
LAB_1403a1699:
            *(int *)(param_2 + 0x5c) = iVar14 + 1;
          }
          else {
            if ((*(longlong *)(param_2 + 0x78) == lVar13) && (*(int *)(param_2 + 100) == iVar14)) {
LAB_1403a1696:
              *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
              goto LAB_1403a1699;
            }
            cVar11 = FUN_1403bf1a0(param_2,*(int *)(param_2 + 100) + 1);
            if (cVar11 != '\0') {
              lVar13 = *(longlong *)(param_2 + 0x70);
              uVar5 = *(uint *)(param_2 + 0x5c);
              uVar6 = *(uint *)(param_2 + 100);
              puVar1 = (undefined4 *)(lVar13 + (ulonglong)uVar5 * 0x14);
              uVar8 = puVar1[1];
              uVar9 = puVar1[2];
              uVar10 = puVar1[3];
              lVar7 = *(longlong *)(param_2 + 0x78);
              puVar2 = (undefined4 *)(lVar7 + (ulonglong)uVar6 * 0x14);
              *puVar2 = *puVar1;
              puVar2[1] = uVar8;
              puVar2[2] = uVar9;
              puVar2[3] = uVar10;
              *(undefined4 *)(lVar7 + (ulonglong)uVar6 * 0x14 + 0x10) =
                   *(undefined4 *)(lVar13 + 0x10 + (ulonglong)uVar5 * 0x14);
              iVar14 = *(int *)(param_2 + 0x5c);
              goto LAB_1403a1696;
            }
          }
          if (bVar16) {
            cVar11 = FUN_1403eaf70(param_2,0,1);
            if (cVar11 != '\0') {
              uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
              if (*(uint *)(param_2 + 0x5c) < *(uint *)(param_2 + 0x60)) {
                lVar13 = *(longlong *)(param_2 + 0x70);
              }
              else {
                lVar13 = *(longlong *)(param_2 + 0x78);
                uVar12 = (ulonglong)(*(int *)(param_2 + 100) - 1);
                if (*(int *)(param_2 + 100) == 0) {
                  uVar12 = 0;
                }
              }
              puVar1 = (undefined4 *)(lVar13 + uVar12 * 0x14);
              uVar8 = puVar1[1];
              uVar9 = puVar1[2];
              uVar10 = puVar1[3];
              uVar5 = *(uint *)(param_2 + 100);
              lVar7 = *(longlong *)(param_2 + 0x78);
              puVar2 = (undefined4 *)(lVar7 + (ulonglong)uVar5 * 0x14);
              *puVar2 = *puVar1;
              puVar2[1] = uVar8;
              puVar2[2] = uVar9;
              puVar2[3] = uVar10;
              puVar1 = (undefined4 *)(lVar7 + (ulonglong)uVar5 * 0x14);
              puVar1[4] = *(undefined4 *)(lVar13 + uVar12 * 0x14 + 0x10);
              *puVar1 = 0x25cc;
              *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
              *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
            }
            uVar12 = (ulonglong)(*(int *)(param_2 + 100) - 1);
            if (*(int *)(param_2 + 100) == 0) {
              uVar12 = 0;
            }
            puVar3 = (ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + uVar12 * 0x14);
            *puVar3 = *puVar3 & 0xff7f;
            FUN_1403ecfd0(param_2);
          }
          uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
        } while (*(uint *)(param_2 + 0x5c) + 1 < uVar4);
      }
    }
    else if (uVar5 == 0x54656c75) {
      if (1 < uVar4) {
        uVar12 = 0;
        do {
          if (*(char *)(param_2 + 0x58) == '\0') break;
          lVar13 = *(longlong *)(param_2 + 0x70);
          bVar16 = false;
          iVar15 = (int)uVar12;
          iVar14 = *(int *)(lVar13 + uVar12 * 0x14);
          if (iVar14 == 0xc12) {
            iVar14 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14);
            if ((iVar14 == 0xc4c) || (iVar14 == 0xc55)) {
              bVar16 = true;
            }
          }
          else if (((iVar14 == 0xc3f) || (iVar14 == 0xc46)) || (iVar14 == 0xc4a)) {
            bVar16 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14) == 0xc55;
          }
          if (*(char *)(param_2 + 0x59) == '\0') {
LAB_1403a15ab:
            *(int *)(param_2 + 0x5c) = (int)uVar12 + 1;
          }
          else {
            if ((*(longlong *)(param_2 + 0x78) == lVar13) && (*(int *)(param_2 + 100) == iVar15)) {
LAB_1403a15a8:
              *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
              goto LAB_1403a15ab;
            }
            cVar11 = FUN_1403bf1a0(param_2,*(int *)(param_2 + 100) + 1);
            if (cVar11 != '\0') {
              uVar5 = *(uint *)(param_2 + 0x5c);
              lVar13 = *(longlong *)(param_2 + 0x70);
              uVar6 = *(uint *)(param_2 + 100);
              puVar1 = (undefined4 *)(lVar13 + (ulonglong)uVar5 * 0x14);
              uVar8 = puVar1[1];
              uVar9 = puVar1[2];
              uVar10 = puVar1[3];
              lVar7 = *(longlong *)(param_2 + 0x78);
              puVar2 = (undefined4 *)(lVar7 + (ulonglong)uVar6 * 0x14);
              *puVar2 = *puVar1;
              puVar2[1] = uVar8;
              puVar2[2] = uVar9;
              puVar2[3] = uVar10;
              *(undefined4 *)(lVar7 + (ulonglong)uVar6 * 0x14 + 0x10) =
                   *(undefined4 *)(lVar13 + 0x10 + (ulonglong)uVar5 * 0x14);
              uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
              goto LAB_1403a15a8;
            }
          }
          if (bVar16) {
            FUN_1403ed4d0(param_2,0x25cc);
            uVar12 = (ulonglong)(*(int *)(param_2 + 100) - 1);
            if (*(int *)(param_2 + 100) == 0) {
              uVar12 = 0;
            }
            puVar3 = (ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + uVar12 * 0x14);
            *puVar3 = *puVar3 & 0xff7f;
            FUN_1403ecfd0(param_2);
          }
          uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
        } while (*(uint *)(param_2 + 0x5c) + 1 < uVar4);
      }
    }
    else if ((uVar5 == 0x54697268) && (1 < uVar4)) {
      uVar12 = 0;
      do {
        if (*(char *)(param_2 + 0x58) == '\0') break;
        lVar13 = *(longlong *)(param_2 + 0x70);
        bVar16 = false;
        iVar14 = *(int *)(lVar13 + uVar12 * 0x14);
        iVar15 = (int)uVar12;
        if (iVar14 == 0x11481) {
          bVar16 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14) == 0x114b0;
LAB_1403a148c:
          FUN_1403ecfd0(param_2);
          if (bVar16) goto LAB_1403a1499;
        }
        else {
          if ((iVar14 == 0x1148b) || (iVar14 == 0x1148d)) {
            bVar16 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14) == 0x114ba;
            goto LAB_1403a148c;
          }
          if ((iVar14 != 0x114aa) ||
             ((iVar14 = *(int *)(lVar13 + (ulonglong)(iVar15 + 1) * 0x14), iVar14 != 0x114b5 &&
              (iVar14 != 0x114b6)))) goto LAB_1403a148c;
          FUN_1403ecfd0(param_2);
LAB_1403a1499:
          FUN_1403ed4d0(param_2,0x25cc);
          uVar12 = (ulonglong)(*(int *)(param_2 + 100) - 1);
          if (*(int *)(param_2 + 100) == 0) {
            uVar12 = 0;
          }
          puVar3 = (ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + uVar12 * 0x14);
          *puVar3 = *puVar3 & 0xff7f;
          FUN_1403ecfd0(param_2);
        }
        uVar12 = (ulonglong)*(uint *)(param_2 + 0x5c);
      } while (*(uint *)(param_2 + 0x5c) + 1 < uVar4);
    }
    if ((*(char *)(param_2 + 0x58) != '\0') &&
       (cVar11 = FUN_1403ed060(param_2,*(int *)(param_2 + 0x60) - *(int *)(param_2 + 0x5c)),
       cVar11 != '\0')) {
      if (*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) {
        *(longlong *)(param_2 + 0x80) = *(longlong *)(param_2 + 0x70);
        *(longlong *)(param_2 + 0x70) = *(longlong *)(param_2 + 0x78);
      }
      *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_2 + 100);
    }
    *(undefined1 *)(param_2 + 0x59) = 0;
    *(undefined4 *)(param_2 + 100) = 0;
    *(undefined4 *)(param_2 + 0x5c) = 0;
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
  }
  return;
}

