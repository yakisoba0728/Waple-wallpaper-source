// Function: FUN_1403a7310
// Addr: 1403a7310
// Size: 1252 bytes


byte FUN_1403a7310(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  undefined2 uVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  byte *pbVar16;
  longlong *plVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong *plVar24;
  undefined1 *puVar25;
  byte local_res8;
  longlong *plVar26;
  
  lVar12 = *(longlong *)(param_2 + 0x20);
  if ((*(byte *)(lVar12 + 0x18) & 0x40) != 0) {
    uVar23 = *(uint *)(lVar12 + 0x60);
    if (*(uint *)(lVar12 + 0x60) == 0xffffffff) {
      uVar23 = 0xffffffff;
    }
    uVar15 = 0;
    if (uVar23 != 0) {
      do {
        puVar1 = (uint *)(*(longlong *)(lVar12 + 0x70) + 4 + uVar15 * 0x14);
        *puVar1 = *puVar1 | 2;
        uVar13 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar13;
      } while (uVar13 < uVar23);
    }
  }
  lVar12 = *(longlong *)(param_2 + 0x20);
  plVar17 = (longlong *)(param_2 + 0x90);
  plVar26 = plVar17;
  if ((*(uint *)(lVar12 + 0x60) < 4) || (*plVar17 == 0)) {
    *(undefined1 *)(param_2 + 0x8d) = 0;
  }
  else {
    *(undefined1 *)(param_2 + 0x8d) = 1;
    lVar6 = *plVar17;
    if ((*(int *)(lVar6 + 0x24) != 0) || (*(int *)(lVar6 + 4) != 0)) {
      *(undefined4 *)(lVar6 + 0x24) = 0;
      *(undefined4 *)(lVar6 + 0x14) = 0;
      *(undefined4 *)(lVar6 + 4) = 0;
    }
    FUN_14036b510(lVar6,*(undefined8 *)(lVar12 + 0x70),*(undefined4 *)(lVar12 + 0x60),0x14);
  }
  local_res8 = 0;
  bVar8 = false;
  *(undefined4 *)(param_2 + 0xb0) = 0;
  puVar25 = (undefined1 *)(param_1 + 8);
  uVar13 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
           (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
  uVar23 = 0;
  bVar10 = 0;
  if (uVar13 != 0) {
    pbVar16 = (byte *)(param_1 + 0xc);
    iVar19 = 0;
    do {
      if (uVar23 < *(uint *)(param_3 + 4)) {
        puVar14 = (undefined8 *)((ulonglong)uVar23 * 0x260 + *(longlong *)(param_3 + 8));
      }
      else {
        puVar14 = &DAT_14045dd10;
      }
      lVar12 = *(longlong *)(param_2 + 0x20);
      if ((uint)((*(uint *)(lVar12 + 0x38) & 0xfffffffe) == 4) ==
          ~((uint)*pbVar16 * 0x1000000 + (uint)pbVar16[1] * 0x10000 + (uint)pbVar16[2] * 0x100 +
           (uint)pbVar16[3]) >> 0x1f) {
        *(undefined8 **)(param_2 + 0x98) = puVar14;
        *(undefined8 **)(param_2 + 0xa0) = puVar14 + 6;
        *(undefined8 **)(param_2 + 0xa8) = puVar14 + 0xc;
        if (*(char *)(param_2 + 0x8d) == '\0') {
          if (*(int *)(lVar12 + 0x60) != 0) {
            uVar15 = 0;
            do {
              cVar9 = FUN_1403c58e0(*(undefined8 *)(param_2 + 0x98),
                                    *(undefined4 *)(*(longlong *)(lVar12 + 0x70) + uVar15 * 0x14));
              if (cVar9 != '\0') {
                iVar19 = *(int *)(param_2 + 0xb0);
                lVar12 = *(longlong *)(param_2 + 0x20);
                goto LAB_1403a75d3;
              }
              uVar18 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar18;
              lVar12 = *(longlong *)(param_2 + 0x20);
            } while (uVar18 < *(uint *)(lVar12 + 0x60));
            iVar19 = *(int *)(param_2 + 0xb0);
          }
          lVar12 = *(longlong *)(param_2 + 0x20);
        }
        else {
          cVar9 = FUN_1403e64c0(*plVar17);
          lVar12 = *(longlong *)(param_2 + 0x20);
          if (cVar9 != '\0') {
LAB_1403a75d3:
            bVar10 = *pbVar16;
            bVar2 = pbVar16[1];
            bVar3 = pbVar16[2];
            bVar4 = pbVar16[3];
            uVar18 = *(uint *)(lVar12 + 0x38);
            cVar9 = FUN_1403ec530(lVar12,*(undefined8 *)(param_2 + 0x10),"start subtable %u",iVar19)
            ;
            if (cVar9 != '\0') {
              if ((!bVar8) &&
                 (((uint)pbVar16[2] * 0x100 + (uint)*pbVar16 * 0x1000000 +
                   (uint)pbVar16[1] * 0x10000 + (uint)pbVar16[3] >> 0x1e & 1) != 0)) {
                bVar8 = true;
                lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x80);
                uVar5 = *(uint *)(*(longlong *)(param_2 + 0x20) + 0x60);
                uVar15 = 0;
                if (uVar5 != 0) {
                  do {
                    lVar6 = lVar12 + uVar15 * 0x14;
                    *(undefined1 *)(lVar6 + 0x12) = 2;
                    uVar11 = 1;
                    if ((*(uint *)(*(longlong *)(param_2 + 0x20) + 0x38) & 0xfffffffd) == 4) {
                      uVar11 = 0xffff;
                    }
                    *(undefined2 *)(lVar6 + 0x10) = uVar11;
                    uVar20 = (int)uVar15 + 1;
                    uVar15 = (ulonglong)uVar20;
                  } while (uVar20 < uVar5);
                }
              }
              if ((((uint)bVar10 * 0x1000000 + (uint)bVar2 * 0x10000 + (uint)bVar3 * 0x100 +
                    (uint)bVar4 >> 0x1c & 1) != (uint)((uVar18 & 0xfffffffd) == 5)) !=
                  (bool)*(char *)(param_2 + 0x8c)) {
                FUN_1403f8e70(*(longlong *)(param_2 + 0x20),0,
                              *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x60));
                *(bool *)(param_2 + 0x8c) = *(char *)(param_2 + 0x8c) == '\0';
              }
              puVar21 = (undefined1 *)0x0;
              if (uVar23 < uVar13 - 1) {
                puVar21 = puVar25;
              }
              lVar12 = param_2 + 0x28;
              lVar6 = *(longlong *)(param_2 + 0x58);
              if (lVar6 != 0) {
                lVar7 = *(longlong *)(lVar6 + 0x10);
                *(longlong *)(param_2 + 0x30) = lVar7;
                *(ulonglong *)(param_2 + 0x38) = (ulonglong)*(uint *)(lVar6 + 0x18) + lVar7;
              }
              plVar24 = (longlong *)(param_2 + 0x38);
              plVar17 = (longlong *)(param_2 + 0x30);
              *(int *)(param_2 + 0x40) = *(int *)plVar24 - *(int *)plVar17;
              if (puVar21 != (undefined1 *)0x0) {
                if ((puVar21 < (undefined1 *)*plVar17) || ((undefined1 *)*plVar24 <= puVar21)) {
                  *plVar24 = 0;
                  *plVar17 = 0;
                  *(undefined4 *)(param_2 + 0x40) = 0;
                }
                else {
                  *plVar17 = (longlong)puVar21;
                  uVar15 = ((ulonglong)CONCAT11(*puVar21,puVar21[1]) * 0x100 +
                           (ulonglong)(byte)puVar21[2]) * 0x100 + (ulonglong)(byte)puVar21[3];
                  uVar22 = *plVar24 - (longlong)puVar21;
                  if (uVar22 <= uVar15) {
                    uVar15 = uVar22;
                  }
                  *plVar24 = (longlong)(puVar21 + uVar15);
                  *(int *)(param_2 + 0x40) = (int)uVar15;
                }
              }
              bVar10 = FUN_140376670(puVar25,param_2);
              local_res8 = local_res8 | bVar10;
              lVar6 = *(longlong *)(param_2 + 0x58);
              if (lVar6 != 0) {
                lVar7 = *(longlong *)(lVar6 + 0x10);
                *plVar17 = lVar7;
                *plVar24 = (ulonglong)*(uint *)(lVar6 + 0x18) + lVar7;
              }
              *(int *)(param_2 + 0x40) = *(int *)plVar24 - *(int *)plVar17;
              FUN_1403ec530(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
                            "end subtable %u",*(undefined4 *)(param_2 + 0xb0),plVar26,lVar12);
            }
            goto LAB_1403a7533;
          }
        }
        FUN_1403ec530(lVar12,*(undefined8 *)(param_2 + 0x10),
                      "skipped subtable %u because no glyph matches",iVar19);
      }
LAB_1403a7533:
      plVar17 = plVar26;
      lVar12 = ((ulonglong)CONCAT11(*puVar25,puVar25[1]) * 0x100 + (ulonglong)(byte)puVar25[2]) *
               0x100 + (ulonglong)(byte)puVar25[3];
      puVar25 = puVar25 + lVar12;
      iVar19 = *(int *)(param_2 + 0xb0) + 1;
      *(int *)(param_2 + 0xb0) = iVar19;
      uVar23 = uVar23 + 1;
      pbVar16 = pbVar16 + lVar12;
      bVar10 = local_res8;
      plVar26 = plVar17;
    } while (uVar23 < uVar13);
  }
  if (*(char *)(param_2 + 0x8c) != '\0') {
    FUN_1403f8e70(*(longlong *)(param_2 + 0x20),0,
                  *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x60));
    *(bool *)(param_2 + 0x8c) = *(char *)(param_2 + 0x8c) == '\0';
  }
  return bVar10;
}

