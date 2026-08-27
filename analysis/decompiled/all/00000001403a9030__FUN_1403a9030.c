// Function: FUN_1403a9030
// Addr: 1403a9030
// Size: 1671 bytes


ulonglong FUN_1403a9030(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  longlong lVar6;
  longlong lVar7;
  uint3 uVar8;
  byte bVar9;
  bool bVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  byte bVar21;
  undefined8 *puVar22;
  
  lVar6 = *(longlong *)(param_2 + 0xa0);
  puVar22 = &DAT_14045dd10;
  uVar17 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100;
  if (uVar17 == 0) {
    pbVar14 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar14 = (byte *)((ulonglong)uVar17 + param_1);
  }
  uVar12 = 0;
  iVar20 = (uint)*pbVar14 * 0x100 + (uint)pbVar14[1];
  if (iVar20 == 1) {
    uVar12 = FUN_1403c70f0(pbVar14,*(undefined4 *)
                                    (*(longlong *)(lVar6 + 0x70) +
                                    (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14));
  }
  else {
    if (iVar20 != 2) goto LAB_1403a9694;
    uVar12 = FUN_1403c7170();
  }
  uVar13 = uVar12 & 0xffffffff;
  if ((int)uVar12 != -1) {
    iVar20 = *(int *)(lVar6 + 0x5c);
    *(int *)(param_2 + 8) = iVar20;
    uVar17 = *(uint *)(param_2 + 0x124) & 0xfffffff1;
    uVar12 = (ulonglong)uVar17;
    *(uint *)(param_2 + 0x18) = uVar17;
    if (iVar20 != 0) {
      lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0xa0) + 0x78);
      do {
        uVar17 = iVar20 - 1;
        *(uint *)(param_2 + 8) = uVar17;
        uVar5 = *(ushort *)(lVar7 + 0xc + (ulonglong)uVar17 * 0x14);
        uVar18 = *(uint *)(param_2 + 0x18);
        uVar11 = uVar5 & uVar18;
        uVar12 = (ulonglong)uVar11;
        if ((uVar11 & 0xe) == 0) {
          puVar1 = (uint *)(lVar7 + (ulonglong)uVar17 * 0x14);
          if ((uVar5 & 8) != 0) {
            if ((uVar18 & 0x10) == 0) {
              uVar8 = (uint3)(uVar11 >> 8);
              if ((uVar18 & 0xff00) == 0) {
                uVar12 = CONCAT71((uint7)uVar8,1);
              }
              else {
                uVar12 = (ulonglong)CONCAT31(uVar8,(uVar18 & 0xff00) == (uVar5 & 0xff00));
              }
            }
            else {
              uVar19 = 0;
              puVar16 = *(undefined8 **)(*(longlong *)(param_2 + 0x10) + 0xf8);
              do {
                uVar12 = *(ulonglong *)
                          (puVar16[2] + (ulonglong)(uVar18 >> 0x10) * 0x18 + uVar19 * 8);
                if ((uVar12 >> (*puVar1 >> ((byte)(&DAT_14045c3c8)[uVar19] & 0x1f) & 0x3f) & 1) == 0
                   ) goto LAB_1403a91c3;
                uVar17 = (int)uVar19 + 1;
                uVar19 = (ulonglong)uVar17;
              } while (uVar17 < 3);
              puVar16 = (undefined8 *)*puVar16;
              puVar15 = &DAT_14045dd10;
              if (puVar16 != (undefined8 *)0x0) {
                puVar15 = puVar16;
              }
              if (*(uint *)(puVar15 + 3) < 4) {
                puVar16 = &DAT_14045dd10;
              }
              else {
                puVar16 = (undefined8 *)puVar15[2];
              }
              uVar12 = FUN_1403ebf20(puVar16,uVar18 >> 0x10,*puVar1);
              if ((char)uVar12 == '\0') {
LAB_1403a91c3:
                uVar12 = uVar12 & 0xffffffffffffff00;
              }
              else {
                uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
              }
            }
            if ((char)uVar12 == '\0') goto LAB_1403a929d;
          }
          uVar5 = (ushort)puVar1[4];
          if ((((((uVar5 & 0x20) == 0) || ((puVar1[3] & 0x10) != 0)) ||
               ((*(char *)(param_2 + 0x20) == '\0' &&
                ((((byte)uVar5 & 0x1f) == 1 && ((uVar5 & 0x200) != 0)))))) ||
              ((*(char *)(param_2 + 0x21) == '\0' &&
               ((((byte)uVar5 & 0x1f) == 1 && ((uVar5 & 0x100) != 0)))))) ||
             ((*(char *)(param_2 + 0x22) == '\0' && ((uVar5 & 0x40) != 0)))) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          pbVar14 = *(byte **)(param_2 + 0x38);
          if (pbVar14 == (byte *)0x0) {
            iVar20 = 0;
          }
          else {
            iVar20 = (uint)*pbVar14 * 0x100 + (uint)pbVar14[1];
          }
          uVar12 = (ulonglong)puVar1[1];
          if ((*(uint *)(param_2 + 0x1c) & puVar1[1]) != 0) {
            if (*(char *)(param_2 + 0x23) != '\0') {
              uVar12 = 0;
              if ((*(char *)(param_2 + 0x24) != '\0') &&
                 (*(char *)(param_2 + 0x24) != *(char *)((longlong)puVar1 + 0xf)))
              goto LAB_1403a9295;
            }
            if (*(code **)(param_2 + 0x28) == (code *)0x0) {
              uVar12 = 0;
              if (bVar10) goto LAB_1403a929d;
            }
            else {
              uVar12 = (**(code **)(param_2 + 0x28))(puVar1,iVar20,*(undefined8 *)(param_2 + 0x30));
              if ((char)uVar12 == '\0') goto LAB_1403a9295;
            }
            if (*(longlong *)(param_2 + 0x38) != 0) {
              *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x38) + 2;
            }
            uVar17 = *(uint *)(param_2 + 8);
            uVar19 = (ulonglong)uVar17;
            lVar7 = *(longlong *)(lVar6 + 0x70);
            uVar12 = uVar19 * 5;
            puVar2 = (undefined4 *)(lVar7 + uVar19 * 0x14);
            if ((*(byte *)(lVar7 + 0xc + uVar19 * 0x14) & 8) == 0) {
              if (((*(byte *)(lVar6 + 0x18) & 0x40) != 0) &&
                 ((uVar18 = *(int *)(lVar6 + 0x5c) + 1, uVar18 == 0xffffffff ||
                  (uVar12 = (ulonglong)(uVar18 - uVar17), uVar18 - uVar17 < 0x100)))) {
                uVar11 = *(uint *)(lVar6 + 0x60);
                if (uVar18 <= *(uint *)(lVar6 + 0x60)) {
                  uVar11 = uVar18;
                }
                if (*(char *)(lVar6 + 0x59) == '\0') {
                  while (uVar17 < uVar11) {
                    uVar12 = *(ulonglong *)(lVar6 + 0x70);
                    uVar17 = (int)uVar19 + 1;
                    puVar1 = (uint *)(uVar12 + 4 + uVar19 * 0x14);
                    *puVar1 = *puVar1 | 2;
                    uVar19 = (ulonglong)uVar17;
                  }
                }
                else {
                  if (uVar17 < *(uint *)(lVar6 + 100)) {
                    do {
                      uVar12 = *(ulonglong *)(lVar6 + 0x78);
                      uVar17 = (int)uVar19 + 1;
                      puVar1 = (uint *)(uVar12 + 4 + uVar19 * 0x14);
                      *puVar1 = *puVar1 | 2;
                      uVar19 = (ulonglong)uVar17;
                    } while (uVar17 < *(uint *)(lVar6 + 100));
                  }
                  for (uVar17 = *(uint *)(lVar6 + 0x5c); uVar17 < uVar11; uVar17 = uVar17 + 1) {
                    uVar12 = *(ulonglong *)(lVar6 + 0x70);
                    puVar1 = (uint *)(uVar12 + 4 + (ulonglong)uVar17 * 0x14);
                    *puVar1 = *puVar1 | 2;
                  }
                }
              }
              goto LAB_1403a9694;
            }
            bVar3 = *(byte *)((longlong)puVar2 + 0xe);
            bVar21 = 0;
            bVar4 = *(byte *)(lVar7 + 0xe + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14);
            bVar9 = bVar4 >> 5;
            uVar12 = 0;
            if ((bVar4 & 0x10) == 0) {
              bVar21 = bVar4 & 0xf;
            }
            bVar4 = 0;
            if ((bVar3 & 0x10) == 0) {
              bVar4 = bVar3 & 0xf;
            }
            if (bVar9 == bVar3 >> 5) {
              if ((bVar9 == 0) || (bVar21 == bVar4)) {
LAB_1403a94f6:
                uVar18 = (uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 4) * 0x100;
                if (uVar18 == 0) {
                  pbVar14 = (byte *)&DAT_14045dd10;
                }
                else {
                  pbVar14 = (byte *)((ulonglong)uVar18 + param_1);
                }
                uVar12 = 0;
                iVar20 = (uint)*pbVar14 * 0x100 + (uint)pbVar14[1];
                if (iVar20 == 1) {
                  uVar12 = FUN_1403c70f0(pbVar14,*puVar2);
LAB_1403a9539:
                  if ((int)uVar12 != -1) {
                    uVar18 = (uint)*(byte *)(param_1 + 0xb) + (uint)*(byte *)(param_1 + 10) * 0x100;
                    if (uVar18 == 0) {
                      puVar16 = &DAT_14045dd10;
                    }
                    else {
                      puVar16 = (undefined8 *)((ulonglong)uVar18 + param_1);
                    }
                    uVar18 = (uint)*(byte *)(param_1 + 8) * 0x100 + (uint)*(byte *)(param_1 + 9);
                    if (uVar18 != 0) {
                      puVar22 = (undefined8 *)((ulonglong)uVar18 + param_1);
                    }
                    uVar12 = FUN_1403ac670(puVar22,param_2,uVar13,uVar12 & 0xffffffff,puVar16,
                                           (uint)*(byte *)(param_1 + 6) * 0x100 +
                                           (uint)*(byte *)(param_1 + 7),uVar17);
                    return uVar12;
                  }
                }
                else if (iVar20 == 2) {
                  uVar12 = FUN_1403c7170();
                  goto LAB_1403a9539;
                }
                if ((*(byte *)(lVar6 + 0x18) & 0x40) != 0) {
                  uVar17 = *(uint *)(param_2 + 8);
                  uVar18 = *(int *)(lVar6 + 0x5c) + 1;
                  if ((uVar18 == 0xffffffff) ||
                     (uVar12 = (ulonglong)(uVar18 - uVar17), uVar18 - uVar17 < 0x100)) {
                    uVar11 = *(uint *)(lVar6 + 0x60);
                    if (uVar18 <= *(uint *)(lVar6 + 0x60)) {
                      uVar11 = uVar18;
                    }
                    if (*(char *)(lVar6 + 0x59) == '\0') {
                      for (; uVar17 < uVar11; uVar17 = uVar17 + 1) {
                        uVar12 = *(ulonglong *)(lVar6 + 0x70);
                        puVar1 = (uint *)(uVar12 + 4 + (ulonglong)uVar17 * 0x14);
                        *puVar1 = *puVar1 | 2;
                      }
                    }
                    else {
                      if (uVar17 < *(uint *)(lVar6 + 100)) {
                        do {
                          uVar13 = (ulonglong)uVar17;
                          uVar17 = uVar17 + 1;
                          uVar12 = *(ulonglong *)(lVar6 + 0x78);
                          puVar1 = (uint *)(uVar12 + 4 + uVar13 * 0x14);
                          *puVar1 = *puVar1 | 2;
                        } while (uVar17 < *(uint *)(lVar6 + 100));
                      }
                      for (uVar17 = *(uint *)(lVar6 + 0x5c); uVar17 < uVar11; uVar17 = uVar17 + 1) {
                        uVar12 = *(ulonglong *)(lVar6 + 0x70);
                        puVar1 = (uint *)(uVar12 + 4 + (ulonglong)uVar17 * 0x14);
                        *puVar1 = *puVar1 | 2;
                      }
                    }
                  }
                }
                goto LAB_1403a9694;
              }
            }
            else if (((bVar9 != 0) && (bVar21 == 0)) || ((bVar3 >> 5 != 0 && (bVar4 == 0))))
            goto LAB_1403a94f6;
            if (((*(byte *)(lVar6 + 0x18) & 0x40) != 0) &&
               ((uVar18 = *(uint *)(lVar6 + 0x5c) + 1, uVar18 == 0xffffffff ||
                (uVar12 = (ulonglong)(uVar18 - uVar17), uVar18 - uVar17 < 0x100)))) {
              uVar11 = *(uint *)(lVar6 + 0x60);
              if (uVar18 <= *(uint *)(lVar6 + 0x60)) {
                uVar11 = uVar18;
              }
              if (*(char *)(lVar6 + 0x59) == '\0') {
                while (uVar17 < uVar11) {
                  uVar12 = *(ulonglong *)(lVar6 + 0x70);
                  uVar17 = (int)uVar19 + 1;
                  puVar1 = (uint *)(uVar12 + 4 + uVar19 * 0x14);
                  *puVar1 = *puVar1 | 2;
                  uVar19 = (ulonglong)uVar17;
                }
              }
              else {
                if (uVar17 < *(uint *)(lVar6 + 100)) {
                  do {
                    uVar12 = *(ulonglong *)(lVar6 + 0x78);
                    uVar17 = (int)uVar19 + 1;
                    puVar1 = (uint *)(uVar12 + 4 + uVar19 * 0x14);
                    *puVar1 = *puVar1 | 2;
                    uVar19 = (ulonglong)uVar17;
                  } while (uVar17 < *(uint *)(lVar6 + 100));
                }
                for (uVar17 = *(uint *)(lVar6 + 0x5c); uVar17 < uVar11; uVar17 = uVar17 + 1) {
                  uVar12 = *(ulonglong *)(lVar6 + 0x70);
                  puVar1 = (uint *)(uVar12 + 4 + (ulonglong)uVar17 * 0x14);
                  *puVar1 = *puVar1 | 2;
                }
              }
            }
            goto LAB_1403a9694;
          }
LAB_1403a9295:
          if (!bVar10) {
            uVar17 = *(uint *)(param_2 + 8);
            uVar12 = 0;
            if (uVar17 < 2) {
              uVar17 = 1;
            }
            uVar13 = (ulonglong)(uVar17 - 1);
            goto LAB_1403a92aa;
          }
        }
LAB_1403a929d:
        iVar20 = *(int *)(param_2 + 8);
      } while (iVar20 != 0);
    }
    uVar13 = 0;
LAB_1403a92aa:
    if ((*(byte *)(lVar6 + 0x18) & 0x40) != 0) {
      uVar17 = *(int *)(lVar6 + 0x5c) + 1;
      uVar18 = (uint)uVar13;
      if ((uVar17 == 0xffffffff) || (uVar12 = (ulonglong)(uVar17 - uVar18), uVar17 - uVar18 < 0x100)
         ) {
        uVar11 = *(uint *)(lVar6 + 0x60);
        if (uVar17 <= *(uint *)(lVar6 + 0x60)) {
          uVar11 = uVar17;
        }
        if (*(char *)(lVar6 + 0x59) == '\0') {
          while (uVar18 < uVar11) {
            uVar12 = *(ulonglong *)(lVar6 + 0x70);
            uVar18 = (int)uVar13 + 1;
            puVar1 = (uint *)(uVar12 + 4 + uVar13 * 0x14);
            *puVar1 = *puVar1 | 2;
            uVar13 = (ulonglong)uVar18;
          }
        }
        else {
          if (uVar18 < *(uint *)(lVar6 + 100)) {
            do {
              uVar12 = *(ulonglong *)(lVar6 + 0x78);
              uVar17 = (int)uVar13 + 1;
              puVar1 = (uint *)(uVar12 + 4 + uVar13 * 0x14);
              *puVar1 = *puVar1 | 2;
              uVar13 = (ulonglong)uVar17;
            } while (uVar17 < *(uint *)(lVar6 + 100));
          }
          for (uVar17 = *(uint *)(lVar6 + 0x5c); uVar17 < uVar11; uVar17 = uVar17 + 1) {
            uVar12 = *(ulonglong *)(lVar6 + 0x70);
            puVar1 = (uint *)(uVar12 + 4 + (ulonglong)uVar17 * 0x14);
            *puVar1 = *puVar1 | 2;
          }
        }
      }
    }
  }
LAB_1403a9694:
  return uVar12 & 0xffffffffffffff00;
}

