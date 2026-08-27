// Function: FUN_140058430
// Addr: 140058430
// Size: 824 bytes


void FUN_140058430(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  BOOL BVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 local_70;
  undefined4 local_6c;
  WNDCLASSW local_68;
  
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1 != param_2 + -1) {
    if ((ulonglong)param_2[4] < 0x10) {
      puVar11 = param_2 + 1;
    }
    else {
      puVar11 = (undefined8 *)param_2[1];
    }
    FUN_14000f880(param_1 + 2,puVar11,param_2[3]);
  }
  if (DAT_1404e7f48 == 0) {
    local_68.style = 0;
    local_68._4_4_ = 0;
    local_68.cbClsExtra = 0;
    local_68.cbWndExtra = 0;
    local_68.hInstance = (HINSTANCE)0x0;
    local_68.hIcon = (HICON)0x0;
    local_68.hCursor = (HCURSOR)0x0;
    local_68.hbrBackground = (HBRUSH)0x0;
    local_68.lpszMenuName = (LPCWSTR)0x0;
    local_68.lpfnWndProc = FUN_140057770;
    local_68.lpszClassName = (LPCWSTR)0x0;
    local_68.hInstance = GetModuleHandleW((LPCWSTR)0x0);
    local_68.hbrBackground = (HBRUSH)0x0;
    local_68.lpszClassName = L"WPEUIFadeWindow";
    DAT_1404e7f48 = RegisterClassW(&local_68);
  }
  iVar9 = FUN_140290d80(param_1 + 10);
  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)((longlong)param_1 + 0x9c) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  if (param_2[0xe] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[0xe] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[1];
  uVar5 = param_2[0xe];
  *param_1 = param_2[0xd];
  param_1[1] = uVar5;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  puVar11 = (undefined8 *)FUN_14028af20(0x98);
  *puVar11 = *param_2;
  FUN_140016fc0(puVar11 + 1,param_2 + 1);
  puVar11[5] = param_2[5];
  uVar5 = param_2[7];
  puVar11[6] = param_2[6];
  puVar11[7] = uVar5;
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar7 = *(undefined4 *)(param_2 + 9);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(puVar11 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)puVar11 + 0x44) = uVar6;
  *(undefined4 *)(puVar11 + 9) = uVar7;
  *(undefined4 *)((longlong)puVar11 + 0x4c) = uVar8;
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar7 = *(undefined4 *)(param_2 + 0xb);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(puVar11 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)puVar11 + 0x54) = uVar6;
  *(undefined4 *)(puVar11 + 0xb) = uVar7;
  *(undefined4 *)((longlong)puVar11 + 0x5c) = uVar8;
  *(undefined4 *)(puVar11 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)puVar11 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  puVar11[0xd] = 0;
  puVar11[0xe] = 0;
  if (param_2[0xe] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[0xe] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar11[0xd] = param_2[0xd];
  puVar11[0xe] = param_2[0xe];
  *(undefined4 *)(puVar11 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)puVar11 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined1 *)(puVar11 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  puVar11[0x12] = FUN_140058770;
  puVar11[0x11] = param_1;
  lVar12 = FUN_1402ca17c(0,0,FUN_14005afd0,puVar11,0,&local_70);
  if (lVar12 == 0) {
    local_70 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  if (*(int *)(param_1 + 9) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140015110();
  }
  *(undefined4 *)(param_1 + 9) = local_70;
  param_1[8] = lVar12;
  *(undefined4 *)((longlong)param_1 + 0x4c) = local_6c;
  FUN_140290ea0(param_1 + 10);
  while( true ) {
    local_68.style = 0;
    local_68._4_4_ = 0;
    local_68.lpfnWndProc = (WNDPROC)0x0;
    local_68.cbClsExtra = 0;
    local_68.cbWndExtra = 0;
    local_68.hInstance = (HINSTANCE)0x0;
    local_68.hIcon = (HICON)0x0;
    local_68.hCursor = (HCURSOR)0x0;
    BVar10 = PeekMessageW((LPMSG)&local_68,(HWND)0x0,0,0,0x400003);
    if (BVar10 != 0) {
      TranslateMessage((MSG *)&local_68);
      DispatchMessageW((MSG *)&local_68);
    }
    iVar9 = FUN_140290d80(param_1 + 10);
    if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    if (*(int *)((longlong)param_1 + 0x9c) == 0x7fffffff) {
      *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(6);
    }
    cVar3 = *(char *)(param_1 + 7);
    FUN_140290ea0(param_1 + 10);
    if (cVar3 != '\0') break;
    Sleep(1);
  }
  return;
}

