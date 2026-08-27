// Function: FUN_1400547e0
// Addr: 1400547e0
// Size: 1942 bytes


void FUN_1400547e0(longlong param_1,int param_2,undefined8 *param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  BOOL BVar5;
  undefined8 *puVar6;
  HMODULE hModule;
  FARPROC pFVar7;
  char *pcVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  LPCWSTR ****pppppWVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  longlong *unaff_R15;
  DWORD local_res10 [2];
  undefined8 *local_res18;
  longlong local_res20;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  LPCWSTR ***local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  longlong local_58 [3];
  ulonglong local_40;
  
  puVar19 = auStack_98;
  plVar15 = (longlong *)0x0;
  plVar17 = plVar15;
  local_res18 = param_3;
  if (0 < param_2) {
    do {
      puVar6 = param_3;
      if (DAT_1404e7e8b != '\0') goto LAB_140054f38;
      Sleep(100);
      uVar16 = (int)plVar17 + 100;
      plVar17 = (longlong *)(ulonglong)uVar16;
    } while ((int)uVar16 < param_2);
  }
  cVar3 = *(char *)((longlong)*(longlong **)*param_3 + 0x19);
  plVar17 = *(longlong **)*param_3;
  puVar6 = local_res18;
  while (local_res18 = puVar6, cVar3 == '\0') {
    if (DAT_1404e7e8b != '\0') goto LAB_140054f38;
    if ((char)plVar17[0xe] != '\0') {
      local_res10[0] = 0;
      SetThreadErrorMode(1,local_res10);
      plVar18 = plVar17 + 10;
      puVar6 = (undefined8 *)FUN_140005880(local_58);
      local_78 = (LPCWSTR ***)*puVar6;
      uStack_70 = puVar6[1];
      local_68 = puVar6[2];
      uStack_60 = puVar6[3];
      puVar6[2] = 0;
      puVar6[3] = 7;
      *(undefined2 *)puVar6 = 0;
      if (7 < local_40) {
        lVar12 = local_58[0];
        if ((0xfff < local_40 * 2 + 2) &&
           (lVar12 = *(longlong *)(local_58[0] + -8), 0x1f < (local_58[0] - lVar12) - 8U))
        goto LAB_140054b4c;
        thunk_FUN_14028af80(lVar12);
      }
      pppppWVar13 = &local_78;
      if (7 < uStack_60) {
        pppppWVar13 = (LPCWSTR ****)local_78;
      }
      hModule = LoadLibraryExW((LPCWSTR)pppppWVar13,(HANDLE)0x0,0x1000);
      if (hModule == (HMODULE)0x0) {
        GetLastError();
        FUN_140098760("Error loading library %S (%i).\n",pppppWVar13);
      }
      if (7 < uStack_60) {
        pppppWVar13 = (LPCWSTR ****)local_78;
        if ((0xfff < uStack_60 * 2 + 2) &&
           (pppppWVar13 = (LPCWSTR ****)local_78[-1],
           0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pppppWVar13)))) {
LAB_140054b4c:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar19 = auStack_90;
          goto LAB_140054b53;
        }
        thunk_FUN_14028af80(pppppWVar13);
      }
      local_68 = 0;
      uStack_60 = 7;
      local_78 = (LPCWSTR ***)((ulonglong)local_78 & 0xffffffffffff0000);
      GetLastError();
      SetThreadErrorMode(local_res10[0],(LPDWORD)0x0);
      if (hModule == (HMODULE)0x0) {
        if (0xf < (ulonglong)plVar17[0xd]) {
          plVar18 = (longlong *)*plVar18;
        }
        FUN_140098760("Cannot load plugin %s, %i.\n",plVar18);
      }
      else {
        plVar17[8] = (longlong)hModule;
        pFVar7 = GetProcAddress(hModule,"GetWPExtPluginVersion");
        if (pFVar7 != (FARPROC)0x0) {
          pcVar8 = (char *)(*pFVar7)();
          if (((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) ||
             (iVar4 = FUN_1402c10d0(pcVar8,"pluginAlphaDev0007"), iVar4 != 0)) {
            if (0xf < (ulonglong)plVar17[0xd]) {
              plVar18 = (longlong *)*plVar18;
            }
            FUN_140098760("Wrong plugin version %s.\n",plVar18);
          }
          else {
            pFVar7 = GetProcAddress(hModule,"CreateWPExtPlugin");
            if (pFVar7 != (FARPROC)0x0) {
              plVar9 = (longlong *)(*pFVar7)(param_1);
              plVar17[9] = (longlong)plVar9;
              if (plVar9 != (longlong *)0x0) {
                (**(code **)(*plVar9 + 8))(plVar9);
                if (0xf < (ulonglong)plVar17[0xd]) {
                  plVar18 = (longlong *)*plVar18;
                }
                FUN_140098b00("Loaded plugin %s.\n",plVar18);
              }
            }
          }
        }
      }
    }
    plVar18 = (longlong *)plVar17[2];
    if (*(char *)((longlong)plVar18 + 0x19) == '\0') {
      cVar3 = *(char *)(*plVar18 + 0x19);
      while (cVar3 == '\0') {
        plVar18 = (longlong *)*plVar18;
        cVar3 = *(char *)(*plVar18 + 0x19);
      }
    }
    else {
      cVar3 = *(char *)(plVar17[1] + 0x19);
      plVar9 = (longlong *)plVar17[1];
      while ((plVar18 = plVar9, cVar3 == '\0' && (plVar17 == (longlong *)plVar18[2]))) {
        cVar3 = *(char *)(plVar18[1] + 0x19);
        plVar9 = (longlong *)plVar18[1];
        plVar17 = plVar18;
      }
    }
    plVar17 = plVar18;
    param_3 = local_res18;
    puVar6 = local_res18;
    cVar3 = *(char *)((longlong)plVar18 + 0x19);
  }
  local_res20 = param_1 + 0x28;
  iVar4 = FUN_140290d80(local_res20);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x74) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x74) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  plVar9 = *(longlong **)*param_3;
  puVar20 = auStack_98;
  if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
    do {
      bVar2 = false;
      plVar10 = *(longlong **)(param_1 + 8);
      plVar15 = (longlong *)plVar10[1];
      cVar3 = *(char *)((longlong)plVar15 + 0x19);
      unaff_R15 = plVar10;
      plVar18 = plVar15;
      plVar17 = plVar9;
      while (cVar3 == '\0') {
        *(undefined8 *)(puVar19 + -8) = 0x140054b40;
        cVar3 = FUN_140038c30(plVar18 + 4,plVar17 + 4);
        plVar15 = plVar18;
        if (cVar3 < '\0') {
          plVar9 = (longlong *)plVar18[2];
          bVar2 = false;
        }
        else {
LAB_140054b53:
          bVar2 = true;
          plVar9 = (longlong *)*plVar18;
          plVar10 = plVar18;
        }
        plVar18 = plVar9;
        cVar3 = *(char *)((longlong)plVar9 + 0x19);
      }
      if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
        *(undefined8 *)(puVar19 + -8) = 0x140054b82;
        cVar3 = FUN_140038c30(plVar17 + 4,plVar10 + 4);
        if (cVar3 < '\0') goto LAB_140054b8a;
      }
      else {
LAB_140054b8a:
        if (*(longlong *)(param_1 + 0x10) == 0x222222222222222) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar19 + -8) = &UNK_140054f5c;
          FUN_14003a750();
        }
        *(undefined8 *)(puVar19 + -8) = 0x140054ba8;
        plVar10 = (longlong *)FUN_14028af20(0x78);
        *(undefined8 *)(puVar19 + -8) = 0x140054bb8;
        FUN_140016fc0(plVar10 + 4,plVar17 + 4);
        plVar10[8] = 0;
        plVar10[9] = 0;
        plVar10[0xe] = 0;
        plVar10[10] = 0;
        plVar10[0xb] = 0;
        plVar10[0xc] = 0;
        plVar10[0xd] = 0xf;
        *(undefined1 *)(plVar10 + 10) = 0;
        *plVar10 = (longlong)unaff_R15;
        plVar10[1] = (longlong)unaff_R15;
        plVar10[2] = (longlong)unaff_R15;
        *(undefined2 *)(plVar10 + 3) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
        plVar18 = *(longlong **)(param_1 + 8);
        plVar10[1] = (longlong)plVar15;
        if (plVar15 == plVar18) {
          *plVar18 = (longlong)plVar10;
          plVar18[1] = (longlong)plVar10;
          plVar18[2] = (longlong)plVar10;
          *(undefined1 *)(plVar10 + 3) = 1;
        }
        else {
          if (bVar2) {
            *plVar15 = (longlong)plVar10;
            if (plVar15 == (longlong *)*plVar18) {
              *plVar18 = (longlong)plVar10;
            }
          }
          else {
            plVar15[2] = (longlong)plVar10;
            if (plVar15 == (longlong *)plVar18[2]) {
              plVar18[2] = (longlong)plVar10;
            }
          }
          cVar3 = *(char *)(plVar10[1] + 0x18);
          plVar15 = plVar10;
          while (cVar3 == '\0') {
            plVar9 = (longlong *)plVar15[1];
            plVar14 = *(longlong **)plVar9[1];
            if (plVar9 == plVar14) {
              lVar12 = ((undefined8 *)plVar9[1])[2];
              if (*(char *)(lVar12 + 0x18) == '\0') {
                *(undefined1 *)(plVar9 + 3) = 1;
                *(undefined1 *)(lVar12 + 0x18) = 1;
                *(undefined1 *)(*(longlong *)(plVar15[1] + 8) + 0x18) = 0;
                plVar15 = *(longlong **)(plVar15[1] + 8);
              }
              else {
                plVar14 = (longlong *)plVar9[2];
                plVar11 = plVar9;
                if (plVar15 == plVar14) {
                  plVar9[2] = *plVar14;
                  if (*(char *)(*plVar14 + 0x19) == '\0') {
                    *(longlong **)(*plVar14 + 8) = plVar9;
                  }
                  plVar14[1] = plVar9[1];
                  if (plVar9 == *(longlong **)(*(longlong *)(param_1 + 8) + 8)) {
                    *(longlong **)(*(longlong *)(param_1 + 8) + 8) = plVar14;
                  }
                  else {
                    puVar6 = (undefined8 *)plVar9[1];
                    if (plVar9 == (longlong *)*puVar6) {
                      *puVar6 = plVar14;
                    }
                    else {
                      puVar6[2] = plVar14;
                    }
                  }
                  *plVar14 = (longlong)plVar9;
                  plVar9[1] = (longlong)plVar14;
                  plVar11 = plVar14;
                  plVar15 = plVar9;
                }
                *(undefined1 *)(plVar11 + 3) = 1;
                *(undefined1 *)(*(longlong *)(plVar15[1] + 8) + 0x18) = 0;
                plVar9 = *(longlong **)(plVar15[1] + 8);
                plVar14 = (longlong *)*plVar9;
                *plVar9 = plVar14[2];
                if (*(char *)(plVar14[2] + 0x19) == '\0') {
                  *(longlong **)(plVar14[2] + 8) = plVar9;
                }
                plVar14[1] = plVar9[1];
                if (plVar9 == *(longlong **)(*(longlong *)(param_1 + 8) + 8)) {
                  *(longlong **)(*(longlong *)(param_1 + 8) + 8) = plVar14;
                  plVar14[2] = (longlong)plVar9;
                }
                else {
                  plVar11 = (longlong *)plVar9[1];
                  if (plVar9 == (longlong *)plVar11[2]) {
                    plVar11[2] = (longlong)plVar14;
                    plVar14[2] = (longlong)plVar9;
                  }
                  else {
                    *plVar11 = (longlong)plVar14;
                    plVar14[2] = (longlong)plVar9;
                  }
                }
LAB_140054e43:
                plVar9[1] = (longlong)plVar14;
              }
            }
            else {
              if ((char)plVar14[3] != '\0') {
                plVar14 = (longlong *)*plVar9;
                plVar11 = plVar9;
                if (plVar15 == plVar14) {
                  *plVar9 = plVar14[2];
                  if (*(char *)(plVar14[2] + 0x19) == '\0') {
                    *(longlong **)(plVar14[2] + 8) = plVar9;
                  }
                  plVar14[1] = plVar9[1];
                  plVar11 = plVar14;
                  if (plVar9 == *(longlong **)(*(longlong *)(param_1 + 8) + 8)) {
                    *(longlong **)(*(longlong *)(param_1 + 8) + 8) = plVar14;
                    plVar14[2] = (longlong)plVar9;
                    plVar9[1] = (longlong)plVar14;
                    plVar15 = plVar9;
                  }
                  else {
                    puVar6 = (undefined8 *)plVar9[1];
                    if (plVar9 == (longlong *)puVar6[2]) {
                      puVar6[2] = plVar14;
                      plVar14[2] = (longlong)plVar9;
                      plVar9[1] = (longlong)plVar14;
                      plVar15 = plVar9;
                    }
                    else {
                      *puVar6 = plVar14;
                      plVar14[2] = (longlong)plVar9;
                      plVar9[1] = (longlong)plVar14;
                      plVar15 = plVar9;
                    }
                  }
                }
                *(undefined1 *)(plVar11 + 3) = 1;
                *(undefined1 *)(*(longlong *)(plVar15[1] + 8) + 0x18) = 0;
                plVar9 = *(longlong **)(plVar15[1] + 8);
                plVar14 = (longlong *)plVar9[2];
                plVar9[2] = *plVar14;
                if (*(char *)(*plVar14 + 0x19) == '\0') {
                  *(longlong **)(*plVar14 + 8) = plVar9;
                }
                plVar14[1] = plVar9[1];
                if (plVar9 == *(longlong **)(*(longlong *)(param_1 + 8) + 8)) {
                  *(longlong **)(*(longlong *)(param_1 + 8) + 8) = plVar14;
                }
                else {
                  puVar6 = (undefined8 *)plVar9[1];
                  if (plVar9 == (longlong *)*puVar6) {
                    *puVar6 = plVar14;
                  }
                  else {
                    puVar6[2] = plVar14;
                  }
                }
                *plVar14 = (longlong)plVar9;
                goto LAB_140054e43;
              }
              *(undefined1 *)(plVar9 + 3) = 1;
              *(undefined1 *)(plVar14 + 3) = 1;
              *(undefined1 *)(*(longlong *)(plVar15[1] + 8) + 0x18) = 0;
              plVar15 = *(longlong **)(plVar15[1] + 8);
            }
            cVar3 = *(char *)(plVar15[1] + 0x18);
          }
          *(undefined1 *)(plVar18[1] + 0x18) = 1;
        }
      }
      plVar10[8] = plVar17[8];
      plVar10[9] = plVar17[9];
      if (plVar10 != plVar17) {
        plVar15 = plVar17 + 10;
        if (0xf < (ulonglong)plVar17[0xd]) {
          plVar15 = (longlong *)*plVar15;
        }
        *(undefined8 *)(puVar19 + -8) = 0x140054e90;
        FUN_14000f880(plVar10 + 10,plVar15);
      }
      *(char *)(plVar10 + 0xe) = (char)plVar17[0xe];
      plVar9 = (longlong *)plVar17[2];
      if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
        cVar3 = *(char *)(*plVar9 + 0x19);
        while (cVar3 == '\0') {
          plVar9 = (longlong *)*plVar9;
          cVar3 = *(char *)(*plVar9 + 0x19);
        }
      }
      else {
        cVar3 = *(char *)(plVar17[1] + 0x19);
        plVar15 = (longlong *)plVar17[1];
        while ((plVar9 = plVar15, cVar3 == '\0' && (plVar17 == (longlong *)plVar9[2]))) {
          cVar3 = *(char *)(plVar9[1] + 0x19);
          plVar15 = (longlong *)plVar9[1];
          plVar17 = plVar9;
        }
      }
    } while (*(char *)((longlong)plVar9 + 0x19) == '\0');
    param_3 = *(undefined8 **)(puVar19 + 0xb0);
    puVar20 = puVar19;
  }
  *(undefined8 *)(puVar20 + -8) = 0x140054f05;
  FUN_140290ea0(*(undefined8 *)(puVar20 + 0xb8));
  *(undefined8 *)(puVar20 + -8) = 0x140054f12;
  BVar5 = IsWindow(DAT_1404e5280);
  puVar6 = param_3;
  if (BVar5 != 0) {
    *(undefined8 *)(puVar20 + -8) = 0x140054f2e;
    PostMessageW(DAT_1404e5280,0x40f,0,0);
  }
LAB_140054f38:
  FUN_140056cf0(puVar6);
  return;
}

