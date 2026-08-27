// Function: FUN_1403a8450
// Addr: 1403a8450
// Size: 1467 bytes


ulonglong FUN_1403a8450(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  ulonglong uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint *puVar19;
  bool bVar20;
  
  lVar4 = *(longlong *)(param_2 + 0xa0);
  uVar17 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100;
  if (uVar17 == 0) {
    pbVar10 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar10 = (byte *)((ulonglong)uVar17 + param_1);
  }
  uVar9 = (ulonglong)*pbVar10 << 8;
  iVar15 = (uint)pbVar10[1] + (int)uVar9;
  if (iVar15 == 1) {
    uVar9 = FUN_1403c70f0();
  }
  else {
    if (iVar15 != 2) goto LAB_1403a8866;
    uVar9 = FUN_1403c7170();
  }
  if ((int)uVar9 == -1) goto LAB_1403a8866;
  *(undefined4 *)(param_2 + 0x18) = 8;
  uVar17 = *(uint *)(param_2 + 0x13c);
  if (*(uint *)(lVar4 + 0x5c) < uVar17) {
    *(undefined4 *)(param_2 + 0x13c) = 0;
    uVar17 = 0;
    *(undefined4 *)(param_2 + 0x138) = 0xffffffff;
  }
  uVar14 = *(uint *)(lVar4 + 0x5c);
  if (uVar17 < uVar14) {
    do {
      lVar1 = (ulonglong)(uVar14 - 1) * 0x14;
      uVar17 = *(uint *)(param_2 + 0x18);
      puVar19 = (uint *)(*(longlong *)(lVar4 + 0x70) + lVar1);
      uVar3 = (ushort)puVar19[3];
      if ((uVar3 & uVar17 & 0xe) == 0) {
        if ((uVar3 & 8) != 0) {
          if ((uVar17 & 0x10) == 0) {
            if ((uVar17 & 0xff00) == 0) {
              bVar20 = true;
            }
            else {
              bVar20 = (uVar17 & 0xff00) == (uVar3 & 0xff00);
            }
          }
          else {
            uVar12 = 0;
            puVar11 = *(undefined8 **)(*(longlong *)(param_2 + 0x10) + 0xf8);
            do {
              if ((*(ulonglong *)(puVar11[2] + (ulonglong)(uVar17 >> 0x10) * 0x18 + uVar12 * 8) >>
                   (*puVar19 >> ((byte)(&DAT_14045c3c8)[uVar12] & 0x1f) & 0x3f) & 1) == 0)
              goto LAB_1403a860a;
              uVar16 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar16;
            } while (uVar16 < 3);
            puVar11 = (undefined8 *)*puVar11;
            puVar13 = &DAT_14045dd10;
            if (puVar11 != (undefined8 *)0x0) {
              puVar13 = puVar11;
            }
            if (*(uint *)(puVar13 + 3) < 4) {
              puVar11 = &DAT_14045dd10;
            }
            else {
              puVar11 = (undefined8 *)puVar13[2];
            }
            cVar7 = FUN_1403ebf20(puVar11,uVar17 >> 0x10,*puVar19);
            if (cVar7 == '\0') {
LAB_1403a860a:
              bVar20 = false;
            }
            else {
              bVar20 = true;
            }
          }
          if (!bVar20) goto LAB_1403a87b8;
        }
        uVar3 = (ushort)puVar19[4];
        if ((((((uVar3 & 0x20) == 0) || ((puVar19[3] & 0x10) != 0)) ||
             ((*(char *)(param_2 + 0x20) == '\0' &&
              ((((byte)uVar3 & 0x1f) == 1 && ((uVar3 & 0x200) != 0)))))) ||
            ((*(char *)(param_2 + 0x21) == '\0' &&
             ((((byte)uVar3 & 0x1f) == 1 && ((uVar3 & 0x100) != 0)))))) ||
           ((*(char *)(param_2 + 0x22) == '\0' && ((uVar3 & 0x40) != 0)))) {
          bVar20 = false;
        }
        else {
          bVar20 = true;
        }
        pbVar10 = *(byte **)(param_2 + 0x38);
        if (pbVar10 == (byte *)0x0) {
          iVar15 = 0;
        }
        else {
          iVar15 = (uint)pbVar10[1] + (uint)*pbVar10 * 0x100;
        }
        if (((puVar19[1] & *(uint *)(param_2 + 0x1c)) != 0) &&
           (((*(char *)(param_2 + 0x23) == '\0' || (*(char *)(param_2 + 0x24) == '\0')) ||
            (*(char *)(param_2 + 0x24) == *(char *)((longlong)puVar19 + 0xf))))) {
          if (*(code **)(param_2 + 0x28) == (code *)0x0) {
            if (!bVar20) goto LAB_1403a86e9;
          }
          else {
            cVar7 = (**(code **)(param_2 + 0x28))(puVar19,iVar15,*(undefined8 *)(param_2 + 0x30));
            if (cVar7 != '\0') {
LAB_1403a86e9:
              lVar5 = *(longlong *)(lVar4 + 0x70);
              if ((*(byte *)(lVar1 + 0xc + lVar5) & 0x40) != 0) {
                bVar2 = *(byte *)(lVar1 + 0xe + lVar5);
                bVar8 = 0;
                if ((bVar2 & 0x10) == 0) {
                  bVar8 = bVar2 & 0xf;
                }
                if (((bVar8 != 0) && (uVar14 - 1 != 0)) &&
                   (((*(byte *)(lVar5 + 0xc + (ulonglong)(uVar14 - 2) * 0x14) & 0x48) == 0x40 &&
                    (bVar8 = *(byte *)(lVar5 + (ulonglong)(uVar14 - 2) * 0x14 + 0xe),
                    ((bVar8 ^ bVar2) & 0xe0) == 0)))) {
                  bVar6 = bVar2 & 0xf;
                  if ((bVar2 & 0x10) != 0) {
                    bVar6 = 0;
                  }
                  if ((bVar8 & 0x10) == 0) {
                    bVar8 = bVar8 & 0xf;
                  }
                  else {
                    bVar8 = 0;
                  }
                  if (bVar6 == (byte)(bVar8 + 1)) {
                    uVar17 = (uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 4) * 0x100;
                    if (uVar17 == 0) {
                      pbVar10 = (byte *)&DAT_14045dd10;
                    }
                    else {
                      pbVar10 = (byte *)((ulonglong)uVar17 + param_1);
                    }
                    iVar15 = (uint)*pbVar10 * 0x100 + (uint)pbVar10[1];
                    if (iVar15 == 1) {
                      iVar15 = FUN_1403c70f0();
                    }
                    else {
                      if (iVar15 != 2) goto LAB_1403a87b8;
                      iVar15 = FUN_1403c7170();
                    }
                    if (iVar15 == -1) goto LAB_1403a87b8;
                  }
                }
              }
              *(uint *)(param_2 + 0x138) = uVar14 - 1;
              break;
            }
          }
        }
      }
LAB_1403a87b8:
      uVar14 = uVar14 - 1;
    } while (*(uint *)(param_2 + 0x13c) < uVar14);
  }
  uVar18 = uVar9 & 0xffffffff;
  puVar11 = &DAT_14045dd10;
  uVar17 = *(uint *)(param_2 + 0x138);
  uVar12 = (ulonglong)uVar17;
  uVar9 = (ulonglong)*(uint *)(lVar4 + 0x5c);
  *(uint *)(param_2 + 0x13c) = *(uint *)(lVar4 + 0x5c);
  if (uVar17 == 0xffffffff) {
    if ((*(byte *)(lVar4 + 0x18) & 0x40) != 0) {
      uVar14 = *(int *)(lVar4 + 0x5c) + 1;
      uVar17 = *(int *)(lVar4 + 0x5c) - 0xff;
      uVar9 = (ulonglong)uVar17;
      if (0xfffffefe < uVar17) {
        uVar17 = *(uint *)(lVar4 + 0x60);
        if (uVar14 <= *(uint *)(lVar4 + 0x60)) {
          uVar17 = uVar14;
        }
        uVar12 = 0;
        if (*(char *)(lVar4 + 0x59) == '\0') {
          if (uVar17 != 0) {
            do {
              uVar9 = *(ulonglong *)(lVar4 + 0x70);
              uVar14 = (int)uVar12 + 1;
              puVar19 = (uint *)(uVar9 + 4 + uVar12 * 0x14);
              *puVar19 = *puVar19 | 2;
              uVar12 = (ulonglong)uVar14;
            } while (uVar14 < uVar17);
          }
        }
        else {
          if (*(int *)(lVar4 + 100) != 0) {
            do {
              uVar9 = *(ulonglong *)(lVar4 + 0x78);
              uVar14 = (int)uVar12 + 1;
              puVar19 = (uint *)(uVar9 + 4 + uVar12 * 0x14);
              *puVar19 = *puVar19 | 2;
              uVar12 = (ulonglong)uVar14;
            } while (uVar14 < *(uint *)(lVar4 + 100));
          }
          for (uVar14 = *(uint *)(lVar4 + 0x5c); uVar14 < uVar17; uVar14 = uVar14 + 1) {
            uVar9 = *(ulonglong *)(lVar4 + 0x70);
            puVar19 = (uint *)(uVar9 + 4 + (ulonglong)uVar14 * 0x14);
            *puVar19 = *puVar19 | 2;
          }
        }
      }
    }
    goto LAB_1403a8866;
  }
  uVar14 = (uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 4) * 0x100;
  if (uVar14 == 0) {
    pbVar10 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar10 = (byte *)((ulonglong)uVar14 + param_1);
  }
  uVar9 = 0;
  iVar15 = (uint)*pbVar10 * 0x100 + (uint)pbVar10[1];
  if (iVar15 == 1) {
    uVar9 = FUN_1403c70f0(pbVar10,*(undefined4 *)(*(longlong *)(lVar4 + 0x70) + uVar12 * 0x14));
LAB_1403a88f3:
    if ((int)uVar9 != -1) {
      uVar14 = (uint)*(byte *)(param_1 + 10) * 0x100 + (uint)*(byte *)(param_1 + 0xb);
      if (uVar14 == 0) {
        puVar13 = &DAT_14045dd10;
      }
      else {
        puVar13 = (undefined8 *)((ulonglong)uVar14 + param_1);
      }
      uVar14 = (uint)*(byte *)(param_1 + 9) + (uint)*(byte *)(param_1 + 8) * 0x100;
      if (uVar14 != 0) {
        puVar11 = (undefined8 *)((ulonglong)uVar14 + param_1);
      }
      uVar9 = FUN_1403ac670(puVar11,param_2,uVar18,uVar9 & 0xffffffff,puVar13,
                            (uint)*(byte *)(param_1 + 7) + (uint)*(byte *)(param_1 + 6) * 0x100,
                            uVar17);
      return uVar9;
    }
  }
  else if (iVar15 == 2) {
    uVar9 = FUN_1403c7170();
    goto LAB_1403a88f3;
  }
  if (((*(byte *)(lVar4 + 0x18) & 0x40) != 0) &&
     ((uVar14 = *(int *)(lVar4 + 0x5c) + 1, uVar14 == 0xffffffff ||
      (uVar9 = (ulonglong)(uVar14 - uVar17), uVar14 - uVar17 < 0x100)))) {
    uVar16 = *(uint *)(lVar4 + 0x60);
    if (uVar14 <= *(uint *)(lVar4 + 0x60)) {
      uVar16 = uVar14;
    }
    if (*(char *)(lVar4 + 0x59) == '\0') {
      while (uVar17 < uVar16) {
        uVar9 = *(ulonglong *)(lVar4 + 0x70);
        uVar17 = (int)uVar12 + 1;
        puVar19 = (uint *)(uVar9 + 4 + uVar12 * 0x14);
        *puVar19 = *puVar19 | 2;
        uVar12 = (ulonglong)uVar17;
      }
    }
    else {
      if (uVar17 < *(uint *)(lVar4 + 100)) {
        do {
          uVar9 = *(ulonglong *)(lVar4 + 0x78);
          uVar17 = (int)uVar12 + 1;
          puVar19 = (uint *)(uVar9 + 4 + uVar12 * 0x14);
          *puVar19 = *puVar19 | 2;
          uVar12 = (ulonglong)uVar17;
        } while (uVar17 < *(uint *)(lVar4 + 100));
      }
      for (uVar17 = *(uint *)(lVar4 + 0x5c); uVar17 < uVar16; uVar17 = uVar17 + 1) {
        uVar9 = *(ulonglong *)(lVar4 + 0x70);
        puVar19 = (uint *)(uVar9 + 4 + (ulonglong)uVar17 * 0x14);
        *puVar19 = *puVar19 | 2;
      }
    }
  }
LAB_1403a8866:
  return uVar9 & 0xffffffffffffff00;
}

