// Function: FUN_140313020
// Addr: 140313020
// Size: 378 bytes


void FUN_140313020(int param_1,int param_2,uint param_3,ulonglong param_4,longlong param_5,
                  longlong param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  
  if (param_1 <= param_2) {
    lVar12 = 0;
    do {
      param_5 = param_5 + lVar12 * 4;
      param_6 = param_6 + lVar12 * 4;
      uVar11 = (uint)param_4;
      uVar9 = param_3;
      if (*(int *)(param_5 + (longlong)(int)param_3 * 8) <=
          *(int *)(param_5 + (longlong)(int)uVar11 * 8)) {
        uVar9 = uVar11;
        uVar11 = param_3;
      }
      param_3 = uVar11;
      param_4 = (ulonglong)(int)uVar9;
      iVar1 = *(int *)(param_5 + param_4 * 8);
      iVar2 = *(int *)((longlong)(int)param_3 * 8 + param_5);
      iVar3 = *(int *)((longlong)(int)param_3 * 8 + param_6);
      iVar4 = *(int *)(param_6 + param_4 * 8);
      if (iVar2 == iVar1) {
        if (iVar3 == iVar4) {
          iVar5 = 0;
          goto LAB_1403130fa;
        }
      }
      else {
        iVar5 = FUN_1402efa10(iVar4 - iVar3,iVar1 - iVar2);
LAB_1403130fa:
        iVar10 = param_1;
        do {
          lVar7 = (longlong)iVar10;
          iVar6 = *(int *)(param_5 + lVar7 * 8);
          if (iVar2 < iVar6) {
            if (iVar6 < iVar1) {
              lVar8 = (longlong)(iVar6 - iVar2) * (longlong)iVar5;
              iVar6 = (int)((ulonglong)((lVar8 >> 0x3f) + 0x8000 + lVar8) >> 0x10) + iVar3;
            }
            else {
              iVar6 = iVar6 + (iVar4 - iVar1);
            }
          }
          else {
            iVar6 = iVar6 + (iVar3 - iVar2);
          }
          iVar10 = iVar10 + 1;
          *(int *)(param_6 + lVar7 * 8) = iVar6;
        } while (iVar10 <= param_2);
        param_4 = (ulonglong)uVar9;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != 2);
  }
  return;
}

