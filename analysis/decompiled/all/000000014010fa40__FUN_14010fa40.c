// Function: FUN_14010fa40
// Addr: 14010fa40
// Size: 34 bytes


undefined8 FUN_14010fa40(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  iVar3 = func_0x000140290e50();
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0x33c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x33c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(6);
  }
  lVar2 = *(longlong *)(param_1 + 0x2d0);
  uVar5 = (*(longlong *)(param_1 + 0x2d8) - lVar2 >> 3) * -0x3333333333333333;
  if (uVar5 != 0) {
    iVar3 = 0;
    do {
      lVar4 = (longlong)iVar3;
      if (*(int *)(lVar2 + lVar4 * 0x28) == param_2) {
        func_0x00014028b040(*(undefined8 *)(lVar2 + 0x20 + lVar4 * 0x28));
        lVar4 = *(longlong *)(param_1 + 0x2d0) + lVar4 * 0x28;
        lVar2 = lVar4 + 0x28;
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(lVar4,lVar2,*(longlong *)(param_1 + 0x2d8) - lVar2);
      }
      iVar3 = iVar3 + 1;
    } while ((ulonglong)(longlong)iVar3 < uVar5);
  }
  piVar1 = (int *)(param_1 + 0x33c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x338) = 0xffffffff;
    (*DAT_140426298)(param_1 + 0x300);
  }
  return 0;
}

