// Function: FUN_1403b0520
// Addr: 1403b0520
// Size: 1885 bytes


void FUN_1403b0520(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  char *pcVar15;
  longlong lVar16;
  longlong lVar17;
  char cVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined8 uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  uint local_res20;
  undefined4 uVar33;
  uint local_84;
  uint local_80;
  uint *local_70;
  
  if ((*(uint *)(param_2 + 0xd8) & 0x1000000) != 0) {
    iVar5 = *(int *)(param_2 + 0x38);
    if (iVar5 != 5) {
      FUN_1403f8e70(param_2,0,*(undefined4 *)(param_2 + 0x60));
    }
    uVar10 = *(int *)(param_3 + 0x28) >> 0x1f & 0xfffffffe;
    local_res20 = 0;
    local_80 = 0;
    do {
      local_70 = (uint *)(param_2 + 0x60);
      uVar20 = *(uint *)(param_2 + 0x60);
      lVar6 = *(longlong *)(param_2 + 0x70);
      lVar7 = *(longlong *)(param_2 + 0x80);
      uVar24 = uVar20 + local_res20;
      uVar22 = (ulonglong)uVar24;
      uVar23 = uVar20;
      local_84 = uVar24;
      while (uVar23 != 0) {
        lVar16 = (ulonglong)(uVar23 - 1) * 0x14;
        if ((byte)(*(char *)(lVar6 + 0x13 + (ulonglong)(uVar23 - 1) * 0x14) - 8U) < 2) {
          iVar32 = 0;
          iVar21 = 0;
          iVar31 = 0;
          iVar30 = 0;
          uVar22 = 0;
          uVar9 = uVar23;
          while (iVar14 = (int)uVar22, uVar9 != 0) {
            uVar28 = uVar9 - 1;
            puVar1 = (undefined4 *)(lVar6 + (ulonglong)uVar28 * 0x14);
            if (1 < (byte)(*(char *)(lVar6 + 0x13 + (ulonglong)uVar28 * 0x14) - 8U)) break;
            lVar16 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
            if (lVar16 == 0) {
              uVar29 = 0;
            }
            else {
              uVar29 = *(undefined8 *)(lVar16 + 0x28);
            }
            iVar11 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x48))
                               (param_3,*(undefined8 *)(param_3 + 0x98),*puVar1,uVar29);
            iVar19 = *(int *)(param_3 + 0x40);
            if ((iVar19 != 0) && (*(char *)(param_3 + 0x3c) == '\0')) {
              if (*(int *)(param_3 + 0x28) < 0) {
                iVar19 = -iVar19;
              }
              iVar12 = 0;
              if (iVar11 != 0) {
                iVar12 = iVar19;
              }
              iVar11 = iVar11 + iVar12;
            }
            uVar9 = uVar28;
            if (*(char *)((longlong)puVar1 + 0x13) == '\b') {
              iVar21 = iVar21 + iVar11;
              iVar30 = iVar30 + 1;
            }
            else {
              iVar31 = iVar31 + iVar11;
              uVar22 = (ulonglong)(iVar14 + 1);
            }
          }
          uVar28 = uVar9;
          if (uVar9 != 0) {
            while( true ) {
              uVar26 = uVar28 - 1;
              lVar16 = (ulonglong)uVar26 * 0x14;
              if ((byte)(*(char *)(lVar16 + 0x13 + lVar6) - 8U) < 2) break;
              uVar4 = *(ushort *)(lVar16 + 0x10 + lVar6);
              if (((((uVar4 & 0x20) == 0) || ((*(byte *)(lVar16 + 0xc + lVar6) & 0x10) != 0)) &&
                  ((1 << ((byte)uVar4 & 0x1f) & 0x780fcccU) == 0)) ||
                 (iVar32 = iVar32 + *(int *)(lVar16 + lVar7), uVar28 = uVar26, uVar26 == 0)) break;
            }
          }
          uVar26 = uVar9 + 1;
          pcVar15 = "cutting";
          if (local_80 == 0) {
            pcVar15 = "measuring";
          }
          uVar25 = 0;
          uVar33 = 0;
          uVar13 = 0;
          FUN_1402fc370("ARABIC",0,0,0,0,0,"%s stretch at (%u,%u,%u)",pcVar15,uVar28,uVar9,uVar23);
          lVar16 = -(longlong)iVar31;
          if (-2 < (int)uVar10) {
            lVar16 = (longlong)iVar31;
          }
          lVar17 = (longlong)iVar21 - (longlong)iVar32;
          if (-2 < (int)uVar10) {
            lVar17 = (longlong)iVar32 - (longlong)iVar21;
          }
          iVar32 = iVar32 - iVar21;
          if ((lVar16 < lVar17) && (0 < lVar16)) {
            uVar25 = (int)(lVar17 / lVar16) - 1;
          }
          uVar27 = uVar25 + 1;
          iVar31 = 0;
          iVar21 = 0;
          if (lVar17 == (ulonglong)uVar27 * lVar16 ||
              (longlong)(lVar17 - (ulonglong)uVar27 * lVar16) < 0) {
            uVar27 = 0;
            if (0 < iVar14) goto LAB_1403b0893;
          }
          else if (iVar14 < 1) {
            uVar27 = 0;
          }
          else {
            lVar17 = (ulonglong)(uVar25 + 2) * lVar16 - lVar17;
            uVar25 = uVar27;
            if (0 < lVar17) {
              iVar32 = 0;
              iVar21 = (int)(lVar17 / (longlong)(ulonglong)(uVar27 * iVar14));
            }
LAB_1403b0893:
            iVar31 = iVar21;
            uVar27 = 0;
            if ((uint)(iVar14 + iVar30) < 0x100) {
              uVar27 = (uint)((0x100 - (iVar14 + iVar30)) / uVar22);
            }
          }
          if (uVar25 <= uVar27) {
            uVar27 = uVar25;
          }
          if (local_80 == 0) {
            if (((iVar14 != 0) && ((uint)(0xffffffff / uVar22) <= uVar27)) ||
               (~local_res20 < uVar27 * iVar14)) {
              local_res20 = 0xffffffff;
              goto LAB_1403b0af5;
            }
            uVar22 = (ulonglong)local_84;
            local_res20 = local_res20 + uVar27 * iVar14;
          }
          else {
            if ((uVar23 == 0xffffffff) || (uVar23 - uVar28 < 0x100)) {
              uVar25 = *local_70;
              if (uVar23 <= *local_70) {
                uVar25 = uVar23;
              }
              if (1 < uVar25 - uVar28) {
                uVar13 = FUN_1403a1a20(param_2,*(undefined8 *)(param_2 + 0x70),uVar28,uVar25,
                                       CONCAT44(uVar13,0xffffffff));
                FUN_1403a1bc0(param_2,*(undefined8 *)(param_2 + 0x70),uVar28,uVar25,uVar13,
                              CONCAT44(uVar33,3));
              }
            }
            iVar32 = iVar32 / 2;
            if (uVar9 < uVar23) {
              do {
                uVar23 = uVar23 - 1;
                lVar16 = (ulonglong)uVar23 * 0x14;
                lVar17 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
                uVar29 = 0;
                if (lVar17 != 0) {
                  uVar29 = *(undefined8 *)(lVar17 + 0x28);
                }
                iVar30 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x48))
                                   (param_3,*(undefined8 *)(param_3 + 0x98),
                                    *(undefined4 *)(lVar16 + lVar6),uVar29);
                iVar21 = *(int *)(param_3 + 0x40);
                if ((iVar21 != 0) && (*(char *)(param_3 + 0x3c) == '\0')) {
                  if (*(int *)(param_3 + 0x28) < 0) {
                    iVar21 = -iVar21;
                  }
                  iVar14 = 0;
                  if (iVar30 != 0) {
                    iVar14 = iVar21;
                  }
                  iVar30 = iVar30 + iVar14;
                }
                uVar28 = 1;
                if (*(char *)(lVar16 + 0x13 + lVar6) == '\t') {
                  uVar28 = uVar27 + 1;
                }
                uVar22 = (ulonglong)local_84;
                uVar25 = 0;
                *(undefined4 *)(lVar16 + lVar7) = 0;
                if (uVar28 != 0) {
                  do {
                    if ((iVar5 == 5) && (iVar32 = iVar32 - iVar30, uVar25 != 0)) {
                      iVar32 = iVar32 + iVar31;
                    }
                    *(int *)(lVar16 + 8 + lVar7) = iVar32;
                    local_84 = (int)uVar22 - 1;
                    uVar22 = (ulonglong)local_84;
                    uVar29 = ((undefined8 *)(lVar16 + lVar6))[1];
                    puVar3 = (undefined8 *)(lVar6 + uVar22 * 0x14);
                    *puVar3 = *(undefined8 *)(lVar16 + lVar6);
                    puVar3[1] = uVar29;
                    *(undefined4 *)(lVar6 + 0x10 + uVar22 * 0x14) =
                         *(undefined4 *)(lVar16 + 0x10 + lVar6);
                    puVar1 = (undefined4 *)(lVar16 + lVar7);
                    uVar13 = puVar1[1];
                    uVar33 = puVar1[2];
                    uVar8 = puVar1[3];
                    puVar2 = (undefined4 *)(lVar7 + uVar22 * 0x14);
                    *puVar2 = *puVar1;
                    puVar2[1] = uVar13;
                    puVar2[2] = uVar33;
                    puVar2[3] = uVar8;
                    *(undefined4 *)(lVar7 + 0x10 + uVar22 * 0x14) =
                         *(undefined4 *)(lVar16 + 0x10 + lVar7);
                    if (iVar5 != 5) {
                      iVar32 = iVar32 + iVar30;
                      if (uVar25 != 0) {
                        iVar32 = iVar32 - iVar31;
                      }
                    }
                    uVar25 = uVar25 + 1;
                  } while (uVar25 < uVar28);
                }
              } while (uVar9 < uVar23);
            }
            else {
              uVar22 = (ulonglong)local_84;
            }
          }
        }
        else {
          uVar26 = uVar23;
          if (local_80 == 1) {
            uVar29 = ((undefined8 *)(lVar16 + lVar6))[1];
            local_84 = (int)uVar22 - 1;
            uVar22 = (ulonglong)local_84;
            lVar17 = uVar22 * 0x14;
            *(undefined8 *)(lVar17 + lVar6) = *(undefined8 *)(lVar16 + lVar6);
            ((undefined8 *)(lVar17 + lVar6))[1] = uVar29;
            *(undefined4 *)(lVar17 + 0x10 + lVar6) = *(undefined4 *)(lVar16 + 0x10 + lVar6);
            puVar1 = (undefined4 *)(lVar16 + lVar7);
            uVar13 = puVar1[1];
            uVar33 = puVar1[2];
            uVar8 = puVar1[3];
            puVar2 = (undefined4 *)(lVar17 + lVar7);
            *puVar2 = *puVar1;
            puVar2[1] = uVar13;
            puVar2[2] = uVar33;
            puVar2[3] = uVar8;
            *(undefined4 *)(lVar17 + 0x10 + lVar7) = *(undefined4 *)(lVar16 + 0x10 + lVar7);
          }
        }
        uVar23 = uVar26 - 1;
      }
      if (local_80 == 0) {
LAB_1403b0af5:
        if (~uVar20 < local_res20) break;
        uVar20 = local_res20 + uVar20;
        if ((uVar20 != 0) && (uVar24 = *(uint *)(param_2 + 0x68), uVar24 <= uVar20)) {
          if (*(uint *)(param_2 + 0xdc) < uVar20) {
            *(undefined1 *)(param_2 + 0x58) = 0;
            cVar18 = '\0';
          }
          else if (*(char *)(param_2 + 0x58) == '\0') {
            cVar18 = '\0';
          }
          else {
            lVar6 = *(longlong *)(param_2 + 0x70);
            lVar16 = 0;
            lVar7 = *(longlong *)(param_2 + 0x78);
            lVar17 = 0;
            if (uVar20 < 0xccccccc) {
              do {
                uVar24 = uVar24 + 0x20 + (uVar24 >> 1);
              } while (uVar24 <= uVar20);
              if (0xccccccb < uVar24) goto LAB_1403b0bbd;
              lVar16 = _realloc_base(*(undefined8 *)(param_2 + 0x80),uVar24 * 0x14);
              lVar17 = _realloc_base(*(undefined8 *)(param_2 + 0x70),uVar24 * 0x14);
              if ((lVar16 == 0) || (lVar17 == 0)) goto LAB_1403b0bbd;
              cVar18 = *(char *)(param_2 + 0x58);
            }
            else {
LAB_1403b0bbd:
              *(undefined1 *)(param_2 + 0x58) = 0;
              cVar18 = '\0';
            }
            if (lVar16 != 0) {
              *(longlong *)(param_2 + 0x80) = lVar16;
            }
            if (lVar17 != 0) {
              *(longlong *)(param_2 + 0x70) = lVar17;
            }
            lVar16 = 0x80;
            if (lVar7 == lVar6) {
              lVar16 = 0x70;
            }
            *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(lVar16 + param_2);
            if (cVar18 == '\0') break;
            *(uint *)(param_2 + 0x68) = uVar24;
          }
          if (cVar18 == '\0') break;
        }
      }
      else {
        *(uint *)(param_2 + 0x60) = uVar24;
      }
      local_80 = local_80 + 1;
    } while (local_80 < 2);
    if (iVar5 != 5) {
      FUN_1403f8e70(param_2,0,*local_70);
    }
  }
  return;
}

