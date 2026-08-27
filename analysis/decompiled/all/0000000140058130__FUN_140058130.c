// Function: FUN_140058130
// Addr: 140058130
// Size: 763 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140058130(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  DWORD DVar6;
  HMODULE pHVar7;
  FARPROC pFVar8;
  FARPROC pFVar9;
  FARPROC pFVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint local_res8;
  uint local_resc;
  uint local_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  LOCK();
  *(undefined1 *)(param_1 + 0x3a) = 1;
  UNLOCK();
  if (*(char *)(param_1 + 0x39) == '\0') {
    iVar5 = FUN_140290d80(param_1 + 0x50);
    if (iVar5 != 0) goto LAB_140058419;
    if (*(int *)(param_1 + 0x9c) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x9c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(6);
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined1 *)(param_1 + 0x39) = 1;
    FUN_140290ea0(param_1 + 0x50);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    DVar6 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0x48) == DVar6) {
LAB_140058419:
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    local_48 = *(uint *)(param_1 + 0x40);
    uStack_44 = *(uint *)(param_1 + 0x44);
    uStack_40 = *(undefined4 *)(param_1 + 0x48);
    uStack_3c = *(undefined4 *)(param_1 + 0x4c);
    iVar5 = FUN_140291150(&local_48,0);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(2);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(char *)(param_1 + 0xe8) != '\0') {
    uVar12 = *(uint *)(param_1 + 0xe4);
    uVar13 = *(uint *)(param_1 + 0xdc);
    uVar14 = *(uint *)(param_1 + 0xe0);
    if (DAT_1404e5290 < 10) {
      pHVar7 = LoadLibraryW(L"dwmapi.dll");
      if (pHVar7 != (HMODULE)0x0) {
        pFVar8 = GetProcAddress(pHVar7,"DwmIsCompositionEnabled");
        pFVar9 = GetProcAddress(pHVar7,(LPCSTR)0x7f);
        pFVar10 = GetProcAddress(pHVar7,(LPCSTR)0x83);
        if ((((pFVar8 != (FARPROC)0x0) && (pFVar9 != (FARPROC)0x0)) && (pFVar10 != (FARPROC)0x0)) &&
           ((*pFVar8)(&local_res8), local_res8 != 0)) {
          uVar12 = ((uVar13 | 0xffffff00) << 8 | uVar14) << 8 | uVar12;
          (*pFVar9)(&local_48);
          local_48 = uVar12;
          uStack_44 = uVar12;
          (*pFVar10)(&local_48,0);
        }
        FreeLibrary(pHVar7);
      }
    }
    else {
      pHVar7 = LoadLibraryW(L"uxtheme.dll");
      if (pHVar7 != (HMODULE)0x0) {
        uVar11 = 0;
        pFVar8 = GetProcAddress(pHVar7,(LPCSTR)0x7a);
        if (pFVar8 != (FARPROC)0x0) {
          fVar16 = (float)(int)uVar13;
          fVar17 = (float)(int)uVar14;
          fVar18 = (float)(int)uVar12;
          fVar15 = (fVar17 * _DAT_1404926d0 + fVar16 * _DAT_140492684 + fVar18 * _DAT_140492650) /
                   DAT_14049290c - _DAT_1404926c4;
          if (0.0 < fVar15) {
            uVar13 = (uint)(fVar16 - fVar16 * fVar15);
            uVar12 = (uint)(fVar18 - fVar18 * fVar15);
            uVar14 = (uint)(fVar17 - fVar17 * fVar15);
          }
          local_res8 = ((uVar12 | 0xffffff00) << 8 | uVar14) << 8 | uVar13;
          local_resc = local_res8;
          (*pFVar8)(&local_res8,CONCAT71((int7)((ulonglong)uVar11 >> 8),1));
        }
        FreeLibrary(pHVar7);
      }
    }
  }
  if (*(int *)(param_1 + 0x48) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140015110();
  }
  FUN_140017240(param_1 + 0x10);
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  return;
}

