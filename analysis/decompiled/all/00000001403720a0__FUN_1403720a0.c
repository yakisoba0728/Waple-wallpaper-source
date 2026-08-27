// Function: FUN_1403720a0
// Addr: 1403720a0
// Size: 1597 bytes


undefined8
FUN_1403720a0(longlong param_1,uint param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5
             ,undefined8 *param_6)

{
  uint *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  byte *pbVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
  uint uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  byte bVar22;
  uint uVar23;
  byte bVar24;
  uint uVar25;
  int iVar26;
  bool bVar27;
  uint local_48;
  
  if (0x40 < param_2) {
    return 0;
  }
  lVar6 = *(longlong *)(param_1 + 0xa0);
  if (param_2 == 1) {
    uVar23 = *(int *)(lVar6 + 0x5c) + 1;
    if (*(int *)(param_1 + 0x144) == 0) {
      puVar17 = &DAT_1404e4f20;
      DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    }
    else {
      puVar17 = *(undefined8 **)(param_1 + 0x148);
    }
  }
  else {
    local_48 = 0;
    uVar7 = param_6[1];
    uVar8 = *param_6;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar6 + 0x5c);
    *(undefined4 *)(param_1 + 0x40) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0x60);
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa0);
    uVar3 = *(undefined1 *)
             (*(longlong *)(lVar9 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar9 + 0x5c) * 0x14);
    *(undefined8 *)(param_1 + 0x28) = uVar8;
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    *(undefined1 *)(param_1 + 0x24) = uVar3;
    *(undefined8 *)(param_1 + 0x38) = param_3;
    bVar4 = *(byte *)(*(longlong *)(lVar6 + 0x70) + 0xe + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14)
    ;
    bVar11 = bVar4 >> 5;
    bVar22 = 0;
    if ((bVar4 & 0x10) == 0) {
      bVar22 = bVar4 & 0xf;
    }
    iVar26 = 0;
    uVar23 = 1;
    if (1 < param_2) {
LAB_1403721b9:
      iVar19 = *(int *)(param_1 + 8);
      iVar20 = *(int *)(param_1 + 0x40) + -1;
      if (iVar19 < iVar20) {
        lVar9 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0x70);
        do {
          *(uint *)(param_1 + 8) = iVar19 + 1U;
          lVar2 = (ulonglong)(iVar19 + 1U) * 0x14;
          uVar21 = *(uint *)(param_1 + 0x18);
          uVar5 = *(ushort *)(lVar2 + 0xc + lVar9);
          if ((uVar5 & uVar21 & 0xe) == 0) {
            puVar1 = (uint *)(lVar2 + lVar9);
            if ((uVar5 & 8) != 0) {
              if ((uVar21 & 0x10) == 0) {
                if ((uVar21 & 0xff00) == 0) {
                  bVar27 = true;
                }
                else {
                  bVar27 = (uVar21 & 0xff00) == (uVar5 & 0xff00);
                }
              }
              else {
                puVar17 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0xf8);
                uVar16 = 0;
                do {
                  if ((*(ulonglong *)(puVar17[2] + (ulonglong)(uVar21 >> 0x10) * 0x18 + uVar16 * 8)
                       >> (*puVar1 >> ((byte)(&DAT_14045c3c8)[uVar16] & 0x1f) & 0x3f) & 1) == 0)
                  goto LAB_1403722b7;
                  uVar14 = (int)uVar16 + 1;
                  uVar16 = (ulonglong)uVar14;
                } while (uVar14 < 3);
                puVar17 = (undefined8 *)*puVar17;
                puVar18 = &DAT_14045dd10;
                if (puVar17 != (undefined8 *)0x0) {
                  puVar18 = puVar17;
                }
                if (*(uint *)(puVar18 + 3) < 4) {
                  puVar17 = &DAT_14045dd10;
                }
                else {
                  puVar17 = (undefined8 *)puVar18[2];
                }
                cVar13 = FUN_1403ebf20(puVar17,uVar21 >> 0x10);
                if (cVar13 == '\0') {
LAB_1403722b7:
                  bVar27 = false;
                }
                else {
                  bVar27 = true;
                }
              }
              if (!bVar27) goto LAB_140372385;
            }
            uVar5 = (ushort)puVar1[4];
            if ((((((uVar5 & 0x20) == 0) || ((puVar1[3] & 0x10) != 0)) ||
                 ((*(char *)(param_1 + 0x20) == '\0' &&
                  ((((byte)uVar5 & 0x1f) == 1 && ((uVar5 & 0x200) != 0)))))) ||
                ((*(char *)(param_1 + 0x21) == '\0' &&
                 ((((byte)uVar5 & 0x1f) == 1 && ((uVar5 & 0x100) != 0)))))) ||
               ((*(char *)(param_1 + 0x22) == '\0' && ((uVar5 & 0x40) != 0)))) {
              bVar27 = false;
            }
            else {
              bVar27 = true;
            }
            pbVar10 = *(byte **)(param_1 + 0x38);
            if (pbVar10 == (byte *)0x0) {
              iVar19 = 0;
            }
            else {
              iVar19 = (uint)*pbVar10 * 0x100 + (uint)pbVar10[1];
            }
            if (((puVar1[1] & *(uint *)(param_1 + 0x1c)) != 0) &&
               (((*(char *)(param_1 + 0x23) == '\0' || (*(char *)(param_1 + 0x24) == '\0')) ||
                (*(char *)(param_1 + 0x24) == *(char *)((longlong)puVar1 + 0xf))))) {
              if (*(code **)(param_1 + 0x28) == (code *)0x0) {
                if (bVar27) goto LAB_140372385;
                goto LAB_1403723a5;
              }
              cVar13 = (**(code **)(param_1 + 0x28))(puVar1,iVar19);
              if (cVar13 != '\0') goto LAB_1403723a5;
            }
            if (!bVar27) {
              local_48 = *(int *)(param_1 + 8) + 1;
              goto LAB_140372686;
            }
          }
LAB_140372385:
          iVar19 = *(int *)(param_1 + 8);
          if (iVar20 <= iVar19) break;
        } while( true );
      }
      local_48 = *(uint *)(param_1 + 0x40);
      goto LAB_140372686;
    }
LAB_1403725b2:
    puVar17 = *(undefined8 **)(param_1 + 0x148);
    uVar23 = *(int *)(param_1 + 8) + 1;
  }
  *(undefined4 *)puVar17 = *(undefined4 *)(lVar6 + 0x5c);
  lVar6 = *(longlong *)(param_1 + 0xa0);
  iVar26 = *(int *)(lVar6 + 0x5c);
  if ((uVar23 == 0xffffffff) || (uVar23 - iVar26 < 0x100)) {
    uVar21 = *(uint *)(lVar6 + 0x60);
    if (uVar23 <= *(uint *)(lVar6 + 0x60)) {
      uVar21 = uVar23;
    }
    if (1 < uVar21 - iVar26) {
      uVar15 = FUN_1403a1a20(lVar6,*(undefined8 *)(lVar6 + 0x70),iVar26,uVar21,0xffffffff);
      FUN_1403a1bc0(lVar6,*(undefined8 *)(lVar6 + 0x70),iVar26,uVar21,uVar15,3);
    }
  }
  FUN_1403b0260(param_1,param_2,param_4,param_5,uVar23);
  return 1;
LAB_1403723a5:
  if (*(longlong *)(param_1 + 0x38) != 0) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 2;
  }
  uVar21 = uVar23 + 1;
  if (*(uint *)(param_1 + 0x144) < uVar21) {
    uVar14 = uVar21;
    if ((int)uVar21 < 0) {
      uVar14 = 0;
    }
    cVar13 = FUN_1403a4580(param_1 + 0x140,uVar14);
    if (cVar13 == '\0') goto LAB_140372686;
    *(uint *)(param_1 + 0x144) = uVar14;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x148) + (ulonglong)uVar23 * 4) =
       *(undefined4 *)(param_1 + 8);
  bVar4 = *(byte *)(*(longlong *)(lVar6 + 0x70) + 0xe + (ulonglong)*(uint *)(param_1 + 8) * 0x14);
  bVar12 = bVar4 >> 5;
  bVar24 = 0;
  if ((bVar4 & 0x10) == 0) {
    bVar24 = bVar4 & 0xf;
  }
  if ((bVar11 == 0) || (bVar22 == 0)) {
    if ((bVar12 != 0) && ((bVar24 != 0 && (bVar12 != bVar11)))) goto LAB_140372686;
  }
  else if ((bVar11 != bVar12) || (bVar22 != bVar24)) {
    if (iVar26 == 0) {
      uVar16 = (ulonglong)*(uint *)(lVar6 + 100);
      if (*(uint *)(lVar6 + 100) != 0) {
        while( true ) {
          uVar23 = (int)uVar16 - 1;
          uVar16 = (ulonglong)uVar23;
          bVar4 = *(byte *)(*(longlong *)(lVar6 + 0x78) + 0xe + uVar16 * 0x14);
          puVar1 = (uint *)(*(longlong *)(lVar6 + 0x78) + uVar16 * 0x14);
          if (bVar4 >> 5 != bVar11) goto LAB_140372686;
          bVar12 = 0;
          if ((bVar4 & 0x10) == 0) {
            bVar12 = bVar4 & 0xf;
          }
          if (bVar12 == 0) break;
          if (uVar23 == 0) goto LAB_140372686;
        }
        uVar23 = *(uint *)(param_1 + 0x18);
        uVar5 = (ushort)puVar1[3];
        if ((uVar23 & uVar5 & 0xe) == 0) {
          if ((uVar5 & 8) == 0) goto LAB_140372686;
          if ((uVar23 & 0x10) == 0) {
            if ((uVar23 & 0xff00) == 0) goto LAB_140372686;
            bVar27 = (uVar23 & 0xff00) == (uVar5 & 0xff00);
          }
          else {
            uVar14 = *puVar1;
            uVar16 = 0;
            puVar17 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0xf8);
            do {
              if ((*(ulonglong *)(puVar17[2] + (ulonglong)(uVar23 >> 0x10) * 0x18 + uVar16 * 8) >>
                   (uVar14 >> ((byte)(&DAT_14045c3c8)[uVar16] & 0x1f) & 0x3f) & 1) == 0)
              goto LAB_140372554;
              uVar25 = (int)uVar16 + 1;
              uVar16 = (ulonglong)uVar25;
            } while (uVar25 < 3);
            puVar17 = (undefined8 *)*puVar17;
            puVar18 = &DAT_14045dd10;
            if (puVar17 != (undefined8 *)0x0) {
              puVar18 = puVar17;
            }
            if (*(uint *)(puVar18 + 3) < 4) {
              puVar17 = &DAT_14045dd10;
            }
            else {
              puVar17 = (undefined8 *)puVar18[2];
            }
            cVar13 = FUN_1403ebf20(puVar17,uVar23 >> 0x10,uVar14);
            if (cVar13 == '\0') {
LAB_140372554:
              bVar27 = false;
            }
            else {
              bVar27 = true;
            }
          }
          if (bVar27) goto LAB_140372686;
        }
        iVar26 = 2;
        goto LAB_1403725a2;
      }
    }
    else if (iVar26 != 1) goto LAB_1403725a2;
LAB_140372686:
    lVar6 = *(longlong *)(param_1 + 0xa0);
    if (((*(byte *)(lVar6 + 0x18) & 0x40) != 0) &&
       ((uVar23 = *(uint *)(lVar6 + 0x5c), local_48 == 0xffffffff || (local_48 - uVar23 < 0x100))))
    {
      uVar21 = *(uint *)(lVar6 + 0x60);
      if (local_48 <= *(uint *)(lVar6 + 0x60)) {
        uVar21 = local_48;
      }
      for (; uVar23 < uVar21; uVar23 = uVar23 + 1) {
        puVar1 = (uint *)(*(longlong *)(lVar6 + 0x70) + 4 + (ulonglong)uVar23 * 0x14);
        *puVar1 = *puVar1 | 2;
      }
    }
    return 0;
  }
LAB_1403725a2:
  uVar23 = uVar21;
  if (param_2 <= uVar21) goto LAB_1403725b2;
  goto LAB_1403721b9;
}

