// Function: FUN_1401194a0
// Addr: 1401194a0
// Size: 401 bytes


undefined4 FUN_1401194a0(longlong param_1,undefined4 *param_2,undefined4 *param_3,longlong *param_4)

{
  undefined4 uVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  
  BVar2 = IsWindow(*(HWND *)(param_1 + 0x430));
  if (BVar2 == 0) {
    return 0;
  }
  iVar4 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_48 = 0x16;
  iVar3 = FUN_140290d80(param_1 + 0x4a0);
  if (iVar3 != 0) {
LAB_140119628:
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  iVar3 = *(int *)(param_1 + 0x4ec);
  if (iVar3 == 0x7fffffff) {
LAB_140119615:
    *(int *)(param_1 + 0x4ec) = iVar3 + -1;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  *(undefined1 *)(param_1 + 0x510) = 0;
  FUN_1400182d0(param_1 + 0x158,&local_48);
  FUN_140290ea0(param_1 + 0x4a0);
  thunk_FUN_14028af80(0);
  do {
    iVar3 = FUN_140290d80(param_1 + 0x4a0);
    if (iVar3 != 0) goto LAB_140119628;
    iVar3 = *(int *)(param_1 + 0x4ec);
    if (iVar3 == 0x7fffffff) goto LAB_140119615;
    FUN_140084700(param_1 + 0x158);
    FUN_140290ea0(param_1 + 0x4a0);
    if (*(char *)(param_1 + 0x510) != '\0') break;
    Sleep(10);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 300);
  *(undefined1 *)(param_1 + 0x510) = 0;
  *param_4 = *(longlong *)(param_1 + 0x508);
  *param_2 = *(undefined4 *)(param_1 + 0x500);
  uVar1 = *(undefined4 *)(param_1 + 0x504);
  *param_3 = uVar1;
  *(undefined8 *)(param_1 + 0x508) = 0;
  return CONCAT31((int3)((uint)uVar1 >> 8),*param_4 != 0);
}

