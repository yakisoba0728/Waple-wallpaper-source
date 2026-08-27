// Function: FUN_1403a8a10
// Addr: 1403a8a10
// Size: 1562 bytes


ulonglong FUN_1403a8a10(longlong param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  bool bVar19;
  bool bVar20;
  
  lVar4 = *(longlong *)(param_2 + 0xa0);
  puVar18 = &DAT_14045dd10;
  uVar12 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100;
  if (uVar12 == 0) {
    pbVar9 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar9 = (byte *)((ulonglong)uVar12 + param_1);
  }
  uVar7 = (ulonglong)*pbVar9 << 8;
  iVar15 = (uint)pbVar9[1] + (int)uVar7;
  if (iVar15 == 1) {
    uVar7 = FUN_1403c70f0();
  }
  else {
    if (iVar15 != 2) goto LAB_1403a8d16;
    uVar7 = FUN_1403c7170();
  }
  uVar13 = uVar7 & 0xffffffff;
  if ((int)uVar7 == -1) goto LAB_1403a8d16;
  *(undefined4 *)(param_2 + 0x18) = 8;
  uVar12 = *(uint *)(param_2 + 0x13c);
  if (*(uint *)(lVar4 + 0x5c) < uVar12) {
    *(undefined4 *)(param_2 + 0x13c) = 0;
    uVar12 = 0;
    *(undefined4 *)(param_2 + 0x138) = 0xffffffff;
  }
  uVar8 = *(uint *)(lVar4 + 0x5c);
  bVar20 = uVar8 == uVar12;
  bVar19 = uVar8 < uVar12;
  while (!bVar19 && !bVar20) {
    uVar12 = *(uint *)(param_2 + 0x18);
    puVar1 = (uint *)(*(longlong *)(lVar4 + 0x70) + (ulonglong)(uVar8 - 1) * 0x14);
    uVar3 = *(ushort *)(*(longlong *)(lVar4 + 0x70) + 0xc + (ulonglong)(uVar8 - 1) * 0x14);
    if ((uVar3 & uVar12 & 0xe) == 0) {
      if ((uVar3 & 8) != 0) {
        if ((uVar12 & 0x10) == 0) {
          if ((uVar12 & 0xff00) == 0) {
            bVar19 = true;
          }
          else {
            bVar19 = (uVar12 & 0xff00) == (uVar3 & 0xff00);
          }
        }
        else {
          uVar7 = 0;
          puVar11 = *(undefined8 **)(*(longlong *)(param_2 + 0x10) + 0xf8);
          do {
            if ((*(ulonglong *)(puVar11[2] + (ulonglong)(uVar12 >> 0x10) * 0x18 + uVar7 * 8) >>
                 (*puVar1 >> ((byte)(&DAT_14045c3c8)[uVar7] & 0x1f) & 0x3f) & 1) == 0)
            goto LAB_1403a8ba3;
            uVar16 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar16;
          } while (uVar16 < 3);
          puVar11 = (undefined8 *)*puVar11;
          puVar10 = &DAT_14045dd10;
          if (puVar11 != (undefined8 *)0x0) {
            puVar10 = puVar11;
          }
          if (*(uint *)(puVar10 + 3) < 4) {
            puVar11 = &DAT_14045dd10;
          }
          else {
            puVar11 = (undefined8 *)puVar10[2];
          }
          cVar6 = FUN_1403ebf20(puVar11,uVar12 >> 0x10,*puVar1);
          if (cVar6 == '\0') {
LAB_1403a8ba3:
            bVar19 = false;
          }
          else {
            bVar19 = true;
          }
        }
        if (!bVar19) goto LAB_1403a8d3d;
      }
      uVar3 = (ushort)puVar1[4];
      if ((((((uVar3 & 0x20) == 0) || ((puVar1[3] & 0x10) != 0)) ||
           ((*(char *)(param_2 + 0x20) == '\0' &&
            ((((byte)uVar3 & 0x1f) == 1 && ((uVar3 & 0x200) != 0)))))) ||
          ((*(char *)(param_2 + 0x21) == '\0' &&
           ((((byte)uVar3 & 0x1f) == 1 && ((uVar3 & 0x100) != 0)))))) ||
         ((*(char *)(param_2 + 0x22) == '\0' && ((uVar3 & 0x40) != 0)))) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      pbVar9 = *(byte **)(param_2 + 0x38);
      if (pbVar9 == (byte *)0x0) {
        iVar15 = 0;
      }
      else {
        iVar15 = (uint)*pbVar9 * 0x100 + (uint)pbVar9[1];
      }
      if (((*(uint *)(param_2 + 0x1c) & puVar1[1]) != 0) &&
         (((*(char *)(param_2 + 0x23) == '\0' || (*(char *)(param_2 + 0x24) == '\0')) ||
          (*(char *)(param_2 + 0x24) == *(char *)((longlong)puVar1 + 0xf))))) {
        if (*(code **)(param_2 + 0x28) == (code *)0x0) {
          if (!bVar19) goto LAB_1403a8c7d;
        }
        else {
          cVar6 = (**(code **)(param_2 + 0x28))(puVar1,iVar15,*(undefined8 *)(param_2 + 0x30));
          if (cVar6 != '\0') {
LAB_1403a8c7d:
            *(uint *)(param_2 + 0x138) = uVar8 - 1;
            break;
          }
        }
      }
    }
LAB_1403a8d3d:
    uVar8 = uVar8 - 1;
    bVar20 = uVar8 == *(uint *)(param_2 + 0x13c);
    bVar19 = uVar8 < *(uint *)(param_2 + 0x13c);
  }
  uVar12 = *(uint *)(param_2 + 0x138);
  uVar14 = (ulonglong)uVar12;
  uVar7 = (ulonglong)*(uint *)(lVar4 + 0x5c);
  *(uint *)(param_2 + 0x13c) = *(uint *)(lVar4 + 0x5c);
  if (uVar12 == 0xffffffff) {
    if ((*(byte *)(lVar4 + 0x18) & 0x40) != 0) {
      uVar8 = *(int *)(lVar4 + 0x5c) + 1;
      uVar12 = *(int *)(lVar4 + 0x5c) - 0xff;
      uVar7 = (ulonglong)uVar12;
      if (0xfffffefe < uVar12) {
        uVar12 = *(uint *)(lVar4 + 0x60);
        if (uVar8 <= *(uint *)(lVar4 + 0x60)) {
          uVar12 = uVar8;
        }
        uVar13 = 0;
        if (*(char *)(lVar4 + 0x59) == '\0') {
          if (uVar12 != 0) {
            do {
              uVar7 = *(ulonglong *)(lVar4 + 0x70);
              uVar8 = (int)uVar13 + 1;
              puVar1 = (uint *)(uVar7 + 4 + uVar13 * 0x14);
              *puVar1 = *puVar1 | 2;
              uVar13 = (ulonglong)uVar8;
            } while (uVar8 < uVar12);
          }
        }
        else {
          if (*(int *)(lVar4 + 100) != 0) {
            do {
              uVar7 = *(ulonglong *)(lVar4 + 0x78);
              uVar8 = (int)uVar13 + 1;
              puVar1 = (uint *)(uVar7 + 4 + uVar13 * 0x14);
              *puVar1 = *puVar1 | 2;
              uVar13 = (ulonglong)uVar8;
            } while (uVar8 < *(uint *)(lVar4 + 100));
          }
          for (uVar8 = *(uint *)(lVar4 + 0x5c); uVar8 < uVar12; uVar8 = uVar8 + 1) {
            uVar7 = *(ulonglong *)(lVar4 + 0x70);
            puVar1 = (uint *)(uVar7 + 4 + (ulonglong)uVar8 * 0x14);
            *puVar1 = *puVar1 | 2;
          }
        }
      }
    }
    goto LAB_1403a8d16;
  }
  uVar8 = (uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 4) * 0x100;
  if (uVar8 == 0) {
    pbVar9 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar9 = (byte *)((ulonglong)uVar8 + param_1);
  }
  uVar7 = 0;
  iVar15 = (uint)*pbVar9 * 0x100 + (uint)pbVar9[1];
  if (iVar15 == 1) {
    uVar7 = FUN_1403c70f0(pbVar9,*(undefined4 *)(uVar14 * 0x14 + *(longlong *)(lVar4 + 0x70)));
LAB_1403a8dc2:
    if ((uint)uVar7 != 0xffffffff) {
      uVar8 = (uint)*(byte *)(param_1 + 0xb) + (uint)*(byte *)(param_1 + 10) * 0x100;
      if (uVar8 == 0) {
        pbVar9 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar9 = (byte *)((ulonglong)uVar8 + param_1);
      }
      if ((uint)uVar7 < (uint)*pbVar9 * 0x100 + (uint)pbVar9[1]) {
        uVar8 = (uint)pbVar9[(uVar7 & 0xffffffff) * 2 + 2] * 0x100 +
                (uint)pbVar9[(uVar7 & 0xffffffff) * 2 + 3];
        if (uVar8 == 0) {
          pbVar9 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar9 = pbVar9 + uVar8;
        }
      }
      else {
        pbVar9 = (byte *)&DAT_14045dd10;
      }
      uVar7 = 0;
      uVar8 = (uint)*pbVar9 * 0x100 + (uint)pbVar9[1];
      if (uVar8 != 0) {
        bVar5 = *(byte *)(*(longlong *)(lVar4 + 0x70) + 0xe + uVar14 * 0x14) >> 5;
        bVar2 = *(byte *)(*(longlong *)(lVar4 + 0x70) + 0xe +
                         (ulonglong)*(uint *)(lVar4 + 0x5c) * 0x14);
        uVar16 = 0;
        if ((bVar2 & 0x10) == 0) {
          uVar16 = bVar2 & 0xf;
        }
        uVar17 = uVar8;
        if (((bVar5 != 0) && (bVar5 == bVar2 >> 5)) && (uVar16 != 0)) {
          uVar17 = bVar2 & 0xf;
          if ((bVar2 & 0x10) != 0) {
            uVar17 = 0;
          }
          if (uVar8 <= uVar17) {
            uVar17 = uVar8;
          }
        }
        uVar8 = (uint)*(byte *)(param_1 + 8) * 0x100 + (uint)*(byte *)(param_1 + 9);
        if (uVar8 != 0) {
          puVar18 = (undefined8 *)((ulonglong)uVar8 + param_1);
        }
        uVar7 = FUN_1403ac670(puVar18,param_2,uVar13,uVar17 - 1,pbVar9,
                              (uint)*(byte *)(param_1 + 7) + (uint)*(byte *)(param_1 + 6) * 0x100,
                              uVar12);
        return uVar7;
      }
      if (((*(byte *)(lVar4 + 0x18) & 0x40) != 0) &&
         ((uVar8 = *(int *)(lVar4 + 0x5c) + 1, uVar8 == 0xffffffff ||
          (uVar7 = (ulonglong)(uVar8 - uVar12), uVar8 - uVar12 < 0x100)))) {
        uVar16 = *(uint *)(lVar4 + 0x60);
        if (uVar8 <= *(uint *)(lVar4 + 0x60)) {
          uVar16 = uVar8;
        }
        if (*(char *)(lVar4 + 0x59) == '\0') {
          while (uVar12 < uVar16) {
            uVar7 = *(ulonglong *)(lVar4 + 0x70);
            uVar12 = (int)uVar14 + 1;
            puVar1 = (uint *)(uVar7 + 4 + uVar14 * 0x14);
            *puVar1 = *puVar1 | 2;
            uVar14 = (ulonglong)uVar12;
          }
        }
        else {
          if (uVar12 < *(uint *)(lVar4 + 100)) {
            do {
              uVar7 = *(ulonglong *)(lVar4 + 0x78);
              uVar12 = (int)uVar14 + 1;
              puVar1 = (uint *)(uVar7 + 4 + uVar14 * 0x14);
              *puVar1 = *puVar1 | 2;
              uVar14 = (ulonglong)uVar12;
            } while (uVar12 < *(uint *)(lVar4 + 100));
          }
          for (uVar12 = *(uint *)(lVar4 + 0x5c); uVar12 < uVar16; uVar12 = uVar12 + 1) {
            uVar7 = *(ulonglong *)(lVar4 + 0x70);
            puVar1 = (uint *)(uVar7 + 4 + (ulonglong)uVar12 * 0x14);
            *puVar1 = *puVar1 | 2;
          }
        }
      }
      goto LAB_1403a8d16;
    }
  }
  else if (iVar15 == 2) {
    uVar7 = FUN_1403c7170(pbVar9);
    goto LAB_1403a8dc2;
  }
  if (((*(byte *)(lVar4 + 0x18) & 0x40) != 0) &&
     ((uVar8 = *(int *)(lVar4 + 0x5c) + 1, uVar8 == 0xffffffff ||
      (uVar7 = (ulonglong)(uVar8 - uVar12), uVar8 - uVar12 < 0x100)))) {
    uVar16 = *(uint *)(lVar4 + 0x60);
    if (uVar8 <= *(uint *)(lVar4 + 0x60)) {
      uVar16 = uVar8;
    }
    if (*(char *)(lVar4 + 0x59) == '\0') {
      while (uVar12 < uVar16) {
        uVar7 = *(ulonglong *)(lVar4 + 0x70);
        uVar12 = (int)uVar14 + 1;
        puVar1 = (uint *)(uVar7 + 4 + uVar14 * 0x14);
        *puVar1 = *puVar1 | 2;
        uVar14 = (ulonglong)uVar12;
      }
    }
    else {
      if (uVar12 < *(uint *)(lVar4 + 100)) {
        do {
          uVar7 = *(ulonglong *)(lVar4 + 0x78);
          uVar12 = (int)uVar14 + 1;
          puVar1 = (uint *)(uVar7 + 4 + uVar14 * 0x14);
          *puVar1 = *puVar1 | 2;
          uVar14 = (ulonglong)uVar12;
        } while (uVar12 < *(uint *)(lVar4 + 100));
      }
      for (uVar12 = *(uint *)(lVar4 + 0x5c); uVar12 < uVar16; uVar12 = uVar12 + 1) {
        uVar7 = *(ulonglong *)(lVar4 + 0x70);
        puVar1 = (uint *)(uVar7 + 4 + (ulonglong)uVar12 * 0x14);
        *puVar1 = *puVar1 | 2;
      }
    }
  }
LAB_1403a8d16:
  return uVar7 & 0xffffffffffffff00;
}

