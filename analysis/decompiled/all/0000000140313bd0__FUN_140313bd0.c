// Function: FUN_140313bd0
// Addr: 140313bd0
// Size: 434 bytes


void FUN_140313bd0(ushort *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  short sVar10;
  
  if (*param_1 == 0) {
    return;
  }
  sVar10 = 0;
  iVar7 = 0;
  do {
    uVar2 = *(ushort *)(*(longlong *)(param_1 + 0xc) + (longlong)sVar10 * 2);
    iVar4 = iVar7;
    iVar6 = iVar7;
    if (iVar7 <= (int)(uint)uVar2) {
      while (iVar6 = iVar4 + 1, *(char *)(iVar4 + param_4) == '\0') {
        iVar4 = iVar6;
        if ((int)(uint)uVar2 < iVar6) goto LAB_140313cf2;
      }
      uVar8 = (uint)uVar2;
      iVar9 = iVar4;
      if ((int)(uint)uVar2 < iVar6) goto LAB_140313c9e;
      do {
        if (*(char *)(iVar6 + param_4) != '\0') {
          FUN_140313020(iVar9 + 1,iVar6 + -1,iVar9,iVar6,param_3,param_2);
          iVar9 = iVar6;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 <= (int)uVar8);
      if (iVar9 == iVar4) {
LAB_140313c9e:
        lVar3 = (longlong)iVar9;
        iVar5 = *(int *)(param_2 + lVar3 * 8) - *(int *)(param_3 + lVar3 * 8);
        iVar4 = *(int *)(param_2 + 4 + lVar3 * 8) - *(int *)(param_3 + 4 + lVar3 * 8);
        if ((iVar5 != 0) || (iVar4 != 0)) {
          for (; iVar7 < iVar9; iVar7 = iVar7 + 1) {
            piVar1 = (int *)(param_2 + (longlong)iVar7 * 8);
            *piVar1 = *piVar1 + iVar5;
            piVar1 = (int *)(param_2 + 4 + (longlong)iVar7 * 8);
            *piVar1 = *piVar1 + iVar4;
          }
          while (iVar9 = iVar9 + 1, iVar9 <= (int)uVar8) {
            piVar1 = (int *)(param_2 + (longlong)iVar9 * 8);
            *piVar1 = *piVar1 + iVar5;
            piVar1 = (int *)(param_2 + 4 + (longlong)iVar9 * 8);
            *piVar1 = *piVar1 + iVar4;
          }
        }
      }
      else {
        FUN_140313020(iVar9 + 1,uVar8,iVar9,iVar4,param_3,param_2);
        if (0 < iVar4) {
          FUN_140313020(iVar7,iVar4 + -1,iVar9,iVar4,param_3,param_2);
        }
      }
    }
LAB_140313cf2:
    iVar7 = iVar6;
    sVar10 = sVar10 + 1;
    if ((int)(uint)*param_1 <= (int)sVar10) {
      return;
    }
  } while( true );
}

