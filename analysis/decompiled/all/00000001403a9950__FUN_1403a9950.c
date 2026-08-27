// Function: FUN_1403a9950
// Addr: 1403a9950
// Size: 790 bytes


ulonglong FUN_1403a9950(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  uint3 uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  
  lVar4 = *(longlong *)(param_2 + 0xa0);
  puVar16 = &DAT_14045dd10;
  uVar13 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
  if (uVar13 == 0) {
    puVar11 = &DAT_14045dd10;
  }
  else {
    puVar11 = (undefined8 *)((ulonglong)uVar13 + param_1);
  }
  uVar9 = FUN_1403c7250(puVar11,*(undefined4 *)
                                 (*(longlong *)(lVar4 + 0x70) +
                                 (ulonglong)*(uint *)(lVar4 + 0x5c) * 0x14));
  uVar13 = (uint)uVar9;
  uVar18 = uVar9 & 0xffffffff;
  if (uVar13 != 0xffffffff) {
    iVar14 = *(int *)(lVar4 + 0x5c);
    iVar19 = *(int *)(param_2 + 0x40) + -1;
    *(int *)(param_2 + 8) = iVar14;
    if (iVar14 < iVar19) {
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0xa0) + 0x70);
      do {
        *(uint *)(param_2 + 8) = iVar14 + 1U;
        lVar2 = (ulonglong)(iVar14 + 1U) * 0x14;
        uVar3 = *(ushort *)(lVar2 + 0xc + lVar5);
        uVar15 = *(uint *)(param_2 + 0x18);
        uVar8 = uVar3 & uVar15;
        uVar9 = (ulonglong)uVar8;
        if ((uVar8 & 0xe) == 0) {
          puVar1 = (uint *)(lVar2 + lVar5);
          if ((uVar3 & 8) != 0) {
            if ((uVar15 & 0x10) == 0) {
              uVar6 = (uint3)(uVar8 >> 8);
              if ((uVar15 & 0xff00) == 0) {
                uVar9 = CONCAT71((uint7)uVar6,1);
              }
              else {
                uVar9 = (ulonglong)CONCAT31(uVar6,(uVar15 & 0xff00) == (uVar3 & 0xff00));
              }
            }
            else {
              uVar17 = 0;
              puVar11 = *(undefined8 **)(*(longlong *)(param_2 + 0x10) + 0xf8);
              do {
                uVar9 = *(ulonglong *)(puVar11[2] + (ulonglong)(uVar15 >> 0x10) * 0x18 + uVar17 * 8)
                ;
                if ((uVar9 >> (*puVar1 >> ((byte)(&DAT_14045c3c8)[uVar17] & 0x1f) & 0x3f) & 1) == 0)
                goto LAB_1403a9ac3;
                uVar8 = (int)uVar17 + 1;
                uVar17 = (ulonglong)uVar8;
              } while (uVar8 < 3);
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
              uVar9 = FUN_1403ebf20(puVar11,uVar15 >> 0x10,*puVar1);
              if ((char)uVar9 == '\0') {
LAB_1403a9ac3:
                uVar9 = uVar9 & 0xffffffffffffff00;
              }
              else {
                uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
              }
            }
            if ((char)uVar9 == '\0') goto LAB_1403a9b8d;
          }
          uVar3 = (ushort)puVar1[4];
          if ((((((uVar3 & 0x20) == 0) || ((puVar1[3] & 0x10) != 0)) ||
               ((*(char *)(param_2 + 0x20) == '\0' &&
                ((((byte)uVar3 & 0x1f) == 1 && ((uVar3 & 0x200) != 0)))))) ||
              ((*(char *)(param_2 + 0x21) == '\0' &&
               ((((byte)uVar3 & 0x1f) == 1 && ((uVar3 & 0x100) != 0)))))) ||
             ((*(char *)(param_2 + 0x22) == '\0' && ((uVar3 & 0x40) != 0)))) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          pbVar10 = *(byte **)(param_2 + 0x38);
          if (pbVar10 == (byte *)0x0) {
            iVar14 = 0;
          }
          else {
            iVar14 = (uint)pbVar10[1] + (uint)*pbVar10 * 0x100;
          }
          uVar9 = (ulonglong)puVar1[1];
          if ((*(uint *)(param_2 + 0x1c) & puVar1[1]) != 0) {
            if (*(char *)(param_2 + 0x23) != '\0') {
              uVar9 = 0;
              if ((*(char *)(param_2 + 0x24) != '\0') &&
                 (*(char *)(param_2 + 0x24) != *(char *)((longlong)puVar1 + 0xf)))
              goto LAB_1403a9b89;
            }
            if (*(code **)(param_2 + 0x28) == (code *)0x0) {
              uVar9 = 0;
              if (!bVar7) goto LAB_1403a9ba3;
              goto LAB_1403a9b8d;
            }
            uVar9 = (**(code **)(param_2 + 0x28))(puVar1,iVar14,*(undefined8 *)(param_2 + 0x30));
            if ((char)uVar9 != '\0') {
LAB_1403a9ba3:
              if (*(longlong *)(param_2 + 0x38) != 0) {
                *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x38) + 2;
              }
              if (uVar13 < (uint)*(byte *)(param_1 + 9) + (uint)*(byte *)(param_1 + 8) * 0x100) {
                pbVar10 = (byte *)(param_1 + 10 + uVar18 * 2);
              }
              else {
                pbVar10 = (byte *)&DAT_14045dd10;
              }
              uVar13 = (uint)pbVar10[1] + (uint)*pbVar10 * 0x100;
              if (uVar13 != 0) {
                puVar16 = (undefined8 *)((ulonglong)uVar13 + param_1);
              }
              uVar9 = FUN_1403aa1c0(puVar16,param_2,param_1 + 4,*(undefined4 *)(param_2 + 8));
              return uVar9;
            }
          }
LAB_1403a9b89:
          if (!bVar7) {
            uVar13 = *(int *)(param_2 + 8) + 1;
            goto LAB_1403a9c07;
          }
        }
LAB_1403a9b8d:
        iVar14 = *(int *)(param_2 + 8);
      } while (iVar14 < iVar19);
    }
    uVar13 = *(uint *)(param_2 + 0x40);
LAB_1403a9c07:
    if (((*(byte *)(lVar4 + 0x18) & 0x40) != 0) &&
       ((uVar15 = *(uint *)(lVar4 + 0x5c), uVar13 == 0xffffffff ||
        (uVar9 = (ulonglong)(uVar13 - uVar15), uVar13 - uVar15 < 0x100)))) {
      uVar8 = *(uint *)(lVar4 + 0x60);
      if (uVar13 <= *(uint *)(lVar4 + 0x60)) {
        uVar8 = uVar13;
      }
      for (; uVar15 < uVar8; uVar15 = uVar15 + 1) {
        uVar9 = *(ulonglong *)(lVar4 + 0x70);
        puVar1 = (uint *)(uVar9 + 4 + (ulonglong)uVar15 * 0x14);
        *puVar1 = *puVar1 | 2;
      }
    }
  }
  return uVar9 & 0xffffffffffffff00;
}

