// Function: FUN_1403a9c70
// Addr: 1403a9c70
// Size: 1350 bytes


ulonglong FUN_1403a9c70(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  ushort uVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte *pbVar6;
  uint3 uVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  
  lVar5 = *(longlong *)(param_2 + 0xa0);
  puVar18 = &DAT_14045dd10;
  lVar20 = param_3;
  if (param_3 == 0) {
    lVar20 = 0;
  }
  uVar15 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
  if (uVar15 == 0) {
    puVar13 = &DAT_14045dd10;
  }
  else {
    puVar13 = (undefined8 *)((ulonglong)uVar15 + param_1);
  }
  uVar12 = FUN_1403c7250(puVar13,*(undefined4 *)
                                  (*(longlong *)(lVar5 + 0x70) +
                                  (ulonglong)*(uint *)(lVar5 + 0x5c) * 0x14),lVar20);
  if ((int)uVar12 != -1) {
    iVar16 = *(int *)(lVar5 + 0x5c);
    iVar21 = *(int *)(param_2 + 0x40) + -1;
    *(int *)(param_2 + 8) = iVar16;
    if (iVar16 < iVar21) {
      lVar20 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0xa0) + 0x70);
      do {
        *(uint *)(param_2 + 8) = iVar16 + 1U;
        lVar2 = (ulonglong)(iVar16 + 1U) * 0x14;
        uVar3 = *(ushort *)(lVar2 + 0xc + lVar20);
        uVar15 = *(uint *)(param_2 + 0x18);
        uVar11 = uVar3 & uVar15;
        uVar12 = (ulonglong)uVar11;
        if ((uVar11 & 0xe) == 0) {
          puVar1 = (uint *)(lVar2 + lVar20);
          if ((uVar3 & 8) != 0) {
            if ((uVar15 & 0x10) == 0) {
              uVar7 = (uint3)(uVar11 >> 8);
              if ((uVar15 & 0xff00) == 0) {
                uVar12 = CONCAT71((uint7)uVar7,1);
              }
              else {
                uVar12 = (ulonglong)CONCAT31(uVar7,(uVar15 & 0xff00) == (uVar3 & 0xff00));
              }
            }
            else {
              uVar19 = 0;
              puVar13 = *(undefined8 **)(*(longlong *)(param_2 + 0x10) + 0xf8);
              do {
                uVar12 = *(ulonglong *)
                          (puVar13[2] + (ulonglong)(uVar15 >> 0x10) * 0x18 + uVar19 * 8);
                if ((uVar12 >> (*puVar1 >> ((byte)(&DAT_14045c3c8)[uVar19] & 0x1f) & 0x3f) & 1) == 0
                   ) goto LAB_1403a9de7;
                uVar11 = (int)uVar19 + 1;
                uVar19 = (ulonglong)uVar11;
              } while (uVar11 < 3);
              puVar13 = (undefined8 *)*puVar13;
              puVar14 = &DAT_14045dd10;
              if (puVar13 != (undefined8 *)0x0) {
                puVar14 = puVar13;
              }
              if (*(uint *)(puVar14 + 3) < 4) {
                puVar13 = &DAT_14045dd10;
              }
              else {
                puVar13 = (undefined8 *)puVar14[2];
              }
              uVar12 = FUN_1403ebf20(puVar13,uVar15 >> 0x10,*puVar1);
              if ((char)uVar12 == '\0') {
LAB_1403a9de7:
                uVar12 = uVar12 & 0xffffffffffffff00;
              }
              else {
                uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
              }
            }
            if ((char)uVar12 == '\0') goto LAB_1403a9eb9;
          }
          uVar3 = (ushort)puVar1[4];
          if ((((((uVar3 & 0x20) == 0) || ((puVar1[3] & 0x10) != 0)) ||
               ((*(char *)(param_2 + 0x20) == '\0' &&
                ((((byte)uVar3 & 0x1f) == 1 && ((uVar3 & 0x200) != 0)))))) ||
              ((*(char *)(param_2 + 0x21) == '\0' &&
               ((((byte)uVar3 & 0x1f) == 1 && ((uVar3 & 0x100) != 0)))))) ||
             ((*(char *)(param_2 + 0x22) == '\0' && ((uVar3 & 0x40) != 0)))) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          pbVar6 = *(byte **)(param_2 + 0x38);
          if (pbVar6 == (byte *)0x0) {
            iVar16 = 0;
          }
          else {
            iVar16 = (uint)pbVar6[1] + (uint)*pbVar6 * 0x100;
          }
          uVar12 = (ulonglong)puVar1[1];
          if ((*(uint *)(param_2 + 0x1c) & puVar1[1]) != 0) {
            if (*(char *)(param_2 + 0x23) != '\0') {
              uVar12 = 0;
              if ((*(char *)(param_2 + 0x24) != '\0') &&
                 (*(char *)(param_2 + 0x24) != *(char *)((longlong)puVar1 + 0xf)))
              goto LAB_1403a9eb1;
            }
            if (*(code **)(param_2 + 0x28) == (code *)0x0) {
              uVar12 = 0;
              if (bVar8) goto LAB_1403a9eb9;
            }
            else {
              uVar12 = (**(code **)(param_2 + 0x28))(puVar1,iVar16,*(undefined8 *)(param_2 + 0x30));
              if ((char)uVar12 == '\0') goto LAB_1403a9eb1;
            }
            if (*(longlong *)(param_2 + 0x38) != 0) {
              *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x38) + 2;
            }
            if (param_3 == 0) {
              lVar20 = 0;
            }
            else {
              lVar20 = param_3 + 0x200;
            }
            uVar15 = (uint)*(byte *)(param_1 + 8) * 0x100 + (uint)*(byte *)(param_1 + 9);
            if (uVar15 == 0) {
              puVar13 = &DAT_14045dd10;
            }
            else {
              puVar13 = (undefined8 *)((ulonglong)uVar15 + param_1);
            }
            uVar15 = FUN_1403c6890(puVar13,*(undefined4 *)
                                            (*(longlong *)(lVar5 + 0x70) +
                                            (ulonglong)*(uint *)(lVar5 + 0x5c) * 0x14),lVar20);
            if (param_3 == 0) {
              param_3 = 0;
            }
            else {
              param_3 = param_3 + 0x400;
            }
            uVar11 = (uint)*(byte *)(param_1 + 0xb) + (uint)*(byte *)(param_1 + 10) * 0x100;
            if (uVar11 != 0) {
              puVar18 = (undefined8 *)((ulonglong)uVar11 + param_1);
            }
            uVar12 = FUN_1403c6890(puVar18,*(undefined4 *)
                                            (*(longlong *)(lVar5 + 0x70) +
                                            (ulonglong)*(uint *)(param_2 + 8) * 0x14),param_3);
            if ((uVar15 < (uint)*(byte *)(param_1 + 0xd) + (uint)*(byte *)(param_1 + 0xc) * 0x100)
               && (uVar11 = (uint)*(byte *)(param_1 + 0xf) + (uint)*(byte *)(param_1 + 0xe) * 0x100,
                  (uint)uVar12 < uVar11)) {
              uVar17 = (uint)(byte)(&DAT_140470560)[*(byte *)(param_1 + 5) & 0xf] +
                       (uint)(byte)(&DAT_140470560)[*(byte *)(param_1 + 5) >> 4];
              iVar16 = (uint)(byte)(&DAT_140470560)[*(byte *)(param_1 + 7) & 0xf] +
                       (uint)(byte)(&DAT_140470560)[*(byte *)(param_1 + 7) >> 4];
              lVar20 = param_1 + 0x10 +
                       (ulonglong)((uVar11 * uVar15 + (uint)uVar12) * (iVar16 + uVar17)) * 2;
              if ((uVar17 == 0) ||
                 (cVar10 = FUN_1403b0c80(param_1 + 4,param_2,param_1,lVar20,
                                         *(longlong *)(lVar5 + 0x80) +
                                         (ulonglong)*(uint *)(lVar5 + 0x5c) * 0x14), cVar10 == '\0')
                 ) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              if ((iVar16 == 0) ||
                 (cVar10 = FUN_1403b0c80(param_1 + 6,param_2,param_1,lVar20 + (ulonglong)uVar17 * 2,
                                         *(longlong *)(lVar5 + 0x80) +
                                         (ulonglong)*(uint *)(param_2 + 8) * 0x14), cVar10 == '\0'))
              {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if ((bVar8) || (bVar9)) {
                FUN_14040eef0(lVar5,*(undefined4 *)(lVar5 + 0x5c),*(int *)(param_2 + 8) + 1);
              }
              else if ((*(byte *)(lVar5 + 0x18) & 0x40) != 0) {
                uVar15 = *(uint *)(lVar5 + 0x5c);
                uVar11 = *(int *)(param_2 + 8) + 1;
                if ((uVar11 == 0xffffffff) || (uVar11 - uVar15 < 0x100)) {
                  uVar17 = *(uint *)(lVar5 + 0x60);
                  if (uVar11 <= *(uint *)(lVar5 + 0x60)) {
                    uVar17 = uVar11;
                  }
                  for (; uVar15 < uVar17; uVar15 = uVar15 + 1) {
                    puVar1 = (uint *)(*(longlong *)(lVar5 + 0x70) + 4 + (ulonglong)uVar15 * 0x14);
                    *puVar1 = *puVar1 | 2;
                  }
                }
              }
              if (iVar16 != 0) {
                *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
                FUN_14040eef0(lVar5,*(undefined4 *)(lVar5 + 0x5c),*(int *)(param_2 + 8) + 1);
              }
              uVar4 = *(undefined4 *)(param_2 + 8);
              *(undefined4 *)(lVar5 + 0x5c) = uVar4;
              return CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
            }
            if ((*(byte *)(lVar5 + 0x18) & 0x40) != 0) {
              uVar15 = *(uint *)(lVar5 + 0x5c);
              uVar11 = *(int *)(param_2 + 8) + 1;
              if ((uVar11 == 0xffffffff) ||
                 (uVar12 = (ulonglong)(uVar11 - uVar15), uVar11 - uVar15 < 0x100)) {
                uVar17 = *(uint *)(lVar5 + 0x60);
                if (uVar11 <= *(uint *)(lVar5 + 0x60)) {
                  uVar17 = uVar11;
                }
                for (; uVar15 < uVar17; uVar15 = uVar15 + 1) {
                  uVar12 = *(ulonglong *)(lVar5 + 0x70);
                  puVar1 = (uint *)(uVar12 + 4 + (ulonglong)uVar15 * 0x14);
                  *puVar1 = *puVar1 | 2;
                }
              }
            }
            goto LAB_1403aa196;
          }
LAB_1403a9eb1:
          if (!bVar8) {
            uVar15 = *(int *)(param_2 + 8) + 1;
            goto LAB_1403aa155;
          }
        }
LAB_1403a9eb9:
        iVar16 = *(int *)(param_2 + 8);
      } while (iVar16 < iVar21);
    }
    uVar15 = *(uint *)(param_2 + 0x40);
LAB_1403aa155:
    if (((*(byte *)(lVar5 + 0x18) & 0x40) != 0) &&
       ((uVar11 = *(uint *)(lVar5 + 0x5c), uVar15 == 0xffffffff ||
        (uVar12 = (ulonglong)(uVar15 - uVar11), uVar15 - uVar11 < 0x100)))) {
      uVar17 = *(uint *)(lVar5 + 0x60);
      if (uVar15 <= *(uint *)(lVar5 + 0x60)) {
        uVar17 = uVar15;
      }
      for (; uVar11 < uVar17; uVar11 = uVar11 + 1) {
        uVar12 = *(ulonglong *)(lVar5 + 0x70);
        puVar1 = (uint *)(uVar12 + 4 + (ulonglong)uVar11 * 0x14);
        *puVar1 = *puVar1 | 2;
      }
    }
  }
LAB_1403aa196:
  return uVar12 & 0xffffffffffffff00;
}

