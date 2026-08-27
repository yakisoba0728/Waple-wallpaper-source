// Function: FUN_1400ff200
// Addr: 1400ff200
// Size: 322 bytes


void FUN_1400ff200(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  BOOL BVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  iVar2 = FUN_140290d80(param_1 + 0x1c8);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x214) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x214) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  uVar4 = (*(longlong *)(param_1 + 0x1b0) - lVar1 >> 3) * 0x6db6db6db6db6db7;
  if (uVar4 != 0) {
    iVar2 = 0;
    do {
      lVar5 = (longlong)iVar2 * 0x38;
      if (*(int *)(lVar1 + lVar5) == param_2) {
        thunk_FUN_14028af80(*(undefined8 *)(lVar1 + 0x20 + lVar5));
        thunk_FUN_14028af80(*(undefined8 *)(lVar5 + 0x28 + *(longlong *)(param_1 + 0x1a8)));
        thunk_FUN_14028af80(*(undefined8 *)(lVar5 + 0x30 + *(longlong *)(param_1 + 0x1a8)));
        lVar5 = *(longlong *)(param_1 + 0x1a8) + lVar5;
        lVar1 = lVar5 + 0x38;
        FUN_1404210f0(lVar5,lVar1,*(longlong *)(param_1 + 0x1b0) - lVar1);
        *(longlong *)(param_1 + 0x1b0) = *(longlong *)(param_1 + 0x1b0) + -0x38;
        break;
      }
      iVar2 = iVar2 + 1;
    } while ((ulonglong)(longlong)iVar2 < uVar4);
  }
  BVar3 = IsWindow(*(HWND *)(param_1 + 0x10));
  if (BVar3 != 0) {
    KillTimer(*(HWND *)(param_1 + 0x10),0x66);
    KillTimer(*(HWND *)(param_1 + 0x10),0x67);
  }
  FUN_140290ea0(param_1 + 0x1c8);
  return;
}

