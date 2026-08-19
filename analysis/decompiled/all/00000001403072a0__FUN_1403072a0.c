// Function: FUN_1403072a0
// Addr: 1403072a0
// Size: 294 bytes


undefined8 FUN_1403072a0(longlong param_1,uint param_2,int *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  uint *puVar3;
  bool bVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  int local_res8 [2];
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  bVar4 = false;
  local_res8[0] = 0;
  if ((*(longlong *)(param_1 + 0x408) == 0) &&
     (local_res8[0] = FUN_1403074a0(param_1,0), local_res8[0] != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402f8060(uVar1,0);
  }
  lVar2 = *(longlong *)(param_1 + 0x408);
  puVar3 = *(uint **)(lVar2 + 0x18);
  piVar5 = *(int **)(lVar2 + 8);
  uVar6 = *puVar3;
  if (uVar6 < param_2) {
    param_2 = uVar6;
  }
  if (piVar5 != (int *)0x0) {
    uVar6 = 0;
    if (param_2 != 0) {
      do {
        if (*piVar5 != *param_3) {
          *piVar5 = *param_3;
          bVar4 = true;
        }
        param_3 = param_3 + 1;
        piVar5 = piVar5 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_2);
    }
    uVar7 = *puVar3;
    if ((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) {
      lVar8 = (ulonglong)param_2 * 0x20 + *(longlong *)(puVar3 + 4);
      if (uVar6 < uVar7) {
        do {
          if (*piVar5 != *(int *)(lVar8 + 0xc)) {
            *piVar5 = *(int *)(lVar8 + 0xc);
            bVar4 = true;
          }
          uVar7 = *puVar3;
          uVar6 = uVar6 + 1;
          lVar8 = lVar8 + 0x20;
          piVar5 = piVar5 + 1;
        } while (uVar6 < uVar7);
      }
    }
    else {
      piVar9 = (int *)(*(longlong *)
                        (*(longlong *)(puVar3 + 6) + -0x10 +
                        (ulonglong)(*(uint *)(param_1 + 4) >> 0x10) * 0x10) + (ulonglong)param_2 * 4
                      );
      if (uVar6 < uVar7) {
        do {
          if (*piVar5 != *piVar9) {
            *piVar5 = *piVar9;
            bVar4 = true;
          }
          uVar7 = *puVar3;
          uVar6 = uVar6 + 1;
          piVar9 = piVar9 + 1;
          piVar5 = piVar5 + 1;
        } while (uVar6 < uVar7);
      }
    }
    if ((*(longlong *)(lVar2 + 0x10) != 0) && (!bVar4)) {
      return 0xffffffff;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402f8180(uVar1,4,0,uVar7,0,local_res8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402f8180(uVar1,4,0,uVar6,0,local_res8);
}

