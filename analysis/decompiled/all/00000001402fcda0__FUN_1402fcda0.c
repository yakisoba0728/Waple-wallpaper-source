// Function: FUN_1402fcda0
// Addr: 1402fcda0
// Size: 209 bytes


undefined8 FUN_1402fcda0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  
  if (0 < *(int *)(param_1 + 0x2c)) {
    iVar11 = -0x80000000;
    iVar8 = 0x7fffffff;
    iVar6 = -0x80000000;
    iVar7 = 0x7fffffff;
    uVar10 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + uVar10 * 8);
      lVar4 = lVar2;
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x20);
      while (lVar3 != lVar2) {
        lVar4 = *(longlong *)(lVar4 + 0x20);
        iVar1 = *(int *)(lVar4 + 0x10);
        lVar3 = lVar4;
        if ((int)uVar10 == param_2) {
          if (iVar1 < iVar8) {
            iVar8 = iVar1;
          }
          if (iVar11 < iVar1) {
            iVar11 = iVar1;
          }
        }
        else {
          iVar5 = iVar1;
          if (iVar7 <= iVar1) {
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          if (iVar6 < iVar1) {
            iVar6 = iVar1;
          }
        }
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < *(int *)(param_1 + 0x2c));
    if ((((iVar11 < iVar7) || (iVar6 < iVar11)) && ((iVar8 < iVar7 || (iVar6 < iVar8)))) &&
       ((iVar11 < iVar6 || (iVar7 < iVar8)))) {
      return 0;
    }
  }
  return 1;
}

