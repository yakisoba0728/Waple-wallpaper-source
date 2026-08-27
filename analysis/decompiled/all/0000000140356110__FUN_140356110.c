// Function: FUN_140356110
// Addr: 140356110
// Size: 597 bytes


void FUN_140356110(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined8 local_res8;
  undefined8 local_res10;
  
  lVar2 = *param_1;
  iVar9 = *(int *)((longlong)param_1 + 0xc) + -2;
  iVar1 = (int)param_1[1];
  lVar7 = (longlong)iVar1;
  local_res8 = CONCAT44(local_res8._4_4_,iVar9);
  do {
    if (iVar9 < 0) {
      return;
    }
    iVar8 = 1;
    if (1 < iVar1 + -1) {
      do {
        piVar5 = (int *)((longlong)(iVar9 * iVar1 + iVar8) * 0x10 + lVar2);
        iVar4 = *piVar5;
        if (0x8000 < iVar4) {
          if (piVar5[lVar7 * 4 + -4] + -0x10000 < iVar4) {
            local_res10._4_4_ = (int)((ulonglong)*(undefined8 *)(piVar5 + lVar7 * 4 + -3) >> 0x20);
            local_res10 = CONCAT44(local_res10._4_4_ + 0x10000,
                                   (int)*(undefined8 *)(piVar5 + lVar7 * 4 + -3) + -0x10000);
            iVar3 = FUN_1402f5d70(&local_res10);
            iVar4 = *piVar5;
            if (iVar3 < iVar4) {
              *(undefined8 *)(piVar5 + 1) = local_res10;
              *piVar5 = iVar3;
              iVar4 = iVar3;
            }
            if (iVar4 < 0x8001) goto LAB_1403562b8;
          }
          piVar6 = piVar5 + lVar7 * 4;
          if (*piVar6 + -0x10000 < iVar4) {
            local_res10 = CONCAT44((int)((ulonglong)*(undefined8 *)(piVar6 + 1) >> 0x20) + 0x10000,
                                   (int)*(undefined8 *)(piVar6 + 1));
            iVar3 = FUN_1402f5d70(&local_res10);
            iVar4 = *piVar5;
            if (iVar3 < iVar4) {
              *(undefined8 *)(piVar5 + 1) = local_res10;
              *piVar5 = iVar3;
              iVar4 = iVar3;
            }
            if (iVar4 < 0x8001) goto LAB_1403562b8;
          }
          if (piVar6[4] + -0x10000 < iVar4) {
            local_res10._4_4_ = (int)((ulonglong)*(undefined8 *)(piVar6 + 5) >> 0x20);
            local_res10 = CONCAT44(local_res10._4_4_ + 0x10000,
                                   (int)*(undefined8 *)(piVar6 + 5) + 0x10000);
            iVar3 = FUN_1402f5d70(&local_res10);
            iVar4 = *piVar5;
            if (iVar3 < iVar4) {
              *(undefined8 *)(piVar5 + 1) = local_res10;
              *piVar5 = iVar3;
              iVar4 = iVar3;
            }
            if (iVar4 < 0x8001) goto LAB_1403562b8;
          }
          if (piVar5[-4] + -0x10000 < iVar4) {
            local_res10._4_4_ = (int)((ulonglong)*(undefined8 *)(piVar5 + -3) >> 0x20);
            local_res10 = CONCAT44(local_res10._4_4_,(int)*(undefined8 *)(piVar5 + -3) + -0x10000);
            iVar4 = FUN_1402f5d70(&local_res10);
            if (iVar4 < *piVar5) {
              *piVar5 = iVar4;
              *(undefined8 *)(piVar5 + 1) = local_res10;
            }
          }
        }
LAB_1403562b8:
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar1 + -1);
      iVar9 = (int)local_res8;
    }
    iVar8 = iVar1 + -2;
    if (-1 < iVar8) {
      do {
        piVar5 = (int *)((longlong)(iVar9 * iVar1 + iVar8) * 0x10 + lVar2);
        if ((0x8000 < *piVar5) && (piVar5[4] + -0x10000 < *piVar5)) {
          local_res8._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(piVar5 + 5) >> 0x20);
          local_res8 = CONCAT44(local_res8._4_4_,(int)*(undefined8 *)(piVar5 + 5) + 0x10000);
          iVar4 = FUN_1402f5d70(&local_res8);
          if (iVar4 < *piVar5) {
            *piVar5 = iVar4;
            *(undefined8 *)(piVar5 + 1) = local_res8;
          }
        }
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
    iVar9 = iVar9 + -1;
    local_res8 = CONCAT44(local_res8._4_4_,iVar9);
  } while( true );
}

