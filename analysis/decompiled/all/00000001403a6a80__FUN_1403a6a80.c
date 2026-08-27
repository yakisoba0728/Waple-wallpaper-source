// Function: FUN_1403a6a80
// Addr: 1403a6a80
// Size: 1124 bytes


byte FUN_1403a6a80(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  undefined2 uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  uint uVar20;
  byte local_res8;
  
  lVar9 = *(longlong *)(param_2 + 0x20);
  if ((*(byte *)(lVar9 + 0x18) & 0x40) != 0) {
    uVar20 = *(uint *)(lVar9 + 0x60);
    if (*(uint *)(lVar9 + 0x60) == 0xffffffff) {
      uVar20 = 0xffffffff;
    }
    uVar11 = 0;
    if (uVar20 != 0) {
      do {
        puVar2 = (uint *)(*(longlong *)(lVar9 + 0x70) + 4 + uVar11 * 0x14);
        *puVar2 = *puVar2 | 2;
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
      } while (uVar10 < uVar20);
    }
  }
  lVar9 = *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)(param_2 + 0x90);
  if ((*(uint *)(lVar9 + 0x60) < 4) || (*plVar1 == 0)) {
    *(undefined1 *)(param_2 + 0x8d) = 0;
  }
  else {
    *(undefined1 *)(param_2 + 0x8d) = 1;
    lVar4 = *plVar1;
    if ((*(int *)(lVar4 + 0x24) != 0) || (*(int *)(lVar4 + 4) != 0)) {
      *(undefined4 *)(lVar4 + 0x24) = 0;
      *(undefined4 *)(lVar4 + 0x14) = 0;
      *(undefined4 *)(lVar4 + 4) = 0;
    }
    FUN_14036b510(lVar4,*(undefined8 *)(lVar9 + 0x70),*(undefined4 *)(lVar9 + 0x60),0x14);
  }
  bVar7 = 0;
  local_res8 = 0;
  bVar5 = false;
  *(undefined4 *)(param_2 + 0xb0) = 0;
  puVar14 = (undefined1 *)(param_1 + 8);
  uVar20 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
           (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
  uVar10 = 0;
  if (uVar20 != 0) {
    iVar16 = 0;
    do {
      if (uVar10 < *(uint *)(param_3 + 4)) {
        puVar12 = (undefined8 *)((ulonglong)uVar10 * 0x260 + *(longlong *)(param_3 + 8));
      }
      else {
        puVar12 = &DAT_14045dd10;
      }
      if (((puVar14[4] & 0x20) == 0) &&
         (lVar9 = *(longlong *)(param_2 + 0x20),
         ((*(uint *)(lVar9 + 0x38) & 0xfffffffe) == 4) == (bool)(~((byte)puVar14[4] >> 7) & 1))) {
        *(undefined8 **)(param_2 + 0x98) = puVar12;
        *(undefined8 **)(param_2 + 0xa0) = puVar12 + 6;
        *(undefined8 **)(param_2 + 0xa8) = puVar12 + 0xc;
        if (*(char *)(param_2 + 0x8d) == '\0') {
          if (*(int *)(lVar9 + 0x60) != 0) {
            uVar11 = 0;
            do {
              cVar6 = FUN_1403c58e0(*(undefined8 *)(param_2 + 0x98),
                                    *(undefined4 *)(*(longlong *)(lVar9 + 0x70) + uVar11 * 0x14));
              if (cVar6 != '\0') {
                iVar16 = *(int *)(param_2 + 0xb0);
                lVar9 = *(longlong *)(param_2 + 0x20);
                goto LAB_1403a6c8a;
              }
              uVar15 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar15;
              lVar9 = *(longlong *)(param_2 + 0x20);
            } while (uVar15 < *(uint *)(lVar9 + 0x60));
            iVar16 = *(int *)(param_2 + 0xb0);
          }
          lVar9 = *(longlong *)(param_2 + 0x20);
        }
        else {
          cVar6 = FUN_1403e64c0(*plVar1);
          lVar9 = *(longlong *)(param_2 + 0x20);
          if (cVar6 != '\0') {
LAB_1403a6c8a:
            uVar15 = *(uint *)(lVar9 + 0x38);
            cVar6 = FUN_1403ec530(lVar9,*(undefined8 *)(param_2 + 0x10),"start subtable %u",iVar16);
            bVar7 = local_res8;
            if (cVar6 != '\0') {
              if ((!bVar5) && ((puVar14[4] & 0x40) != 0)) {
                bVar5 = true;
                lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x80);
                uVar3 = *(uint *)(*(longlong *)(param_2 + 0x20) + 0x60);
                uVar11 = 0;
                if (uVar3 != 0) {
                  do {
                    lVar4 = lVar9 + uVar11 * 0x14;
                    *(undefined1 *)(lVar4 + 0x12) = 2;
                    uVar8 = 1;
                    if ((*(uint *)(*(longlong *)(param_2 + 0x20) + 0x38) & 0xfffffffd) == 4) {
                      uVar8 = 0xffff;
                    }
                    *(undefined2 *)(lVar4 + 0x10) = uVar8;
                    uVar17 = (int)uVar11 + 1;
                    uVar11 = (ulonglong)uVar17;
                  } while (uVar17 < uVar3);
                }
              }
              if (((uVar15 & 0xfffffffd) == 5) != (bool)*(char *)(param_2 + 0x8c)) {
                FUN_1403f8e70(*(longlong *)(param_2 + 0x20),0,
                              *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x60));
                *(bool *)(param_2 + 0x8c) = *(char *)(param_2 + 0x8c) == '\0';
              }
              puVar18 = (undefined1 *)0x0;
              if (uVar10 < uVar20 - 1) {
                puVar18 = puVar14;
              }
              lVar9 = *(longlong *)(param_2 + 0x58);
              if (lVar9 == 0) {
                puVar13 = *(undefined1 **)(param_2 + 0x30);
                puVar19 = *(undefined1 **)(param_2 + 0x38);
              }
              else {
                puVar13 = *(undefined1 **)(lVar9 + 0x10);
                *(undefined1 **)(param_2 + 0x30) = puVar13;
                puVar19 = puVar13 + *(uint *)(lVar9 + 0x18);
                *(undefined1 **)(param_2 + 0x38) = puVar19;
              }
              *(int *)(param_2 + 0x40) = (int)puVar19 - (int)puVar13;
              if (puVar18 != (undefined1 *)0x0) {
                if ((puVar18 < puVar13) || (puVar19 <= puVar18)) {
                  *(undefined8 *)(param_2 + 0x38) = 0;
                  *(undefined8 *)(param_2 + 0x30) = 0;
                  *(undefined4 *)(param_2 + 0x40) = 0;
                }
                else {
                  *(undefined1 **)(param_2 + 0x30) = puVar18;
                  puVar13 = (undefined1 *)
                            (((ulonglong)CONCAT11(*puVar18,puVar18[1]) * 0x100 +
                             (ulonglong)(byte)puVar18[2]) * 0x100 + (ulonglong)(byte)puVar18[3]);
                  puVar19 = puVar19 + -(longlong)puVar18;
                  if (puVar19 <= puVar13) {
                    puVar13 = puVar19;
                  }
                  *(undefined1 **)(param_2 + 0x38) = puVar18 + (longlong)puVar13;
                  *(int *)(param_2 + 0x40) = (int)puVar13;
                }
              }
              bVar7 = FUN_140376270(puVar14,param_2,puVar18,puVar19,param_2 + 0x28);
              local_res8 = local_res8 | bVar7;
              lVar9 = *(longlong *)(param_2 + 0x58);
              if (lVar9 != 0) {
                lVar4 = *(longlong *)(lVar9 + 0x10);
                *(longlong *)(param_2 + 0x30) = lVar4;
                *(ulonglong *)(param_2 + 0x38) = (ulonglong)*(uint *)(lVar9 + 0x18) + lVar4;
              }
              *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x38) - *(int *)(param_2 + 0x30);
              FUN_1403ec530(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
                            "end subtable %u",*(undefined4 *)(param_2 + 0xb0));
              bVar7 = local_res8;
            }
            goto LAB_1403a6e65;
          }
        }
        FUN_1403ec530(lVar9,*(undefined8 *)(param_2 + 0x10),
                      "skipped subtable %u because no glyph matches",iVar16);
      }
LAB_1403a6e65:
      puVar14 = puVar14 + ((ulonglong)CONCAT11(*puVar14,puVar14[1]) * 0x100 +
                          (ulonglong)(byte)puVar14[2]) * 0x100 + (ulonglong)(byte)puVar14[3];
      iVar16 = *(int *)(param_2 + 0xb0) + 1;
      *(int *)(param_2 + 0xb0) = iVar16;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar20);
  }
  if (*(char *)(param_2 + 0x8c) != '\0') {
    FUN_1403f8e70(*(longlong *)(param_2 + 0x20),0,
                  *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x60));
    *(bool *)(param_2 + 0x8c) = *(char *)(param_2 + 0x8c) == '\0';
  }
  return bVar7;
}

