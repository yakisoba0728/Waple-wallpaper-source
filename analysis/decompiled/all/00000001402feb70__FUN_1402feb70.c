// Function: FUN_1402feb70
// Addr: 1402feb70
// Size: 126 bytes


void FUN_1402feb70(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      iVar6 = -0x80000000;
      lVar8 = (longlong)iVar7;
      iVar9 = 0x7fffffff;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + lVar8 * 8);
      if (lVar2 != 0) {
        lVar4 = lVar2;
        iVar1 = iVar6;
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x20);
        while (iVar6 = iVar1, lVar3 != lVar2) {
          iVar1 = *(int *)(lVar4 + 0x14);
          lVar4 = *(longlong *)(lVar4 + 0x20);
          iVar5 = iVar1;
          if (iVar9 <= iVar1) {
            iVar5 = iVar9;
          }
          iVar9 = iVar5;
          lVar3 = lVar4;
          if (iVar1 <= iVar6) {
            iVar1 = iVar6;
          }
        }
      }
      iVar7 = iVar7 + 1;
      *(int *)(*(longlong *)(param_1 + 0x38) + lVar8 * 4) = iVar9;
      *(int *)(*(longlong *)(param_1 + 0x40) + lVar8 * 4) = iVar6;
    } while (iVar7 < *(int *)(param_1 + 0x2c));
  }
  return;
}

