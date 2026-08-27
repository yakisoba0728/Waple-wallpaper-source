// Function: FUN_140311b10
// Addr: 140311b10
// Size: 467 bytes


void FUN_140311b10(longlong *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  int local_res10;
  
  if (param_2 <= param_3) {
    uVar10 = (ulonglong)param_2;
    if ((param_4 < *(uint *)(param_1 + 3)) &&
       (uVar13 = (ulonglong)param_5, param_5 < *(uint *)(param_1 + 3))) {
      local_res10 = *(int *)(param_1[2] + uVar13 * 8);
      iVar2 = *(int *)(param_1[2] + (ulonglong)param_4 * 8);
      iVar11 = iVar2;
      if (local_res10 < iVar2) {
        uVar13 = (ulonglong)param_4;
        param_4 = param_5;
        iVar11 = local_res10;
        local_res10 = iVar2;
      }
      iVar2 = *(int *)(*param_1 + uVar13 * 8);
      iVar3 = *(int *)(*param_1 + (ulonglong)param_4 * 8);
      iVar4 = *(int *)(param_1[1] + (ulonglong)param_4 * 8);
      iVar5 = *(int *)(param_1[1] + uVar13 * 8);
      if ((iVar4 == iVar5) || (iVar11 == local_res10)) {
        do {
          lVar1 = uVar10 * 8;
          iVar11 = *(int *)(lVar1 + *param_1);
          if (iVar3 < iVar11) {
            iVar7 = iVar11 + (iVar5 - iVar2);
            if (iVar11 < iVar2) {
              iVar7 = iVar4;
            }
          }
          else {
            iVar7 = (iVar4 - iVar3) + iVar11;
          }
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          *(int *)(lVar1 + param_1[1]) = iVar7;
        } while (uVar9 <= param_3);
      }
      else {
        iVar7 = 0;
        bVar6 = false;
        do {
          lVar1 = uVar10 * 8;
          iVar8 = *(int *)(lVar1 + *param_1);
          if (iVar3 < iVar8) {
            if (iVar8 < iVar2) {
              if (!bVar6) {
                bVar6 = true;
                iVar7 = FUN_1402efa10(iVar5 - iVar4,local_res10 - iVar11);
              }
              lVar12 = (longlong)(*(int *)(param_1[2] + lVar1) - iVar11) * (longlong)iVar7;
              iVar8 = (int)((ulonglong)((lVar12 >> 0x3f) + 0x8000 + lVar12) >> 0x10) + iVar4;
            }
            else {
              iVar8 = iVar8 + (iVar5 - iVar2);
            }
          }
          else {
            iVar8 = (iVar4 - iVar3) + iVar8;
          }
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          *(int *)(lVar1 + param_1[1]) = iVar8;
        } while (uVar9 <= param_3);
      }
    }
  }
  return;
}

