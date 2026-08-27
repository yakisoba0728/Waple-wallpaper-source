// Function: FUN_1403a7e20
// Addr: 1403a7e20
// Size: 1387 bytes


undefined8 FUN_1403a7e20(byte *param_1,longlong param_2,ulonglong *param_3)

{
  uint *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  code *pcVar8;
  char cVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  ulonglong uVar17;
  
  uVar17 = 0;
  uVar16 = 0;
  uVar21 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (uVar21 < 2) {
    uVar18 = uVar16;
    if (uVar21 == 0) {
      return 0;
    }
  }
  else {
    lVar7 = *(longlong *)(param_2 + 0x50);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(*(longlong *)(param_2 + 0xa0) + 0x5c);
    iVar5 = *(int *)(*(longlong *)(lVar7 + 0xa0) + 0x60);
    *(int *)(param_2 + 0x80) = iVar5;
    iVar5 = iVar5 + -1;
    uVar3 = *(undefined1 *)
             (*(longlong *)(*(longlong *)(lVar7 + 0xa0) + 0x70) + 0xf +
             (ulonglong)*(uint *)(*(longlong *)(lVar7 + 0xa0) + 0x5c) * 0x14);
    *(code **)(param_2 + 0x68) = FUN_1403ec040;
    *(undefined8 *)(param_2 + 0x70) = 0;
    *(undefined1 *)(param_2 + 100) = uVar3;
    iVar10 = *(int *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x78) = 0;
    uVar18 = uVar17;
    if (iVar10 < iVar5) {
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0xa0) + 0x70);
      do {
        *(uint *)(param_2 + 0x48) = iVar10 + 1U;
        lVar2 = (ulonglong)(iVar10 + 1U) * 0x14;
        uVar4 = *(ushort *)(lVar2 + 0xc + lVar7);
        uVar14 = *(uint *)(param_2 + 0x58);
        if ((uVar4 & uVar14 & 0xe) == 0) {
          puVar1 = (uint *)(lVar2 + lVar7);
          if ((uVar4 & 8) != 0) {
            if ((uVar14 & 0x10) == 0) {
              if ((uVar14 & 0xff00) == 0) {
                bVar22 = true;
              }
              else {
                bVar22 = (uVar14 & 0xff00) == (uVar4 & 0xff00);
              }
            }
            else {
              puVar11 = *(undefined8 **)(*(longlong *)(param_2 + 0x50) + 0xf8);
              uVar15 = uVar17;
              do {
                if ((*(ulonglong *)(puVar11[2] + (ulonglong)(uVar14 >> 0x10) * 0x18 + uVar15 * 8) >>
                     (*puVar1 >> ((byte)(&DAT_14045c3c8)[uVar15] & 0x1f) & 0x3f) & 1) == 0)
                goto LAB_1403a7f90;
                uVar19 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar19;
              } while (uVar19 < 3);
              puVar11 = (undefined8 *)*puVar11;
              puVar12 = &DAT_14045dd10;
              if (puVar11 != (undefined8 *)0x0) {
                puVar12 = puVar11;
              }
              if (*(uint *)(puVar12 + 3) < 4) {
                puVar11 = &DAT_14045dd10;
              }
              else {
                puVar11 = (undefined8 *)puVar12[2];
              }
              cVar9 = FUN_1403ebf20(puVar11,uVar14 >> 0x10,*puVar1);
              if (cVar9 == '\0') {
LAB_1403a7f90:
                bVar22 = false;
              }
              else {
                bVar22 = true;
              }
            }
            if (!bVar22) goto LAB_1403a8075;
          }
          uVar4 = (ushort)puVar1[4];
          if ((((((uVar4 & 0x20) == 0) || ((puVar1[3] & 0x10) != 0)) ||
               ((*(char *)(param_2 + 0x60) == '\0' &&
                ((((byte)uVar4 & 0x1f) == 1 && ((uVar4 & 0x200) != 0)))))) ||
              ((*(char *)(param_2 + 0x61) == '\0' &&
               ((((byte)uVar4 & 0x1f) == 1 && ((uVar4 & 0x100) != 0)))))) ||
             ((*(char *)(param_2 + 0x62) == '\0' && ((uVar4 & 0x40) != 0)))) {
            bVar22 = false;
          }
          else {
            bVar22 = true;
          }
          pbVar13 = *(byte **)(param_2 + 0x78);
          uVar15 = uVar17;
          if (pbVar13 != (byte *)0x0) {
            uVar15 = (ulonglong)((uint)*pbVar13 * 0x100 + (uint)pbVar13[1]);
          }
          if (((*(uint *)(param_2 + 0x5c) & puVar1[1]) != 0) &&
             (((*(char *)(param_2 + 99) == '\0' || (*(char *)(param_2 + 100) == '\0')) ||
              (*(char *)(param_2 + 100) == *(char *)((longlong)puVar1 + 0xf))))) {
            pcVar8 = *(code **)(param_2 + 0x68);
            if (pcVar8 == (code *)0x0) {
              if (bVar22) goto LAB_1403a8075;
            }
            else {
              if (pcVar8 == FUN_1403ec040) {
                cVar9 = '\x01';
              }
              else {
                cVar9 = (*pcVar8)(puVar1,uVar15,*(undefined8 *)(param_2 + 0x70));
              }
              if (cVar9 == '\0') goto LAB_1403a806d;
            }
            if (*(longlong *)(param_2 + 0x78) != 0) {
              *(longlong *)(param_2 + 0x78) = *(longlong *)(param_2 + 0x78) + 2;
            }
            uVar14 = *(uint *)(param_2 + 0x48);
            puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70) +
                             (ulonglong)uVar14 * 0x14);
            uVar19 = *(uint *)(param_2 + 0x58);
            uVar4 = (ushort)puVar1[3];
            uVar18 = uVar16;
            if ((uVar4 & uVar19 & 0xe) == 0) {
              uVar6 = *puVar1;
              if ((uVar4 & 8) == 0) goto LAB_1403a8180;
              if ((uVar19 & 0x10) != 0) {
                puVar11 = *(undefined8 **)(*(longlong *)(param_2 + 0x50) + 0xf8);
                uVar18 = uVar17;
                goto LAB_1403a8100;
              }
              if ((uVar19 & 0xff00) == 0) goto LAB_1403a8176;
              bVar22 = (uVar19 & 0xff00) == (uVar4 & 0xff00);
              goto LAB_1403a8178;
            }
            break;
          }
LAB_1403a806d:
          if (!bVar22) break;
        }
LAB_1403a8075:
        iVar10 = *(int *)(param_2 + 0x48);
      } while (iVar10 < iVar5);
    }
  }
  goto LAB_1403a8350;
  while (uVar20 = (int)uVar18 + 1, uVar18 = (ulonglong)uVar20, uVar20 < 3) {
LAB_1403a8100:
    if ((*(ulonglong *)(puVar11[2] + (ulonglong)(uVar19 >> 0x10) * 0x18 + uVar18 * 8) >>
         (uVar6 >> ((byte)(&DAT_14045c3c8)[uVar18] & 0x1f) & 0x3f) & 1) == 0) goto LAB_1403a815d;
  }
  puVar11 = (undefined8 *)*puVar11;
  puVar12 = &DAT_14045dd10;
  if (puVar11 != (undefined8 *)0x0) {
    puVar12 = puVar11;
  }
  if (*(uint *)(puVar12 + 3) < 4) {
    puVar11 = &DAT_14045dd10;
  }
  else {
    puVar11 = (undefined8 *)puVar12[2];
  }
  cVar9 = FUN_1403ebf20(puVar11,uVar19 >> 0x10,uVar6);
  if (cVar9 == '\0') {
LAB_1403a815d:
    bVar22 = false;
  }
  else {
LAB_1403a8176:
    bVar22 = true;
  }
LAB_1403a8178:
  uVar18 = uVar16;
  if (bVar22) {
LAB_1403a8180:
    uVar4 = (ushort)puVar1[4];
    if (((((uVar4 & 0x20) == 0) || ((puVar1[3] & 0x10) != 0)) ||
        ((*(char *)(param_2 + 0x60) == '\0' &&
         ((((byte)uVar4 & 0x1f) == 1 && ((uVar4 >> 9 & 1) != 0)))))) ||
       (((*(char *)(param_2 + 0x61) == '\0' &&
         ((((byte)uVar4 & 0x1f) == 1 && ((uVar4 >> 8 & 1) != 0)))) ||
        ((uVar18 = uVar16, *(char *)(param_2 + 0x62) == '\0' && ((uVar4 & 0x40) != 0)))))) {
      if (param_3 != (ulonglong *)0x0) {
        if ((*param_3 >> (uVar6 >> 4 & 0x3f) & 1) == 0) {
          return 0;
        }
        if ((param_3[1] >> (uVar6 & 0x3f) & 1) == 0) {
          return 0;
        }
        if ((param_3[2] >> (uVar6 >> 6 & 0x3f) & 1) == 0) {
          return 0;
        }
      }
      uVar14 = uVar14 + 1;
      bVar22 = false;
      do {
        uVar19 = (uint)param_1[uVar17 * 2 + 2] * 0x100 + (uint)param_1[uVar17 * 2 + 3];
        if (uVar19 == 0) {
          pbVar13 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar13 = param_1 + uVar19;
        }
        if (((uint)pbVar13[3] + (uint)pbVar13[2] * 0x100 < 2) ||
           ((uint)pbVar13[4] * 0x100 + (uint)pbVar13[5] == uVar6)) {
          cVar9 = FUN_1403a7800(pbVar13,param_2);
          if (cVar9 != '\0') {
            if (!bVar22) {
              return 1;
            }
            lVar7 = *(longlong *)(param_2 + 0xa0);
            if ((*(byte *)(lVar7 + 0x18) & 0x40) == 0) {
              return 1;
            }
            uVar21 = *(uint *)(lVar7 + 0x5c);
            if ((uVar14 != 0xffffffff) && (0xff < uVar14 - uVar21)) {
              return 1;
            }
            uVar19 = *(uint *)(lVar7 + 0x60);
            if (uVar14 <= *(uint *)(lVar7 + 0x60)) {
              uVar19 = uVar14;
            }
            for (; uVar21 < uVar19; uVar21 = uVar21 + 1) {
              puVar1 = (uint *)(*(longlong *)(lVar7 + 0x70) + 4 + (ulonglong)uVar21 * 0x14);
              *puVar1 = *puVar1 | 2;
            }
            return 1;
          }
        }
        else {
          bVar22 = true;
        }
        uVar19 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar19;
      } while (uVar19 < uVar21);
      if (!bVar22) {
        return 0;
      }
      lVar7 = *(longlong *)(param_2 + 0xa0);
      if ((*(byte *)(lVar7 + 0x18) & 0x40) == 0) {
        return 0;
      }
      uVar21 = *(uint *)(lVar7 + 0x5c);
      if ((uVar14 != 0xffffffff) && (0xff < uVar14 - uVar21)) {
        return 0;
      }
      uVar19 = *(uint *)(lVar7 + 0x60);
      if (uVar14 <= *(uint *)(lVar7 + 0x60)) {
        uVar19 = uVar14;
      }
      for (; uVar21 < uVar19; uVar21 = uVar21 + 1) {
        puVar1 = (uint *)(*(longlong *)(lVar7 + 0x70) + 4 + (ulonglong)uVar21 * 0x14);
        *puVar1 = *puVar1 | 2;
      }
      return 0;
    }
  }
LAB_1403a8350:
  while( true ) {
    uVar14 = (uint)param_1[uVar18 * 2 + 2] * 0x100 + (uint)param_1[uVar18 * 2 + 3];
    if (uVar14 == 0) {
      pbVar13 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar13 = param_1 + uVar14;
    }
    cVar9 = FUN_1403a7800(pbVar13,param_2);
    if (cVar9 != '\0') break;
    uVar14 = (int)uVar18 + 1;
    uVar18 = (ulonglong)uVar14;
    if (uVar21 <= uVar14) {
      return 0;
    }
  }
  return 1;
}

