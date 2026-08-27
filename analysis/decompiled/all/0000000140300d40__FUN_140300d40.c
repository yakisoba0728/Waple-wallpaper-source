// Function: FUN_140300d40
// Addr: 140300d40
// Size: 3041 bytes


void FUN_140300d40(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  longlong *plVar25;
  longlong *plVar26;
  longlong *plVar27;
  longlong *plVar28;
  longlong *plVar29;
  longlong lVar30;
  longlong lVar31;
  longlong *plVar32;
  longlong lVar33;
  longlong *plVar34;
  longlong *plVar35;
  longlong *plVar36;
  ulonglong uVar37;
  int iVar38;
  int *piVar39;
  longlong lVar40;
  longlong lVar41;
  int iVar42;
  longlong *plVar43;
  uint uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  int *piVar47;
  ulonglong uVar48;
  longlong lVar49;
  uint uVar50;
  byte *pbVar51;
  int *piVar52;
  int iVar53;
  ulonglong uVar54;
  char local_res20;
  ulonglong local_d8;
  
  iVar38 = (int)param_2;
  uVar48 = 0;
  uVar6 = *(ulonglong *)((longlong)iVar38 * 0x898 + 0x60 + param_1);
  uVar54 = uVar48;
  if (uVar6 != 0) {
    uVar54 = (ulonglong)*(uint *)((longlong)iVar38 * 0x898 + 0x58 + param_1) * 0x48 + uVar6;
  }
  bVar13 = false;
  local_d8 = 0;
  uVar45 = uVar6;
  uVar37 = param_2;
  if (iVar38 == 1) {
    local_res20 = (&PTR_DAT_140439450)[*(int *)(**(longlong **)(param_1 + 0x1180) + 8)][0x18];
    uVar46 = uVar6;
    if (uVar6 < uVar54) {
      do {
        bVar16 = *(byte *)(uVar46 + 0xc);
        if ((bVar16 & 4) == 0) {
          uVar37 = *(ulonglong *)(uVar46 + 0x20);
          if (((*(longlong *)(uVar46 + 0x18) != 0) && (uVar37 != 0)) &&
             (*(longlong *)(uVar37 + 0x18) != 0)) {
            if ((*(byte *)(uVar37 + 0xc) & 8) == 0) {
              if ((bVar16 & 8) != 0) {
                *(undefined8 *)(uVar46 + 0x18) = 0;
                *(byte *)(uVar46 + 0xc) = bVar16 & 0xf7;
              }
            }
            else {
              *(undefined8 *)(uVar37 + 0x18) = 0;
              *(byte *)(uVar37 + 0xc) = *(byte *)(uVar37 + 0xc) & 0xf7;
            }
          }
          uVar7 = *(ulonglong *)(uVar46 + 0x18);
          uVar14 = uVar46;
          uVar15 = uVar46;
          if (uVar7 == 0) {
            if (uVar37 == 0) goto LAB_140300ec7;
            uVar7 = *(ulonglong *)(uVar37 + 0x18);
            uVar14 = uVar37;
            uVar37 = uVar46;
            uVar15 = uVar7;
          }
          if (uVar15 != 0) {
            iVar20 = *(int *)(uVar7 + 8);
            bVar16 = *(byte *)(uVar14 + 0xc) | 4;
            *(int *)(uVar14 + 8) = iVar20;
            *(byte *)(uVar14 + 0xc) = bVar16;
            if ((uVar37 != 0) && (*(longlong *)(uVar37 + 0x18) == 0)) {
              bVar3 = *(byte *)(uVar37 + 0xc);
              iVar17 = FUN_140300a50(param_1,1,*(int *)(uVar37 + 4) - *(int *)(uVar14 + 4),
                                     iVar20 - *(int *)(uVar14 + 4),bVar16,bVar3);
              *(int *)(uVar37 + 8) = iVar17 + iVar20;
              *(byte *)(uVar37 + 0xc) = bVar3 | 4;
            }
            if (uVar48 == 0) {
              uVar48 = uVar46;
            }
          }
        }
LAB_140300ec7:
        uVar46 = uVar46 + 0x48;
        if (uVar54 <= uVar46) {
          uVar37 = param_2 & 0xffffffff;
          local_d8 = uVar48;
          bVar13 = false;
          goto LAB_140300f03;
        }
      } while( true );
    }
  }
  else {
    local_res20 = '\0';
  }
  for (; uVar45 < uVar54; uVar45 = uVar45 + 0x48) {
LAB_140300f03:
    bVar16 = *(byte *)(uVar45 + 0xc);
    if ((bVar16 & 4) == 0) {
      lVar8 = *(longlong *)(uVar45 + 0x20);
      if (lVar8 == 0) {
        bVar13 = true;
      }
      else if (*(longlong *)(lVar8 + 0x18) == 0) {
        iVar20 = *(int *)(uVar45 + 4);
        bVar3 = *(byte *)(lVar8 + 0xc);
        iVar53 = *(int *)(lVar8 + 4) - iVar20;
        iVar17 = FUN_140300a50(param_1,uVar37,iVar53,0,bVar16,bVar3);
        iVar42 = iVar53 >> 1;
        if (local_d8 == 0) {
          iVar53 = 0x20;
          if (0x40 < iVar17) {
            iVar53 = 0x1a;
          }
          iVar19 = 0x20;
          if (0x40 < iVar17) {
            iVar19 = 0x26;
          }
          if (iVar17 < 0x60) {
            uVar44 = iVar42 + iVar20 + 0x20U & 0xffffffc0;
            iVar42 = (iVar42 + iVar20) - uVar44;
            iVar20 = iVar53 - iVar42;
            if (-1 < iVar42 - iVar53) {
              iVar20 = iVar42 - iVar53;
            }
            iVar18 = -(iVar42 + iVar19);
            if (iVar18 < 0) {
              iVar18 = iVar42 + iVar19;
            }
            if (iVar18 < iVar20) {
              iVar53 = -iVar19;
            }
            iVar20 = (uVar44 + iVar53) - iVar17 / 2;
            *(int *)(uVar45 + 8) = iVar20;
            *(int *)(lVar8 + 8) = iVar20 + iVar17;
          }
          else {
            *(uint *)(uVar45 + 8) = iVar20 + 0x20U & 0xffffffc0;
          }
          *(byte *)(uVar45 + 0xc) = *(byte *)(uVar45 + 0xc) | 4;
          iVar20 = FUN_140300a50(param_1,iVar38,*(int *)(lVar8 + 4) - *(int *)(uVar45 + 4),
                                 *(int *)(uVar45 + 8) - *(int *)(uVar45 + 4),
                                 *(undefined1 *)(uVar45 + 0xc),*(undefined1 *)(lVar8 + 0xc));
          *(int *)(lVar8 + 8) = iVar20 + *(int *)(uVar45 + 8);
          local_d8 = uVar45;
        }
        else {
          if ((bVar3 & 4) == 0) {
            iVar20 = iVar20 - *(int *)(local_d8 + 4);
            if (iVar17 < 0x60) {
              iVar42 = iVar42 + iVar20 + *(int *)(local_d8 + 8);
              uVar44 = iVar42 + 0x20U & 0xffffffc0;
              iVar20 = 0x20;
              if (0x40 < iVar17) {
                iVar20 = 0x1a;
              }
              iVar53 = 0x20;
              if (0x40 < iVar17) {
                iVar53 = 0x26;
              }
              iVar18 = (iVar42 - uVar44) + iVar53;
              iVar19 = (iVar42 - iVar20) - uVar44;
              iVar42 = uVar44 - (iVar42 - iVar20);
              if (-1 < iVar19) {
                iVar42 = iVar19;
              }
              iVar19 = -iVar18;
              if (iVar19 < 0) {
                iVar19 = iVar18;
              }
              if (iVar19 < iVar42) {
                iVar20 = -iVar53;
              }
              *(uint *)(uVar45 + 8) = (uVar44 + iVar20) - iVar17 / 2;
              iVar19 = iVar17 / 2 + uVar44 + iVar20;
            }
            else {
              iVar20 = iVar20 + *(int *)(local_d8 + 8);
              iVar19 = FUN_140300a50(param_1,iVar38,iVar53,0,bVar16,bVar3);
              iVar42 = ((iVar19 >> 1) - iVar20) - iVar42;
              uVar44 = (iVar20 + 0x20 + iVar53 & 0xffffffc0U) - iVar19;
              uVar50 = iVar20 + 0x20U & 0xffffffc0;
              iVar17 = uVar44 + iVar42;
              iVar42 = iVar42 + uVar50;
              iVar20 = -iVar17;
              if (iVar20 < 0) {
                iVar20 = iVar17;
              }
              iVar17 = -iVar42;
              if (iVar17 < 0) {
                iVar17 = iVar42;
              }
              if (iVar17 < iVar20) {
                uVar44 = uVar50;
              }
              *(uint *)(uVar45 + 8) = uVar44;
              iVar19 = uVar44 + iVar19;
            }
            *(int *)(lVar8 + 8) = iVar19;
          }
          else {
            *(int *)(uVar45 + 8) = *(int *)(lVar8 + 8) - iVar17;
          }
          *(byte *)(uVar45 + 0xc) = *(byte *)(uVar45 + 0xc) | 4;
          *(byte *)(lVar8 + 0xc) = *(byte *)(lVar8 + 0xc) | 4;
          if (uVar6 < uVar45) {
            iVar20 = *(int *)(uVar45 - 0x40);
            if (local_res20 == '\0') {
              bVar12 = *(int *)(uVar45 + 8) < iVar20;
            }
            else {
              bVar12 = iVar20 < *(int *)(uVar45 + 8);
            }
            if ((bVar12) && (*(longlong *)(uVar45 + 0x20) != 0)) {
              iVar17 = *(int *)(*(longlong *)(uVar45 + 0x20) + 8);
              iVar42 = iVar17 - iVar20;
              if (iVar42 < 0) {
                iVar42 = iVar20 - iVar17;
              }
              if (0x10 < iVar42) {
                *(int *)(uVar45 + 8) = iVar20;
              }
            }
          }
        }
      }
      else {
        iVar20 = FUN_140300a50(param_1,uVar37,*(int *)(uVar45 + 4) - *(int *)(lVar8 + 4),
                               *(int *)(lVar8 + 8) - *(int *)(lVar8 + 4),
                               *(undefined1 *)(lVar8 + 0xc),bVar16);
        *(int *)(uVar45 + 8) = iVar20 + *(int *)(lVar8 + 8);
        *(byte *)(uVar45 + 0xc) = bVar16 | 4;
      }
    }
    uVar37 = param_2 & 0xffffffff;
  }
  if ((int)uVar37 == 0) {
    uVar48 = (uVar54 - uVar6) - 0x360;
    if ((uVar54 - uVar6) - 0x1b0 < 0x48) {
      piVar47 = (int *)(uVar6 + 0x98);
      piVar39 = (int *)(uVar6 + 0x94);
      pbVar51 = (byte *)(uVar6 + 300);
      plVar35 = (longlong *)(uVar6 + 0x140);
      piVar52 = (int *)(uVar6 + 0x128);
      piVar24 = (int *)(uVar6 + 0x124);
      uVar45 = uVar6;
    }
    else {
      if (0x47 < uVar48) goto LAB_140301307;
      piVar47 = (int *)(uVar6 + 0x170);
      piVar39 = (int *)(uVar6 + 0x16c);
      pbVar51 = (byte *)(uVar6 + 0x294);
      plVar35 = (longlong *)(uVar6 + 0x2a8);
      piVar52 = (int *)(uVar6 + 0x290);
      piVar24 = (int *)(uVar6 + 0x28c);
      uVar45 = uVar6 + 0x48;
    }
    iVar38 = *piVar39 * 2 - *piVar24;
    iVar20 = iVar38 - *(int *)(uVar45 + 4);
    iVar38 = *(int *)(uVar45 + 4) - iVar38;
    if (-1 < iVar20) {
      iVar38 = iVar20;
    }
    if (iVar38 < 8) {
      iVar38 = *(int *)(uVar45 + 8) + *piVar47 * -2 + *piVar52;
      lVar8 = *plVar35;
      *piVar52 = *piVar52 - iVar38;
      if (lVar8 != 0) {
        piVar47 = (int *)(lVar8 + 8);
        *piVar47 = *piVar47 - iVar38;
      }
      if (uVar48 < 0x48) {
        *(int *)(uVar6 + 0x248) = *(int *)(uVar6 + 0x248) - iVar38;
        *(int *)(uVar6 + 800) = *(int *)(uVar6 + 800) - iVar38;
      }
      *pbVar51 = *pbVar51 | 4;
      if (*plVar35 != 0) {
        pbVar51 = (byte *)(*plVar35 + 0xc);
        *pbVar51 = *pbVar51 | 4;
      }
    }
  }
LAB_140301307:
  uVar48 = uVar6;
  uVar45 = local_d8;
  if ((bVar13) || (local_d8 == 0)) {
    for (; local_d8 = uVar45, uVar48 < uVar54; uVar48 = uVar48 + 0x48) {
      for (; (*(byte *)(uVar48 + 0xc) & 4) == 0; uVar48 = uVar48 + 0x48) {
        uVar37 = *(ulonglong *)(uVar48 + 0x28);
        if (uVar37 == 0) {
LAB_14030178d:
          uVar37 = uVar48;
          if (uVar45 == 0) {
            uVar44 = *(int *)(uVar48 + 4) + 0x20U & 0xffffffc0;
            uVar45 = uVar48;
            local_d8 = uVar48;
          }
          else {
            do {
              uVar7 = uVar37;
              uVar37 = uVar7 - 0x48;
              uVar46 = uVar48;
              if (uVar37 < uVar6) break;
            } while ((*(byte *)(uVar7 - 0x3c) & 4) == 0);
            do {
              uVar14 = uVar46;
              uVar46 = uVar14 + 0x48;
              if (uVar54 <= uVar46) break;
            } while ((*(byte *)(uVar14 + 0x54) & 4) == 0);
            if ((((uVar37 < uVar6) || (uVar48 <= uVar37)) || (uVar54 <= uVar46)) ||
               (uVar46 <= uVar48)) {
              uVar44 = ((*(int *)(uVar48 + 4) - *(int *)(uVar45 + 4)) + 0x10U & 0xffffffe0) +
                       *(int *)(uVar45 + 8);
            }
            else {
              iVar38 = *(int *)(uVar7 - 0x44);
              uVar44 = *(uint *)(uVar7 - 0x40);
              if (*(int *)(uVar14 + 0x4c) != iVar38) {
                iVar38 = FUN_1402f20b0(*(int *)(uVar48 + 4) - iVar38,
                                       *(int *)(uVar14 + 0x50) - uVar44,
                                       *(int *)(uVar14 + 0x4c) - iVar38);
                uVar44 = uVar44 + iVar38;
              }
            }
          }
        }
        else {
          iVar38 = *(int *)(uVar37 + 4) - *(int *)(uVar48 + 4);
          uVar46 = uVar37;
          uVar45 = uVar48;
          if (iVar38 < 0) {
            iVar38 = -iVar38;
            uVar46 = uVar48;
            uVar45 = uVar37;
          }
          if (iVar38 < 0x60) {
            lVar8 = *(longlong *)(uVar46 + 0x38);
            lVar49 = *(longlong *)(lVar8 + 0x40);
            plVar35 = (longlong *)(lVar8 + 0x40);
            plVar25 = (longlong *)(lVar8 + 0x38);
            iVar20 = *(int *)(lVar49 + 0x1c);
            lVar8 = *plVar25;
            iVar17 = *(int *)(lVar8 + 0x1c);
            plVar36 = (longlong *)(*(longlong *)(uVar46 + 0x40) + 0x40);
            plVar26 = (longlong *)(*(longlong *)(uVar46 + 0x40) + 0x38);
            lVar41 = *plVar36;
            lVar9 = *plVar26;
            iVar42 = *(int *)(lVar41 + 0x1c);
            iVar53 = *(int *)(lVar9 + 0x1c);
            iVar19 = iVar53;
            if (iVar42 <= iVar53) {
              iVar19 = iVar42;
            }
            iVar18 = iVar17;
            if (iVar20 <= iVar17) {
              iVar18 = iVar20;
            }
            if (iVar18 < iVar19) {
              iVar19 = iVar17;
              if (iVar20 <= iVar17) {
                iVar19 = iVar20;
              }
            }
            else {
              iVar19 = iVar42;
              if (iVar53 < iVar42) {
                iVar19 = iVar53;
              }
            }
            plVar1 = (longlong *)(*(longlong *)(uVar45 + 0x38) + 0x40);
            plVar27 = (longlong *)(*(longlong *)(uVar45 + 0x38) + 0x38);
            lVar33 = *plVar1;
            lVar10 = *plVar27;
            iVar18 = *(int *)(lVar33 + 0x1c);
            iVar23 = *(int *)(lVar10 + 0x1c);
            plVar43 = (longlong *)(*(longlong *)(uVar45 + 0x40) + 0x40);
            plVar28 = (longlong *)(*(longlong *)(uVar45 + 0x40) + 0x38);
            lVar40 = *plVar43;
            lVar11 = *plVar28;
            iVar4 = *(int *)(lVar40 + 0x1c);
            iVar5 = *(int *)(lVar11 + 0x1c);
            iVar22 = iVar5;
            if (iVar4 <= iVar5) {
              iVar22 = iVar4;
            }
            iVar21 = iVar23;
            if (iVar18 <= iVar23) {
              iVar21 = iVar18;
            }
            if (iVar21 < iVar22) {
              iVar22 = iVar23;
              if (iVar18 <= iVar23) {
                iVar22 = iVar18;
              }
            }
            else {
              iVar22 = iVar4;
              if (iVar5 < iVar4) {
                iVar22 = iVar5;
              }
            }
            if (iVar19 < iVar22) {
              lVar30 = lVar49;
              if (iVar17 < iVar20) {
                lVar30 = lVar8;
              }
              lVar31 = lVar41;
              if (iVar53 < iVar42) {
                lVar31 = lVar9;
              }
              if (*(int *)(lVar30 + 0x1c) < *(int *)(lVar31 + 0x1c)) {
                plVar29 = plVar35;
                if (iVar17 < iVar20) {
                  plVar29 = plVar25;
                }
              }
              else {
                plVar29 = plVar36;
                if (iVar53 < iVar42) {
                  plVar29 = plVar26;
                }
              }
            }
            else {
              lVar30 = lVar33;
              if (iVar23 < iVar18) {
                lVar30 = lVar10;
              }
              lVar31 = lVar40;
              if (iVar5 < iVar4) {
                lVar31 = lVar11;
              }
              if (*(int *)(lVar30 + 0x1c) < *(int *)(lVar31 + 0x1c)) {
                plVar29 = plVar1;
                if (iVar23 < iVar18) {
                  plVar29 = plVar27;
                }
              }
              else {
                plVar29 = plVar43;
                if (iVar5 < iVar4) {
                  plVar29 = plVar28;
                }
              }
            }
            lVar30 = lVar49;
            if (iVar20 < iVar17) {
              lVar30 = lVar8;
            }
            lVar31 = lVar41;
            if (iVar42 < iVar53) {
              lVar31 = lVar9;
            }
            if (*(int *)(lVar31 + 0x1c) < *(int *)(lVar30 + 0x1c)) {
              plVar32 = plVar35;
              if (iVar20 < iVar17) {
                plVar32 = plVar25;
              }
            }
            else {
              plVar32 = plVar36;
              if (iVar42 < iVar53) {
                plVar32 = plVar26;
              }
            }
            if (iVar18 < iVar23) {
              lVar33 = lVar10;
            }
            if (iVar4 < iVar5) {
              lVar40 = lVar11;
            }
            if (*(int *)(lVar40 + 0x1c) < *(int *)(lVar33 + 0x1c)) {
              plVar34 = plVar1;
              if (iVar18 < iVar23) {
                plVar34 = plVar27;
              }
            }
            else {
              plVar34 = plVar43;
              if (iVar4 < iVar5) {
                plVar34 = plVar28;
              }
            }
            if (*(int *)(*plVar34 + 0x1c) < *(int *)(*plVar32 + 0x1c)) {
              if (iVar20 < iVar17) {
                lVar49 = lVar8;
              }
              if (iVar42 < iVar53) {
                lVar41 = lVar9;
              }
              if (*(int *)(lVar41 + 0x1c) < *(int *)(lVar49 + 0x1c)) {
                plVar43 = plVar35;
                if (iVar20 < iVar17) {
                  plVar43 = plVar25;
                }
              }
              else {
                plVar43 = plVar36;
                if (iVar42 < iVar53) {
                  plVar43 = plVar26;
                }
              }
            }
            else {
              plVar35 = plVar1;
              if (iVar18 < iVar23) {
                plVar35 = plVar27;
              }
              plVar36 = plVar43;
              if (iVar4 < iVar5) {
                plVar36 = plVar28;
              }
              if (*(int *)(*plVar36 + 0x1c) < *(int *)(*plVar35 + 0x1c)) {
                plVar43 = plVar1;
                if (iVar18 < iVar23) {
                  plVar43 = plVar27;
                }
              }
              else if (iVar4 < iVar5) {
                plVar43 = plVar28;
              }
            }
            while (uVar37 = uVar45 + 0x48, uVar37 < uVar46) {
              lVar8 = *(longlong *)(*(longlong *)(uVar45 + 0x80) + 0x40);
              lVar49 = *(longlong *)(*(longlong *)(uVar45 + 0x80) + 0x38);
              iVar20 = *(int *)(lVar8 + 0x1c);
              iVar17 = *(int *)(lVar49 + 0x1c);
              lVar41 = *(longlong *)(*(longlong *)(uVar45 + 0x88) + 0x40);
              lVar9 = *(longlong *)(*(longlong *)(uVar45 + 0x88) + 0x38);
              iVar42 = iVar17;
              if (iVar20 <= iVar17) {
                iVar42 = iVar20;
              }
              iVar53 = *(int *)(lVar41 + 0x1c);
              iVar19 = *(int *)(lVar9 + 0x1c);
              iVar18 = iVar19;
              if (iVar53 <= iVar19) {
                iVar18 = iVar53;
              }
              if (iVar42 < iVar18) {
                iVar42 = iVar17;
                if (iVar20 <= iVar17) {
                  iVar42 = iVar20;
                }
              }
              else {
                iVar42 = iVar53;
                if (iVar19 < iVar53) {
                  iVar42 = iVar19;
                }
              }
              iVar18 = iVar20;
              if (iVar20 < iVar17) {
                iVar18 = iVar17;
              }
              iVar23 = iVar53;
              if (iVar53 < iVar19) {
                iVar23 = iVar19;
              }
              if (iVar23 < iVar18) {
                lVar41 = lVar8;
                if (iVar20 < iVar17) {
                  lVar41 = lVar49;
                }
              }
              else if (iVar53 < iVar19) {
                lVar41 = lVar9;
              }
              uVar45 = uVar37;
              if (((*(int *)(*plVar29 + 0x1c) <= iVar42) ||
                  (*(int *)(*plVar29 + 0x1c) <= *(int *)(lVar41 + 0x1c))) &&
                 ((iVar42 <= *(int *)(*plVar43 + 0x1c) ||
                  (*(int *)(lVar41 + 0x1c) <= *(int *)(*plVar43 + 0x1c))))) goto LAB_1403018e6;
            }
            uVar37 = *(ulonglong *)(uVar48 + 0x28);
          }
          uVar45 = local_d8;
          if (0x4f < iVar38) goto LAB_14030178d;
          uVar44 = (*(int *)(uVar48 + 4) - *(int *)(uVar37 + 4)) + *(int *)(uVar37 + 8);
        }
        puVar2 = (uint *)(uVar48 + 8);
        *puVar2 = uVar44;
        *(byte *)(uVar48 + 0xc) = *(byte *)(uVar48 + 0xc) | 4;
        if (uVar6 < uVar48) {
          uVar50 = *(uint *)(uVar48 - 0x40);
          if (local_res20 == '\0') {
            bVar13 = (int)uVar44 < (int)uVar50;
          }
          else {
            bVar13 = (int)uVar50 < (int)uVar44;
          }
          if ((bVar13) && (*(longlong *)(uVar48 + 0x20) != 0)) {
            iVar38 = *(int *)(*(longlong *)(uVar48 + 0x20) + 8);
            iVar20 = iVar38 - uVar50;
            if (iVar20 < 0) {
              iVar20 = uVar50 - iVar38;
            }
            if (0x10 < iVar20) {
              *puVar2 = uVar50;
              uVar44 = uVar50;
            }
          }
        }
        if ((uVar54 <= uVar48 + 0x48) || ((*(byte *)(uVar48 + 0x54) & 4) == 0)) break;
        uVar50 = *(uint *)(uVar48 + 0x50);
        if (local_res20 == '\0') {
          bVar13 = (int)uVar50 < (int)uVar44;
        }
        else {
          bVar13 = (int)uVar44 < (int)uVar50;
        }
        if ((!bVar13) || (lVar8 = *(longlong *)(uVar48 + 0x20), lVar8 == 0)) break;
        iVar20 = *(int *)(lVar8 + 8) - *(int *)(uVar48 - 0x40);
        iVar38 = *(int *)(uVar48 - 0x40) - *(int *)(lVar8 + 8);
        if (-1 < iVar20) {
          iVar38 = iVar20;
        }
        if (iVar38 < 0x11) break;
        *puVar2 = uVar50;
      }
LAB_1403018e6:
      uVar45 = local_d8;
    }
  }
  return;
}

