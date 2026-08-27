// Function: FUN_1403a6ef0
// Addr: 1403a6ef0
// Size: 1047 bytes


byte FUN_1403a6ef0(longlong param_1,longlong param_2,longlong param_3)

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
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  byte local_res8;
  
  lVar9 = *(longlong *)(param_2 + 0x20);
  if ((*(byte *)(lVar9 + 0x18) & 0x40) != 0) {
    uVar19 = *(uint *)(lVar9 + 0x60);
    if (*(uint *)(lVar9 + 0x60) == 0xffffffff) {
      uVar19 = 0xffffffff;
    }
    uVar13 = 0;
    if (uVar19 != 0) {
      do {
        puVar2 = (uint *)(*(longlong *)(lVar9 + 0x70) + 4 + uVar13 * 0x14);
        *puVar2 = *puVar2 | 2;
        uVar10 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar10;
      } while (uVar10 < uVar19);
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
  uVar13 = param_1 + 4;
  uVar19 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
  uVar10 = 0;
  if (uVar19 != 0) {
    iVar15 = 0;
    do {
      if (uVar10 < *(uint *)(param_3 + 4)) {
        puVar11 = (undefined8 *)((ulonglong)uVar10 * 0x260 + *(longlong *)(param_3 + 8));
      }
      else {
        puVar11 = &DAT_14045dd10;
      }
      lVar9 = *(longlong *)(param_2 + 0x20);
      if (((*(uint *)(lVar9 + 0x38) & 0xfffffffe) == 4) == (bool)(*(byte *)(uVar13 + 5) & 1)) {
        *(undefined8 **)(param_2 + 0x98) = puVar11;
        *(undefined8 **)(param_2 + 0xa0) = puVar11 + 6;
        *(undefined8 **)(param_2 + 0xa8) = puVar11 + 0xc;
        if (*(char *)(param_2 + 0x8d) == '\0') {
          if (*(int *)(lVar9 + 0x60) != 0) {
            uVar16 = 0;
            do {
              cVar6 = FUN_1403c58e0(*(undefined8 *)(param_2 + 0x98),
                                    *(undefined4 *)(*(longlong *)(lVar9 + 0x70) + uVar16 * 0x14));
              if (cVar6 != '\0') {
                iVar15 = *(int *)(param_2 + 0xb0);
                lVar9 = *(longlong *)(param_2 + 0x20);
                goto LAB_1403a70da;
              }
              uVar14 = (int)uVar16 + 1;
              uVar16 = (ulonglong)uVar14;
              lVar9 = *(longlong *)(param_2 + 0x20);
            } while (uVar14 < *(uint *)(lVar9 + 0x60));
            iVar15 = *(int *)(param_2 + 0xb0);
          }
          lVar9 = *(longlong *)(param_2 + 0x20);
        }
        else {
          cVar6 = FUN_1403e64c0(*plVar1);
          lVar9 = *(longlong *)(param_2 + 0x20);
          if (cVar6 != '\0') {
LAB_1403a70da:
            uVar14 = *(uint *)(lVar9 + 0x38);
            cVar6 = FUN_1403ec530(lVar9,*(undefined8 *)(param_2 + 0x10),"start subtable %u",iVar15);
            bVar7 = local_res8;
            if (cVar6 != '\0') {
              if ((!bVar5) && ((*(byte *)(uVar13 + 5) & 4) != 0)) {
                bVar5 = true;
                lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x80);
                uVar3 = *(uint *)(*(longlong *)(param_2 + 0x20) + 0x60);
                uVar16 = 0;
                if (uVar3 != 0) {
                  do {
                    lVar4 = lVar9 + uVar16 * 0x14;
                    *(undefined1 *)(lVar4 + 0x12) = 2;
                    uVar8 = 1;
                    if ((*(uint *)(*(longlong *)(param_2 + 0x20) + 0x38) & 0xfffffffd) == 4) {
                      uVar8 = 0xffff;
                    }
                    *(undefined2 *)(lVar4 + 0x10) = uVar8;
                    uVar17 = (int)uVar16 + 1;
                    uVar16 = (ulonglong)uVar17;
                  } while (uVar17 < uVar3);
                }
              }
              if (((uVar14 & 0xfffffffd) == 5) != (bool)*(char *)(param_2 + 0x8c)) {
                FUN_1403f8e70(*(longlong *)(param_2 + 0x20),0,
                              *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x60));
                *(bool *)(param_2 + 0x8c) = *(char *)(param_2 + 0x8c) == '\0';
              }
              uVar16 = 0;
              if (uVar10 < uVar19 - 1) {
                uVar16 = uVar13;
              }
              lVar9 = *(longlong *)(param_2 + 0x58);
              if (lVar9 == 0) {
                uVar12 = *(ulonglong *)(param_2 + 0x30);
                uVar18 = *(ulonglong *)(param_2 + 0x38);
              }
              else {
                uVar12 = *(ulonglong *)(lVar9 + 0x10);
                *(ulonglong *)(param_2 + 0x30) = uVar12;
                uVar18 = *(uint *)(lVar9 + 0x18) + uVar12;
                *(ulonglong *)(param_2 + 0x38) = uVar18;
              }
              *(int *)(param_2 + 0x40) = (int)uVar18 - (int)uVar12;
              if (uVar16 != 0) {
                if ((uVar16 < uVar12) || (uVar18 <= uVar16)) {
                  *(undefined8 *)(param_2 + 0x38) = 0;
                  *(undefined8 *)(param_2 + 0x30) = 0;
                  *(undefined4 *)(param_2 + 0x40) = 0;
                }
                else {
                  *(ulonglong *)(param_2 + 0x30) = uVar16;
                  uVar12 = (ulonglong)
                           CONCAT11(*(undefined1 *)(uVar16 + 2),*(undefined1 *)(uVar16 + 3));
                  uVar18 = uVar18 - uVar16;
                  if (uVar18 <= uVar12) {
                    uVar12 = uVar18;
                  }
                  *(ulonglong *)(param_2 + 0x38) = uVar12 + uVar16;
                  *(int *)(param_2 + 0x40) = (int)uVar12;
                }
              }
              bVar7 = FUN_140376470(uVar13,param_2,uVar16,uVar18,param_2 + 0x28);
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
            goto LAB_1403a729e;
          }
        }
        FUN_1403ec530(lVar9,*(undefined8 *)(param_2 + 0x10),
                      "skipped subtable %u because no glyph matches",iVar15);
      }
LAB_1403a729e:
      uVar13 = uVar13 + *(byte *)(uVar13 + 3) + (ulonglong)*(byte *)(uVar13 + 2) * 0x100;
      iVar15 = *(int *)(param_2 + 0xb0) + 1;
      *(int *)(param_2 + 0xb0) = iVar15;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar19);
  }
  if (*(char *)(param_2 + 0x8c) != '\0') {
    FUN_1403f8e70(*(longlong *)(param_2 + 0x20),0,
                  *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x60));
    *(bool *)(param_2 + 0x8c) = *(char *)(param_2 + 0x8c) == '\0';
  }
  return bVar7;
}

