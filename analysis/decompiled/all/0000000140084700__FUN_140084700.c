// Function: FUN_140084700
// Addr: 140084700
// Size: 834 bytes


void FUN_140084700(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  DWORD local_res8 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  
  if (param_1[0x19] == 0) {
    if (param_1[0x11] == 0) goto LAB_140084835;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    iVar6 = FUN_140290d80(param_1 + 0x36);
    while( true ) {
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(5);
      }
      if (*(int *)((longlong)param_1 + 0x1fc) == 0x7fffffff) {
        *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(6);
      }
      if (param_1[0x44] == 0) break;
      puVar1 = *(undefined8 **)(param_1[0x41] + (param_1[0x42] - 1U & param_1[0x43]) * 8);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      thunk_FUN_14028af80(puVar1[3]);
      plVar3 = param_1 + 0x44;
      *plVar3 = *plVar3 + -1;
      if (*plVar3 == 0) {
        param_1[0x43] = 0;
      }
      else {
        param_1[0x43] = param_1[0x43] + 1;
      }
      local_38 = 0;
      local_30 = 0;
      local_48 = uVar4;
      local_40 = uVar2;
      thunk_FUN_14028af80(0);
      FUN_140290ea0(param_1 + 0x36);
      SendMessageW((HWND)param_1[0x11],*(UINT *)(param_1 + 0x51),0,(LPARAM)&local_48);
      thunk_FUN_14028af80(local_40);
      iVar6 = FUN_140290d80(param_1 + 0x36);
    }
  }
  else {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    iVar6 = FUN_140290d80(param_1 + 0x36);
    while( true ) {
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(5);
      }
      if (*(int *)((longlong)param_1 + 0x1fc) == 0x7fffffff) {
        *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(6);
      }
      if (param_1[0x44] == 0) break;
      puVar1 = *(undefined8 **)(param_1[0x41] + (param_1[0x42] - 1U & param_1[0x43]) * 8);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      thunk_FUN_14028af80(puVar1[3]);
      plVar3 = param_1 + 0x44;
      *plVar3 = *plVar3 + -1;
      if (*plVar3 == 0) {
        param_1[0x43] = 0;
      }
      else {
        param_1[0x43] = param_1[0x43] + 1;
      }
      local_38 = 0;
      local_30 = 0;
      local_48 = uVar4;
      local_40 = uVar2;
      thunk_FUN_14028af80(0);
      FUN_140290ea0(param_1 + 0x36);
      plVar3 = (longlong *)param_1[0x19];
      if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2c0();
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_48);
      thunk_FUN_14028af80(local_40);
      iVar6 = FUN_140290d80(param_1 + 0x36);
    }
  }
  FUN_140290ea0(param_1 + 0x36);
  thunk_FUN_14028af80(local_30);
LAB_140084835:
  if (*param_1 != -1) {
    iVar6 = FUN_140290d80(param_1 + 2);
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    if (*(int *)((longlong)param_1 + 0x5c) == 0x7fffffff) {
      *(undefined4 *)((longlong)param_1 + 0x5c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(6);
    }
    lVar5 = param_1[0xc];
    *(undefined1 *)(param_1 + 0xc) = 0;
    GetExitCodeProcess((HANDLE)*param_1,local_res8);
    *(DWORD *)((longlong)param_1 + 100) = local_res8[0];
    FUN_140290ea0(param_1 + 2);
    if ((char)lVar5 != '\0') {
      FUN_140081800(param_1 + 0xe);
      UnregisterWaitEx((HANDLE)param_1[1],(HANDLE)0xffffffffffffffff);
      param_1[1] = -1;
      CloseHandle((HANDLE)*param_1);
      *param_1 = -1;
      if ((longlong *)param_1[0x59] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x59] + 0x10))();
      }
    }
  }
  return;
}

