// Function: FUN_140311910
// Addr: 140311910
// Size: 549 bytes


void FUN_140311910(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ushort *puVar15;
  int local_res10 [2];
  
  lVar8 = *(longlong *)(param_1 + 0x408);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  local_res10[0] = 0;
  puVar3 = *(uint **)(lVar8 + 0x18);
  lVar14 = *(longlong *)(puVar3 + 4);
  if (*puVar3 < param_2) {
    param_2 = *puVar3;
  }
  uVar13 = 0;
  if (param_2 != 0) {
    do {
      iVar10 = *(int *)(lVar14 + 0xc);
      lVar1 = uVar13 * 4;
      iVar7 = *(int *)(lVar1 + param_3);
      if (iVar10 < iVar7) {
        if (iVar7 < *(int *)(lVar14 + 0x10)) {
          func_0x0001402efae0(iVar7 - iVar10,*(int *)(lVar14 + 0x10) - iVar10);
          return;
        }
        uVar6 = 0x10000;
      }
      else if (iVar7 < iVar10) {
        if (*(int *)(lVar14 + 8) < iVar7) {
          func_0x0001402efae0(iVar7 - iVar10,iVar10 - *(int *)(lVar14 + 8));
          return;
        }
        uVar6 = 0xffff0000;
      }
      else {
        uVar6 = 0;
      }
      uVar11 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar11;
      *(undefined4 *)(lVar1 + param_4) = uVar6;
      lVar14 = lVar14 + 0x20;
    } while (uVar11 < param_2);
  }
  uVar11 = *puVar3;
  if ((uint)uVar13 < uVar11) {
    do {
      *(undefined4 *)(param_4 + uVar13 * 4) = 0;
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      uVar11 = *puVar3;
    } while (uVar12 < uVar11);
  }
  puVar4 = *(undefined8 **)(lVar8 + 0x38);
  if (puVar4 != (undefined8 *)0x0) {
    puVar15 = (ushort *)*puVar4;
    if ((puVar15 != (ushort *)0x0) && (uVar13 = 0, uVar11 != 0)) {
      do {
        if (1 < *puVar15) {
          iVar10 = *(int *)(param_4 + uVar13 * 4);
          lVar8 = *(longlong *)(puVar15 + 4);
          uVar11 = 1;
          do {
            iVar7 = *(int *)(lVar8 + (ulonglong)uVar11 * 8);
            if (iVar10 < iVar7) {
              lVar14 = (ulonglong)(uVar11 - 1) * 8;
              iVar10 = FUN_1402f2180(iVar10 - *(int *)(lVar14 + lVar8),
                                     *(int *)(lVar8 + (ulonglong)uVar11 * 8 + 4) -
                                     *(int *)(lVar14 + 4 + lVar8),iVar7 - *(int *)(lVar14 + lVar8));
              *(int *)(param_4 + uVar13 * 4) =
                   iVar10 + *(int *)(lVar14 + 4 + *(longlong *)(puVar15 + 4));
              break;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *puVar15);
        }
        uVar11 = *puVar3;
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        puVar15 = puVar15 + 8;
      } while (uVar12 < uVar11);
    }
    if ((puVar4[2] != 0) &&
       (lVar8 = FUN_1402f80c0(uVar2,4,0,uVar11,0,local_res10), local_res10[0] == 0)) {
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0x10);
      uVar13 = 0;
      *(longlong *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_4;
      if (*puVar3 != 0) {
        do {
          lVar14 = uVar13 * 4;
          iVar10 = *(int *)(lVar14 + param_4);
          if (puVar4[7] == 0) {
            uVar6 = 0;
          }
          else {
            uVar9 = (ulonglong)(*(uint *)(puVar4 + 5) - 1);
            if ((uint)uVar13 < *(uint *)(puVar4 + 5)) {
              uVar9 = uVar13;
            }
            uVar6 = *(undefined4 *)(uVar9 * 4 + puVar4[6]);
          }
          iVar7 = func_0x0001403086f0(param_1,puVar4 + 1,uVar6);
          iVar10 = iVar10 + iVar7 * 4;
          if (0xffff < iVar10) {
            iVar10 = 0x10000;
          }
          if (iVar10 < -0xffff) {
            iVar10 = -0x10000;
          }
          uVar11 = (uint)uVar13 + 1;
          uVar13 = (ulonglong)uVar11;
          *(int *)(lVar8 + lVar14) = iVar10;
        } while (uVar11 < *puVar3);
        uVar13 = 0;
        if (*puVar3 != 0) {
          do {
            lVar14 = uVar13 * 4;
            lVar1 = uVar13 * 4;
            uVar11 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar11;
            *(undefined4 *)(param_4 + lVar1) = *(undefined4 *)(lVar8 + lVar14);
          } while (uVar11 < *puVar3);
        }
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0x10) = uVar5;
                    /* WARNING: Subroutine does not return */
      FUN_1402f8060(uVar2,lVar8);
    }
  }
  return;
}

