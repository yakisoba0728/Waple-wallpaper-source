// Function: FUN_14010f970
// Addr: 14010f970
// Size: 245 bytes


void FUN_14010f970(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar2 = FUN_140290d80();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x33c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x33c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  lVar1 = *(longlong *)(param_1 + 0x2d0);
  uVar4 = (*(longlong *)(param_1 + 0x2d8) - lVar1 >> 3) * -0x3333333333333333;
  if (uVar4 != 0) {
    iVar2 = 0;
    do {
      lVar3 = (longlong)iVar2;
      if (*(int *)(lVar1 + lVar3 * 0x28) == param_2) {
        thunk_FUN_14028af80(*(undefined8 *)(lVar1 + 0x20 + lVar3 * 0x28));
        lVar3 = *(longlong *)(param_1 + 0x2d0) + lVar3 * 0x28;
        lVar1 = lVar3 + 0x28;
        FUN_1404210f0(lVar3,lVar1,*(longlong *)(param_1 + 0x2d8) - lVar1);
        *(longlong *)(param_1 + 0x2d8) = *(longlong *)(param_1 + 0x2d8) + -0x28;
        break;
      }
      iVar2 = iVar2 + 1;
    } while ((ulonglong)(longlong)iVar2 < uVar4);
  }
  FUN_140290ea0(param_1 + 0x2f0);
  return;
}

