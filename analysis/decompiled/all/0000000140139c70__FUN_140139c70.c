// Function: FUN_140139c70
// Addr: 140139c70
// Size: 1598 bytes


/* WARNING: Type propagation algorithm not settling */

LPSTR ****** FUN_140139c70(longlong param_1,LPSTR ******param_2)

{
  LPSTR ******pppppppCVar1;
  LPSTR *****ppppppCVar2;
  LPSTR *****ppppppCVar3;
  code *pcVar4;
  LPOLESTR pOVar5;
  longlong *plVar6;
  HRESULT HVar7;
  int iVar8;
  undefined8 uVar9;
  HANDLE hHeap;
  LPSTR ****pppppCVar10;
  LPSTR ******pppppppCVar11;
  LPCWSTR ******pppppppWVar12;
  LPSTR *****ppppppCVar13;
  LPSTR ******pppppppCVar14;
  ulonglong uVar15;
  LPSTR *****ppppppCVar16;
  ulonglong uVar17;
  LPSTR *****ppppppCVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  LPSTR *****ppppppCVar21;
  int local_res8 [2];
  LPSTR ******local_res10;
  longlong *local_res18;
  LPOLESTR local_res20;
  undefined1 auStackY_158 [8];
  undefined1 auStackY_150 [24];
  LPCWSTR ******local_118;
  undefined8 uStack_110;
  longlong local_108;
  ulonglong local_100;
  longlong *local_f8;
  longlong *local_f0;
  LPSTR ******local_e8;
  undefined8 uStack_e0;
  LPSTR *****local_d8;
  ulonglong uStack_d0;
  LPSTR ******local_c8;
  undefined8 uStack_c0;
  LPSTR *****local_b8;
  ulonglong local_b0;
  LPSTR ******local_a8;
  undefined8 uStack_a0;
  LPSTR *****local_98;
  ulonglong local_90;
  undefined4 local_88;
  LPSTR ******local_78;
  undefined8 uStack_70;
  IID local_58;
  
  puVar19 = auStackY_158;
  ppppppCVar16 = (LPSTR *****)0x0;
  *param_2 = (LPSTR *****)0x0;
  param_2[1] = (LPSTR *****)0x0;
  param_2[2] = (LPSTR *****)0x0;
  local_res18 = (longlong *)0x0;
  uVar20 = 0xf;
  param_2[3] = (LPSTR *****)0xf;
  *(undefined1 *)param_2 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))(*(longlong **)(param_1 + 0x20),&local_res18)
  ;
  if (local_res18 == (longlong *)0x0) {
    return param_2;
  }
  local_res8[0] = 0;
  (**(code **)(*local_res18 + 0x18))(local_res18,local_res8);
  if (local_res8[0] == 0) goto LAB_14013a272;
  local_f0 = (longlong *)0x0;
  (**(code **)(*local_res18 + 0x20))(local_res18,0,&DAT_14048b058,&local_f0);
  plVar6 = local_f0;
  if (local_f0 == (longlong *)0x0) goto LAB_14013a272;
  local_b8 = (LPSTR *****)0x0;
  uStack_c0 = 0;
  ppppppCVar21 = (LPSTR *****)0x0;
  uStack_a0 = 0;
  uVar17 = 0xf;
  local_b0 = 0xf;
  local_c8 = (LPSTR ******)0x0;
  local_98 = (LPSTR *****)0x0;
  local_90 = 0xf;
  local_a8 = (LPSTR ******)0x0;
  local_88 = 0xffffffff;
  local_58.Data1 = 0;
  local_58.Data2 = 0;
  local_58.Data3 = 0;
  local_58.Data4[0] = '\0';
  local_58.Data4[1] = '\0';
  local_58.Data4[2] = '\0';
  local_58.Data4[3] = '\0';
  local_58.Data4[4] = '\0';
  local_58.Data4[5] = '\0';
  local_58.Data4[6] = '\0';
  local_58.Data4[7] = '\0';
  (**(code **)(*local_f0 + 0x20))(local_f0,&local_58);
  local_res20 = (LPOLESTR)0x0;
  HVar7 = StringFromIID(&local_58,&local_res20);
  pOVar5 = local_res20;
  pppppppCVar11 = local_c8;
  if (HVar7 < 0) {
LAB_140139eca:
    local_f8 = (longlong *)0x0;
    (**(code **)*plVar6)(plVar6,&DAT_14048b118,&local_f8);
    ppppppCVar21 = (LPSTR *****)0x0;
    if (local_f8 != (longlong *)0x0) {
      local_res10 = (LPSTR ******)0x0;
      (**(code **)(*local_f8 + 0x28))();
      if (local_res10 != (LPSTR ******)0x0) {
        if (*(int *)((longlong)local_res10 + 4) != 0) {
          ppppppCVar3 = local_res10[2];
          local_108 = 0;
          local_118 = (LPCWSTR ******)0x0;
          uStack_110 = 0;
          local_100 = 0;
          uVar9 = FUN_1402d6aa0(ppppppCVar3);
          FUN_140016170(&local_118,ppppppCVar3,uVar9);
          if (local_108 == 0) {
LAB_14013a009:
            uStack_70 = 0;
            local_78 = (LPSTR ******)0x0;
            local_98 = ppppppCVar21;
          }
          else {
            pppppppWVar12 = (LPCWSTR ******)&local_118;
            if (7 < local_100) {
              pppppppWVar12 = local_118;
            }
            iVar8 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar12,(int)local_108,(LPSTR)0x0,0,
                                        (LPCSTR)0x0,(LPBOOL)0x0);
            if (iVar8 < 1) goto LAB_14013a009;
            FUN_140016940(&local_e8,(longlong)iVar8,0);
            pppppppCVar14 = (LPSTR ******)&local_e8;
            if (0xf < uStack_d0) {
              pppppppCVar14 = local_e8;
            }
            pppppppWVar12 = (LPCWSTR ******)&local_118;
            if (7 < local_100) {
              pppppppWVar12 = local_118;
            }
            WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar12,(int)local_108,(LPSTR)pppppppCVar14,
                                iVar8,(LPCSTR)0x0,(LPBOOL)0x0);
            local_78 = local_e8;
            uStack_70 = uStack_e0;
            local_98 = local_d8;
            uVar20 = uStack_d0;
          }
          local_a8 = local_78;
          uStack_a0 = uStack_70;
          local_90 = uVar20;
          if (7 < local_100) {
            pppppppWVar12 = local_118;
            if ((0xfff < local_100 * 2 + 2) &&
               (pppppppWVar12 = (LPCWSTR ******)local_118[-1],
               0x1f < (ulonglong)((longlong)local_118 + (-8 - (longlong)pppppppWVar12))))
            goto LAB_14013a298;
            thunk_FUN_14028af80(pppppppWVar12);
          }
        }
        pppppppCVar14 = local_res10;
        if (local_res10 != (LPSTR ******)0x0) {
          LOCK();
          pppppppCVar1 = local_res10 + 3;
          iVar8 = *(int *)pppppppCVar1;
          *(int *)pppppppCVar1 = *(int *)pppppppCVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            hHeap = GetProcessHeap();
            HeapFree(hHeap,0,pppppppCVar14);
          }
          else if (iVar8 + -1 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1402c97e4();
          }
        }
      }
      if (local_f8 != (longlong *)0x0) {
        (**(code **)(*local_f8 + 0x10))();
      }
    }
    if ((LPSTR *******)param_2 != &local_c8) {
      ppppppCVar3 = param_2[3];
      local_res10 = (LPSTR ******)&local_c8;
      if (0xf < uVar17) {
        local_res10 = pppppppCVar11;
      }
      if (ppppppCVar3 < ppppppCVar16) {
        ppppppCVar18 = (LPSTR *****)0x7fffffffffffffff;
        if ((LPSTR *****)0x7fffffffffffffff < ppppppCVar16) goto LAB_14013a29f;
        ppppppCVar13 = (LPSTR *****)((ulonglong)ppppppCVar16 | 0xf);
        if ((ppppppCVar13 < (LPSTR *****)0x8000000000000000) &&
           (ppppppCVar3 <= (LPSTR *****)(0x7fffffffffffffff - ((ulonglong)ppppppCVar3 >> 1)))) {
          ppppppCVar2 = (LPSTR *****)((longlong)ppppppCVar3 + ((ulonglong)ppppppCVar3 >> 1));
          ppppppCVar18 = ppppppCVar13;
          if (ppppppCVar13 < ppppppCVar2) {
            ppppppCVar18 = ppppppCVar2;
          }
          ppppppCVar13 = (LPSTR *****)((longlong)ppppppCVar18 + 1);
          if (ppppppCVar13 != (LPSTR *****)0x0) {
            if ((LPSTR *****)0xfff < ppppppCVar13) {
              ppppppCVar21 = ppppppCVar18 + 5;
              if (ppppppCVar21 <= ppppppCVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_140017370();
              }
              goto LAB_14013a174;
            }
            ppppppCVar21 = (LPSTR *****)FUN_14028af20(ppppppCVar13);
          }
        }
        else {
          ppppppCVar21 = (LPSTR *****)0x8000000000000027;
LAB_14013a174:
          pppppCVar10 = (LPSTR ****)FUN_14028af20(ppppppCVar21);
          if (pppppCVar10 == (LPSTR ****)0x0) goto LAB_14013a298;
          ppppppCVar21 = (LPSTR *****)((longlong)pppppCVar10 + 0x27U & 0xffffffffffffffe0);
          ppppppCVar21[-1] = pppppCVar10;
        }
        param_2[2] = ppppppCVar16;
        param_2[3] = ppppppCVar18;
        FUN_1404210f0(ppppppCVar21,local_res10,ppppppCVar16);
        *(undefined1 *)((longlong)ppppppCVar21 + (longlong)ppppppCVar16) = 0;
        if ((LPSTR *****)0xf < ppppppCVar3) {
          ppppppCVar18 = *param_2;
          ppppppCVar16 = (LPSTR *****)((longlong)ppppppCVar3 + 1);
          if ((LPSTR *****)0xfff < ppppppCVar16) {
            if (0x1f < (ulonglong)((longlong)ppppppCVar18 + (-8 - (longlong)ppppppCVar18[-1])))
            goto LAB_14013a298;
            ppppppCVar16 = ppppppCVar3 + 5;
            ppppppCVar18 = (LPSTR *****)ppppppCVar18[-1];
          }
          thunk_FUN_14028af80(ppppppCVar18,ppppppCVar16);
        }
        *param_2 = ppppppCVar21;
      }
      else {
        pppppppCVar14 = param_2;
        if ((LPSTR *****)0xf < ppppppCVar3) {
          pppppppCVar14 = (LPSTR ******)*param_2;
        }
        param_2[2] = ppppppCVar16;
        FUN_1404210f0(pppppppCVar14,local_res10,ppppppCVar16);
        *(undefined1 *)((longlong)pppppppCVar14 + (longlong)ppppppCVar16) = 0;
      }
    }
    if (0xf < uVar20) {
      uVar17 = uVar20 + 1;
      pppppppCVar14 = local_a8;
      if (0xfff < uVar17) {
        pppppppCVar14 = (LPSTR ******)local_a8[-1];
        if ((LPSTR)0x1f < (LPSTR)((longlong)local_a8 + (-8 - (longlong)pppppppCVar14)))
        goto LAB_14013a298;
        uVar17 = uVar20 + 0x28;
      }
      thunk_FUN_14028af80(pppppppCVar14,uVar17);
    }
    if (0xf < local_b0) {
      uVar20 = local_b0 + 1;
      pppppppCVar14 = pppppppCVar11;
      if (0xfff < uVar20) {
        pppppppCVar14 = (LPSTR ******)pppppppCVar11[-1];
        if ((LPSTR)0x1f < (LPSTR)((longlong)pppppppCVar11 + (-8 - (longlong)pppppppCVar14)))
        goto LAB_14013a298;
        uVar20 = local_b0 + 0x28;
      }
      thunk_FUN_14028af80(pppppppCVar14,uVar20);
    }
    if (local_f0 != (longlong *)0x0) {
      (**(code **)(*local_f0 + 0x10))(local_f0);
    }
LAB_14013a272:
    if (local_res18 != (longlong *)0x0) {
      (**(code **)(*local_res18 + 0x10))();
    }
    return param_2;
  }
  local_108 = 0;
  local_118 = (LPCWSTR ******)0x0;
  uStack_110 = 0;
  local_100 = 0;
  uVar9 = FUN_1402d6aa0(local_res20);
  FUN_140016170(&local_118,pOVar5,uVar9);
  if (local_108 == 0) {
LAB_140139e4b:
    uVar17 = 0xf;
    uStack_70 = 0;
    local_78 = (LPSTR ******)0x0;
  }
  else {
    pppppppWVar12 = (LPCWSTR ******)&local_118;
    if (7 < local_100) {
      pppppppWVar12 = local_118;
    }
    iVar8 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar12,(int)local_108,(LPSTR)0x0,0,
                                (LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar8 < 1) goto LAB_140139e4b;
    FUN_140016940(&local_e8,(longlong)iVar8,0);
    pppppppCVar11 = (LPSTR ******)&local_e8;
    if (0xf < uStack_d0) {
      pppppppCVar11 = local_e8;
    }
    pppppppWVar12 = (LPCWSTR ******)&local_118;
    if (7 < local_100) {
      pppppppWVar12 = local_118;
    }
    WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar12,(int)local_108,(LPSTR)pppppppCVar11,iVar8,
                        (LPCSTR)0x0,(LPBOOL)0x0);
    local_78 = local_e8;
    uStack_70 = uStack_e0;
    uVar17 = uStack_d0;
    ppppppCVar21 = local_d8;
  }
  pppppppCVar11 = local_78;
  uStack_c0 = uStack_70;
  local_c8 = local_78;
  local_b8 = ppppppCVar21;
  local_b0 = uVar17;
  if (local_100 < 8) {
LAB_140139eba:
    CoTaskMemFree(local_res20);
    ppppppCVar16 = ppppppCVar21;
    goto LAB_140139eca;
  }
  uVar15 = local_100 * 2 + 2;
  pppppppWVar12 = local_118;
  if (uVar15 < 0x1000) {
LAB_140139eb5:
    thunk_FUN_14028af80(pppppppWVar12,uVar15);
    goto LAB_140139eba;
  }
  pppppppWVar12 = (LPCWSTR ******)local_118[-1];
  if ((ulonglong)((longlong)local_118 + (-8 - (longlong)pppppppWVar12)) < 0x20) {
    uVar15 = local_100 * 2 + 0x29;
    goto LAB_140139eb5;
  }
LAB_14013a298:
  pcVar4 = (code *)swi(0x29);
  (*pcVar4)(5);
  puVar19 = auStackY_150;
LAB_14013a29f:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar19 + -8) = &UNK_14013a2a4;
  FUN_1400172e0();
}

