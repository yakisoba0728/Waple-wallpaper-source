// Function: FUN_140081db0
// Addr: 140081db0
// Size: 642 bytes


void FUN_140081db0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      return;
    }
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    iVar5 = FUN_140290d80(param_1 + 0x140);
    while( true ) {
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(5);
      }
      if (*(int *)(param_1 + 0x18c) == 0x7fffffff) {
        *(undefined4 *)(param_1 + 0x18c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(6);
      }
      if (*(longlong *)(param_1 + 0x1b0) == 0) break;
      puVar2 = *(undefined8 **)
                (*(longlong *)(param_1 + 0x198) +
                (*(longlong *)(param_1 + 0x1a0) - 1U & *(ulonglong *)(param_1 + 0x1a8)) * 8);
      uVar4 = *puVar2;
      uVar3 = puVar2[1];
      thunk_FUN_14028af80(puVar2[3]);
      plVar1 = (longlong *)(param_1 + 0x1b0);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        *(undefined8 *)(param_1 + 0x1a8) = 0;
      }
      else {
        *(longlong *)(param_1 + 0x1a8) = *(longlong *)(param_1 + 0x1a8) + 1;
      }
      local_38 = 0;
      local_30 = 0;
      local_48 = uVar4;
      local_40 = uVar3;
      thunk_FUN_14028af80(0);
      FUN_140290ea0(param_1 + 0x140);
      SendMessageW(*(HWND *)(param_1 + 0x18),*(UINT *)(param_1 + 0x218),0,(LPARAM)&local_48);
      thunk_FUN_14028af80(local_40);
      iVar5 = FUN_140290d80(param_1 + 0x140);
    }
  }
  else {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    iVar5 = FUN_140290d80(param_1 + 0x140);
    while( true ) {
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(5);
      }
      if (*(int *)(param_1 + 0x18c) == 0x7fffffff) {
        *(undefined4 *)(param_1 + 0x18c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(6);
      }
      if (*(longlong *)(param_1 + 0x1b0) == 0) break;
      puVar2 = *(undefined8 **)
                (*(longlong *)(param_1 + 0x198) +
                (*(longlong *)(param_1 + 0x1a0) - 1U & *(ulonglong *)(param_1 + 0x1a8)) * 8);
      uVar4 = *puVar2;
      uVar3 = puVar2[1];
      thunk_FUN_14028af80(puVar2[3]);
      plVar1 = (longlong *)(param_1 + 0x1b0);
      *plVar1 = *plVar1 + -1;
      if (*plVar1 == 0) {
        *(undefined8 *)(param_1 + 0x1a8) = 0;
      }
      else {
        *(longlong *)(param_1 + 0x1a8) = *(longlong *)(param_1 + 0x1a8) + 1;
      }
      local_38 = 0;
      local_30 = 0;
      local_48 = uVar4;
      local_40 = uVar3;
      thunk_FUN_14028af80(0);
      FUN_140290ea0(param_1 + 0x140);
      plVar1 = *(longlong **)(param_1 + 0x58);
      if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2c0();
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_48);
      thunk_FUN_14028af80(local_40);
      iVar5 = FUN_140290d80(param_1 + 0x140);
    }
  }
  FUN_140290ea0(param_1 + 0x140);
  thunk_FUN_14028af80(local_30);
  return;
}

