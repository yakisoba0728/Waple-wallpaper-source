// Function: FUN_14013c400
// Addr: 14013c400
// Size: 2885 bytes


/* WARNING: Removing unreachable block (ram,0x00014013ca29) */
/* WARNING: Removing unreachable block (ram,0x00014013c864) */
/* WARNING: Removing unreachable block (ram,0x00014013c86a) */
/* WARNING: Removing unreachable block (ram,0x00014013c87b) */
/* WARNING: Removing unreachable block (ram,0x00014013c890) */
/* WARNING: Removing unreachable block (ram,0x00014013c897) */
/* WARNING: Removing unreachable block (ram,0x00014013c89c) */
/* WARNING: Removing unreachable block (ram,0x00014013c8b6) */
/* WARNING: Removing unreachable block (ram,0x00014013c8c8) */
/* WARNING: Removing unreachable block (ram,0x00014013c8dd) */
/* WARNING: Removing unreachable block (ram,0x00014013c8e4) */
/* WARNING: Removing unreachable block (ram,0x00014013c8e9) */
/* WARNING: Removing unreachable block (ram,0x00014013c50f) */
/* WARNING: Removing unreachable block (ram,0x00014013cdab) */
/* WARNING: Removing unreachable block (ram,0x00014013cdb1) */
/* WARNING: Removing unreachable block (ram,0x00014013cdc2) */
/* WARNING: Removing unreachable block (ram,0x00014013cdd7) */
/* WARNING: Removing unreachable block (ram,0x00014013cdde) */
/* WARNING: Removing unreachable block (ram,0x00014013cde3) */
/* WARNING: Removing unreachable block (ram,0x00014013cdfd) */
/* WARNING: Removing unreachable block (ram,0x00014013ce0a) */
/* WARNING: Removing unreachable block (ram,0x00014013ce1f) */
/* WARNING: Removing unreachable block (ram,0x00014013ce26) */
/* WARNING: Removing unreachable block (ram,0x00014013ce2e) */
/* WARNING: Removing unreachable block (ram,0x00014013ce30) */

void FUN_14013c400(longlong param_1)

{
  LPOLESTR pOVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  LPVOID lpMem;
  LPOLESTR pOVar6;
  HRESULT HVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  HANDLE pvVar11;
  undefined8 uVar12;
  LPSTR *****ppppppCVar13;
  LPCWSTR *****ppppppWVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  uint uVar18;
  LPVOID local_res10;
  LPOLESTR local_res18;
  longlong *local_res20;
  undefined1 auStackY_178 [8];
  undefined1 auStackY_170 [24];
  LPCWSTR ****local_138;
  undefined8 uStack_130;
  longlong local_128;
  ulonglong local_120;
  LPSTR ****local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong local_100;
  LPSTR ****local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  undefined4 local_d8;
  LPSTR ****local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  LPSTR ****local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  longlong *local_88;
  LPOLESTR local_80;
  longlong *local_78;
  IID local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar17 = auStackY_178;
  uVar18 = 0;
  local_res10 = (LPVOID)((ulonglong)local_res10 & 0xffffffff00000000);
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  local_res20 = (longlong *)0x0;
  (**(code **)(*plVar3 + 0x38))(plVar3,&local_res20);
  local_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  if (local_res20 != (longlong *)0x0) {
    local_res10 = (LPVOID)((ulonglong)local_res10 & 0xffffffff00000000);
    (**(code **)(*local_res20 + 0x18))(local_res20,&local_res10);
    if ((uint)local_res10 != 0) {
      do {
        local_78 = (longlong *)0x0;
        (**(code **)(*local_res20 + 0x20))(local_res20,uVar18,&DAT_14048af90,&local_78);
        plVar3 = local_78;
        if (local_78 != (longlong *)0x0) {
          local_108 = 0;
          local_e8 = 0;
          local_100 = 0xf;
          local_e0 = 0xf;
          local_d8 = 0xffffffff;
          uStack_110 = 0;
          local_118 = (LPSTR ****)0x0;
          uStack_f0 = 0;
          local_f8 = (LPSTR ****)0x0;
          if (local_78 != (longlong *)0x0) {
            local_70.Data1 = 0;
            local_70.Data2 = 0;
            local_70.Data3 = 0;
            local_70.Data4[0] = '\0';
            local_70.Data4[1] = '\0';
            local_70.Data4[2] = '\0';
            local_70.Data4[3] = '\0';
            local_70.Data4[4] = '\0';
            local_70.Data4[5] = '\0';
            local_70.Data4[6] = '\0';
            local_70.Data4[7] = '\0';
            (**(code **)(*local_78 + 0x20))(local_78,&local_70);
            local_80 = (LPOLESTR)0x0;
            HVar7 = StringFromIID(&local_70,&local_80);
            pOVar6 = local_80;
            if (-1 < HVar7) {
              uVar12 = 0;
              local_138 = (LPCWSTR ****)0x0;
              uStack_130 = 0;
              local_128 = 0;
              local_120 = 0;
              uVar9 = FUN_1402d6aa0(local_80);
              FUN_140016170(&local_138,pOVar6,uVar9);
              if (local_128 == 0) {
LAB_14013c63e:
                local_100 = 0xf;
                uStack_a0 = 0;
                local_a8 = (LPSTR ****)0x0;
              }
              else {
                ppppppWVar14 = &local_138;
                if (7 < local_120) {
                  ppppppWVar14 = (LPCWSTR *****)local_138;
                }
                iVar8 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppppWVar14,(int)local_128,(LPSTR)0x0
                                            ,0,(LPCSTR)0x0,(LPBOOL)0x0);
                if (iVar8 < 1) goto LAB_14013c63e;
                FUN_140016940(&local_c8,(longlong)iVar8,0);
                ppppppCVar13 = &local_c8;
                if (0xf < uStack_b0) {
                  ppppppCVar13 = (LPSTR *****)local_c8;
                }
                ppppppWVar14 = &local_138;
                if (7 < local_120) {
                  ppppppWVar14 = (LPCWSTR *****)local_138;
                }
                WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppppWVar14,(int)local_128,
                                    (LPSTR)ppppppCVar13,iVar8,(LPCSTR)0x0,(LPBOOL)0x0);
                local_a8 = local_c8;
                uStack_a0 = uStack_c0;
                local_100 = uStack_b0;
                uVar12 = local_b8;
              }
              local_118 = local_a8;
              uStack_110 = uStack_a0;
              local_108 = uVar12;
              if (7 < local_120) {
                FUN_140016a90(&local_138,local_138);
              }
              CoTaskMemFree(local_80);
            }
            local_res18 = (LPOLESTR)0x0;
            (**(code **)(*plVar3 + 0x28))(plVar3);
            if (local_res18 != (LPOLESTR)0x0) {
              if (*(int *)(local_res18 + 2) != 0) {
                uVar12 = *(undefined8 *)(local_res18 + 8);
                local_128 = 0;
                local_138 = (LPCWSTR ****)0x0;
                uStack_130 = 0;
                local_120 = 0;
                uVar9 = FUN_1402d6aa0(uVar12);
                FUN_140016170(&local_138,uVar12,uVar9);
                if (local_128 == 0) {
LAB_14013c7a1:
                  local_b8 = 0;
                  uStack_c0 = 0;
                  local_c8 = (LPSTR ****)0x0;
                  uStack_b0 = 0xf;
                }
                else {
                  ppppppWVar14 = &local_138;
                  if (7 < local_120) {
                    ppppppWVar14 = (LPCWSTR *****)local_138;
                  }
                  iVar8 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppppWVar14,(int)local_128,
                                              (LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
                  if (iVar8 < 1) goto LAB_14013c7a1;
                  FUN_140016940(&local_a8,(longlong)iVar8,0);
                  ppppppCVar13 = &local_a8;
                  if (0xf < uStack_90) {
                    ppppppCVar13 = (LPSTR *****)local_a8;
                  }
                  ppppppWVar14 = &local_138;
                  if (7 < local_120) {
                    ppppppWVar14 = (LPCWSTR *****)local_138;
                  }
                  WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppppWVar14,(int)local_128,
                                      (LPSTR)ppppppCVar13,iVar8,(LPCSTR)0x0,(LPBOOL)0x0);
                  local_c8 = local_a8;
                  uStack_c0 = uStack_a0;
                  local_b8 = local_98;
                  uStack_b0 = uStack_90;
                }
                FUN_14000de40(&local_f8,&local_c8);
                if (0xf < uStack_b0) {
                  ppppppCVar13 = (LPSTR *****)local_c8;
                  if ((0xfff < uStack_b0 + 1) &&
                     (ppppppCVar13 = (LPSTR *****)local_c8[-1],
                     (LPSTR)0x1f < (LPSTR)((longlong)local_c8 + (-8 - (longlong)ppppppCVar13))))
                  goto LAB_14013cf34;
                  thunk_FUN_14028af80(ppppppCVar13);
                }
                if (7 < local_120) {
                  FUN_140016a90(&local_138);
                }
              }
              pOVar6 = local_res18;
              if (local_res18 != (LPOLESTR)0x0) {
                LOCK();
                pOVar1 = local_res18 + 0xc;
                iVar8 = *(int *)pOVar1;
                *(int *)pOVar1 = *(int *)pOVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  pvVar11 = GetProcessHeap();
                  HeapFree(pvVar11,0,pOVar6);
                }
                else if (iVar8 + -1 < 0) goto LAB_14013cf3b;
                local_res18 = (LPOLESTR)0x0;
              }
            }
          }
          FUN_14013e530(&local_60,&local_118);
          if (0xf < local_e0) {
            uVar15 = local_e0 + 1;
            ppppppCVar13 = (LPSTR *****)local_f8;
            if (0xfff < uVar15) {
              ppppppCVar13 = (LPSTR *****)local_f8[-1];
              if ((LPSTR)0x1f < (LPSTR)((longlong)local_f8 + (-8 - (longlong)ppppppCVar13)))
              goto LAB_14013cf34;
              uVar15 = local_e0 + 0x28;
            }
            thunk_FUN_14028af80(ppppppCVar13,uVar15);
          }
          if (0xf < local_100) {
            uVar15 = local_100 + 1;
            ppppppCVar13 = (LPSTR *****)local_118;
            if (0xfff < uVar15) {
              ppppppCVar13 = (LPSTR *****)local_118[-1];
              if ((LPSTR)0x1f < (LPSTR)((longlong)local_118 + (-8 - (longlong)ppppppCVar13)))
              goto LAB_14013cf34;
              uVar15 = local_100 + 0x28;
            }
            thunk_FUN_14028af80(ppppppCVar13,uVar15);
          }
          if (local_78 != (longlong *)0x0) {
            (**(code **)(*local_78 + 0x10))();
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < (uint)local_res10);
    }
    if (local_res20 != (longlong *)0x0) {
      (**(code **)(*local_res20 + 0x10))();
      local_res20 = (longlong *)0x0;
    }
  }
  uVar12 = 0;
  local_88 = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))(*(longlong **)(param_1 + 0x28),&local_88);
  plVar3 = local_88;
  local_108 = 0;
  local_100 = 0xf;
  local_e8 = 0;
  uVar15 = 0xf;
  local_e0 = 0xf;
  local_d8 = 0xffffffff;
  uStack_110 = 0;
  local_118 = (LPSTR ****)0x0;
  uStack_f0 = 0;
  local_f8 = (LPSTR ****)0x0;
  if (local_88 != (longlong *)0x0) {
    local_70.Data1 = 0;
    local_70.Data2 = 0;
    local_70.Data3 = 0;
    local_70.Data4[0] = '\0';
    local_70.Data4[1] = '\0';
    local_70.Data4[2] = '\0';
    local_70.Data4[3] = '\0';
    local_70.Data4[4] = '\0';
    local_70.Data4[5] = '\0';
    local_70.Data4[6] = '\0';
    local_70.Data4[7] = '\0';
    (**(code **)(*local_88 + 0x20))(local_88,&local_70);
    local_res18 = (LPOLESTR)0x0;
    HVar7 = StringFromIID(&local_70,&local_res18);
    pOVar6 = local_res18;
    if (-1 < HVar7) {
      local_128 = 0;
      local_138 = (LPCWSTR ****)0x0;
      uStack_130 = 0;
      local_120 = 0;
      uVar9 = FUN_1402d6aa0(local_res18);
      FUN_140016170(&local_138,pOVar6,uVar9);
      if (local_128 == 0) {
LAB_14013cb4e:
        uStack_c0 = 0;
        local_c8 = (LPSTR ****)0x0;
        local_100 = 0xf;
      }
      else {
        ppppppWVar14 = &local_138;
        if (7 < local_120) {
          ppppppWVar14 = (LPCWSTR *****)local_138;
        }
        iVar8 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppppWVar14,(int)local_128,(LPSTR)0x0,0,
                                    (LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar8 < 1) goto LAB_14013cb4e;
        FUN_140016940(&local_a8,(longlong)iVar8,0);
        ppppppCVar13 = &local_a8;
        if (0xf < uStack_90) {
          ppppppCVar13 = (LPSTR *****)local_a8;
        }
        ppppppWVar14 = &local_138;
        if (7 < local_120) {
          ppppppWVar14 = (LPCWSTR *****)local_138;
        }
        WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppppWVar14,(int)local_128,(LPSTR)ppppppCVar13,iVar8,
                            (LPCSTR)0x0,(LPBOOL)0x0);
        local_c8 = local_a8;
        uStack_c0 = uStack_a0;
        local_100 = uStack_90;
        uVar12 = local_98;
      }
      uStack_110 = uStack_c0;
      local_118 = local_c8;
      local_108 = uVar12;
      if (7 < local_120) {
        uVar16 = local_120 * 2 + 2;
        ppppppWVar14 = (LPCWSTR *****)local_138;
        if (0xfff < uVar16) {
          ppppppWVar14 = (LPCWSTR *****)local_138[-1];
          if (0x1f < (ulonglong)((longlong)local_138 + (-8 - (longlong)ppppppWVar14)))
          goto LAB_14013cf34;
          uVar16 = local_120 * 2 + 0x29;
        }
        thunk_FUN_14028af80(ppppppWVar14,uVar16);
      }
      CoTaskMemFree(local_res18);
    }
    local_res10 = (LPVOID)0x0;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    if (local_res10 != (LPVOID)0x0) {
      uVar12 = 0;
      if (*(int *)((longlong)local_res10 + 4) != 0) {
        uVar9 = *(undefined8 *)((longlong)local_res10 + 0x10);
        local_128 = 0;
        local_138 = (LPCWSTR ****)0x0;
        uStack_130 = 0;
        local_120 = 0;
        uVar10 = FUN_1402d6aa0(uVar9);
        FUN_140016170(&local_138,uVar9,uVar10);
        if (local_128 == 0) {
LAB_14013ccff:
          uStack_c0 = 0;
          local_c8 = (LPSTR ****)0x0;
        }
        else {
          ppppppWVar14 = &local_138;
          if (7 < local_120) {
            ppppppWVar14 = (LPCWSTR *****)local_138;
          }
          iVar8 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppppWVar14,(int)local_128,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar8 < 1) goto LAB_14013ccff;
          FUN_140016940(&local_a8,(longlong)iVar8,0);
          ppppppCVar13 = &local_a8;
          if (0xf < uStack_90) {
            ppppppCVar13 = (LPSTR *****)local_a8;
          }
          ppppppWVar14 = &local_138;
          if (7 < local_120) {
            ppppppWVar14 = (LPCWSTR *****)local_138;
          }
          WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppppWVar14,(int)local_128,(LPSTR)ppppppCVar13,
                              iVar8,(LPCSTR)0x0,(LPBOOL)0x0);
          local_c8 = local_a8;
          uStack_c0 = uStack_a0;
          uVar12 = local_98;
          uVar15 = uStack_90;
        }
        local_f8 = local_c8;
        uStack_f0 = uStack_c0;
        local_e8 = uVar12;
        local_e0 = uVar15;
        if (7 < local_120) {
          ppppppWVar14 = (LPCWSTR *****)local_138;
          if ((0xfff < local_120 * 2 + 2) &&
             (ppppppWVar14 = (LPCWSTR *****)local_138[-1],
             0x1f < (ulonglong)((longlong)local_138 + (-8 - (longlong)ppppppWVar14))))
          goto LAB_14013cf34;
          thunk_FUN_14028af80(ppppppWVar14);
        }
      }
      lpMem = local_res10;
      if (local_res10 != (LPVOID)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_res10 + 0x18);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          pvVar11 = GetProcessHeap();
          HeapFree(pvVar11,0,lpMem);
        }
        else if (iVar8 + -1 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402c97e4();
        }
        local_res10 = (LPVOID)0x0;
      }
    }
  }
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
    local_88 = (longlong *)0x0;
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  lVar4 = *plVar3;
  uVar12 = FUN_140016fc0(&local_a8,&local_118);
  (**(code **)(lVar4 + 8))(plVar3,&local_60,uVar12);
  if (0xf < local_e0) {
    uVar15 = local_e0 + 1;
    ppppppCVar13 = (LPSTR *****)local_f8;
    if (0xfff < uVar15) {
      ppppppCVar13 = (LPSTR *****)local_f8[-1];
      if ((LPSTR)0x1f < (LPSTR)((longlong)local_f8 + (-8 - (longlong)ppppppCVar13)))
      goto LAB_14013cf34;
      uVar15 = local_e0 + 0x28;
    }
    thunk_FUN_14028af80(ppppppCVar13,uVar15);
  }
  if (0xf < local_100) {
    uVar15 = local_100 + 1;
    ppppppCVar13 = (LPSTR *****)local_118;
    if (0xfff < uVar15) {
      ppppppCVar13 = (LPSTR *****)local_118[-1];
      if ((LPSTR)0x1f < (LPSTR)((longlong)local_118 + (-8 - (longlong)ppppppCVar13))) {
LAB_14013cf34:
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar17 = auStackY_170;
LAB_14013cf3b:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar17 + -8) = &UNK_14013cf40;
        FUN_1402c97e4();
      }
      uVar15 = local_100 + 0x28;
    }
    thunk_FUN_14028af80(ppppppCVar13,uVar15);
  }
  FUN_140031890(&local_60);
  return;
}

