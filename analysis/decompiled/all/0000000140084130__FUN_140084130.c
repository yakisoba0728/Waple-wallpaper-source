// Function: FUN_140084130
// Addr: 140084130
// Size: 889 bytes


void FUN_140084130(undefined8 *param_1)

{
  undefined8 *puVar1;
  HWND pHVar2;
  longlong *plVar3;
  HANDLE Process;
  undefined8 uVar4;
  int iVar5;
  DWORD DVar6;
  BOOL BVar7;
  HWND hWnd;
  uint uVar8;
  undefined8 local_48;
  HWND pHStack_40;
  undefined4 local_38;
  undefined8 local_30;
  
  hWnd = (HWND)0x0;
  if (param_1[0x19] == 0) {
    if (param_1[0x11] == 0) goto LAB_140084264;
    local_48 = 0;
    pHStack_40 = (HWND)0x0;
    local_38 = 0;
    local_30 = 0;
    iVar5 = FUN_140290d80(param_1 + 0x36);
    while( true ) {
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(5);
      }
      if (*(int *)((longlong)param_1 + 0x1fc) == 0x7fffffff) {
        *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(6);
      }
      if (param_1[0x44] == 0) break;
      puVar1 = *(undefined8 **)(param_1[0x41] + (param_1[0x42] - 1 & param_1[0x43]) * 8);
      uVar4 = *puVar1;
      pHVar2 = (HWND)puVar1[1];
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
      pHStack_40 = pHVar2;
      thunk_FUN_14028af80(0);
      FUN_140290ea0(param_1 + 0x36);
      SendMessageW((HWND)param_1[0x11],*(UINT *)(param_1 + 0x51),0,(LPARAM)&local_48);
      thunk_FUN_14028af80(pHStack_40);
      iVar5 = FUN_140290d80(param_1 + 0x36);
    }
  }
  else {
    local_48 = 0;
    pHStack_40 = (HWND)0x0;
    local_38 = 0;
    local_30 = 0;
    iVar5 = FUN_140290d80(param_1 + 0x36);
    while( true ) {
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(5);
      }
      if (*(int *)((longlong)param_1 + 0x1fc) == 0x7fffffff) {
        *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(6);
      }
      if (param_1[0x44] == 0) break;
      puVar1 = *(undefined8 **)(param_1[0x41] + (param_1[0x42] - 1 & param_1[0x43]) * 8);
      uVar4 = *puVar1;
      pHVar2 = (HWND)puVar1[1];
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
      pHStack_40 = pHVar2;
      thunk_FUN_14028af80(0);
      FUN_140290ea0(param_1 + 0x36);
      plVar3 = (longlong *)param_1[0x19];
      if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2c0();
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_48);
      thunk_FUN_14028af80(pHStack_40);
      iVar5 = FUN_140290d80(param_1 + 0x36);
    }
  }
  FUN_140290ea0(param_1 + 0x36);
  thunk_FUN_14028af80(local_30);
LAB_140084264:
  Process = (HANDLE)*param_1;
  if (Process != (HANDLE)0xffffffffffffffff) {
    if (Process != (HANDLE)0x0) {
      local_48 = 0;
      pHStack_40 = (HWND)0x0;
      DVar6 = GetProcessId(Process);
      local_48 = CONCAT44(local_48._4_4_,DVar6);
      EnumWindows(FUN_140082fa0,(LPARAM)&local_48);
      hWnd = pHStack_40;
    }
    BVar7 = IsWindow(hWnd);
    if (BVar7 != 0) {
      PostMessageW(hWnd,0x10,0,0);
      uVar8 = 3000;
      while( true ) {
        WaitForSingleObject((HANDLE)*param_1,1000);
        BVar7 = IsWindow(hWnd);
        if (BVar7 == 0) break;
        Sleep(500);
        if (uVar8 == 500) {
          FUN_140098760("ChildProcess::Close waited indefinitely.\n");
          break;
        }
        if (uVar8 < 0x1f5) break;
        uVar8 = uVar8 - 500;
      }
    }
  }
  FUN_140081800(param_1 + 0xe);
  if ((HANDLE)param_1[1] != (HANDLE)0xffffffffffffffff) {
    UnregisterWaitEx((HANDLE)param_1[1],(HANDLE)0xffffffffffffffff);
    param_1[1] = 0xffffffffffffffff;
  }
  if ((HANDLE)*param_1 != (HANDLE)0xffffffffffffffff) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0xffffffffffffffff;
  }
  return;
}

