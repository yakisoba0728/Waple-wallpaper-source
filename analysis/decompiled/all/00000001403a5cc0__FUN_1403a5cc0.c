// Function: FUN_1403a5cc0
// Addr: 1403a5cc0
// Size: 3253 bytes


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_1403a5cc0(byte *param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  char cVar11;
  ulonglong uVar12;
  byte *pbVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  longlong lVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  byte *pbVar26;
  bool bVar27;
  uint local_128;
  longlong local_108;
  
  uVar14 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (4 < uVar14) {
    lVar6 = *(longlong *)(param_2 + 0x50);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(*(longlong *)(param_2 + 0xa0) + 0x5c);
    iVar24 = *(int *)(*(longlong *)(lVar6 + 0xa0) + 0x60);
    *(int *)(param_2 + 0x80) = iVar24;
    iVar24 = iVar24 + -1;
    uVar3 = *(undefined1 *)
             (*(longlong *)(*(longlong *)(lVar6 + 0xa0) + 0x70) + 0xf +
             (ulonglong)*(uint *)(*(longlong *)(lVar6 + 0xa0) + 0x5c) * 0x14);
    *(code **)(param_2 + 0x68) = FUN_1403ec040;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined1 *)(param_2 + 100) = uVar3;
    iVar19 = *(int *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x78) = 0;
    if (iVar19 < iVar24) {
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0xa0) + 0x70);
      do {
        *(uint *)(param_2 + 0x48) = iVar19 + 1U;
        lVar22 = (ulonglong)(iVar19 + 1U) * 0x14;
        uVar4 = *(ushort *)(lVar22 + 0xc + lVar6);
        uVar5 = *(uint *)(param_2 + 0x58);
        if ((uVar4 & uVar5 & 0xe) == 0) {
          puVar1 = (uint *)(lVar22 + lVar6);
          if ((uVar4 & 8) != 0) {
            if ((uVar5 & 0x10) == 0) {
              if ((uVar5 & 0xff00) == 0) {
                bVar27 = true;
              }
              else {
                bVar27 = (uVar5 & 0xff00) == (uVar4 & 0xff00);
              }
            }
            else {
              uVar18 = 0;
              puVar15 = *(undefined8 **)(*(longlong *)(param_2 + 0x50) + 0xf8);
              do {
                if ((*(ulonglong *)(puVar15[2] + (ulonglong)(uVar5 >> 0x10) * 0x18 + uVar18 * 8) >>
                     (*puVar1 >> ((byte)(&DAT_14045c3c8)[uVar18] & 0x1f) & 0x3f) & 1) == 0)
                goto LAB_1403a5e4e;
                uVar23 = (int)uVar18 + 1;
                uVar18 = (ulonglong)uVar23;
              } while (uVar23 < 3);
              puVar15 = (undefined8 *)*puVar15;
              puVar16 = &DAT_14045dd10;
              if (puVar15 != (undefined8 *)0x0) {
                puVar16 = puVar15;
              }
              if (*(uint *)(puVar16 + 3) < 4) {
                puVar15 = &DAT_14045dd10;
              }
              else {
                puVar15 = (undefined8 *)puVar16[2];
              }
              cVar11 = FUN_1403ebf20(puVar15,uVar5 >> 0x10);
              if (cVar11 == '\0') {
LAB_1403a5e4e:
                bVar27 = false;
              }
              else {
                bVar27 = true;
              }
            }
            if (!bVar27) goto LAB_1403a5f33;
          }
          uVar4 = (ushort)puVar1[4];
          if ((((((uVar4 & 0x20) == 0) || ((puVar1[3] & 0x10) != 0)) ||
               ((*(char *)(param_2 + 0x60) == '\0' &&
                ((((byte)uVar4 & 0x1f) == 1 && ((uVar4 & 0x200) != 0)))))) ||
              ((*(char *)(param_2 + 0x61) == '\0' &&
               ((((byte)uVar4 & 0x1f) == 1 && ((uVar4 & 0x100) != 0)))))) ||
             ((*(char *)(param_2 + 0x62) == '\0' && ((uVar4 & 0x40) != 0)))) {
            bVar27 = false;
          }
          else {
            bVar27 = true;
          }
          pbVar26 = *(byte **)(param_2 + 0x78);
          if (pbVar26 == (byte *)0x0) {
            iVar19 = 0;
          }
          else {
            iVar19 = (uint)*pbVar26 * 0x100 + (uint)pbVar26[1];
          }
          if (((*(uint *)(param_2 + 0x5c) & puVar1[1]) != 0) &&
             (((*(char *)(param_2 + 99) == '\0' || (*(char *)(param_2 + 100) == '\0')) ||
              (*(char *)(param_2 + 100) == *(char *)((longlong)puVar1 + 0xf))))) {
            pcVar7 = *(code **)(param_2 + 0x68);
            if (pcVar7 == (code *)0x0) {
              if (bVar27) goto LAB_1403a5f33;
            }
            else {
              if (pcVar7 == FUN_1403ec040) {
                cVar11 = '\x01';
              }
              else {
                cVar11 = (*pcVar7)(puVar1,iVar19);
              }
              if (cVar11 == '\0') goto LAB_1403a5f2f;
            }
            if (*(longlong *)(param_2 + 0x78) != 0) {
              *(longlong *)(param_2 + 0x78) = *(longlong *)(param_2 + 0x78) + 2;
            }
            lVar6 = *(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70);
            uVar5 = *(uint *)(param_2 + 0x58);
            puVar1 = (uint *)(lVar6 + (ulonglong)*(uint *)(param_2 + 0x48) * 0x14);
            uVar4 = *(ushort *)(lVar6 + 0xc + (ulonglong)*(uint *)(param_2 + 0x48) * 0x14);
            if ((uVar4 & uVar5 & 0xe) != 0) goto LAB_1403a690c;
            if ((uVar4 & 8) == 0) goto LAB_1403a608e;
            if ((uVar5 & 0x10) != 0) {
              uVar18 = 0;
              puVar15 = *(undefined8 **)(*(longlong *)(param_2 + 0x50) + 0xf8);
              goto LAB_1403a6010;
            }
            if ((uVar5 & 0xff00) == 0) goto LAB_1403a6084;
            bVar27 = (uVar5 & 0xff00) == (uVar4 & 0xff00);
            goto LAB_1403a6086;
          }
LAB_1403a5f2f:
          if (!bVar27) break;
        }
LAB_1403a5f33:
        iVar19 = *(int *)(param_2 + 0x48);
      } while (iVar19 < iVar24);
    }
    iVar24 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    pbVar26 = param_1;
    do {
      pbVar26 = pbVar26 + 2;
      iVar19 = iVar24;
      while( true ) {
        if (iVar24 == 0) goto LAB_1403a6853;
        pbVar21 = (byte *)&DAT_14045dd10;
        if (iVar19 != 0) {
          pbVar21 = pbVar26;
        }
        uVar14 = (uint)pbVar21[1] + (uint)*pbVar21 * 0x100;
        if (uVar14 == 0) {
          pbVar21 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar21 = param_1 + uVar14;
        }
        uVar18 = (ulonglong)CONCAT11(*pbVar21,pbVar21[1]);
        uVar14 = (uint)pbVar21[uVar18 * 2 + 3] + (uint)pbVar21[uVar18 * 2 + 2] * 0x100;
        iVar19 = uVar14 - 1;
        if (uVar14 == 0) {
          iVar19 = 0;
        }
        if ((uVar14 < 2) &&
           (uVar12 = (ulonglong)(iVar19 * 2 + 2),
           (uint)pbVar21[uVar12 + 3 + uVar18 * 2] + (uint)pbVar21[uVar12 + 2 + uVar18 * 2] * 0x100
           == 0)) goto LAB_1403a6853;
        if (iVar24 != 0) break;
        iVar19 = 0;
      }
      iVar24 = iVar24 + -1;
    } while( true );
  }
  goto LAB_1403a690c;
  while (uVar23 = (int)uVar18 + 1, uVar18 = (ulonglong)uVar23, uVar23 < 3) {
LAB_1403a6010:
    if ((*(ulonglong *)(puVar15[2] + (ulonglong)(uVar5 >> 0x10) * 0x18 + uVar18 * 8) >>
         (*puVar1 >> ((byte)(&DAT_14045c3c8)[uVar18] & 0x1f) & 0x3f) & 1) == 0) goto LAB_1403a606b;
  }
  puVar15 = (undefined8 *)*puVar15;
  puVar16 = &DAT_14045dd10;
  if (puVar15 != (undefined8 *)0x0) {
    puVar16 = puVar15;
  }
  if (*(uint *)(puVar16 + 3) < 4) {
    puVar15 = &DAT_14045dd10;
  }
  else {
    puVar15 = (undefined8 *)puVar16[2];
  }
  cVar11 = FUN_1403ebf20(puVar15,uVar5 >> 0x10,*puVar1);
  if (cVar11 == '\0') {
LAB_1403a606b:
    bVar27 = false;
  }
  else {
LAB_1403a6084:
    bVar27 = true;
  }
LAB_1403a6086:
  if (bVar27) {
LAB_1403a608e:
    uVar4 = (ushort)puVar1[4];
    if (((((uVar4 & 0x20) == 0) || ((puVar1[3] & 0x10) != 0)) ||
        ((*(char *)(param_2 + 0x60) == '\0' &&
         ((((byte)uVar4 & 0x1f) == 1 && ((uVar4 >> 9 & 1) != 0)))))) ||
       (((*(char *)(param_2 + 0x61) == '\0' &&
         ((((byte)uVar4 & 0x1f) == 1 && ((uVar4 >> 8 & 1) != 0)))) ||
        ((*(char *)(param_2 + 0x62) == '\0' && ((uVar4 & 0x40) != 0)))))) {
      uVar5 = *(uint *)(param_2 + 0x48);
      local_108 = 0;
      iVar24 = *(int *)(param_2 + 0x80) + -1;
      local_128 = 0;
      lVar6 = *(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70);
      if ((int)uVar5 < iVar24) {
        lVar22 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x50) + 0xa0) + 0x70);
        uVar18 = (ulonglong)uVar5;
        do {
          uVar23 = (int)uVar18 + 1;
          *(uint *)(param_2 + 0x48) = uVar23;
          lVar2 = (ulonglong)uVar23 * 0x14;
          uVar23 = *(uint *)(param_2 + 0x58);
          uVar4 = *(ushort *)(lVar2 + 0xc + lVar22);
          if ((uVar4 & uVar23 & 0xe) == 0) {
            puVar1 = (uint *)(lVar22 + lVar2);
            if ((uVar4 & 8) != 0) {
              if ((uVar23 & 0x10) == 0) {
                if ((uVar23 & 0xff00) == 0) goto LAB_1403a6203;
                bVar27 = (uVar23 & 0xff00) == (uVar4 & 0xff00);
              }
              else {
                uVar18 = 0;
                puVar15 = *(undefined8 **)(*(longlong *)(param_2 + 0x50) + 0xf8);
                do {
                  if ((*(ulonglong *)(puVar15[2] + (ulonglong)(uVar23 >> 0x10) * 0x18 + uVar18 * 8)
                       >> (*puVar1 >> ((byte)(&DAT_14045c3c8)[uVar18] & 0x1f) & 0x3f) & 1) == 0)
                  goto LAB_1403a61ea;
                  uVar25 = (int)uVar18 + 1;
                  uVar18 = (ulonglong)uVar25;
                } while (uVar25 < 3);
                puVar15 = (undefined8 *)*puVar15;
                puVar16 = &DAT_14045dd10;
                if (puVar15 != (undefined8 *)0x0) {
                  puVar16 = puVar15;
                }
                if (*(uint *)(puVar16 + 3) < 4) {
                  puVar15 = &DAT_14045dd10;
                }
                else {
                  puVar15 = (undefined8 *)puVar16[2];
                }
                cVar11 = FUN_1403ebf20(puVar15,uVar23 >> 0x10);
                if (cVar11 == '\0') {
LAB_1403a61ea:
                  bVar27 = false;
                }
                else {
LAB_1403a6203:
                  bVar27 = true;
                }
              }
              if (!bVar27) goto LAB_1403a62be;
            }
            uVar4 = (ushort)puVar1[4];
            if ((((((uVar4 & 0x20) == 0) || ((puVar1[3] & 0x10) != 0)) ||
                 ((*(char *)(param_2 + 0x60) == '\0' &&
                  ((((byte)uVar4 & 0x1f) == 1 && ((uVar4 >> 9 & 1) != 0)))))) ||
                ((*(char *)(param_2 + 0x61) == '\0' &&
                 ((((byte)uVar4 & 0x1f) == 1 && ((uVar4 >> 8 & 1) != 0)))))) ||
               ((*(char *)(param_2 + 0x62) == '\0' && ((uVar4 & 0x40) != 0)))) {
              bVar27 = false;
            }
            else {
              bVar27 = true;
            }
            pbVar26 = *(byte **)(param_2 + 0x78);
            if (pbVar26 == (byte *)0x0) {
              iVar19 = 0;
            }
            else {
              iVar19 = (uint)*pbVar26 * 0x100 + (uint)pbVar26[1];
            }
            if (((*(uint *)(param_2 + 0x5c) & puVar1[1]) != 0) &&
               (((*(char *)(param_2 + 99) == '\0' || (*(char *)(param_2 + 100) == '\0')) ||
                (*(char *)(param_2 + 100) == *(char *)((longlong)puVar1 + 0xf))))) {
              pcVar7 = *(code **)(param_2 + 0x68);
              if (pcVar7 == (code *)0x0) {
                if (bVar27) goto LAB_1403a62be;
              }
              else {
                if (pcVar7 == FUN_1403ec040) {
                  cVar11 = '\x01';
                }
                else {
                  cVar11 = (*pcVar7)(puVar1,iVar19);
                }
                if (cVar11 == '\0') goto LAB_1403a62b6;
              }
              if (*(longlong *)(param_2 + 0x78) != 0) {
                *(longlong *)(param_2 + 0x78) = *(longlong *)(param_2 + 0x78) + 2;
              }
              lVar22 = *(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70);
              uVar4 = *(ushort *)(lVar22 + 0xc + (ulonglong)*(uint *)(param_2 + 0x48) * 0x14);
              puVar1 = (uint *)(lVar22 + (ulonglong)*(uint *)(param_2 + 0x48) * 0x14);
              uVar23 = *(uint *)(param_2 + 0x58);
              if ((uVar4 & uVar23 & 0xe) != 0) goto LAB_1403a690c;
              if ((uVar4 & 8) == 0) goto LAB_1403a63ce;
              if ((uVar23 & 0x10) != 0) {
                uVar18 = 0;
                puVar15 = *(undefined8 **)(*(longlong *)(param_2 + 0x50) + 0xf8);
                goto LAB_1403a6350;
              }
              if ((uVar23 & 0xff00) == 0) goto LAB_1403a63c4;
              bVar27 = (uVar23 & 0xff00) == (uVar4 & 0xff00);
              goto LAB_1403a63c6;
            }
LAB_1403a62b6:
            if (!bVar27) break;
          }
LAB_1403a62be:
          uVar18 = (ulonglong)*(uint *)(param_2 + 0x48);
        } while ((int)*(uint *)(param_2 + 0x48) < iVar24);
      }
      goto LAB_1403a6444;
    }
  }
  goto LAB_1403a690c;
  while (uVar25 = (int)uVar18 + 1, uVar18 = (ulonglong)uVar25, uVar25 < 3) {
LAB_1403a6350:
    if ((*(ulonglong *)(puVar15[2] + (ulonglong)(uVar23 >> 0x10) * 0x18 + uVar18 * 8) >>
         (*puVar1 >> ((byte)(&DAT_14045c3c8)[uVar18] & 0x1f) & 0x3f) & 1) == 0) goto LAB_1403a63ab;
  }
  puVar15 = (undefined8 *)*puVar15;
  puVar16 = &DAT_14045dd10;
  if (puVar15 != (undefined8 *)0x0) {
    puVar16 = puVar15;
  }
  if (*(uint *)(puVar16 + 3) < 4) {
    puVar15 = &DAT_14045dd10;
  }
  else {
    puVar15 = (undefined8 *)puVar16[2];
  }
  cVar11 = FUN_1403ebf20(puVar15,uVar23 >> 0x10,*puVar1);
  if (cVar11 == '\0') {
LAB_1403a63ab:
    bVar27 = false;
  }
  else {
LAB_1403a63c4:
    bVar27 = true;
  }
LAB_1403a63c6:
  if (bVar27) {
LAB_1403a63ce:
    uVar4 = (ushort)puVar1[4];
    if (((((uVar4 & 0x20) == 0) || ((puVar1[3] & 0x10) != 0)) ||
        ((*(char *)(param_2 + 0x60) == '\0' &&
         ((((byte)uVar4 & 0x1f) == 1 && ((uVar4 >> 9 & 1) != 0)))))) ||
       (((*(char *)(param_2 + 0x61) == '\0' &&
         ((((byte)uVar4 & 0x1f) == 1 && ((uVar4 >> 8 & 1) != 0)))) ||
        ((*(char *)(param_2 + 0x62) == '\0' && ((uVar4 & 0x40) != 0)))))) {
      local_108 = *(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70) +
                  (ulonglong)*(uint *)(param_2 + 0x48) * 0x14;
      local_128 = *(uint *)(param_2 + 0x48) + 1;
LAB_1403a6444:
      uVar18 = 0;
      lVar6 = lVar6 + (ulonglong)uVar5 * 0x14;
      pcVar7 = *(code **)(param_3 + 0x10);
      uVar8 = *(undefined8 *)(param_3 + 0x20);
      uVar9 = *(undefined8 *)(param_3 + 0x28);
      pcVar10 = *(code **)(param_3 + 8);
      uVar23 = 0xffffffff;
      do {
        uVar25 = (uint)param_1[uVar18 * 2 + 2] * 0x100 + (uint)param_1[uVar18 * 2 + 3];
        if (uVar25 == 0) {
          pbVar26 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar26 = param_1 + uVar25;
        }
        lVar22 = (ulonglong)pbVar26[1] + 1 + (ulonglong)*pbVar26 * 0x100;
        uVar25 = (uint)pbVar26[lVar22 * 2] * 0x100 + (uint)pbVar26[lVar22 * 2 + 1];
        iVar24 = uVar25 - 1;
        if (uVar25 == 0) {
          iVar24 = 0;
        }
        pbVar21 = pbVar26 + (ulonglong)(iVar24 * 2 + 2) + lVar22 * 2;
        if (uVar25 < 2) {
          if ((((uint)pbVar21[1] + (uint)*pbVar21 * 0x100 == 0) || (pcVar7 == (code *)0x0)) ||
             (cVar11 = (*pcVar7)(lVar6,(uint)pbVar21[3] + (uint)pbVar21[2] * 0x100,uVar9),
             cVar11 != '\0')) goto LAB_1403a6528;
LAB_1403a663c:
          if (uVar23 == 0xffffffff) {
            uVar23 = uVar5 + 1;
          }
          uVar20 = uVar23;
          if (1 < uVar25) {
            uVar23 = (int)uVar18 + 1;
            while (uVar23 < uVar14) {
              uVar12 = (ulonglong)((int)uVar18 + 1);
              uVar23 = (uint)param_1[uVar12 * 2 + 2] * 0x100 + (uint)param_1[uVar12 * 2 + 3];
              if (uVar23 == 0) {
                pbVar21 = (byte *)&DAT_14045dd10;
              }
              else {
                pbVar21 = param_1 + uVar23;
              }
              uVar17 = (ulonglong)CONCAT11(*pbVar21,pbVar21[1]);
              if (((uint)pbVar21[uVar17 * 2 + 3] + (uint)pbVar21[uVar17 * 2 + 2] * 0x100 < 2) ||
                 ((uint)pbVar21[uVar17 * 2 + 5] + (uint)pbVar21[uVar17 * 2 + 4] * 0x100 !=
                  (uint)pbVar26[lVar22 * 2 + 3] + (uint)pbVar26[lVar22 * 2 + 2] * 0x100)) break;
              uVar23 = (int)uVar18 + 2;
              uVar18 = uVar12;
            }
          }
        }
        else {
          if ((pcVar10 != (code *)0x0) &&
             (cVar11 = (*pcVar10)(lVar6,(uint)pbVar26[lVar22 * 2 + 3] +
                                        (uint)pbVar26[lVar22 * 2 + 2] * 0x100,uVar8), cVar11 == '\0'
             )) goto LAB_1403a663c;
LAB_1403a6528:
          uVar20 = 1;
          if (uVar25 != 0) {
            uVar20 = uVar25;
          }
          if (local_108 == 0) {
LAB_1403a6567:
            cVar11 = FUN_1403a5c00(pbVar26,param_2,param_3);
            uVar20 = uVar23;
            if (cVar11 != '\0') {
              if (uVar23 == 0xffffffff) {
                return 1;
              }
              lVar6 = *(longlong *)(param_2 + 0xa0);
              if ((*(byte *)(lVar6 + 0x18) & 0x40) == 0) {
                return 1;
              }
              if (0xff < uVar23 - *(int *)(lVar6 + 0x5c)) {
                return 1;
              }
              uVar14 = *(uint *)(lVar6 + 0x60);
              if (uVar23 <= *(uint *)(lVar6 + 0x60)) {
                uVar14 = uVar23;
              }
              FUN_1403a26a0(lVar6,2,*(int *)(lVar6 + 0x5c),uVar14,0,0);
              return 1;
            }
          }
          else {
            if (uVar20 < 3) {
              uVar20 = 2 - uVar20;
              if ((uVar20 < (uint)pbVar21[1] + (uint)*pbVar21 * 0x100) && (pcVar7 != (code *)0x0)) {
                cVar11 = (*pcVar7)(local_108,
                                   (uint)pbVar21[(ulonglong)uVar20 * 2 + 3] +
                                   (uint)pbVar21[(ulonglong)uVar20 * 2 + 2] * 0x100,uVar9);
                goto joined_r0x0001403a6732;
              }
              goto LAB_1403a6567;
            }
            if (pcVar10 == (code *)0x0) goto LAB_1403a6567;
            cVar11 = (*pcVar10)(local_108,
                                (uint)pbVar26[lVar22 * 2 + 4] * 0x100 +
                                (uint)pbVar26[lVar22 * 2 + 5],uVar8);
joined_r0x0001403a6732:
            uVar20 = local_128;
            if (cVar11 != '\0') goto LAB_1403a6567;
          }
        }
        uVar25 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar25;
        uVar23 = uVar20;
        if (uVar14 <= uVar25) {
          if (((uVar20 != 0xffffffff) &&
              (lVar6 = *(longlong *)(param_2 + 0xa0), (*(byte *)(lVar6 + 0x18) & 0x40) != 0)) &&
             (uVar20 - *(int *)(lVar6 + 0x5c) < 0x100)) {
            uVar14 = *(uint *)(lVar6 + 0x60);
            if (uVar20 <= *(uint *)(lVar6 + 0x60)) {
              uVar14 = uVar20;
            }
            FUN_1403a26a0(lVar6,2,*(int *)(lVar6 + 0x5c),uVar14,0,0);
          }
          return 0;
        }
      } while( true );
    }
  }
LAB_1403a690c:
  iVar24 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  pbVar26 = param_1;
  do {
    pbVar26 = pbVar26 + 2;
    do {
      if (iVar24 == 0) {
        return 0;
      }
      pbVar21 = (byte *)&DAT_14045dd10;
      if (iVar24 != 0) {
        pbVar21 = pbVar26;
      }
      uVar14 = (uint)pbVar21[1] + (uint)*pbVar21 * 0x100;
      if (uVar14 == 0) {
        pbVar21 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar21 = param_1 + uVar14;
      }
      cVar11 = FUN_1403a5c00(pbVar21,param_2,param_3);
      if (cVar11 != '\0') {
        return 1;
      }
    } while (iVar24 == 0);
    iVar24 = iVar24 + -1;
  } while( true );
LAB_1403a6853:
  if (iVar24 == 0) {
    return 0;
  }
  uVar14 = (uint)*pbVar26 * 0x100 + (uint)pbVar26[1];
  if (uVar14 == 0) {
    pbVar21 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar21 = param_1 + uVar14;
  }
  cVar11 = FUN_1403a5c00(pbVar21,param_2,param_3);
  pbVar21 = pbVar26;
  if (cVar11 != '\0') {
    return 1;
  }
  do {
    if (iVar24 == 0) {
      return 0;
    }
    pbVar26 = pbVar21 + 2;
    iVar24 = iVar24 + -1;
    if (iVar24 == 0) break;
    uVar14 = (uint)*pbVar26 * 0x100 + (uint)pbVar21[3];
    if (uVar14 == 0) {
      pbVar13 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar13 = param_1 + uVar14;
    }
    uVar18 = (ulonglong)CONCAT11(*pbVar13,pbVar13[1]);
    uVar14 = (uint)pbVar13[uVar18 * 2 + 3] + (uint)pbVar13[uVar18 * 2 + 2] * 0x100;
    iVar19 = uVar14 - 1;
    if (uVar14 == 0) {
      iVar19 = 0;
    }
    pbVar21 = pbVar26;
  } while ((1 < uVar14) ||
          (uVar12 = (ulonglong)(iVar19 * 2 + 2),
          (uint)pbVar13[uVar12 + 3 + uVar18 * 2] + (uint)pbVar13[uVar12 + 2 + uVar18 * 2] * 0x100 !=
          0));
  goto LAB_1403a6853;
}

