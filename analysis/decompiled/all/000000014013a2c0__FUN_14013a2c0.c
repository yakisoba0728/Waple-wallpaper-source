// Function: FUN_14013a2c0
// Addr: 14013a2c0
// Size: 2959 bytes


/* WARNING: Removing unreachable block (ram,0x00014013a906) */
/* WARNING: Removing unreachable block (ram,0x00014013a74d) */
/* WARNING: Removing unreachable block (ram,0x00014013a753) */
/* WARNING: Removing unreachable block (ram,0x00014013a764) */
/* WARNING: Removing unreachable block (ram,0x00014013a779) */
/* WARNING: Removing unreachable block (ram,0x00014013a780) */
/* WARNING: Removing unreachable block (ram,0x00014013a785) */
/* WARNING: Removing unreachable block (ram,0x00014013a79b) */
/* WARNING: Removing unreachable block (ram,0x00014013a7ad) */
/* WARNING: Removing unreachable block (ram,0x00014013a7c2) */
/* WARNING: Removing unreachable block (ram,0x00014013a7c9) */
/* WARNING: Removing unreachable block (ram,0x00014013a7ce) */
/* WARNING: Removing unreachable block (ram,0x00014013a3d0) */
/* WARNING: Removing unreachable block (ram,0x00014013acbc) */
/* WARNING: Removing unreachable block (ram,0x00014013acc2) */
/* WARNING: Removing unreachable block (ram,0x00014013acd3) */
/* WARNING: Removing unreachable block (ram,0x00014013ace8) */
/* WARNING: Removing unreachable block (ram,0x00014013acef) */
/* WARNING: Removing unreachable block (ram,0x00014013acf4) */
/* WARNING: Removing unreachable block (ram,0x00014013ad0a) */
/* WARNING: Removing unreachable block (ram,0x00014013ad17) */
/* WARNING: Removing unreachable block (ram,0x00014013ad2c) */
/* WARNING: Removing unreachable block (ram,0x00014013ad33) */
/* WARNING: Removing unreachable block (ram,0x00014013ad3b) */
/* WARNING: Removing unreachable block (ram,0x00014013ad3d) */

void FUN_14013a2c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  LPVOID lpMem;
  LPOLESTR pOVar6;
  LPOLESTR pOVar7;
  HRESULT HVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  HANDLE pvVar12;
  undefined8 uVar13;
  LPSTR *****ppppppCVar14;
  LPCWSTR *****ppppppWVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  uint uVar19;
  LPVOID local_res10;
  longlong *local_res18;
  longlong *local_res20;
  undefined1 auStackY_188 [8];
  undefined1 auStackY_180 [24];
  LPCWSTR ****local_148;
  undefined8 uStack_140;
  longlong local_138;
  ulonglong local_130;
  LPOLESTR local_128 [2];
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
  longlong *local_80;
  LPOLESTR local_78;
  IID local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar18 = auStackY_188;
  uVar19 = 0;
  local_res10 = (LPVOID)((ulonglong)local_res10 & 0xffffffff00000000);
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  local_res18 = (longlong *)0x0;
  (**(code **)(*plVar3 + 0x38))(plVar3,&local_res18);
  local_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  if (local_res18 != (longlong *)0x0) {
    local_res10 = (LPVOID)((ulonglong)local_res10 & 0xffffffff00000000);
    (**(code **)(*local_res18 + 0x18))(local_res18,&local_res10);
    if ((uint)local_res10 != 0) {
      do {
        local_128[0] = (LPOLESTR)0x0;
        (**(code **)(*local_res18 + 0x20))(local_res18,uVar19,&DAT_14048b058,local_128);
        pOVar6 = local_128[0];
        if (local_128[0] != (LPOLESTR)0x0) {
          local_108 = 0;
          local_e8 = 0;
          local_100 = 0xf;
          local_e0 = 0xf;
          local_d8 = 0xffffffff;
          uStack_110 = 0;
          local_118 = (LPSTR ****)0x0;
          uStack_f0 = 0;
          local_f8 = (LPSTR ****)0x0;
          if (local_128[0] != (LPOLESTR)0x0) {
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
            (**(code **)(*(longlong *)local_128[0] + 0x20))(local_128[0],&local_70);
            local_78 = (LPOLESTR)0x0;
            HVar8 = StringFromIID(&local_70,&local_78);
            pOVar7 = local_78;
            if (-1 < HVar8) {
              uVar13 = 0;
              local_148 = (LPCWSTR ****)0x0;
              uStack_140 = 0;
              local_138 = 0;
              local_130 = 0;
              uVar10 = FUN_1402d6aa0(local_78);
              FUN_140016170(&local_148,pOVar7,uVar10);
              if (local_138 == 0) {
LAB_14013a4fd:
                local_100 = 0xf;
                uStack_a0 = 0;
                local_a8 = (LPSTR ****)0x0;
              }
              else {
                ppppppWVar15 = &local_148;
                if (7 < local_130) {
                  ppppppWVar15 = (LPCWSTR *****)local_148;
                }
                iVar9 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppppWVar15,(int)local_138,(LPSTR)0x0
                                            ,0,(LPCSTR)0x0,(LPBOOL)0x0);
                if (iVar9 < 1) goto LAB_14013a4fd;
                FUN_140016940(&local_c8,(longlong)iVar9,0);
                ppppppCVar14 = &local_c8;
                if (0xf < uStack_b0) {
                  ppppppCVar14 = (LPSTR *****)local_c8;
                }
                ppppppWVar15 = &local_148;
                if (7 < local_130) {
                  ppppppWVar15 = (LPCWSTR *****)local_148;
                }
                WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppppWVar15,(int)local_138,
                                    (LPSTR)ppppppCVar14,iVar9,(LPCSTR)0x0,(LPBOOL)0x0);
                local_a8 = local_c8;
                uStack_a0 = uStack_c0;
                local_100 = uStack_b0;
                uVar13 = local_b8;
              }
              local_118 = local_a8;
              uStack_110 = uStack_a0;
              local_108 = uVar13;
              if (7 < local_130) {
                FUN_140016a90(&local_148,local_148);
              }
              CoTaskMemFree(local_78);
            }
            local_88 = (longlong *)0x0;
            (*(code *)**(undefined8 **)pOVar6)(pOVar6,&DAT_14048b118,&local_88);
            if (local_88 != (longlong *)0x0) {
              local_res20 = (longlong *)0x0;
              (**(code **)(*local_88 + 0x28))();
              if (local_res20 != (longlong *)0x0) {
                if (*(int *)((longlong)local_res20 + 4) != 0) {
                  lVar4 = local_res20[2];
                  local_138 = 0;
                  local_148 = (LPCWSTR ****)0x0;
                  uStack_140 = 0;
                  local_130 = 0;
                  uVar13 = FUN_1402d6aa0(lVar4);
                  FUN_140016170(&local_148,lVar4,uVar13);
                  if (local_138 == 0) {
LAB_14013a67f:
                    local_b8 = 0;
                    uStack_c0 = 0;
                    local_c8 = (LPSTR ****)0x0;
                    uStack_b0 = 0xf;
                  }
                  else {
                    ppppppWVar15 = &local_148;
                    if (7 < local_130) {
                      ppppppWVar15 = (LPCWSTR *****)local_148;
                    }
                    iVar9 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppppWVar15,(int)local_138,
                                                (LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
                    if (iVar9 < 1) goto LAB_14013a67f;
                    FUN_140016940(&local_a8,(longlong)iVar9,0);
                    ppppppCVar14 = &local_a8;
                    if (0xf < uStack_90) {
                      ppppppCVar14 = (LPSTR *****)local_a8;
                    }
                    ppppppWVar15 = &local_148;
                    if (7 < local_130) {
                      ppppppWVar15 = (LPCWSTR *****)local_148;
                    }
                    WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppppWVar15,(int)local_138,
                                        (LPSTR)ppppppCVar14,iVar9,(LPCSTR)0x0,(LPBOOL)0x0);
                    local_c8 = local_a8;
                    uStack_c0 = uStack_a0;
                    local_b8 = local_98;
                    uStack_b0 = uStack_90;
                  }
                  FUN_14000de40(&local_f8,&local_c8);
                  if (0xf < uStack_b0) {
                    ppppppCVar14 = (LPSTR *****)local_c8;
                    if ((0xfff < uStack_b0 + 1) &&
                       (ppppppCVar14 = (LPSTR *****)local_c8[-1],
                       (LPSTR)0x1f < (LPSTR)((longlong)local_c8 + (-8 - (longlong)ppppppCVar14))))
                    goto LAB_14013ae3e;
                    thunk_FUN_14028af80(ppppppCVar14);
                  }
                  if (7 < local_130) {
                    FUN_140016a90(&local_148);
                  }
                }
                plVar3 = local_res20;
                if (local_res20 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_res20 + 3;
                  lVar4 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar4 == 1) {
                    pvVar12 = GetProcessHeap();
                    HeapFree(pvVar12,0,plVar3);
                  }
                  else if ((int)lVar4 + -1 < 0) goto LAB_14013ae45;
                }
              }
              if (local_88 != (longlong *)0x0) {
                (**(code **)(*local_88 + 0x10))();
                local_88 = (longlong *)0x0;
              }
            }
          }
          FUN_14013e530(&local_60,&local_118);
          if (0xf < local_e0) {
            uVar16 = local_e0 + 1;
            ppppppCVar14 = (LPSTR *****)local_f8;
            if (0xfff < uVar16) {
              ppppppCVar14 = (LPSTR *****)local_f8[-1];
              if ((LPSTR)0x1f < (LPSTR)((longlong)local_f8 + (-8 - (longlong)ppppppCVar14)))
              goto LAB_14013ae3e;
              uVar16 = local_e0 + 0x28;
            }
            thunk_FUN_14028af80(ppppppCVar14,uVar16);
          }
          if (0xf < local_100) {
            uVar16 = local_100 + 1;
            ppppppCVar14 = (LPSTR *****)local_118;
            if (0xfff < uVar16) {
              ppppppCVar14 = (LPSTR *****)local_118[-1];
              if ((LPSTR)0x1f < (LPSTR)((longlong)local_118 + (-8 - (longlong)ppppppCVar14)))
              goto LAB_14013ae3e;
              uVar16 = local_100 + 0x28;
            }
            thunk_FUN_14028af80(ppppppCVar14,uVar16);
          }
          if (local_128[0] != (LPOLESTR)0x0) {
            (**(code **)(*(longlong *)local_128[0] + 0x10))();
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < (uint)local_res10);
    }
    if (local_res18 != (longlong *)0x0) {
      (**(code **)(*local_res18 + 0x10))();
      local_res18 = (longlong *)0x0;
    }
  }
  uVar13 = 0;
  local_80 = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))(*(longlong **)(param_1 + 0x28),&local_80);
  plVar3 = local_80;
  local_108 = 0;
  local_100 = 0xf;
  local_e8 = 0;
  uVar16 = 0xf;
  local_e0 = 0xf;
  local_d8 = 0xffffffff;
  uStack_110 = 0;
  local_118 = (LPSTR ****)0x0;
  uStack_f0 = 0;
  local_f8 = (LPSTR ****)0x0;
  if (local_80 != (longlong *)0x0) {
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
    (**(code **)(*local_80 + 0x20))(local_80,&local_70);
    local_128[0] = (LPOLESTR)0x0;
    HVar8 = StringFromIID(&local_70,local_128);
    pOVar6 = local_128[0];
    if (-1 < HVar8) {
      local_138 = 0;
      local_148 = (LPCWSTR ****)0x0;
      uStack_140 = 0;
      local_130 = 0;
      uVar10 = FUN_1402d6aa0(local_128[0]);
      FUN_140016170(&local_148,pOVar6,uVar10);
      if (local_138 == 0) {
LAB_14013aa24:
        uStack_c0 = 0;
        local_c8 = (LPSTR ****)0x0;
        local_100 = 0xf;
      }
      else {
        ppppppWVar15 = &local_148;
        if (7 < local_130) {
          ppppppWVar15 = (LPCWSTR *****)local_148;
        }
        iVar9 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppppWVar15,(int)local_138,(LPSTR)0x0,0,
                                    (LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar9 < 1) goto LAB_14013aa24;
        FUN_140016940(&local_a8,(longlong)iVar9,0);
        ppppppCVar14 = &local_a8;
        if (0xf < uStack_90) {
          ppppppCVar14 = (LPSTR *****)local_a8;
        }
        ppppppWVar15 = &local_148;
        if (7 < local_130) {
          ppppppWVar15 = (LPCWSTR *****)local_148;
        }
        WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppppWVar15,(int)local_138,(LPSTR)ppppppCVar14,iVar9,
                            (LPCSTR)0x0,(LPBOOL)0x0);
        local_c8 = local_a8;
        uStack_c0 = uStack_a0;
        local_100 = uStack_90;
        uVar13 = local_98;
      }
      uStack_110 = uStack_c0;
      local_118 = local_c8;
      local_108 = uVar13;
      if (7 < local_130) {
        uVar17 = local_130 * 2 + 2;
        ppppppWVar15 = (LPCWSTR *****)local_148;
        if (0xfff < uVar17) {
          ppppppWVar15 = (LPCWSTR *****)local_148[-1];
          if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)ppppppWVar15)))
          goto LAB_14013ae3e;
          uVar17 = local_130 * 2 + 0x29;
        }
        thunk_FUN_14028af80(ppppppWVar15,uVar17);
      }
      CoTaskMemFree(local_128[0]);
    }
    local_res20 = (longlong *)0x0;
    (**(code **)*plVar3)(plVar3,&DAT_14048b118,&local_res20);
    uVar13 = 0;
    if (local_res20 != (longlong *)0x0) {
      local_res10 = (LPVOID)0x0;
      (**(code **)(*local_res20 + 0x28))();
      if (local_res10 != (LPVOID)0x0) {
        if (*(int *)((longlong)local_res10 + 4) != 0) {
          uVar10 = *(undefined8 *)((longlong)local_res10 + 0x10);
          local_138 = 0;
          local_148 = (LPCWSTR ****)0x0;
          uStack_140 = 0;
          local_130 = 0;
          uVar11 = FUN_1402d6aa0(uVar10);
          FUN_140016170(&local_148,uVar10,uVar11);
          if (local_138 == 0) {
LAB_14013abfb:
            uStack_c0 = 0;
            local_c8 = (LPSTR ****)0x0;
          }
          else {
            ppppppWVar15 = &local_148;
            if (7 < local_130) {
              ppppppWVar15 = (LPCWSTR *****)local_148;
            }
            iVar9 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppppWVar15,(int)local_138,(LPSTR)0x0,0,
                                        (LPCSTR)0x0,(LPBOOL)0x0);
            if (iVar9 < 1) goto LAB_14013abfb;
            FUN_140016940(&local_a8,(longlong)iVar9,0);
            ppppppCVar14 = &local_a8;
            if (0xf < uStack_90) {
              ppppppCVar14 = (LPSTR *****)local_a8;
            }
            ppppppWVar15 = &local_148;
            if (7 < local_130) {
              ppppppWVar15 = (LPCWSTR *****)local_148;
            }
            WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppppWVar15,(int)local_138,(LPSTR)ppppppCVar14,
                                iVar9,(LPCSTR)0x0,(LPBOOL)0x0);
            local_c8 = local_a8;
            uStack_c0 = uStack_a0;
            uVar13 = local_98;
            uVar16 = uStack_90;
          }
          local_f8 = local_c8;
          uStack_f0 = uStack_c0;
          local_e8 = uVar13;
          local_e0 = uVar16;
          if (7 < local_130) {
            ppppppWVar15 = (LPCWSTR *****)local_148;
            if ((0xfff < local_130 * 2 + 2) &&
               (ppppppWVar15 = (LPCWSTR *****)local_148[-1],
               0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)ppppppWVar15))))
            goto LAB_14013ae3e;
            thunk_FUN_14028af80(ppppppWVar15);
          }
        }
        lpMem = local_res10;
        if (local_res10 != (LPVOID)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)local_res10 + 0x18);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            pvVar12 = GetProcessHeap();
            HeapFree(pvVar12,0,lpMem);
          }
          else if (iVar9 + -1 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1402c97e4();
          }
        }
      }
      if (local_res20 != (longlong *)0x0) {
        (**(code **)(*local_res20 + 0x10))();
        local_res20 = (longlong *)0x0;
      }
    }
  }
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*local_80 + 0x10))();
    local_80 = (longlong *)0x0;
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  lVar4 = *plVar3;
  uVar13 = FUN_140016fc0(&local_a8,&local_118);
  (**(code **)(lVar4 + 8))(plVar3,&local_60,uVar13);
  if (0xf < local_e0) {
    uVar16 = local_e0 + 1;
    ppppppCVar14 = (LPSTR *****)local_f8;
    if (0xfff < uVar16) {
      ppppppCVar14 = (LPSTR *****)local_f8[-1];
      if ((LPSTR)0x1f < (LPSTR)((longlong)local_f8 + (-8 - (longlong)ppppppCVar14)))
      goto LAB_14013ae3e;
      uVar16 = local_e0 + 0x28;
    }
    thunk_FUN_14028af80(ppppppCVar14,uVar16);
  }
  if (0xf < local_100) {
    uVar16 = local_100 + 1;
    ppppppCVar14 = (LPSTR *****)local_118;
    if (0xfff < uVar16) {
      ppppppCVar14 = (LPSTR *****)local_118[-1];
      if ((LPSTR)0x1f < (LPSTR)((longlong)local_118 + (-8 - (longlong)ppppppCVar14))) {
LAB_14013ae3e:
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar18 = auStackY_180;
LAB_14013ae45:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar18 + -8) = &UNK_14013ae4a;
        FUN_1402c97e4();
      }
      uVar16 = local_100 + 0x28;
    }
    thunk_FUN_14028af80(ppppppCVar14,uVar16);
  }
  FUN_140031890(&local_60);
  return;
}

