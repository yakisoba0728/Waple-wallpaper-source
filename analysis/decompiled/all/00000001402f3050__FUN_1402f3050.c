// Function: FUN_1402f3050
// Addr: 1402f3050
// Size: 196 bytes


void FUN_1402f3050(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    if (*(ushort *)(param_1 + 2) == 0) {
      *param_2 = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[1] = 0;
      return;
    }
    piVar3 = *(int **)(param_1 + 8);
    piVar1 = piVar3 + (ulonglong)*(ushort *)(param_1 + 2) * 2;
    iVar6 = *piVar3;
    iVar7 = *piVar3;
    iVar8 = piVar3[1];
    iVar2 = piVar3[1];
    while (iVar9 = iVar2, piVar3 = piVar3 + 2, piVar3 < piVar1) {
      iVar10 = *piVar3;
      iVar4 = iVar10;
      if (iVar6 <= iVar10) {
        iVar4 = iVar6;
      }
      if (iVar10 <= iVar7) {
        iVar10 = iVar7;
      }
      iVar2 = piVar3[1];
      iVar5 = iVar2;
      if (iVar8 <= iVar2) {
        iVar5 = iVar8;
      }
      iVar6 = iVar4;
      iVar7 = iVar10;
      iVar8 = iVar5;
      if (iVar2 <= iVar9) {
        iVar2 = iVar9;
      }
    }
    *param_2 = iVar6;
    param_2[2] = iVar7;
    param_2[1] = iVar8;
    param_2[3] = iVar9;
  }
  return;
}

