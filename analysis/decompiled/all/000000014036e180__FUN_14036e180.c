// Function: FUN_14036e180
// Addr: 14036e180
// Size: 2913 bytes


undefined8
FUN_14036e180(longlong param_1,uint param_2,undefined8 param_3,uint param_4,undefined8 param_5,
             uint param_6,undefined8 param_7,undefined4 param_8,undefined8 param_9,
             undefined8 *param_10)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  byte bVar22;
  int iVar23;
  int iVar24;
  byte bVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  
  if (param_4 < 0x41) {
    lVar18 = *(longlong *)(param_1 + 0xa0);
    uVar21 = *(uint *)(lVar18 + 0x5c);
    if (param_4 == 1) {
      if (*(int *)(param_1 + 0x144) == 0) {
        puVar16 = &DAT_1404e4f20;
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
      }
      else {
        puVar16 = *(undefined8 **)(param_1 + 0x148);
      }
    }
    else {
      uVar7 = param_10[4];
      uVar8 = param_10[1];
      *(uint *)(param_1 + 8) = uVar21;
      *(undefined4 *)(param_1 + 0x40) =
           *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0x60);
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa0);
      uVar5 = *(undefined1 *)
               (*(longlong *)(lVar14 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar14 + 0x5c) * 0x14);
      *(undefined8 *)(param_1 + 0x28) = uVar8;
      *(undefined8 *)(param_1 + 0x30) = uVar7;
      *(undefined8 *)(param_1 + 0x38) = param_5;
      *(undefined1 *)(param_1 + 0x24) = uVar5;
      bVar4 = *(byte *)(*(longlong *)(lVar18 + 0x70) + 0xe +
                       (ulonglong)*(uint *)(lVar18 + 0x5c) * 0x14);
      bVar10 = bVar4 >> 5;
      bVar22 = 0;
      if ((bVar4 & 0x10) == 0) {
        bVar22 = bVar4 & 0xf;
      }
      iVar20 = 0;
      uVar19 = 1;
      if (1 < param_4) {
LAB_14036e290:
        iVar23 = *(int *)(param_1 + 8);
        iVar24 = *(int *)(param_1 + 0x40) + -1;
        if (iVar23 < iVar24) {
          lVar14 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0x70);
          do {
            *(uint *)(param_1 + 8) = iVar23 + 1U;
            lVar3 = (ulonglong)(iVar23 + 1U) * 0x14;
            uVar27 = *(uint *)(param_1 + 0x18);
            uVar6 = *(ushort *)(lVar3 + 0xc + lVar14);
            if ((uVar6 & uVar27 & 0xe) == 0) {
              puVar1 = (uint *)(lVar3 + lVar14);
              if ((uVar6 & 8) != 0) {
                if ((uVar27 & 0x10) == 0) {
                  if ((uVar27 & 0xff00) == 0) goto LAB_14036e393;
                  bVar28 = (uVar27 & 0xff00) == (uVar6 & 0xff00);
                }
                else {
                  uVar15 = 0;
                  puVar16 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0xf8);
                  do {
                    if ((*(ulonglong *)
                          (puVar16[2] + (ulonglong)(uVar27 >> 0x10) * 0x18 + uVar15 * 8) >>
                         (*puVar1 >> ((byte)(&DAT_14045c3c8)[uVar15] & 0x1f) & 0x3f) & 1) == 0)
                    goto LAB_14036e37a;
                    uVar13 = (int)uVar15 + 1;
                    uVar15 = (ulonglong)uVar13;
                  } while (uVar13 < 3);
                  puVar16 = (undefined8 *)*puVar16;
                  puVar17 = &DAT_14045dd10;
                  if (puVar16 != (undefined8 *)0x0) {
                    puVar17 = puVar16;
                  }
                  if (*(uint *)(puVar17 + 3) < 4) {
                    puVar16 = &DAT_14045dd10;
                  }
                  else {
                    puVar16 = (undefined8 *)puVar17[2];
                  }
                  cVar12 = FUN_1403ebf20(puVar16,uVar27 >> 0x10);
                  if (cVar12 == '\0') {
LAB_14036e37a:
                    bVar28 = false;
                  }
                  else {
LAB_14036e393:
                    bVar28 = true;
                  }
                }
                if (!bVar28) goto LAB_14036e448;
              }
              uVar6 = (ushort)puVar1[4];
              if ((((((uVar6 & 0x20) == 0) || ((puVar1[3] & 0x10) != 0)) ||
                   ((*(char *)(param_1 + 0x20) == '\0' &&
                    ((((byte)uVar6 & 0x1f) == 1 && ((uVar6 >> 9 & 1) != 0)))))) ||
                  ((*(char *)(param_1 + 0x21) == '\0' &&
                   ((((byte)uVar6 & 0x1f) == 1 && ((uVar6 >> 8 & 1) != 0)))))) ||
                 ((*(char *)(param_1 + 0x22) == '\0' && ((uVar6 & 0x40) != 0)))) {
                bVar28 = false;
              }
              else {
                bVar28 = true;
              }
              pbVar9 = *(byte **)(param_1 + 0x38);
              if (pbVar9 == (byte *)0x0) {
                iVar23 = 0;
              }
              else {
                iVar23 = (uint)*pbVar9 * 0x100 + (uint)pbVar9[1];
              }
              if (((*(uint *)(param_1 + 0x1c) & puVar1[1]) != 0) &&
                 (((*(char *)(param_1 + 0x23) == '\0' || (*(char *)(param_1 + 0x24) == '\0')) ||
                  (*(char *)(param_1 + 0x24) == *(char *)((longlong)puVar1 + 0xf))))) {
                if (*(code **)(param_1 + 0x28) == (code *)0x0) {
                  if (bVar28) goto LAB_14036e448;
                  goto LAB_14036e4c4;
                }
                cVar12 = (**(code **)(param_1 + 0x28))(puVar1,iVar23);
                if (cVar12 != '\0') goto LAB_14036e4c4;
              }
              if (!bVar28) break;
            }
LAB_14036e448:
            iVar23 = *(int *)(param_1 + 8);
            if (iVar24 <= iVar23) break;
          } while( true );
        }
        goto LAB_14036e459;
      }
LAB_14036e6d2:
      uVar21 = *(uint *)(param_1 + 8);
      puVar16 = *(undefined8 **)(param_1 + 0x148);
    }
    *(undefined4 *)puVar16 = *(undefined4 *)(lVar18 + 0x5c);
    uVar19 = uVar21 + 1;
    if (uVar19 != 0) {
      uVar27 = uVar19;
      if (param_6 != 0) {
        uVar27 = 0;
        uVar7 = param_10[5];
        uVar8 = param_10[2];
        *(uint *)(param_1 + 0x48) = uVar21;
        *(undefined4 *)(param_1 + 0x80) =
             *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0xa0) + 0x60);
        lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0xa0);
        uVar5 = *(undefined1 *)
                 (*(longlong *)(lVar18 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar18 + 0x5c) * 0x14);
        *(undefined8 *)(param_1 + 0x68) = uVar8;
        *(undefined8 *)(param_1 + 0x70) = uVar7;
        *(undefined8 *)(param_1 + 0x78) = param_7;
        *(undefined1 *)(param_1 + 100) = uVar5;
        if (param_6 != 0) {
LAB_14036e770:
          iVar20 = *(int *)(param_1 + 0x48);
          iVar23 = *(int *)(param_1 + 0x80) + -1;
          if (iVar20 < iVar23) {
            lVar18 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0xa0) + 0x70);
            do {
              *(uint *)(param_1 + 0x48) = iVar20 + 1U;
              lVar14 = (ulonglong)(iVar20 + 1U) * 0x14;
              uVar21 = *(uint *)(param_1 + 0x58);
              uVar6 = *(ushort *)(lVar14 + 0xc + lVar18);
              if ((uVar6 & uVar21 & 0xe) == 0) {
                puVar1 = (uint *)(lVar14 + lVar18);
                if ((uVar6 & 8) != 0) {
                  if ((uVar21 & 0x10) == 0) {
                    if ((uVar21 & 0xff00) == 0) goto LAB_14036e874;
                    bVar28 = (uVar21 & 0xff00) == (uVar6 & 0xff00);
                  }
                  else {
                    uVar15 = 0;
                    puVar16 = *(undefined8 **)(*(longlong *)(param_1 + 0x50) + 0xf8);
                    do {
                      if ((*(ulonglong *)
                            (puVar16[2] + (ulonglong)(uVar21 >> 0x10) * 0x18 + uVar15 * 8) >>
                           (*puVar1 >> ((byte)(&DAT_14045c3c8)[uVar15] & 0x1f) & 0x3f) & 1) == 0)
                      goto LAB_14036e85b;
                      uVar13 = (int)uVar15 + 1;
                      uVar15 = (ulonglong)uVar13;
                    } while (uVar13 < 3);
                    puVar16 = (undefined8 *)*puVar16;
                    puVar17 = &DAT_14045dd10;
                    if (puVar16 != (undefined8 *)0x0) {
                      puVar17 = puVar16;
                    }
                    if (*(uint *)(puVar17 + 3) < 4) {
                      puVar16 = &DAT_14045dd10;
                    }
                    else {
                      puVar16 = (undefined8 *)puVar17[2];
                    }
                    cVar12 = FUN_1403ebf20(puVar16,uVar21 >> 0x10,*puVar1);
                    if (cVar12 == '\0') {
LAB_14036e85b:
                      bVar28 = false;
                    }
                    else {
LAB_14036e874:
                      bVar28 = true;
                    }
                  }
                  if (!bVar28) goto LAB_14036e921;
                }
                uVar6 = (ushort)puVar1[4];
                if (((((uVar6 & 0x20) == 0) || ((puVar1[3] & 0x10) != 0)) ||
                    ((*(char *)(param_1 + 0x60) == '\0' &&
                     ((((byte)uVar6 & 0x1f) == 1 && ((uVar6 >> 9 & 1) != 0)))))) ||
                   (((*(char *)(param_1 + 0x61) == '\0' &&
                     ((((byte)uVar6 & 0x1f) == 1 && ((uVar6 >> 8 & 1) != 0)))) ||
                    ((*(char *)(param_1 + 0x62) == '\0' && ((uVar6 & 0x40) != 0)))))) {
                  bVar28 = false;
                }
                else {
                  bVar28 = true;
                }
                pbVar9 = *(byte **)(param_1 + 0x78);
                if (pbVar9 == (byte *)0x0) {
                  iVar20 = 0;
                }
                else {
                  iVar20 = (uint)pbVar9[1] + (uint)*pbVar9 * 0x100;
                }
                if (((*(uint *)(param_1 + 0x5c) & puVar1[1]) != 0) &&
                   (((*(char *)(param_1 + 99) == '\0' || (*(char *)(param_1 + 100) == '\0')) ||
                    (*(char *)(param_1 + 100) == *(char *)((longlong)puVar1 + 0xf))))) {
                  if (*(code **)(param_1 + 0x68) == (code *)0x0) {
                    if (bVar28) goto LAB_14036e921;
                    goto LAB_14036e93d;
                  }
                  cVar12 = (**(code **)(param_1 + 0x68))
                                     (puVar1,iVar20,*(undefined8 *)(param_1 + 0x70));
                  if (cVar12 != '\0') goto LAB_14036e93d;
                }
                if (!bVar28) {
                  uVar21 = *(int *)(param_1 + 0x48) + 1;
                  goto LAB_14036e459;
                }
              }
LAB_14036e921:
              iVar20 = *(int *)(param_1 + 0x48);
              if (iVar23 <= iVar20) break;
            } while( true );
          }
          uVar21 = *(uint *)(param_1 + 0x80);
          goto LAB_14036e459;
        }
LAB_14036e95a:
        uVar27 = *(int *)(param_1 + 0x48) + 1;
      }
      puVar1 = (uint *)(param_1 + 0x48);
      lVar18 = *(longlong *)(param_1 + 0xa0);
      if (param_2 == 0) {
        lVar14 = 100;
        if (*(char *)(lVar18 + 0x59) == '\0') {
          lVar14 = 0x5c;
        }
        uVar21 = *(uint *)(lVar14 + lVar18);
      }
      else {
        uVar7 = param_10[3];
        uVar8 = *param_10;
        lVar14 = 100;
        if (*(char *)(lVar18 + 0x59) == '\0') {
          lVar14 = 0x5c;
        }
        uVar21 = 0;
        *puVar1 = *(uint *)(lVar14 + lVar18);
        lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0xa0);
        uVar5 = *(undefined1 *)
                 (*(longlong *)(lVar18 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar18 + 0x5c) * 0x14);
        *(undefined8 *)(param_1 + 0x68) = uVar8;
        *(undefined8 *)(param_1 + 0x70) = uVar7;
        *(undefined8 *)(param_1 + 0x78) = param_3;
        *(undefined1 *)(param_1 + 100) = uVar5;
        if (param_2 != 0) {
LAB_14036ea00:
          uVar13 = *puVar1;
          if (uVar13 == 0) {
LAB_14036ebae:
            uVar15 = 0;
LAB_14036ebb0:
            lVar18 = *(longlong *)(param_1 + 0xa0);
            if ((*(byte *)(lVar18 + 0x18) & 0x40) == 0) {
              return 0;
            }
            uVar21 = (uint)uVar15;
            if ((uVar27 != 0xffffffff) && (0xff < uVar27 - uVar21)) {
              return 0;
            }
            uVar19 = *(uint *)(lVar18 + 0x60);
            if (uVar27 <= *(uint *)(lVar18 + 0x60)) {
              uVar19 = uVar27;
            }
            if (*(char *)(lVar18 + 0x59) != '\0') {
              if (uVar21 < *(uint *)(lVar18 + 100)) {
                do {
                  uVar21 = (int)uVar15 + 1;
                  puVar1 = (uint *)(*(longlong *)(lVar18 + 0x78) + 4 + uVar15 * 0x14);
                  *puVar1 = *puVar1 | 2;
                  uVar15 = (ulonglong)uVar21;
                } while (uVar21 < *(uint *)(lVar18 + 100));
              }
              for (uVar21 = *(uint *)(lVar18 + 0x5c); uVar21 < uVar19; uVar21 = uVar21 + 1) {
                puVar1 = (uint *)(*(longlong *)(lVar18 + 0x70) + 4 + (ulonglong)uVar21 * 0x14);
                *puVar1 = *puVar1 | 2;
              }
              return 0;
            }
            while (uVar21 < uVar19) {
              uVar21 = (int)uVar15 + 1;
              puVar1 = (uint *)(*(longlong *)(lVar18 + 0x70) + 4 + uVar15 * 0x14);
              *puVar1 = *puVar1 | 2;
              uVar15 = (ulonglong)uVar21;
            }
            return 0;
          }
          lVar18 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0xa0) + 0x78);
          do {
            uVar13 = uVar13 - 1;
            *puVar1 = uVar13;
            uVar6 = *(ushort *)(lVar18 + 0xc + (ulonglong)uVar13 * 0x14);
            uVar26 = *(uint *)(param_1 + 0x58);
            if ((uVar6 & uVar26 & 0xe) == 0) {
              puVar2 = (uint *)(lVar18 + (ulonglong)uVar13 * 0x14);
              if ((uVar6 & 8) != 0) {
                if ((uVar26 & 0x10) == 0) {
                  if ((uVar26 & 0xff00) == 0) goto LAB_14036eaf1;
                  bVar28 = (uVar26 & 0xff00) == (uVar6 & 0xff00);
                }
                else {
                  puVar16 = *(undefined8 **)(*(longlong *)(param_1 + 0x50) + 0xf8);
                  uVar15 = 0;
                  do {
                    if ((*(ulonglong *)
                          (puVar16[2] + (ulonglong)(uVar26 >> 0x10) * 0x18 + uVar15 * 8) >>
                         (*puVar2 >> ((byte)(&DAT_14045c3c8)[uVar15] & 0x1f) & 0x3f) & 1) == 0)
                    goto LAB_14036ead8;
                    uVar13 = (int)uVar15 + 1;
                    uVar15 = (ulonglong)uVar13;
                  } while (uVar13 < 3);
                  puVar16 = (undefined8 *)*puVar16;
                  puVar17 = &DAT_14045dd10;
                  if (puVar16 != (undefined8 *)0x0) {
                    puVar17 = puVar16;
                  }
                  if (*(uint *)(puVar17 + 3) < 4) {
                    puVar16 = &DAT_14045dd10;
                  }
                  else {
                    puVar16 = (undefined8 *)puVar17[2];
                  }
                  cVar12 = FUN_1403ebf20(puVar16,uVar26 >> 0x10,*puVar2);
                  if (cVar12 == '\0') {
LAB_14036ead8:
                    bVar28 = false;
                  }
                  else {
LAB_14036eaf1:
                    bVar28 = true;
                  }
                }
                if (!bVar28) goto LAB_14036eba4;
              }
              uVar6 = (ushort)puVar2[4];
              if ((((((uVar6 & 0x20) == 0) || ((puVar2[3] & 0x10) != 0)) ||
                   ((*(char *)(param_1 + 0x60) == '\0' &&
                    ((((byte)uVar6 & 0x1f) == 1 && ((uVar6 >> 9 & 1) != 0)))))) ||
                  ((*(char *)(param_1 + 0x61) == '\0' &&
                   ((((byte)uVar6 & 0x1f) == 1 && ((uVar6 >> 8 & 1) != 0)))))) ||
                 ((*(char *)(param_1 + 0x62) == '\0' && ((uVar6 & 0x40) != 0)))) {
                bVar28 = false;
              }
              else {
                bVar28 = true;
              }
              pbVar9 = *(byte **)(param_1 + 0x78);
              if (pbVar9 == (byte *)0x0) {
                iVar20 = 0;
              }
              else {
                iVar20 = (uint)pbVar9[1] + (uint)*pbVar9 * 0x100;
              }
              if (((*(uint *)(param_1 + 0x5c) & puVar2[1]) != 0) &&
                 (((*(char *)(param_1 + 99) == '\0' || (*(char *)(param_1 + 100) == '\0')) ||
                  (*(char *)(param_1 + 100) == *(char *)((longlong)puVar2 + 0xf))))) {
                if (*(code **)(param_1 + 0x68) == (code *)0x0) {
                  if (bVar28) goto LAB_14036eba4;
                  goto LAB_14036ec45;
                }
                cVar12 = (**(code **)(param_1 + 0x68))
                                   (puVar2,iVar20,*(undefined8 *)(param_1 + 0x70));
                if (cVar12 != '\0') goto LAB_14036ec45;
              }
              if (!bVar28) {
                uVar21 = *puVar1;
                if (uVar21 < 2) {
                  uVar21 = 1;
                }
                uVar15 = (ulonglong)(uVar21 - 1);
                goto LAB_14036ebb0;
              }
            }
LAB_14036eba4:
            uVar13 = *puVar1;
            if (uVar13 == 0) goto LAB_14036ebae;
          } while( true );
        }
LAB_14036ec61:
        uVar21 = *puVar1;
        lVar18 = *(longlong *)(param_1 + 0xa0);
      }
      FUN_14040ef70(lVar18,uVar21,uVar27);
      FUN_1403b0260(param_1,param_4,param_8,param_9,uVar19);
      return 1;
    }
    uVar21 = 0;
LAB_14036e459:
    lVar18 = *(longlong *)(param_1 + 0xa0);
    if (((*(byte *)(lVar18 + 0x18) & 0x40) != 0) &&
       ((uVar19 = *(uint *)(lVar18 + 0x5c), uVar21 == 0xffffffff || (uVar21 - uVar19 < 0x100)))) {
      uVar27 = *(uint *)(lVar18 + 0x60);
      if (uVar21 <= *(uint *)(lVar18 + 0x60)) {
        uVar27 = uVar21;
      }
      for (; uVar19 < uVar27; uVar19 = uVar19 + 1) {
        puVar1 = (uint *)(*(longlong *)(lVar18 + 0x70) + 4 + (ulonglong)uVar19 * 0x14);
        *puVar1 = *puVar1 | 2;
      }
    }
  }
  return 0;
LAB_14036e4c4:
  if (*(longlong *)(param_1 + 0x38) != 0) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 2;
  }
  uVar27 = uVar19 + 1;
  if (*(uint *)(param_1 + 0x144) < uVar27) {
    uVar13 = uVar27;
    if ((int)uVar27 < 0) {
      uVar13 = 0;
    }
    cVar12 = FUN_1403a4580(param_1 + 0x140,uVar13);
    if (cVar12 == '\0') goto LAB_14036e459;
    *(uint *)(param_1 + 0x144) = uVar13;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x148) + (ulonglong)uVar19 * 4) =
       *(undefined4 *)(param_1 + 8);
  bVar4 = *(byte *)(*(longlong *)(lVar18 + 0x70) + 0xe + (ulonglong)*(uint *)(param_1 + 8) * 0x14);
  bVar11 = bVar4 >> 5;
  bVar25 = 0;
  if ((bVar4 & 0x10) == 0) {
    bVar25 = bVar4 & 0xf;
  }
  if ((bVar10 == 0) || (bVar22 == 0)) {
    if ((bVar11 != 0) && ((bVar25 != 0 && (bVar11 != bVar10)))) goto LAB_14036e459;
  }
  else if ((bVar10 != bVar11) || (bVar22 != bVar25)) {
    if (iVar20 == 0) {
      uVar19 = *(uint *)(lVar18 + 100);
      uVar15 = (ulonglong)uVar19;
      do {
        if (uVar19 == 0) goto LAB_14036e459;
        uVar19 = (int)uVar15 - 1;
        uVar15 = (ulonglong)uVar19;
        bVar4 = *(byte *)(*(longlong *)(lVar18 + 0x78) + 0xe + uVar15 * 0x14);
        puVar1 = (uint *)(*(longlong *)(lVar18 + 0x78) + uVar15 * 0x14);
        if (bVar4 >> 5 != bVar10) goto LAB_14036e459;
        bVar11 = 0;
        if ((bVar4 & 0x10) == 0) {
          bVar11 = bVar4 & 0xf;
        }
      } while (bVar11 != 0);
      uVar6 = (ushort)puVar1[3];
      uVar19 = *(uint *)(param_1 + 0x18);
      if ((uVar6 & uVar19 & 0xe) == 0) {
        if ((uVar6 & 8) == 0) goto LAB_14036e459;
        if ((uVar19 & 0x10) == 0) {
          if ((uVar19 & 0xff00) == 0) goto LAB_14036e459;
          bVar28 = (uVar19 & 0xff00) == (uVar6 & 0xff00);
        }
        else {
          uVar13 = *puVar1;
          uVar15 = 0;
          puVar16 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0xf8);
          do {
            if ((*(ulonglong *)(puVar16[2] + (ulonglong)(uVar19 >> 0x10) * 0x18 + uVar15 * 8) >>
                 (uVar13 >> ((byte)(&DAT_14045c3c8)[uVar15] & 0x1f) & 0x3f) & 1) == 0)
            goto LAB_14036e674;
            uVar26 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar26;
          } while (uVar26 < 3);
          puVar16 = (undefined8 *)*puVar16;
          puVar17 = &DAT_14045dd10;
          if (puVar16 != (undefined8 *)0x0) {
            puVar17 = puVar16;
          }
          if (*(uint *)(puVar17 + 3) < 4) {
            puVar16 = &DAT_14045dd10;
          }
          else {
            puVar16 = (undefined8 *)puVar17[2];
          }
          cVar12 = FUN_1403ebf20(puVar16,uVar19 >> 0x10,uVar13);
          if (cVar12 == '\0') {
LAB_14036e674:
            bVar28 = false;
          }
          else {
            bVar28 = true;
          }
        }
        if (bVar28) goto LAB_14036e459;
      }
      iVar20 = 2;
    }
    else if (iVar20 == 1) goto LAB_14036e459;
  }
  uVar19 = uVar27;
  if (param_4 <= uVar27) goto LAB_14036e6d2;
  goto LAB_14036e290;
LAB_14036e93d:
  if (*(longlong *)(param_1 + 0x78) != 0) {
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 2;
  }
  uVar27 = uVar27 + 1;
  if (param_6 <= uVar27) goto LAB_14036e95a;
  goto LAB_14036e770;
LAB_14036ec45:
  if (*(longlong *)(param_1 + 0x78) != 0) {
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 2;
  }
  uVar21 = uVar21 + 1;
  if (param_2 <= uVar21) goto LAB_14036ec61;
  goto LAB_14036ea00;
}

