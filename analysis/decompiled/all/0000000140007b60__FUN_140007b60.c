// Function: FUN_140007b60
// Addr: 140007b60
// Size: 730 bytes


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_140007b60(LARGE_INTEGER param_1,char param_2,char param_3)

{
  undefined2 *puVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  DWORD DVar5;
  HANDLE pvVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *******pppppppuVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  undefined8 uVar14;
  LARGE_INTEGER local_res8;
  undefined1 local_res10;
  longlong local_88 [2];
  longlong local_78;
  ulonglong uStack_70;
  undefined8 *******local_68;
  longlong lStack_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined1 local_48 [32];
  
  local_res8 = param_1;
  pvVar6 = GetCurrentProcess();
  SetPriorityClass(pvVar6,0x80);
  SetProcessDefaultLayout(0);
  SetCurrentProcessExplicitAppUserModelID(L"KristjanSkutta.WallpaperEngine");
  uVar14 = 0;
  DVar5 = 0;
  uVar9 = uVar14;
  if (param_2 == '\0') {
    if (DAT_1404e8b60 == (HANDLE)0x0) {
      SetLastError(0);
      pvVar6 = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,0,L"cxWallpaperEngineGlobalMutex");
      DVar5 = GetLastError();
      DAT_1404e8b60 = pvVar6;
    }
    uVar9 = 0;
    if ((DAT_1404e8b60 == (HANDLE)0x0) || (DVar5 != 0xb7)) {
      bVar4 = false;
      if (DAT_1404e8b60 != (HANDLE)0x0) goto LAB_140007c39;
    }
    else {
      bVar4 = true;
    }
    if (param_3 == '\0') {
      if (DAT_1404e8b60 != (HANDLE)0x0) {
        ReleaseMutex(DAT_1404e8b60);
        DAT_1404e8b60 = (HANDLE)0x0;
        uVar14 = 2;
      }
      uVar9 = uVar14;
      if (bVar4) {
        uVar9 = 1;
      }
    }
  }
LAB_140007c39:
  if (DAT_1404e52b8 == 2) {
    FUN_140098b00("Application start.\nVersion: %s (%s)\n\n","2.8.42","2026-06-29 14:36:02");
    puVar7 = (undefined8 *)FUN_140005ee0(local_88);
    if (7 < (ulonglong)puVar7[3]) {
      puVar7 = (undefined8 *)*puVar7;
    }
    FUN_140098b00("Working dir: %S\n",puVar7);
    FUN_140016770(local_88);
  }
  uVar14 = FUN_140005ee0(local_48);
  FUN_140016600(local_88,uVar14);
  if (uStack_70 - local_78 < 5) {
    plVar8 = (longlong *)FUN_140016310(local_88,5,local_res10,L"\\bin\\",5);
  }
  else {
    lVar10 = local_78 + 5;
    puVar13 = (undefined2 *)local_88;
    if (7 < uStack_70) {
      puVar13 = (undefined2 *)CONCAT62(local_88[0]._2_6_,(undefined2)local_88[0]);
    }
    puVar1 = puVar13 + local_78;
    local_78 = lVar10;
    FUN_1404210f0(puVar1,L"\\bin\\",10);
    plVar8 = local_88;
    puVar13[lVar10] = 0;
  }
  local_68 = (undefined8 *******)0x0;
  lStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (undefined8 *******)*plVar8;
  lStack_60 = plVar8[1];
  local_58 = plVar8[2];
  uStack_50 = plVar8[3];
  plVar8[2] = 0;
  plVar8[3] = 7;
  *(undefined2 *)plVar8 = 0;
  if (7 < uStack_70) {
    lVar3 = CONCAT62(local_88[0]._2_6_,(undefined2)local_88[0]);
    uVar12 = uStack_70 * 2 + 2;
    lVar10 = lVar3;
    if (0xfff < uVar12) {
      lVar10 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar10) - 8U) goto LAB_140007e32;
      uVar12 = uStack_70 * 2 + 0x29;
    }
    thunk_FUN_14028af80(lVar10,uVar12);
  }
  local_78 = 0;
  uStack_70 = 7;
  local_88[0]._0_2_ = 0;
  FUN_140016770(local_48);
  FUN_140005970(&local_68,0x5c);
  pppppppuVar11 = &local_68;
  if (7 < uStack_50) {
    pppppppuVar11 = local_68;
  }
  AddDllDirectory(pppppppuVar11);
  QueryPerformanceCounter(&local_res8);
  FUN_1402c97cc(local_res8.QuadPart & 0xffffffff);
  if (7 < uStack_50) {
    uVar12 = uStack_50 * 2 + 2;
    pppppppuVar11 = local_68;
    if (0xfff < uVar12) {
      pppppppuVar11 = (undefined8 *******)local_68[-1];
      if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppppppuVar11))) {
LAB_140007e32:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        uVar9 = (*pcVar2)();
        return uVar9;
      }
      uVar12 = uStack_50 * 2 + 0x29;
    }
    thunk_FUN_14028af80(pppppppuVar11,uVar12);
  }
  return uVar9;
}

