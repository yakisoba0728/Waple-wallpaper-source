// Function: FUN_14031b5e0
// Addr: 14031b5e0
// Size: 609 bytes


int FUN_14031b5e0(undefined1 *param_1,uint param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  int *piVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int local_res18 [2];
  
  local_res18[0] = 0;
  if (param_3 == 0) {
    lVar17 = *(longlong *)(param_1 + 8);
    uVar11 = *(undefined8 *)(lVar17 + 0x10);
    *param_1 = 0;
  }
  else {
    if (param_4 == 0) {
      return 3;
    }
    lVar17 = *(longlong *)(param_1 + 8);
    uVar11 = *(undefined8 *)(lVar17 + 0x10);
    *param_1 = 0;
    if (param_3 != *(ushort *)(lVar17 + 0x1120)) {
      return 3;
    }
  }
  if (*(uint *)(lVar17 + 0x1110) <= param_2) {
    return 3;
  }
  piVar15 = (int *)((ulonglong)param_2 * 0x10 + *(longlong *)(lVar17 + 0x1118));
  uVar12 = *piVar15 + 1;
  uVar10 = FUN_1402f7ff0(uVar11,4,*(undefined4 *)(param_1 + 0x20),uVar12,
                         *(undefined8 *)(param_1 + 0x28),local_res18);
  *(undefined8 *)(param_1 + 0x28) = uVar10;
  if (local_res18[0] != 0) {
    return local_res18[0];
  }
  uVar14 = 0;
  *(uint *)(param_1 + 0x20) = uVar12;
  if (uVar12 != 0) {
    do {
      iVar18 = (int)uVar14;
      if (iVar18 == 0) {
        **(undefined4 **)(param_1 + 0x28) = 0x10000;
      }
      else {
        uVar3 = *(uint *)(*(longlong *)(piVar15 + 2) + (ulonglong)(iVar18 - 1) * 4);
        if (*(uint *)(lVar17 + 0x1124) <= uVar3) {
          return 3;
        }
        lVar2 = uVar14 * 4;
        if (param_3 == 0) {
          *(undefined4 *)(lVar2 + *(longlong *)(param_1 + 0x28)) = 0;
        }
        else {
          lVar6 = *(longlong *)(lVar17 + 0x1128);
          uVar14 = 0;
          *(undefined4 *)(lVar2 + *(longlong *)(param_1 + 0x28)) = 0x10000;
          if (param_3 != 0) {
            do {
              lVar7 = *(longlong *)(lVar6 + (ulonglong)uVar3 * 8);
              iVar16 = *(int *)(lVar7 + 4 + uVar14 * 0xc);
              piVar1 = (int *)(lVar7 + uVar14 * 0xc);
              iVar8 = *(int *)(param_4 + uVar14 * 4);
              if ((iVar16 != iVar8) && (iVar16 != 0)) {
                iVar4 = *piVar1;
                if ((iVar8 <= iVar4) || (iVar5 = piVar1[2], iVar5 <= iVar8)) {
                  *(undefined4 *)(lVar2 + *(longlong *)(param_1 + 0x28)) = 0;
                  break;
                }
                if (iVar8 < iVar16) {
                  iVar16 = iVar16 - iVar4;
                  iVar8 = iVar8 - iVar4;
                }
                else {
                  iVar16 = iVar5 - iVar16;
                  iVar8 = iVar5 - iVar8;
                }
                uVar9 = FUN_1402f20b0(*(undefined4 *)(lVar2 + *(longlong *)(param_1 + 0x28)),iVar8,
                                      iVar16);
                *(undefined4 *)(lVar2 + *(longlong *)(param_1 + 0x28)) = uVar9;
              }
              uVar13 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar13;
            } while (uVar13 < param_3);
          }
        }
      }
      uVar14 = (ulonglong)(iVar18 + 1U);
    } while (iVar18 + 1U < uVar12);
  }
  *(uint *)(param_1 + 0x10) = param_2;
  if (param_3 != 0) {
    uVar11 = FUN_1402f7ff0(uVar11,4,*(undefined4 *)(param_1 + 0x14),(ulonglong)param_3,
                           *(undefined8 *)(param_1 + 0x18),local_res18);
    *(undefined8 *)(param_1 + 0x18) = uVar11;
    if (local_res18[0] != 0) {
      return local_res18[0];
    }
    FUN_1404210f0(uVar11,param_4,(ulonglong)param_3 << 2);
  }
  *(uint *)(param_1 + 0x14) = param_3;
  *param_1 = 1;
  return local_res18[0];
}

