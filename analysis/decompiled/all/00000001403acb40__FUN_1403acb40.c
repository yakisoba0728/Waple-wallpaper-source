// Function: FUN_1403acb40
// Addr: 1403acb40
// Size: 1873 bytes


ulonglong FUN_1403acb40(longlong param_1,longlong param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  undefined1 uVar4;
  ushort uVar5;
  code *pcVar6;
  uint3 uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  ushort uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  byte *pbVar26;
  uint uVar27;
  
  uVar23 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100;
  if (uVar23 == 0) {
    pbVar16 = (byte *)&DAT_14045dde0;
  }
  else {
    pbVar16 = (byte *)((ulonglong)uVar23 + param_1);
  }
  iVar21 = (uint)*pbVar16 * 0x100 + (uint)pbVar16[1];
  if (iVar21 == 1) {
    pbVar16 = (byte *)FUN_1403c71c0(pbVar16,*(undefined4 *)
                                             (*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70) +
                                             (ulonglong)
                                             *(uint *)(*(longlong *)(param_2 + 0xa0) + 0x5c) * 0x14)
                                   );
  }
  else {
    pbVar15 = (byte *)0x0;
    if (iVar21 != 2) goto LAB_1403ad1f8;
    pbVar16 = (byte *)FUN_1403c7240();
  }
  uVar23 = (uint)pbVar16;
  pbVar15 = pbVar16;
  if ((uVar23 != 0xffffffff) && (*(int *)(param_2 + 0x128) == 0x40)) {
    uVar27 = (uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 4) * 0x100;
    pbVar26 = (byte *)((ulonglong)(uVar27 * 2 + 2) + 4 + param_1);
    lVar11 = (ulonglong)pbVar26[1] + 1 + (ulonglong)*pbVar26 * 0x100;
    pbVar2 = pbVar26 + lVar11 * 2;
    pbVar15 = (byte *)0x0;
    if (uVar23 < (uint)pbVar26[lVar11 * 2] * 0x100 + (uint)pbVar2[1]) {
      lVar11 = *(longlong *)(param_2 + 0xa0);
      puVar1 = (uint *)(param_2 + 0x48);
      lVar12 = 100;
      if (uVar27 == 0) {
        lVar12 = 100;
        if (*(char *)(lVar11 + 0x59) == '\0') {
          lVar12 = 0x5c;
        }
        uVar27 = *(uint *)(lVar12 + lVar11);
      }
      else {
        if (*(char *)(lVar11 + 0x59) == '\0') {
          lVar12 = 0x5c;
        }
        uVar25 = 0;
        *puVar1 = *(uint *)(lVar12 + lVar11);
        lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x50) + 0xa0);
        uVar4 = *(undefined1 *)
                 (*(longlong *)(lVar11 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar11 + 0x5c) * 0x14);
        pbVar15 = (byte *)(param_1 + 6);
        *(code **)(param_2 + 0x68) = FUN_1403ec220;
        *(longlong *)(param_2 + 0x70) = param_1;
        *(byte **)(param_2 + 0x78) = pbVar15;
        *(undefined1 *)(param_2 + 100) = uVar4;
        if (uVar27 != 0) {
LAB_1403accd0:
          uVar24 = *puVar1;
          if (uVar24 != 0) {
            lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x50) + 0xa0) + 0x78);
            do {
              uVar24 = uVar24 - 1;
              *puVar1 = uVar24;
              uVar5 = *(ushort *)(lVar11 + 0xc + (ulonglong)uVar24 * 0x14);
              uVar22 = *(uint *)(param_2 + 0x58);
              uVar9 = uVar5 & uVar22;
              pbVar15 = (byte *)(ulonglong)uVar9;
              if ((uVar9 & 0xe) == 0) {
                puVar3 = (uint *)(lVar11 + (ulonglong)uVar24 * 0x14);
                if ((uVar5 & 8) != 0) {
                  if ((uVar22 & 0x10) == 0) {
                    uVar7 = (uint3)(uVar9 >> 8);
                    if ((uVar22 & 0xff00) == 0) {
                      pbVar15 = (byte *)CONCAT71((uint7)uVar7,1);
                    }
                    else {
                      pbVar15 = (byte *)(ulonglong)
                                        CONCAT31(uVar7,(uVar22 & 0xff00) == (uVar5 & 0xff00));
                    }
                  }
                  else {
                    puVar18 = *(undefined8 **)(*(longlong *)(param_2 + 0x50) + 0xf8);
                    uVar13 = 0;
                    do {
                      if ((*(ulonglong *)
                            (puVar18[2] + (ulonglong)(uVar22 >> 0x10) * 0x18 + uVar13 * 8) >>
                           (*puVar3 >> ((byte)(&DAT_14045c498)[uVar13] & 0x1f) & 0x3f) & 1) == 0)
                      goto LAB_1403acdab;
                      uVar24 = (int)uVar13 + 1;
                      uVar13 = (ulonglong)uVar24;
                    } while (uVar24 < 3);
                    puVar18 = (undefined8 *)*puVar18;
                    puVar17 = &DAT_14045dde0;
                    if (puVar18 != (undefined8 *)0x0) {
                      puVar17 = puVar18;
                    }
                    if (*(uint *)(puVar17 + 3) < 4) {
                      puVar18 = &DAT_14045dde0;
                    }
                    else {
                      puVar18 = (undefined8 *)puVar17[2];
                    }
                    uVar13 = FUN_1403ebff0(puVar18,uVar22 >> 0x10,*puVar3);
                    if ((char)uVar13 == '\0') {
LAB_1403acdab:
                      pbVar15 = (byte *)(uVar13 & 0xffffffffffffff00);
                    }
                    else {
                      pbVar15 = (byte *)CONCAT71((int7)(uVar13 >> 8),1);
                    }
                  }
                  if ((char)pbVar15 == '\0') goto LAB_1403ace88;
                }
                uVar5 = (ushort)puVar3[4];
                if ((((((uVar5 & 0x20) == 0) || ((puVar3[3] & 0x10) != 0)) ||
                     ((*(char *)(param_2 + 0x60) == '\0' &&
                      ((((byte)uVar5 & 0x1f) == 1 && ((uVar5 & 0x200) != 0)))))) ||
                    ((*(char *)(param_2 + 0x61) == '\0' &&
                     ((((byte)uVar5 & 0x1f) == 1 && ((uVar5 & 0x100) != 0)))))) ||
                   ((*(char *)(param_2 + 0x62) == '\0' && ((uVar5 & 0x40) != 0)))) {
                  bVar8 = false;
                }
                else {
                  bVar8 = true;
                }
                pbVar15 = *(byte **)(param_2 + 0x78);
                if (pbVar15 == (byte *)0x0) {
                  iVar21 = 0;
                }
                else {
                  iVar21 = (uint)*pbVar15 * 0x100 + (uint)pbVar15[1];
                }
                pbVar15 = (byte *)(ulonglong)puVar3[1];
                if ((*(uint *)(param_2 + 0x5c) & puVar3[1]) != 0) {
                  if (*(char *)(param_2 + 99) != '\0') {
                    pbVar15 = (byte *)0x0;
                    if ((*(char *)(param_2 + 100) != '\0') &&
                       (*(char *)(param_2 + 100) != *(char *)((longlong)puVar3 + 0xf)))
                    goto LAB_1403ace84;
                  }
                  pcVar6 = *(code **)(param_2 + 0x68);
                  if (pcVar6 == (code *)0x0) {
                    pbVar15 = (byte *)0x0;
                    if (bVar8) goto LAB_1403ace88;
                    goto LAB_1403aceaa;
                  }
                  if (pcVar6 == FUN_1403ec220) {
                    pbVar15 = (byte *)FUN_1403ec220();
                  }
                  else {
                    pbVar15 = (byte *)(*pcVar6)(puVar3,iVar21,*(undefined8 *)(param_2 + 0x70));
                  }
                  if ((char)pbVar15 != '\0') goto LAB_1403aceaa;
                }
LAB_1403ace84:
                if (!bVar8) {
                  uVar27 = *puVar1;
                  pbVar15 = (byte *)0x0;
                  if (uVar27 < 2) {
                    uVar27 = 1;
                  }
                  uVar27 = uVar27 - 1;
                  uVar23 = 0;
                  goto LAB_1403ad181;
                }
              }
LAB_1403ace88:
              uVar24 = *puVar1;
              if (uVar24 == 0) break;
            } while( true );
          }
          uVar27 = 0;
          uVar23 = 0;
          goto LAB_1403ad181;
        }
LAB_1403acf04:
        uVar27 = *puVar1;
      }
      uVar25 = *(uint *)(*(longlong *)(param_2 + 0xa0) + 0x5c);
      uVar24 = (uint)*pbVar26 * 0x100 + (uint)pbVar26[1];
      if (uVar24 != 0) {
        *puVar1 = uVar25;
        *(undefined4 *)(param_2 + 0x80) =
             *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x50) + 0xa0) + 0x60);
        lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x50) + 0xa0);
        uVar4 = *(undefined1 *)
                 (*(longlong *)(lVar11 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar11 + 0x5c) * 0x14);
        pbVar15 = pbVar26 + 2;
        uVar25 = 0;
        *(code **)(param_2 + 0x68) = FUN_1403ec220;
        *(longlong *)(param_2 + 0x70) = param_1;
        *(undefined1 *)(param_2 + 100) = uVar4;
        *(byte **)(param_2 + 0x78) = pbVar15;
        if (uVar24 != 0) {
LAB_1403acf80:
          uVar22 = *puVar1;
          iVar21 = *(int *)(param_2 + 0x80) + -1;
          if ((int)uVar22 < iVar21) {
            lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x50) + 0xa0) + 0x70);
            do {
              uVar22 = uVar22 + 1;
              *puVar1 = uVar22;
              uVar5 = *(ushort *)(lVar11 + 0xc + (ulonglong)uVar22 * 0x14);
              uVar9 = *(uint *)(param_2 + 0x58);
              uVar10 = uVar5 & uVar9;
              pbVar15 = (byte *)(ulonglong)uVar10;
              if ((uVar10 & 0xe) == 0) {
                puVar3 = (uint *)(lVar11 + (ulonglong)uVar22 * 0x14);
                if ((uVar5 & 8) != 0) {
                  if ((uVar9 & 0x10) == 0) {
                    uVar7 = (uint3)(uVar10 >> 8);
                    if ((uVar9 & 0xff00) == 0) {
                      pbVar15 = (byte *)CONCAT71((uint7)uVar7,1);
                    }
                    else {
                      pbVar15 = (byte *)(ulonglong)
                                        CONCAT31(uVar7,(uVar9 & 0xff00) == (uVar5 & 0xff00));
                    }
                  }
                  else {
                    uVar13 = 0;
                    puVar18 = *(undefined8 **)(*(longlong *)(param_2 + 0x50) + 0xf8);
                    do {
                      uVar14 = *(ulonglong *)
                                (puVar18[2] + (ulonglong)(uVar9 >> 0x10) * 0x18 + uVar13 * 8);
                      if ((uVar14 >> (*puVar3 >> ((byte)(&DAT_14045c498)[uVar13] & 0x1f) & 0x3f) & 1
                          ) == 0) goto LAB_1403ad065;
                      uVar22 = (int)uVar13 + 1;
                      uVar13 = (ulonglong)uVar22;
                    } while (uVar22 < 3);
                    puVar18 = (undefined8 *)*puVar18;
                    puVar17 = &DAT_14045dde0;
                    if (puVar18 != (undefined8 *)0x0) {
                      puVar17 = puVar18;
                    }
                    if (*(uint *)(puVar17 + 3) < 4) {
                      puVar18 = &DAT_14045dde0;
                    }
                    else {
                      puVar18 = (undefined8 *)puVar17[2];
                    }
                    uVar14 = FUN_1403ebff0(puVar18,uVar9 >> 0x10,*puVar3);
                    if ((char)uVar14 == '\0') {
LAB_1403ad065:
                      pbVar15 = (byte *)(uVar14 & 0xffffffffffffff00);
                    }
                    else {
                      pbVar15 = (byte *)CONCAT71((int7)(uVar14 >> 8),1);
                    }
                  }
                  if ((char)pbVar15 == '\0') goto LAB_1403ad138;
                }
                uVar5 = (ushort)puVar3[4];
                if (((((uVar5 & 0x20) == 0) || ((puVar3[3] & 0x10) != 0)) ||
                    ((*(char *)(param_2 + 0x60) == '\0' &&
                     ((((byte)uVar5 & 0x1f) == 1 && ((uVar5 >> 9 & 1) != 0)))))) ||
                   (((*(char *)(param_2 + 0x61) == '\0' &&
                     ((((byte)uVar5 & 0x1f) == 1 && ((uVar5 >> 8 & 1) != 0)))) ||
                    ((*(char *)(param_2 + 0x62) == '\0' && ((uVar5 & 0x40) != 0)))))) {
                  bVar8 = false;
                }
                else {
                  bVar8 = true;
                }
                pbVar15 = *(byte **)(param_2 + 0x78);
                if (pbVar15 == (byte *)0x0) {
                  iVar19 = 0;
                }
                else {
                  iVar19 = (uint)pbVar15[1] + (uint)*pbVar15 * 0x100;
                }
                pbVar15 = (byte *)(ulonglong)puVar3[1];
                if ((*(uint *)(param_2 + 0x5c) & puVar3[1]) != 0) {
                  if (*(char *)(param_2 + 99) != '\0') {
                    pbVar15 = (byte *)0x0;
                    if ((*(char *)(param_2 + 100) != '\0') &&
                       (*(char *)(param_2 + 100) != *(char *)((longlong)puVar3 + 0xf)))
                    goto LAB_1403ad134;
                  }
                  pcVar6 = *(code **)(param_2 + 0x68);
                  if (pcVar6 == (code *)0x0) {
                    pbVar15 = (byte *)0x0;
                    if (bVar8) goto LAB_1403ad138;
                    goto LAB_1403ad14f;
                  }
                  if (pcVar6 == FUN_1403ec220) {
                    pbVar15 = (byte *)FUN_1403ec220();
                  }
                  else {
                    pbVar15 = (byte *)(*pcVar6)(puVar3,iVar19,*(undefined8 *)(param_2 + 0x70));
                  }
                  if ((char)pbVar15 != '\0') goto LAB_1403ad14f;
                }
LAB_1403ad134:
                if (!bVar8) {
                  uVar23 = *puVar1 + 1;
                  goto LAB_1403ad181;
                }
              }
LAB_1403ad138:
              uVar22 = *puVar1;
              if (iVar21 <= (int)uVar22) break;
            } while( true );
          }
          uVar23 = *(uint *)(param_2 + 0x80);
LAB_1403ad181:
          lVar11 = *(longlong *)(param_2 + 0xa0);
          if (((*(byte *)(lVar11 + 0x18) & 0x40) != 0) &&
             ((uVar23 == 0xffffffff ||
              (pbVar15 = (byte *)(ulonglong)(uVar23 - uVar27), uVar23 - uVar27 < 0x100)))) {
            uVar25 = *(uint *)(lVar11 + 0x60);
            if (uVar23 <= *(uint *)(lVar11 + 0x60)) {
              uVar25 = uVar23;
            }
            if (*(char *)(lVar11 + 0x59) == '\0') {
              for (; uVar27 < uVar25; uVar27 = uVar27 + 1) {
                pbVar15 = *(byte **)(lVar11 + 0x70);
                *(uint *)(pbVar15 + (ulonglong)uVar27 * 0x14 + 4) =
                     *(uint *)(pbVar15 + (ulonglong)uVar27 * 0x14 + 4) | 2;
              }
            }
            else {
              if (uVar27 < *(uint *)(lVar11 + 100)) {
                do {
                  uVar13 = (ulonglong)uVar27;
                  uVar27 = uVar27 + 1;
                  pbVar15 = *(byte **)(lVar11 + 0x78);
                  *(uint *)(pbVar15 + uVar13 * 0x14 + 4) =
                       *(uint *)(pbVar15 + uVar13 * 0x14 + 4) | 2;
                } while (uVar27 < *(uint *)(lVar11 + 100));
              }
              for (uVar23 = *(uint *)(lVar11 + 0x5c); uVar23 < uVar25; uVar23 = uVar23 + 1) {
                pbVar15 = *(byte **)(lVar11 + 0x70);
                *(uint *)(pbVar15 + (ulonglong)uVar23 * 0x14 + 4) =
                     *(uint *)(pbVar15 + (ulonglong)uVar23 * 0x14 + 4) | 2;
              }
            }
          }
          goto LAB_1403ad1f8;
        }
LAB_1403ad246:
        uVar25 = *puVar1;
      }
      pbVar15 = (byte *)&DAT_14045dde0;
      FUN_14040f040(*(undefined8 *)(param_2 + 0xa0),uVar27,uVar25 + 1);
      if (uVar23 < (uint)*pbVar2 * 0x100 + (uint)pbVar2[1]) {
        pbVar15 = pbVar2 + (((ulonglong)pbVar16 & 0xffffffff) + 1) * 2;
      }
      lVar11 = *(longlong *)(param_2 + 0xa0);
      uVar23 = (uint)*pbVar15 * 0x100 + (uint)pbVar15[1];
      *(ulonglong *)(lVar11 + 0xb8) = *(ulonglong *)(lVar11 + 0xb8) | 1L << (uVar23 >> 4 & 0x3f);
      *(ulonglong *)(lVar11 + 0xc0) = *(ulonglong *)(lVar11 + 0xc0) | 1L << (uVar23 & 0x3f);
      *(ulonglong *)(lVar11 + 200) = *(ulonglong *)(lVar11 + 200) | 1L << (uVar23 >> 6 & 0x3f);
      if (*(int *)(param_2 + 0x134) != -1) {
        *(char *)(*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70) + 0xf +
                 (ulonglong)*(uint *)(*(longlong *)(param_2 + 0xa0) + 0x5c) * 0x14) =
             (char)*(int *)(param_2 + 0x134);
      }
      uVar13 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0xa0) + 0x5c);
      lVar11 = *(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70);
      uVar5 = *(ushort *)(lVar11 + 0xc + uVar13 * 0x14);
      uVar20 = uVar5 | 0x10;
      if (*(char *)(param_2 + 300) != '\0') {
        uVar20 = FUN_1403cabd0(*(undefined8 *)(param_2 + 0xf8),uVar23);
        uVar20 = uVar20 | uVar5 & 0x70 | 0x10;
      }
      *(ushort *)(lVar11 + uVar13 * 0x14 + 0xc) = uVar20;
      lVar11 = *(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70);
      *(uint *)(lVar11 + (ulonglong)*(uint *)(*(longlong *)(param_2 + 0xa0) + 0x5c) * 0x14) = uVar23
      ;
      return CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
    }
  }
LAB_1403ad1f8:
  return (ulonglong)pbVar15 & 0xffffffffffffff00;
LAB_1403aceaa:
  pbVar15 = *(byte **)(param_2 + 0x78);
  if (pbVar15 != (byte *)0x0) {
    pbVar15 = pbVar15 + 2;
    *(byte **)(param_2 + 0x78) = pbVar15;
  }
  uVar25 = uVar25 + 1;
  if (uVar27 <= uVar25) goto LAB_1403acf04;
  goto LAB_1403accd0;
LAB_1403ad14f:
  pbVar15 = *(byte **)(param_2 + 0x78);
  if (pbVar15 != (byte *)0x0) {
    pbVar15 = pbVar15 + 2;
    *(byte **)(param_2 + 0x78) = pbVar15;
  }
  uVar25 = uVar25 + 1;
  if (uVar24 <= uVar25) goto LAB_1403ad246;
  goto LAB_1403acf80;
}

