// Function: FUN_14005bb90
// Addr: 14005bb90
// Size: 1923 bytes


undefined4 * FUN_14005bb90(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  DWORD DVar6;
  undefined4 *puVar7;
  longlong lVar8;
  HMODULE pHVar9;
  ulonglong uVar10;
  FARPROC pFVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  puVar14 = auStack_68;
  puVar7 = (undefined4 *)FUN_14028af20(0xa0);
  uVar13 = 0;
  *puVar7 = 0;
  *(undefined8 *)(puVar7 + 2) = 0;
  *(undefined8 *)(puVar7 + 4) = 0;
  lVar8 = FUN_14028af20(0x38);
  *(longlong *)lVar8 = lVar8;
  *(longlong *)(lVar8 + 8) = lVar8;
  *(longlong *)(puVar7 + 2) = lVar8;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined8 *)(puVar7 + 10) = 0;
  *(undefined8 *)(puVar7 + 0xc) = 7;
  *(undefined8 *)(puVar7 + 0xe) = 8;
  *puVar7 = 0x3f800000;
  FUN_14004f190(puVar7 + 6,0x10,*(undefined8 *)(puVar7 + 2));
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x12) = 0;
  *(undefined8 *)(puVar7 + 0x14) = 0;
  puVar7[0x16] = 0;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  *(undefined8 *)(puVar7 + 0x1a) = 0;
  *(undefined8 *)(puVar7 + 0x1c) = 0;
  *(undefined8 *)(puVar7 + 0x1e) = 0;
  *(undefined8 *)(puVar7 + 0x20) = 0;
  *(undefined8 *)(puVar7 + 0x22) = 0;
  *(undefined8 *)(puVar7 + 0x24) = 0;
  *(undefined8 *)(puVar7 + 0x26) = 0;
  pHVar9 = LoadLibraryExW(L"d3dcompiler_47.dll",(HANDLE)0x0,0x1000);
  if (pHVar9 == (HMODULE)0x0) {
    DVar6 = GetLastError();
    FUN_140098760("Error loading library %S (%i).\n",L"d3dcompiler_47.dll",DVar6);
    if (*(HMODULE *)(puVar7 + 0x1e) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(puVar7 + 0x1e));
    }
    puVar1 = *(undefined8 **)(puVar7 + 2);
    for (puVar15 = (undefined8 *)*puVar1; puVar15 != puVar1; puVar15 = (undefined8 *)*puVar15) {
      plVar2 = (longlong *)puVar15[4];
      plVar3 = (longlong *)puVar15[5];
      if ((longlong *)puVar15[3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar15[3] + 0x10))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    if (*(ulonglong *)(puVar7 + 4) != 0) {
      puVar1 = *(undefined8 **)(puVar7 + 2);
      if (*(ulonglong *)(puVar7 + 4) < *(ulonglong *)(puVar7 + 0xe) >> 3) {
        FUN_14005fd90(puVar7,*puVar1,puVar1);
      }
      else {
        *(undefined8 *)puVar1[1] = 0;
        puVar1 = (undefined8 *)*puVar1;
        while (puVar1 != (undefined8 *)0x0) {
          puVar15 = (undefined8 *)*puVar1;
          thunk_FUN_14028af80(puVar1,0x38);
          puVar1 = puVar15;
        }
        *(undefined8 *)*(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar7 + 2);
        *(longlong *)(*(longlong *)(puVar7 + 2) + 8) = *(longlong *)(puVar7 + 2);
        *(undefined8 *)(puVar7 + 4) = 0;
        puVar1 = *(undefined8 **)(puVar7 + 8);
        puVar15 = *(undefined8 **)(puVar7 + 6);
        if (puVar15 != puVar1) {
          uVar10 = (longlong)puVar1 + (7 - (longlong)puVar15) & 0xfffffffffffffff8;
          if (puVar1 < puVar15) {
            uVar10 = uVar13;
          }
          uVar4 = *(undefined8 *)(puVar7 + 2);
          for (uVar10 = uVar10 / 8; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar15 = uVar4;
            puVar15 = puVar15 + 1;
          }
        }
      }
    }
    if (*(longlong **)(puVar7 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(puVar7 + 0x10) + 0x10))();
      *(undefined8 *)(puVar7 + 0x10) = 0;
    }
    if (*(longlong **)(puVar7 + 0x12) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(puVar7 + 0x12) + 0x10))();
      *(undefined8 *)(puVar7 + 0x12) = 0;
    }
    if (*(longlong **)(puVar7 + 0x14) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(puVar7 + 0x14) + 0x10))();
      *(undefined8 *)(puVar7 + 0x14) = 0;
    }
    if (*(HMODULE *)(puVar7 + 0x18) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(puVar7 + 0x18));
    }
    lVar8 = *(longlong *)(puVar7 + 6);
    if (lVar8 != 0) {
      uVar13 = (*(longlong *)(puVar7 + 10) - lVar8 >> 3) * 8;
      if (0xfff < uVar13) {
        if (0x1f < (lVar8 - *(longlong *)(lVar8 + -8)) - 8U) goto LAB_14005c29c;
        uVar13 = uVar13 + 0x27;
        lVar8 = *(longlong *)(lVar8 + -8);
      }
      thunk_FUN_14028af80(lVar8,uVar13);
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 8) = 0;
      *(undefined8 *)(puVar7 + 10) = 0;
    }
    puVar1 = *(undefined8 **)(puVar7 + 2);
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar14 = auStack_68, puVar1 != (undefined8 *)0x0) {
      puVar15 = (undefined8 *)*puVar1;
      thunk_FUN_14028af80(puVar1,0x38);
      puVar1 = puVar15;
    }
    goto LAB_14005c2e5;
  }
  *(HMODULE *)(puVar7 + 0x18) = pHVar9;
  pFVar11 = GetProcAddress(pHVar9,"D3DCompile");
  *(FARPROC *)(puVar7 + 0x1a) = pFVar11;
  pFVar11 = GetProcAddress(pHVar9,"D3DReflect");
  *(FARPROC *)(puVar7 + 0x1c) = pFVar11;
  if ((*(longlong *)(puVar7 + 0x1a) == 0) || (pFVar11 == (FARPROC)0x0)) {
    if (*(HMODULE *)(puVar7 + 0x1e) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(puVar7 + 0x1e));
    }
    puVar1 = *(undefined8 **)(puVar7 + 2);
    for (puVar15 = (undefined8 *)*puVar1; puVar15 != puVar1; puVar15 = (undefined8 *)*puVar15) {
      plVar2 = (longlong *)puVar15[4];
      plVar3 = (longlong *)puVar15[5];
      if ((longlong *)puVar15[3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar15[3] + 0x10))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    if (*(ulonglong *)(puVar7 + 4) != 0) {
      puVar1 = *(undefined8 **)(puVar7 + 2);
      if (*(ulonglong *)(puVar7 + 4) < *(ulonglong *)(puVar7 + 0xe) >> 3) {
        FUN_14005fd90(puVar7,*puVar1,puVar1);
      }
      else {
        *(undefined8 *)puVar1[1] = 0;
        puVar1 = (undefined8 *)*puVar1;
        while (puVar1 != (undefined8 *)0x0) {
          puVar15 = (undefined8 *)*puVar1;
          thunk_FUN_14028af80(puVar1,0x38);
          puVar1 = puVar15;
        }
        *(undefined8 *)*(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar7 + 2);
        *(longlong *)(*(longlong *)(puVar7 + 2) + 8) = *(longlong *)(puVar7 + 2);
        *(undefined8 *)(puVar7 + 4) = 0;
        puVar1 = *(undefined8 **)(puVar7 + 8);
        puVar15 = *(undefined8 **)(puVar7 + 6);
        if (puVar15 != puVar1) {
          uVar10 = (longlong)puVar1 + (7 - (longlong)puVar15) & 0xfffffffffffffff8;
          if (puVar1 < puVar15) {
            uVar10 = uVar13;
          }
          uVar4 = *(undefined8 *)(puVar7 + 2);
          for (uVar10 = uVar10 / 8; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar15 = uVar4;
            puVar15 = puVar15 + 1;
          }
        }
      }
    }
    if (*(longlong **)(puVar7 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(puVar7 + 0x10) + 0x10))();
      *(undefined8 *)(puVar7 + 0x10) = 0;
    }
    if (*(longlong **)(puVar7 + 0x12) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(puVar7 + 0x12) + 0x10))();
      *(undefined8 *)(puVar7 + 0x12) = 0;
    }
    if (*(longlong **)(puVar7 + 0x14) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(puVar7 + 0x14) + 0x10))();
      *(undefined8 *)(puVar7 + 0x14) = 0;
    }
    if (*(HMODULE *)(puVar7 + 0x18) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(puVar7 + 0x18));
    }
    lVar8 = *(longlong *)(puVar7 + 6);
    if (lVar8 != 0) {
      puVar14 = auStack_68;
      if ((0xfff < (ulonglong)((*(longlong *)(puVar7 + 10) - lVar8 >> 3) * 8)) &&
         (lVar12 = lVar8 - *(longlong *)(lVar8 + -8), lVar8 = *(longlong *)(lVar8 + -8),
         puVar14 = auStack_68, 0x1f < lVar12 - 8U)) {
LAB_14005c29c:
        lVar8 = 5;
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar14 = auStack_60;
      }
      *(undefined8 *)(puVar14 + -8) = 0x14005c2ae;
      thunk_FUN_14028af80(lVar8);
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 8) = 0;
      *(undefined8 *)(puVar7 + 10) = 0;
    }
    puVar1 = *(undefined8 **)(puVar7 + 2);
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar15 = (undefined8 *)*puVar1;
      *(undefined8 *)(puVar14 + -8) = 0x14005c2dd;
      thunk_FUN_14028af80(puVar1,0x38);
      puVar1 = puVar15;
    }
  }
  else {
    pHVar9 = LoadLibraryExW(L"cloneextensions64.dll",(HANDLE)0x0,0x1000);
    if (pHVar9 != (HMODULE)0x0) {
      *(HMODULE *)(puVar7 + 0x1e) = pHVar9;
      pFVar11 = GetProcAddress(pHVar9,"CreateWindowCompositionForSwapChain");
      *(FARPROC *)(puVar7 + 0x20) = pFVar11;
      pFVar11 = GetProcAddress(pHVar9,"DestroyWindowCompositionForSwapChain");
      *(FARPROC *)(puVar7 + 0x22) = pFVar11;
      pFVar11 = GetProcAddress(pHVar9,"CreateVoronoiFacets");
      *(FARPROC *)(puVar7 + 0x24) = pFVar11;
      pFVar11 = GetProcAddress(pHVar9,"DestroyVoronoiFacets");
      *(FARPROC *)(puVar7 + 0x26) = pFVar11;
      if ((((*(longlong *)(puVar7 + 0x20) != 0) && (*(longlong *)(puVar7 + 0x22) != 0)) &&
          (*(longlong *)(puVar7 + 0x24) != 0)) && (pFVar11 != (FARPROC)0x0)) {
        return puVar7;
      }
      FUN_14005b860(puVar7);
      return (undefined4 *)0x0;
    }
    DVar6 = GetLastError();
    FUN_140098760("Error loading library %S (%i).\n",L"cloneextensions64.dll",DVar6);
    if (*(HMODULE *)(puVar7 + 0x1e) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(puVar7 + 0x1e));
    }
    puVar1 = *(undefined8 **)(puVar7 + 2);
    for (puVar15 = (undefined8 *)*puVar1; puVar15 != puVar1; puVar15 = (undefined8 *)*puVar15) {
      plVar2 = (longlong *)puVar15[4];
      plVar3 = (longlong *)puVar15[5];
      if ((longlong *)puVar15[3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar15[3] + 0x10))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    if (*(ulonglong *)(puVar7 + 4) != 0) {
      puVar1 = *(undefined8 **)(puVar7 + 2);
      if (*(ulonglong *)(puVar7 + 4) < *(ulonglong *)(puVar7 + 0xe) >> 3) {
        FUN_14005fd90(puVar7,*puVar1,puVar1);
      }
      else {
        *(undefined8 *)puVar1[1] = 0;
        puVar1 = (undefined8 *)*puVar1;
        while (puVar1 != (undefined8 *)0x0) {
          puVar15 = (undefined8 *)*puVar1;
          thunk_FUN_14028af80(puVar1,0x38);
          puVar1 = puVar15;
        }
        *(undefined8 *)*(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar7 + 2);
        *(longlong *)(*(longlong *)(puVar7 + 2) + 8) = *(longlong *)(puVar7 + 2);
        *(undefined8 *)(puVar7 + 4) = 0;
        puVar1 = *(undefined8 **)(puVar7 + 8);
        puVar15 = *(undefined8 **)(puVar7 + 6);
        if (puVar15 != puVar1) {
          uVar10 = (longlong)puVar1 + (7 - (longlong)puVar15) & 0xfffffffffffffff8;
          if (puVar1 < puVar15) {
            uVar10 = uVar13;
          }
          uVar4 = *(undefined8 *)(puVar7 + 2);
          for (uVar10 = uVar10 / 8; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar15 = uVar4;
            puVar15 = puVar15 + 1;
          }
        }
      }
    }
    if (*(longlong **)(puVar7 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(puVar7 + 0x10) + 0x10))();
      *(undefined8 *)(puVar7 + 0x10) = 0;
    }
    if (*(longlong **)(puVar7 + 0x12) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(puVar7 + 0x12) + 0x10))();
      *(undefined8 *)(puVar7 + 0x12) = 0;
    }
    if (*(longlong **)(puVar7 + 0x14) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(puVar7 + 0x14) + 0x10))();
      *(undefined8 *)(puVar7 + 0x14) = 0;
    }
    if (*(HMODULE *)(puVar7 + 0x18) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(puVar7 + 0x18));
    }
    lVar8 = *(longlong *)(puVar7 + 6);
    if (lVar8 != 0) {
      uVar13 = (*(longlong *)(puVar7 + 10) - lVar8 >> 3) * 8;
      if (0xfff < uVar13) {
        if (0x1f < (lVar8 - *(longlong *)(lVar8 + -8)) - 8U) goto LAB_14005c29c;
        uVar13 = uVar13 + 0x27;
        lVar8 = *(longlong *)(lVar8 + -8);
      }
      thunk_FUN_14028af80(lVar8,uVar13);
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 8) = 0;
      *(undefined8 *)(puVar7 + 10) = 0;
    }
    puVar1 = *(undefined8 **)(puVar7 + 2);
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar14 = auStack_68, puVar1 != (undefined8 *)0x0) {
      puVar15 = (undefined8 *)*puVar1;
      thunk_FUN_14028af80(puVar1,0x38);
      puVar1 = puVar15;
    }
  }
LAB_14005c2e5:
  uVar4 = *(undefined8 *)(puVar7 + 2);
  *(undefined8 *)(puVar14 + -8) = 0x14005c2f3;
  thunk_FUN_14028af80(uVar4,0x38);
  *(undefined8 *)(puVar14 + -8) = 0x14005c300;
  thunk_FUN_14028af80(puVar7,0xa0);
  return (undefined4 *)0x0;
}

