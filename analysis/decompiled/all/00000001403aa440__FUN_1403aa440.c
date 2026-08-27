// Function: FUN_1403aa440
// Addr: 1403aa440
// Size: 2996 bytes


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_1403aa440(byte *param_1,longlong param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  ulonglong uVar22;
  bool bVar23;
  byte *in_stack_fffffffffffffef8;
  undefined8 *in_stack_ffffffffffffff00;
  uint local_f8;
  longlong local_f0;
  
  uVar13 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (4 < uVar13) {
    lVar7 = *(longlong *)(param_2 + 0x50);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(*(longlong *)(param_2 + 0xa0) + 0x5c);
    iVar17 = *(int *)(*(longlong *)(lVar7 + 0xa0) + 0x60);
    *(int *)(param_2 + 0x80) = iVar17;
    iVar17 = iVar17 + -1;
    uVar4 = *(undefined1 *)
             (*(longlong *)(*(longlong *)(lVar7 + 0xa0) + 0x70) + 0xf +
             (ulonglong)*(uint *)(*(longlong *)(lVar7 + 0xa0) + 0x5c) * 0x14);
    *(code **)(param_2 + 0x68) = FUN_1403ec040;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined1 *)(param_2 + 100) = uVar4;
    iVar16 = *(int *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x78) = 0;
    if (iVar16 < iVar17) {
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0xa0) + 0x70);
      do {
        *(uint *)(param_2 + 0x48) = iVar16 + 1U;
        lVar2 = (ulonglong)(iVar16 + 1U) * 0x14;
        uVar5 = *(ushort *)(lVar2 + 0xc + lVar7);
        uVar6 = *(uint *)(param_2 + 0x58);
        if ((uVar5 & uVar6 & 0xe) == 0) {
          puVar1 = (uint *)(lVar2 + lVar7);
          if ((uVar5 & 8) != 0) {
            if ((uVar6 & 0x10) == 0) {
              if ((uVar6 & 0xff00) == 0) {
                bVar23 = true;
              }
              else {
                bVar23 = (uVar6 & 0xff00) == (uVar5 & 0xff00);
              }
            }
            else {
              uVar18 = 0;
              puVar14 = *(undefined8 **)(*(longlong *)(param_2 + 0x50) + 0xf8);
              do {
                if ((*(ulonglong *)(puVar14[2] + (ulonglong)(uVar6 >> 0x10) * 0x18 + uVar18 * 8) >>
                     (*puVar1 >> ((byte)(&DAT_14045c3c8)[uVar18] & 0x1f) & 0x3f) & 1) == 0)
                goto LAB_1403aa5ce;
                uVar19 = (int)uVar18 + 1;
                uVar18 = (ulonglong)uVar19;
              } while (uVar19 < 3);
              puVar14 = (undefined8 *)*puVar14;
              puVar15 = &DAT_14045dd10;
              if (puVar14 != (undefined8 *)0x0) {
                puVar15 = puVar14;
              }
              if (*(uint *)(puVar15 + 3) < 4) {
                puVar14 = &DAT_14045dd10;
              }
              else {
                puVar14 = (undefined8 *)puVar15[2];
              }
              cVar10 = FUN_1403ebf20(puVar14,uVar6 >> 0x10);
              if (cVar10 == '\0') {
LAB_1403aa5ce:
                bVar23 = false;
              }
              else {
                bVar23 = true;
              }
            }
            if (!bVar23) goto LAB_1403aa6af;
          }
          uVar5 = (ushort)puVar1[4];
          if ((((((uVar5 & 0x20) == 0) || ((puVar1[3] & 0x10) != 0)) ||
               ((*(char *)(param_2 + 0x60) == '\0' &&
                ((((byte)uVar5 & 0x1f) == 1 && ((uVar5 & 0x200) != 0)))))) ||
              ((*(char *)(param_2 + 0x61) == '\0' &&
               ((((byte)uVar5 & 0x1f) == 1 && ((uVar5 & 0x100) != 0)))))) ||
             ((*(char *)(param_2 + 0x62) == '\0' && ((uVar5 & 0x40) != 0)))) {
            bVar23 = false;
          }
          else {
            bVar23 = true;
          }
          pbVar12 = *(byte **)(param_2 + 0x78);
          if (pbVar12 == (byte *)0x0) {
            iVar16 = 0;
          }
          else {
            iVar16 = (uint)pbVar12[1] + (uint)*pbVar12 * 0x100;
          }
          if (((*(uint *)(param_2 + 0x5c) & puVar1[1]) != 0) &&
             (((*(char *)(param_2 + 99) == '\0' || (*(char *)(param_2 + 100) == '\0')) ||
              (*(char *)(param_2 + 100) == *(char *)((longlong)puVar1 + 0xf))))) {
            pcVar8 = *(code **)(param_2 + 0x68);
            if (pcVar8 == (code *)0x0) {
              if (bVar23) goto LAB_1403aa6af;
            }
            else {
              if (pcVar8 == FUN_1403ec040) {
                cVar10 = '\x01';
              }
              else {
                cVar10 = (*pcVar8)(puVar1,iVar16);
              }
              if (cVar10 == '\0') goto LAB_1403aa6ab;
            }
            if (*(longlong *)(param_2 + 0x78) != 0) {
              *(longlong *)(param_2 + 0x78) = *(longlong *)(param_2 + 0x78) + 2;
            }
            lVar7 = *(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70);
            uVar6 = *(uint *)(param_2 + 0x58);
            puVar1 = (uint *)(lVar7 + (ulonglong)*(uint *)(param_2 + 0x48) * 0x14);
            uVar5 = *(ushort *)(lVar7 + 0xc + (ulonglong)*(uint *)(param_2 + 0x48) * 0x14);
            if ((uVar5 & uVar6 & 0xe) != 0) goto LAB_1403aaf3d;
            if ((uVar5 & 8) == 0) goto LAB_1403aa7fe;
            if ((uVar6 & 0x10) != 0) {
              uVar18 = 0;
              puVar14 = *(undefined8 **)(*(longlong *)(param_2 + 0x50) + 0xf8);
              goto LAB_1403aa780;
            }
            if ((uVar6 & 0xff00) == 0) goto LAB_1403aa7f4;
            bVar23 = (uVar6 & 0xff00) == (uVar5 & 0xff00);
            goto LAB_1403aa7f6;
          }
LAB_1403aa6ab:
          if (!bVar23) break;
        }
LAB_1403aa6af:
        iVar16 = *(int *)(param_2 + 0x48);
      } while (iVar16 < iVar17);
    }
    pbVar12 = param_1;
    for (iVar17 = (uint)*param_1 * 0x100 + (uint)param_1[1]; pbVar21 = pbVar12 + 2, iVar17 != 0;
        iVar17 = iVar17 + -1) {
      uVar13 = (uint)pbVar12[3] + (uint)*pbVar21 * 0x100;
      if (uVar13 == 0) {
        pbVar12 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar12 = param_1 + uVar13;
      }
      if (((uint)*pbVar12 * 0x100 + (uint)pbVar12[1] < 2) || (iVar17 == 0)) break;
      pbVar12 = pbVar21;
    }
    while( true ) {
      if (iVar17 == 0) {
        return 0;
      }
      uVar13 = (uint)*pbVar21 * 0x100 + (uint)pbVar21[1];
      if (uVar13 == 0) {
        pbVar12 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar12 = param_1 + uVar13;
      }
      cVar10 = FUN_1403aa3e0(pbVar12,param_2,param_3);
      iVar16 = iVar17;
      if (cVar10 != '\0') break;
      do {
        if (iVar16 == 0) {
          iVar16 = 0;
        }
        else {
          iVar17 = iVar16 + -1;
          pbVar21 = pbVar21 + 2;
          iVar16 = iVar17;
        }
        if (iVar17 == 0) {
          return 0;
        }
        pbVar12 = (byte *)&DAT_14045dd10;
        if (iVar16 != 0) {
          pbVar12 = pbVar21;
        }
        uVar13 = (uint)*pbVar12 * 0x100 + (uint)pbVar12[1];
        if (uVar13 == 0) {
          pbVar12 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar12 = param_1 + uVar13;
        }
      } while (1 < (uint)*pbVar12 * 0x100 + (uint)pbVar12[1]);
    }
    return 1;
  }
LAB_1403aaf3d:
  iVar17 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  pbVar12 = param_1;
  do {
    pbVar12 = pbVar12 + 2;
    do {
      if (iVar17 == 0) {
        return 0;
      }
      pbVar21 = (byte *)&DAT_14045dd10;
      if (iVar17 != 0) {
        pbVar21 = pbVar12;
      }
      uVar13 = (uint)*pbVar21 * 0x100 + (uint)pbVar21[1];
      if (uVar13 == 0) {
        pbVar21 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar21 = param_1 + uVar13;
      }
      iVar16 = (uint)pbVar21[1] + (uint)*pbVar21 * 0x100;
      uVar13 = iVar16 * 2 - 2;
      if (iVar16 == 0) {
        uVar13 = 0;
      }
      cVar10 = FUN_1403720a0(param_2,iVar16,pbVar21 + 4,(uint)pbVar21[3] + (uint)pbVar21[2] * 0x100,
                             pbVar21 + (ulonglong)uVar13 + 4,param_3);
      if (cVar10 != '\0') {
        return 1;
      }
    } while (iVar17 == 0);
    iVar17 = iVar17 + -1;
  } while( true );
  while (uVar19 = (int)uVar18 + 1, uVar18 = (ulonglong)uVar19, uVar19 < 3) {
LAB_1403aa780:
    if ((*(ulonglong *)(puVar14[2] + (ulonglong)(uVar6 >> 0x10) * 0x18 + uVar18 * 8) >>
         (*puVar1 >> ((byte)(&DAT_14045c3c8)[uVar18] & 0x1f) & 0x3f) & 1) == 0) goto LAB_1403aa7db;
  }
  puVar14 = (undefined8 *)*puVar14;
  puVar15 = &DAT_14045dd10;
  if (puVar14 != (undefined8 *)0x0) {
    puVar15 = puVar14;
  }
  if (*(uint *)(puVar15 + 3) < 4) {
    puVar14 = &DAT_14045dd10;
  }
  else {
    puVar14 = (undefined8 *)puVar15[2];
  }
  cVar10 = FUN_1403ebf20(puVar14,uVar6 >> 0x10,*puVar1);
  if (cVar10 == '\0') {
LAB_1403aa7db:
    bVar23 = false;
  }
  else {
LAB_1403aa7f4:
    bVar23 = true;
  }
LAB_1403aa7f6:
  if (bVar23) {
LAB_1403aa7fe:
    uVar5 = (ushort)puVar1[4];
    if (((((uVar5 & 0x20) == 0) || ((puVar1[3] & 0x10) != 0)) ||
        ((*(char *)(param_2 + 0x60) == '\0' &&
         ((((byte)uVar5 & 0x1f) == 1 && ((uVar5 >> 9 & 1) != 0)))))) ||
       (((*(char *)(param_2 + 0x61) == '\0' &&
         ((((byte)uVar5 & 0x1f) == 1 && ((uVar5 >> 8 & 1) != 0)))) ||
        ((*(char *)(param_2 + 0x62) == '\0' && ((uVar5 & 0x40) != 0)))))) {
      uVar6 = *(uint *)(param_2 + 0x48);
      iVar17 = *(int *)(param_2 + 0x80) + -1;
      local_f0 = 0;
      local_f8 = 0;
      lVar7 = *(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70);
      if ((int)uVar6 < iVar17) {
        lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x50) + 0xa0) + 0x70);
        uVar19 = uVar6;
        do {
          *(uint *)(param_2 + 0x48) = uVar19 + 1;
          lVar3 = (ulonglong)(uVar19 + 1) * 0x14;
          uVar19 = *(uint *)(param_2 + 0x58);
          uVar5 = *(ushort *)(lVar3 + 0xc + lVar2);
          if ((uVar5 & uVar19 & 0xe) == 0) {
            puVar1 = (uint *)(lVar3 + lVar2);
            if ((uVar5 & 8) != 0) {
              if ((uVar19 & 0x10) == 0) {
                if ((uVar19 & 0xff00) == 0) goto LAB_1403aa973;
                bVar23 = (uVar19 & 0xff00) == (uVar5 & 0xff00);
              }
              else {
                uVar18 = 0;
                puVar14 = *(undefined8 **)(*(longlong *)(param_2 + 0x50) + 0xf8);
                do {
                  if ((*(ulonglong *)(puVar14[2] + (ulonglong)(uVar19 >> 0x10) * 0x18 + uVar18 * 8)
                       >> (*puVar1 >> ((byte)(&DAT_14045c3c8)[uVar18] & 0x1f) & 0x3f) & 1) == 0)
                  goto LAB_1403aa95a;
                  uVar20 = (int)uVar18 + 1;
                  uVar18 = (ulonglong)uVar20;
                } while (uVar20 < 3);
                puVar14 = (undefined8 *)*puVar14;
                puVar15 = &DAT_14045dd10;
                if (puVar14 != (undefined8 *)0x0) {
                  puVar15 = puVar14;
                }
                if (*(uint *)(puVar15 + 3) < 4) {
                  puVar14 = &DAT_14045dd10;
                }
                else {
                  puVar14 = (undefined8 *)puVar15[2];
                }
                cVar10 = FUN_1403ebf20(puVar14,uVar19 >> 0x10);
                if (cVar10 == '\0') {
LAB_1403aa95a:
                  bVar23 = false;
                }
                else {
LAB_1403aa973:
                  bVar23 = true;
                }
              }
              if (!bVar23) goto LAB_1403aaa2e;
            }
            uVar5 = (ushort)puVar1[4];
            if ((((((uVar5 & 0x20) == 0) || ((puVar1[3] & 0x10) != 0)) ||
                 ((*(char *)(param_2 + 0x60) == '\0' &&
                  ((((byte)uVar5 & 0x1f) == 1 && ((uVar5 >> 9 & 1) != 0)))))) ||
                ((*(char *)(param_2 + 0x61) == '\0' &&
                 ((((byte)uVar5 & 0x1f) == 1 && ((uVar5 >> 8 & 1) != 0)))))) ||
               ((*(char *)(param_2 + 0x62) == '\0' && ((uVar5 & 0x40) != 0)))) {
              bVar23 = false;
            }
            else {
              bVar23 = true;
            }
            pbVar12 = *(byte **)(param_2 + 0x78);
            if (pbVar12 == (byte *)0x0) {
              iVar16 = 0;
            }
            else {
              iVar16 = (uint)pbVar12[1] + (uint)*pbVar12 * 0x100;
            }
            if (((*(uint *)(param_2 + 0x5c) & puVar1[1]) != 0) &&
               (((*(char *)(param_2 + 99) == '\0' || (*(char *)(param_2 + 100) == '\0')) ||
                (*(char *)(param_2 + 100) == *(char *)((longlong)puVar1 + 0xf))))) {
              pcVar8 = *(code **)(param_2 + 0x68);
              if (pcVar8 == (code *)0x0) {
                if (bVar23) goto LAB_1403aaa2e;
              }
              else {
                if (pcVar8 == FUN_1403ec040) {
                  cVar10 = '\x01';
                }
                else {
                  cVar10 = (*pcVar8)(puVar1,iVar16);
                }
                if (cVar10 == '\0') goto LAB_1403aaa26;
              }
              if (*(longlong *)(param_2 + 0x78) != 0) {
                *(longlong *)(param_2 + 0x78) = *(longlong *)(param_2 + 0x78) + 2;
              }
              lVar2 = *(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70);
              uVar19 = *(uint *)(param_2 + 0x58);
              puVar1 = (uint *)(lVar2 + (ulonglong)*(uint *)(param_2 + 0x48) * 0x14);
              uVar5 = *(ushort *)(lVar2 + 0xc + (ulonglong)*(uint *)(param_2 + 0x48) * 0x14);
              if ((uVar5 & uVar19 & 0xe) != 0) goto LAB_1403aaf3d;
              if ((uVar5 & 8) == 0) goto LAB_1403aab3e;
              if ((uVar19 & 0x10) != 0) {
                uVar18 = 0;
                puVar14 = *(undefined8 **)(*(longlong *)(param_2 + 0x50) + 0xf8);
                goto LAB_1403aaac0;
              }
              if ((uVar19 & 0xff00) == 0) goto LAB_1403aab34;
              bVar23 = (uVar19 & 0xff00) == (uVar5 & 0xff00);
              goto LAB_1403aab36;
            }
LAB_1403aaa26:
            if (!bVar23) break;
          }
LAB_1403aaa2e:
          uVar19 = *(uint *)(param_2 + 0x48);
        } while ((int)uVar19 < iVar17);
      }
      goto LAB_1403aabb4;
    }
  }
  goto LAB_1403aaf3d;
  while (uVar20 = (int)uVar18 + 1, uVar18 = (ulonglong)uVar20, uVar20 < 3) {
LAB_1403aaac0:
    if ((*(ulonglong *)(puVar14[2] + (ulonglong)(uVar19 >> 0x10) * 0x18 + uVar18 * 8) >>
         (*puVar1 >> ((byte)(&DAT_14045c3c8)[uVar18] & 0x1f) & 0x3f) & 1) == 0) goto LAB_1403aab1b;
  }
  puVar14 = (undefined8 *)*puVar14;
  puVar15 = &DAT_14045dd10;
  if (puVar14 != (undefined8 *)0x0) {
    puVar15 = puVar14;
  }
  if (*(uint *)(puVar15 + 3) < 4) {
    puVar14 = &DAT_14045dd10;
  }
  else {
    puVar14 = (undefined8 *)puVar15[2];
  }
  cVar10 = FUN_1403ebf20(puVar14,uVar19 >> 0x10,*puVar1);
  if (cVar10 == '\0') {
LAB_1403aab1b:
    bVar23 = false;
  }
  else {
LAB_1403aab34:
    bVar23 = true;
  }
LAB_1403aab36:
  if (bVar23) {
LAB_1403aab3e:
    uVar5 = (ushort)puVar1[4];
    if (((((uVar5 & 0x20) == 0) || ((puVar1[3] & 0x10) != 0)) ||
        ((*(char *)(param_2 + 0x60) == '\0' &&
         ((((byte)uVar5 & 0x1f) == 1 && ((uVar5 >> 9 & 1) != 0)))))) ||
       (((*(char *)(param_2 + 0x61) == '\0' &&
         ((((byte)uVar5 & 0x1f) == 1 && ((uVar5 >> 8 & 1) != 0)))) ||
        ((*(char *)(param_2 + 0x62) == '\0' && ((uVar5 & 0x40) != 0)))))) {
      local_f0 = *(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70) +
                 (ulonglong)*(uint *)(param_2 + 0x48) * 0x14;
      local_f8 = *(uint *)(param_2 + 0x48) + 1;
LAB_1403aabb4:
      uVar19 = 0xffffffff;
      uVar18 = 0;
      pcVar8 = (code *)*param_3;
      uVar9 = param_3[1];
      do {
        uVar20 = (uint)param_1[uVar18 * 2 + 2] * 0x100 + (uint)param_1[uVar18 * 2 + 3];
        if (uVar20 == 0) {
          pbVar12 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar12 = param_1 + uVar20;
        }
        if ((((uint)*pbVar12 * 0x100 + (uint)pbVar12[1] < 2) || (pcVar8 == (code *)0x0)) ||
           (cVar10 = (*pcVar8)(lVar7 + (ulonglong)uVar6 * 0x14,
                               (uint)pbVar12[4] * 0x100 + (uint)pbVar12[5],uVar9), cVar10 != '\0'))
        {
          if (((local_f0 == 0) || ((uint)*pbVar12 * 0x100 + (uint)pbVar12[1] < 3)) ||
             ((pcVar8 == (code *)0x0 ||
              (cVar10 = (*pcVar8)(local_f0,(uint)pbVar12[6] * 0x100 + (uint)pbVar12[7],uVar9),
              uVar20 = local_f8, cVar10 != '\0')))) {
            iVar17 = (uint)pbVar12[1] + (uint)*pbVar12 * 0x100;
            uVar20 = iVar17 * 2 - 2;
            if (iVar17 == 0) {
              uVar20 = 0;
            }
            in_stack_fffffffffffffef8 = pbVar12 + (ulonglong)uVar20 + 4;
            in_stack_ffffffffffffff00 = param_3;
            cVar10 = FUN_1403720a0(param_2,iVar17,pbVar12 + 4,
                                   (uint)pbVar12[2] * 0x100 + (uint)pbVar12[3],
                                   in_stack_fffffffffffffef8,param_3);
            uVar20 = uVar19;
            if (cVar10 != '\0') {
              if (uVar19 == 0xffffffff) {
                return 1;
              }
              lVar7 = *(longlong *)(param_2 + 0xa0);
              if ((*(byte *)(lVar7 + 0x18) & 0x40) == 0) {
                return 1;
              }
              if (0xff < uVar19 - *(int *)(lVar7 + 0x5c)) {
                return 1;
              }
              uVar13 = *(uint *)(lVar7 + 0x60);
              if (uVar19 <= *(uint *)(lVar7 + 0x60)) {
                uVar13 = uVar19;
              }
              FUN_1403a26a0(lVar7,2,*(int *)(lVar7 + 0x5c),uVar13,
                            (ulonglong)in_stack_fffffffffffffef8 & 0xffffffffffffff00,
                            (ulonglong)in_stack_ffffffffffffff00 & 0xffffffffffffff00);
              return 1;
            }
          }
        }
        else {
          uVar11 = (int)uVar18 + 1;
          if (uVar19 == 0xffffffff) {
            uVar19 = uVar6 + 1;
          }
          while (uVar20 = uVar19, uVar11 < uVar13) {
            uVar22 = (ulonglong)((int)uVar18 + 1);
            uVar11 = (uint)param_1[uVar22 * 2 + 2] * 0x100 + (uint)param_1[uVar22 * 2 + 3];
            if (uVar11 == 0) {
              pbVar21 = (byte *)&DAT_14045dd10;
            }
            else {
              pbVar21 = param_1 + uVar11;
            }
            if (((uint)pbVar21[1] + (uint)*pbVar21 * 0x100 < 2) ||
               ((uint)pbVar21[5] + (uint)pbVar21[4] * 0x100 !=
                (uint)pbVar12[4] * 0x100 + (uint)pbVar12[5])) break;
            uVar11 = (int)uVar18 + 2;
            uVar18 = uVar22;
          }
        }
        uVar19 = uVar20;
        uVar20 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar20;
        if (uVar13 <= uVar20) {
          if (((uVar19 != 0xffffffff) &&
              (lVar7 = *(longlong *)(param_2 + 0xa0), (*(byte *)(lVar7 + 0x18) & 0x40) != 0)) &&
             (uVar19 - *(int *)(lVar7 + 0x5c) < 0x100)) {
            uVar13 = *(uint *)(lVar7 + 0x60);
            if (uVar19 <= *(uint *)(lVar7 + 0x60)) {
              uVar13 = uVar19;
            }
            FUN_1403a26a0(lVar7,2,*(int *)(lVar7 + 0x5c),uVar13,
                          (ulonglong)in_stack_fffffffffffffef8 & 0xffffffffffffff00,
                          (ulonglong)in_stack_ffffffffffffff00 & 0xffffffffffffff00);
          }
          return 0;
        }
      } while( true );
    }
  }
  goto LAB_1403aaf3d;
}

