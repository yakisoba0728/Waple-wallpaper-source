// Function: FUN_1403a7800
// Addr: 1403a7800
// Size: 1558 bytes


undefined8 FUN_1403a7800(byte *param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  longlong lVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  longlong lVar20;
  byte bVar21;
  uint uVar22;
  int iVar23;
  byte bVar24;
  bool bVar25;
  uint local_58;
  int local_54;
  
  uVar22 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
  if (uVar22 != 0) {
    if (uVar22 == 1) {
      FUN_1403f7ec0(param_2,(uint)param_1[1] + (uint)*param_1 * 0x100);
      return 1;
    }
    if (uVar22 < 0x41) {
      pbVar19 = param_1 + 4;
      if (uVar22 < 2) {
        pbVar19 = (byte *)&DAT_14045dd10;
      }
      lVar6 = *(longlong *)(param_2 + 0xa0);
      iVar14 = 0;
      local_58 = 0;
      uVar17 = 1;
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(lVar6 + 0x5c);
      local_54 = 0;
      *(undefined4 *)(param_2 + 0x40) =
           *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0xa0) + 0x60);
      lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0xa0);
      uVar3 = *(undefined1 *)
               (*(longlong *)(lVar20 + 0x70) + 0xf + (ulonglong)*(uint *)(lVar20 + 0x5c) * 0x14);
      *(code **)(param_2 + 0x28) = FUN_1403ec1d0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined1 *)(param_2 + 0x24) = uVar3;
      *(byte **)(param_2 + 0x38) = pbVar19;
      lVar20 = *(longlong *)(lVar6 + 0x70);
      bVar4 = *(byte *)(lVar20 + 0xe + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14);
      bVar7 = bVar4 >> 5;
      bVar24 = 0;
      if ((bVar4 & 0x10) == 0) {
        bVar24 = bVar4 & 0xf;
      }
      iVar23 = 0;
      if (uVar22 < 2) {
LAB_1403a7d44:
        uVar17 = *(uint *)(lVar6 + 0x5c);
        iVar23 = *(int *)(param_2 + 8);
        if (((*(byte *)(lVar20 + 0xc + (ulonglong)uVar17 * 0x14) & 4) == 0) ||
           (bVar4 = *(byte *)(lVar20 + 0xe + (ulonglong)uVar17 * 0x14), (bVar4 & 0x10) == 0)) {
          uVar16 = 1;
        }
        else {
          uVar16 = bVar4 & 0xf;
        }
        **(uint **)(param_2 + 0x148) = uVar17;
        FUN_1403ea9c0(param_2,uVar22,iVar23 + 1,(uint)param_1[1] + (uint)*param_1 * 0x100,
                      uVar16 + iVar14);
        return 1;
      }
LAB_1403a7920:
      iVar14 = *(int *)(param_2 + 8);
      iVar15 = *(int *)(param_2 + 0x40) + -1;
      if (iVar14 < iVar15) {
        lVar20 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0xa0) + 0x70);
        do {
          *(uint *)(param_2 + 8) = iVar14 + 1U;
          lVar2 = (ulonglong)(iVar14 + 1U) * 0x14;
          uVar16 = *(uint *)(param_2 + 0x18);
          uVar5 = *(ushort *)(lVar2 + 0xc + lVar20);
          if ((uVar5 & uVar16 & 0xe) == 0) {
            puVar1 = (uint *)(lVar2 + lVar20);
            if ((uVar5 & 8) != 0) {
              if ((uVar16 & 0x10) == 0) {
                if ((uVar16 & 0xff00) == 0) {
                  bVar25 = true;
                }
                else {
                  bVar25 = (uVar16 & 0xff00) == (uVar5 & 0xff00);
                }
              }
              else {
                puVar12 = *(undefined8 **)(*(longlong *)(param_2 + 0x10) + 0xf8);
                uVar11 = 0;
                do {
                  if ((*(ulonglong *)(puVar12[2] + (ulonglong)(uVar16 >> 0x10) * 0x18 + uVar11 * 8)
                       >> (*puVar1 >> ((byte)(&DAT_14045c3c8)[uVar11] & 0x1f) & 0x3f) & 1) == 0)
                  goto LAB_1403a7a01;
                  uVar10 = (int)uVar11 + 1;
                  uVar11 = (ulonglong)uVar10;
                } while (uVar10 < 3);
                puVar12 = (undefined8 *)*puVar12;
                puVar13 = &DAT_14045dd10;
                if (puVar12 != (undefined8 *)0x0) {
                  puVar13 = puVar12;
                }
                if (*(uint *)(puVar13 + 3) < 4) {
                  puVar12 = &DAT_14045dd10;
                }
                else {
                  puVar12 = (undefined8 *)puVar13[2];
                }
                cVar9 = FUN_1403ebf20(puVar12,uVar16 >> 0x10,*puVar1);
                if (cVar9 == '\0') {
LAB_1403a7a01:
                  bVar25 = false;
                }
                else {
                  bVar25 = true;
                }
              }
              if (!bVar25) goto LAB_1403a7aca;
            }
            uVar5 = (ushort)puVar1[4];
            if ((((((uVar5 & 0x20) == 0) || ((puVar1[3] & 0x10) != 0)) ||
                 ((*(char *)(param_2 + 0x20) == '\0' &&
                  ((((byte)uVar5 & 0x1f) == 1 && ((uVar5 & 0x200) != 0)))))) ||
                ((*(char *)(param_2 + 0x21) == '\0' &&
                 ((((byte)uVar5 & 0x1f) == 1 && ((uVar5 >> 8 & 1) != 0)))))) ||
               ((*(char *)(param_2 + 0x22) == '\0' && ((uVar5 & 0x40) != 0)))) {
              bVar25 = false;
            }
            else {
              bVar25 = true;
            }
            pbVar19 = *(byte **)(param_2 + 0x38);
            if (pbVar19 == (byte *)0x0) {
              iVar14 = 0;
            }
            else {
              iVar14 = (uint)pbVar19[1] + (uint)*pbVar19 * 0x100;
            }
            if (((puVar1[1] & *(uint *)(param_2 + 0x1c)) != 0) &&
               (((*(char *)(param_2 + 0x23) == '\0' || (*(char *)(param_2 + 0x24) == '\0')) ||
                (*(char *)(param_2 + 0x24) == *(char *)((longlong)puVar1 + 0xf))))) {
              if (*(code **)(param_2 + 0x28) == (code *)0x0) {
                if (bVar25) goto LAB_1403a7aca;
                goto LAB_1403a7ae6;
              }
              cVar9 = (**(code **)(param_2 + 0x28))(puVar1,iVar14,*(undefined8 *)(param_2 + 0x30));
              if (cVar9 != '\0') goto LAB_1403a7ae6;
            }
            if (!bVar25) {
              local_58 = *(int *)(param_2 + 8) + 1;
              goto LAB_1403a7d79;
            }
          }
LAB_1403a7aca:
          iVar14 = *(int *)(param_2 + 8);
          if (iVar15 <= iVar14) break;
        } while( true );
      }
      local_58 = *(uint *)(param_2 + 0x40);
      goto LAB_1403a7d79;
    }
  }
  return 0;
LAB_1403a7ae6:
  if (*(longlong *)(param_2 + 0x38) != 0) {
    *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x38) + 2;
  }
  uVar16 = uVar17 + 1;
  if (*(uint *)(param_2 + 0x144) < uVar16) {
    uVar10 = uVar16;
    if ((int)uVar16 < 0) {
      uVar10 = 0;
    }
    cVar9 = FUN_1403a4580(param_2 + 0x140,uVar10,0);
    if (cVar9 == '\0') goto LAB_1403a7d79;
    *(uint *)(param_2 + 0x144) = uVar10;
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0x148) + (ulonglong)uVar17 * 4) =
       *(undefined4 *)(param_2 + 8);
  uVar11 = (ulonglong)*(uint *)(param_2 + 8);
  lVar20 = *(longlong *)(lVar6 + 0x70);
  bVar4 = *(byte *)(lVar20 + 0xe + uVar11 * 0x14);
  bVar8 = bVar4 >> 5;
  bVar21 = 0;
  if ((bVar4 & 0x10) == 0) {
    bVar21 = bVar4 & 0xf;
  }
  if ((bVar7 == 0) || (bVar24 == 0)) {
    if ((bVar8 != 0) && ((bVar21 != 0 && (bVar8 != bVar7)))) goto LAB_1403a7d79;
  }
  else if ((bVar7 != bVar8) || (bVar24 != bVar21)) {
    if (iVar23 == 0) {
      uVar11 = (ulonglong)*(uint *)(lVar6 + 100);
      if (*(uint *)(lVar6 + 100) != 0) {
        while( true ) {
          uVar17 = (int)uVar11 - 1;
          uVar11 = (ulonglong)uVar17;
          bVar4 = *(byte *)(*(longlong *)(lVar6 + 0x78) + 0xe + uVar11 * 0x14);
          puVar1 = (uint *)(*(longlong *)(lVar6 + 0x78) + uVar11 * 0x14);
          if (bVar4 >> 5 != bVar7) goto LAB_1403a7d79;
          bVar8 = 0;
          if ((bVar4 & 0x10) == 0) {
            bVar8 = bVar4 & 0xf;
          }
          if (bVar8 == 0) break;
          if (uVar17 == 0) goto LAB_1403a7d79;
        }
        uVar5 = (ushort)puVar1[3];
        uVar17 = *(uint *)(param_2 + 0x18);
        if ((uVar5 & uVar17 & 0xe) == 0) {
          if ((uVar5 & 8) == 0) goto LAB_1403a7d79;
          if ((uVar17 & 0x10) == 0) {
            if ((uVar17 & 0xff00) == 0) goto LAB_1403a7d79;
            bVar25 = (uVar17 & 0xff00) == (uVar5 & 0xff00);
          }
          else {
            uVar10 = *puVar1;
            uVar11 = 0;
            puVar12 = *(undefined8 **)(*(longlong *)(param_2 + 0x10) + 0xf8);
            do {
              if ((*(ulonglong *)(puVar12[2] + (ulonglong)(uVar17 >> 0x10) * 0x18 + uVar11 * 8) >>
                   (uVar10 >> ((byte)(&DAT_14045c3c8)[uVar11] & 0x1f) & 0x3f) & 1) == 0)
              goto LAB_1403a7ca3;
              uVar18 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar18;
            } while (uVar18 < 3);
            puVar12 = (undefined8 *)*puVar12;
            puVar13 = &DAT_14045dd10;
            if (puVar12 != (undefined8 *)0x0) {
              puVar13 = puVar12;
            }
            if (*(uint *)(puVar13 + 3) < 4) {
              puVar12 = &DAT_14045dd10;
            }
            else {
              puVar12 = (undefined8 *)puVar13[2];
            }
            cVar9 = FUN_1403ebf20(puVar12,uVar17 >> 0x10,uVar10);
            if (cVar9 == '\0') {
LAB_1403a7ca3:
              bVar25 = false;
            }
            else {
              bVar25 = true;
            }
          }
          if (bVar25) goto LAB_1403a7d79;
        }
        uVar11 = (ulonglong)*(uint *)(param_2 + 8);
        iVar23 = 2;
        lVar20 = *(longlong *)(lVar6 + 0x70);
        goto LAB_1403a7cf9;
      }
    }
    else if (iVar23 != 1) goto LAB_1403a7cf9;
LAB_1403a7d79:
    lVar6 = *(longlong *)(param_2 + 0xa0);
    if ((*(byte *)(lVar6 + 0x18) & 0x40) == 0) {
      return 0;
    }
    uVar22 = *(uint *)(lVar6 + 0x5c);
    if ((local_58 != 0xffffffff) && (0xff < local_58 - uVar22)) {
      return 0;
    }
    uVar17 = *(uint *)(lVar6 + 0x60);
    if (local_58 <= *(uint *)(lVar6 + 0x60)) {
      uVar17 = local_58;
    }
    for (; uVar22 < uVar17; uVar22 = uVar22 + 1) {
      puVar1 = (uint *)(*(longlong *)(lVar6 + 0x70) + 4 + (ulonglong)uVar22 * 0x14);
      *puVar1 = *puVar1 | 2;
    }
    return 0;
  }
LAB_1403a7cf9:
  if (((*(byte *)(lVar20 + 0xc + uVar11 * 0x14) & 4) == 0) ||
     (bVar4 = *(byte *)(lVar20 + 0xe + uVar11 * 0x14), (bVar4 & 0x10) == 0)) {
    uVar17 = 1;
  }
  else {
    uVar17 = bVar4 & 0xf;
  }
  iVar14 = local_54 + uVar17;
  uVar17 = uVar16;
  local_54 = iVar14;
  if (uVar22 <= uVar16) goto LAB_1403a7d44;
  goto LAB_1403a7920;
}

