// Function: FUN_140354b20
// Addr: 140354b20
// Size: 616 bytes


void FUN_140354b20(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 local_res8;
  int local_res10;
  undefined8 local_res18;
  
  local_res10 = *(int *)((longlong)param_1 + 0xc);
  iVar8 = 1;
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  local_res8 = CONCAT44(local_res8._4_4_,1);
  if (1 < local_res10) {
    do {
      iVar7 = 1;
      if (1 < iVar1 + -1) {
        do {
          piVar5 = (int *)((longlong)(iVar8 * iVar1 + iVar7) * 0x10 + lVar2);
          iVar4 = *piVar5;
          if (0x8000 < iVar4) {
            lVar6 = (longlong)-iVar1;
            if (piVar5[lVar6 * 4 + -4] + -0x10000 < iVar4) {
              local_res18._4_4_ = (int)((ulonglong)*(undefined8 *)(piVar5 + lVar6 * 4 + -3) >> 0x20)
              ;
              local_res18 = CONCAT44(local_res18._4_4_ + -0x10000,
                                     (int)*(undefined8 *)(piVar5 + lVar6 * 4 + -3) + -0x10000);
              iVar3 = FUN_1402f5d70(&local_res18);
              iVar4 = *piVar5;
              if (iVar3 < iVar4) {
                *(undefined8 *)(piVar5 + 1) = local_res18;
                *piVar5 = iVar3;
                iVar4 = iVar3;
              }
              if (iVar4 < 0x8001) goto LAB_140354cd4;
            }
            if (piVar5[lVar6 * 4] + -0x10000 < iVar4) {
              local_res18 = CONCAT44((int)((ulonglong)*(undefined8 *)(piVar5 + lVar6 * 4 + 1) >>
                                          0x20) + -0x10000,
                                     (int)*(undefined8 *)(piVar5 + lVar6 * 4 + 1));
              iVar3 = FUN_1402f5d70(&local_res18);
              iVar4 = *piVar5;
              if (iVar3 < iVar4) {
                *(undefined8 *)(piVar5 + 1) = local_res18;
                *piVar5 = iVar3;
                iVar4 = iVar3;
              }
              if (iVar4 < 0x8001) goto LAB_140354cd4;
            }
            if (piVar5[lVar6 * 4 + 4] + -0x10000 < iVar4) {
              local_res18._4_4_ = (int)((ulonglong)*(undefined8 *)(piVar5 + lVar6 * 4 + 5) >> 0x20);
              local_res18 = CONCAT44(local_res18._4_4_ + -0x10000,
                                     (int)*(undefined8 *)(piVar5 + lVar6 * 4 + 5) + 0x10000);
              iVar3 = FUN_1402f5d70(&local_res18);
              iVar4 = *piVar5;
              if (iVar3 < iVar4) {
                *(undefined8 *)(piVar5 + 1) = local_res18;
                *piVar5 = iVar3;
                iVar4 = iVar3;
              }
              if (iVar4 < 0x8001) goto LAB_140354cd4;
            }
            if (piVar5[-4] + -0x10000 < iVar4) {
              local_res18._4_4_ = (int)((ulonglong)*(undefined8 *)(piVar5 + -3) >> 0x20);
              local_res18 = CONCAT44(local_res18._4_4_,(int)*(undefined8 *)(piVar5 + -3) + -0x10000)
              ;
              iVar4 = FUN_1402f5d70(&local_res18);
              if (iVar4 < *piVar5) {
                *piVar5 = iVar4;
                *(undefined8 *)(piVar5 + 1) = local_res18;
              }
            }
          }
LAB_140354cd4:
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar1 + -1);
        iVar8 = (int)local_res8;
      }
      iVar7 = iVar1 + -2;
      if (-1 < iVar7) {
        do {
          piVar5 = (int *)((longlong)(iVar8 * iVar1 + iVar7) * 0x10 + lVar2);
          if ((0x8000 < *piVar5) && (piVar5[4] + -0x10000 < *piVar5)) {
            local_res8._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(piVar5 + 5) >> 0x20);
            local_res8 = CONCAT44(local_res8._4_4_,(int)*(undefined8 *)(piVar5 + 5) + 0x10000);
            iVar4 = FUN_1402f5d70(&local_res8);
            if (iVar4 < *piVar5) {
              *piVar5 = iVar4;
              *(undefined8 *)(piVar5 + 1) = local_res8;
            }
          }
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
      }
      iVar8 = iVar8 + 1;
      local_res8 = CONCAT44(local_res8._4_4_,iVar8);
    } while (iVar8 < local_res10);
  }
  return;
}

