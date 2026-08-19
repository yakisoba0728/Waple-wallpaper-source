// Function: FUN_1403345a0
// Addr: 1403345a0
// Size: 302 bytes


void FUN_1403345a0(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint local_res8;
  
  iVar5 = param_3 * *(int *)(param_1 + 0x20);
  lVar12 = *(longlong *)(param_2 + 0x18);
  lVar3 = *(longlong *)(param_2 + 0x10);
  if (param_3 != 0) {
    iVar4 = (int)(lVar12 - lVar3 >> 3) - iVar5;
    local_res8 = 0;
    uVar10 = (ulonglong)(iVar4 + param_3);
    do {
      piVar9 = *(int **)(param_1 + 0x28);
      uVar13 = local_res8 + iVar4;
      if (uVar13 < (uint)(lVar12 - lVar3 >> 3)) {
        iVar1 = *(int *)(lVar3 + 4 + (ulonglong)uVar13 * 8);
        iVar7 = *(int *)(lVar3 + (ulonglong)uVar13 * 8);
        if (iVar1 == 1) {
          iVar7 = iVar7 + (iVar7 >> 0x1f) + 0x2000 >> 0xe;
        }
        else if (iVar1 == 2) {
          iVar7 = iVar7 << 0x10;
        }
      }
      else {
        piVar2 = *(int **)(param_2 + 8);
        if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
          *piVar2 = 0x82;
          lVar12 = *(longlong *)(param_2 + 0x18);
          lVar3 = *(longlong *)(param_2 + 0x10);
        }
        iVar7 = 0;
      }
      uVar11 = *(uint *)(param_1 + 0x20);
      if (1 < uVar11) {
        uVar8 = 1;
        do {
          piVar9 = piVar9 + 1;
          lVar12 = *(longlong *)(param_2 + 0x18);
          lVar3 = *(longlong *)(param_2 + 0x10);
          if ((uint)uVar10 < (uint)(lVar12 - lVar3 >> 3)) {
            iVar1 = *(int *)(lVar3 + 4 + uVar10 * 8);
            piVar2 = (int *)(lVar3 + uVar10 * 8);
            if (iVar1 == 1) {
              iVar1 = *piVar2;
              iVar6 = iVar1 + (iVar1 >> 0x1f) + 0x2000 >> 0xe;
            }
            else {
              iVar6 = *piVar2;
              if (iVar1 == 2) {
                iVar6 = iVar6 << 0x10;
              }
            }
          }
          else {
            piVar2 = *(int **)(param_2 + 8);
            if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
              *piVar2 = 0x82;
              lVar12 = *(longlong *)(param_2 + 0x18);
              lVar3 = *(longlong *)(param_2 + 0x10);
              uVar11 = *(uint *)(param_1 + 0x20);
            }
            iVar6 = 0;
          }
          uVar10 = (ulonglong)((uint)uVar10 + 1);
          uVar8 = uVar8 + 1;
          iVar7 = iVar7 + (int)((ulonglong)
                                ((longlong)iVar6 * (longlong)*piVar9 + 0x8000 +
                                ((longlong)iVar6 * (longlong)*piVar9 >> 0x3f)) >> 0x10);
        } while (uVar8 < uVar11);
      }
      if ((uint)(lVar12 - lVar3 >> 3) < uVar13) {
        piVar9 = *(int **)(param_2 + 8);
        if ((piVar9 != (int *)0x0) && (*piVar9 == 0)) {
          *piVar9 = 0x82;
          goto code_r0x000140334767;
        }
      }
      else {
        *(int *)(lVar3 + (ulonglong)uVar13 * 8) = iVar7;
        *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)uVar13 * 8) = 0;
code_r0x000140334767:
        lVar3 = *(longlong *)(param_2 + 0x10);
        lVar12 = *(longlong *)(param_2 + 0x18);
      }
      local_res8 = local_res8 + 1;
    } while (local_res8 < param_3);
  }
  param_3 = iVar5 - param_3;
  if ((uint)(lVar12 - lVar3 >> 3) < param_3) {
    piVar9 = *(int **)(param_2 + 8);
    if ((piVar9 != (int *)0x0) && (*piVar9 == 0)) {
      *piVar9 = 0xa1;
      return;
    }
  }
  else {
    *(ulonglong *)(param_2 + 0x18) = lVar12 + (ulonglong)param_3 * -8;
  }
  return;
}

