// Function: FUN_14013bb50
// Addr: 14013bb50
// Size: 1553 bytes


/* WARNING: Type propagation algorithm not settling */

LPSTR ****** FUN_14013bb50(longlong param_1,LPSTR ******param_2)

{
  LPSTR ******pppppppCVar1;
  LPSTR *****ppppppCVar2;
  code *pcVar3;
  LPOLESTR pOVar4;
  longlong *plVar5;
  HRESULT HVar6;
  int iVar7;
  undefined8 uVar8;
  HANDLE hHeap;
  LPSTR ****pppppCVar9;
  LPSTR ******pppppppCVar10;
  LPCWSTR ******pppppppWVar11;
  LPSTR *****ppppppCVar12;
  LPSTR ******pppppppCVar13;
  ulonglong uVar14;
  LPSTR *****ppppppCVar15;
  ulonglong uVar16;
  LPSTR *****ppppppCVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  LPSTR *****ppppppCVar20;
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
  LPSTR ******local_f0;
  undefined8 uStack_e8;
  LPSTR *****local_e0;
  ulonglong uStack_d8;
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
  
  puVar18 = auStackY_158;
  ppppppCVar15 = (LPSTR *****)0x0;
  *param_2 = (LPSTR *****)0x0;
  param_2[1] = (LPSTR *****)0x0;
  param_2[2] = (LPSTR *****)0x0;
  local_res18 = (longlong *)0x0;
  uVar19 = 0xf;
  param_2[3] = (LPSTR *****)0xf;
  *(undefined1 *)param_2 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))(*(longlong **)(param_1 + 0x20),&local_res18)
  ;
  if (local_res18 == (longlong *)0x0) {
    return param_2;
  }
  local_res8[0] = 0;
  (**(code **)(*local_res18 + 0x18))(local_res18,local_res8);
  if (local_res8[0] == 0) goto LAB_14013c125;
  local_f8 = (longlong *)0x0;
  (**(code **)(*local_res18 + 0x20))(local_res18,0,&DAT_14048af90,&local_f8);
  plVar5 = local_f8;
  if (local_f8 == (longlong *)0x0) goto LAB_14013c125;
  local_b8 = (LPSTR *****)0x0;
  uStack_c0 = 0;
  ppppppCVar20 = (LPSTR *****)0x0;
  uStack_a0 = 0;
  uVar16 = 0xf;
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
  (**(code **)(*local_f8 + 0x20))(local_f8,&local_58);
  local_res20 = (LPOLESTR)0x0;
  HVar6 = StringFromIID(&local_58,&local_res20);
  pOVar4 = local_res20;
  pppppppCVar10 = local_c8;
  if (HVar6 < 0) {
LAB_14013bdab:
    local_res10 = (LPSTR ******)0x0;
    (**(code **)(*plVar5 + 0x28))(plVar5);
    if (local_res10 != (LPSTR ******)0x0) {
      if (*(int *)((longlong)local_res10 + 4) != 0) {
        ppppppCVar20 = local_res10[2];
        ppppppCVar17 = (LPSTR *****)0x0;
        local_118 = (LPCWSTR ******)0x0;
        uStack_110 = 0;
        local_108 = 0;
        local_100 = 0;
        uVar8 = FUN_1402d6aa0(ppppppCVar20);
        FUN_140016170(&local_118,ppppppCVar20,uVar8);
        if (local_108 == 0) {
LAB_14013bec7:
          uStack_70 = 0;
          local_78 = (LPSTR ******)0x0;
        }
        else {
          pppppppWVar11 = (LPCWSTR ******)&local_118;
          if (7 < local_100) {
            pppppppWVar11 = local_118;
          }
          iVar7 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar11,(int)local_108,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar7 < 1) goto LAB_14013bec7;
          FUN_140016940(&local_f0,(longlong)iVar7,0);
          pppppppCVar13 = (LPSTR ******)&local_f0;
          if (0xf < uStack_d8) {
            pppppppCVar13 = local_f0;
          }
          pppppppWVar11 = (LPCWSTR ******)&local_118;
          if (7 < local_100) {
            pppppppWVar11 = local_118;
          }
          WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar11,(int)local_108,(LPSTR)pppppppCVar13,
                              iVar7,(LPCSTR)0x0,(LPBOOL)0x0);
          local_78 = local_f0;
          uStack_70 = uStack_e8;
          ppppppCVar17 = local_e0;
          uVar19 = uStack_d8;
        }
        local_a8 = local_78;
        uStack_a0 = uStack_70;
        local_98 = ppppppCVar17;
        local_90 = uVar19;
        if (7 < local_100) {
          pppppppWVar11 = local_118;
          if ((0xfff < local_100 * 2 + 2) &&
             (pppppppWVar11 = (LPCWSTR ******)local_118[-1],
             0x1f < (ulonglong)((longlong)local_118 + (-8 - (longlong)pppppppWVar11))))
          goto LAB_14013c14b;
          thunk_FUN_14028af80(pppppppWVar11);
        }
      }
      pppppppCVar13 = local_res10;
      if (local_res10 != (LPSTR ******)0x0) {
        LOCK();
        pppppppCVar1 = local_res10 + 3;
        iVar7 = *(int *)pppppppCVar1;
        *(int *)pppppppCVar1 = *(int *)pppppppCVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          hHeap = GetProcessHeap();
          HeapFree(hHeap,0,pppppppCVar13);
        }
        else if (iVar7 + -1 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402c97e4();
        }
      }
    }
    if ((LPSTR *******)param_2 != &local_c8) {
      ppppppCVar20 = param_2[3];
      local_res10 = (LPSTR ******)&local_c8;
      if (0xf < uVar16) {
        local_res10 = pppppppCVar10;
      }
      if (ppppppCVar20 < ppppppCVar15) {
        ppppppCVar17 = (LPSTR *****)0x7fffffffffffffff;
        if ((LPSTR *****)0x7fffffffffffffff < ppppppCVar15) goto LAB_14013c152;
        ppppppCVar12 = (LPSTR *****)((ulonglong)ppppppCVar15 | 0xf);
        if ((ppppppCVar12 < (LPSTR *****)0x8000000000000000) &&
           (ppppppCVar20 <= (LPSTR *****)(0x7fffffffffffffff - ((ulonglong)ppppppCVar20 >> 1)))) {
          ppppppCVar2 = (LPSTR *****)((longlong)ppppppCVar20 + ((ulonglong)ppppppCVar20 >> 1));
          ppppppCVar17 = ppppppCVar12;
          if (ppppppCVar12 < ppppppCVar2) {
            ppppppCVar17 = ppppppCVar2;
          }
          ppppppCVar2 = (LPSTR *****)((longlong)ppppppCVar17 + 1);
          if (ppppppCVar2 == (LPSTR *****)0x0) {
            ppppppCVar12 = (LPSTR *****)0x0;
          }
          else {
            if ((LPSTR *****)0xfff < ppppppCVar2) {
              ppppppCVar12 = ppppppCVar17 + 5;
              if (ppppppCVar12 <= ppppppCVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_140017370();
              }
              goto LAB_14013c027;
            }
            ppppppCVar12 = (LPSTR *****)FUN_14028af20(ppppppCVar2);
          }
        }
        else {
          ppppppCVar12 = (LPSTR *****)0x8000000000000027;
LAB_14013c027:
          pppppCVar9 = (LPSTR ****)FUN_14028af20(ppppppCVar12);
          if (pppppCVar9 == (LPSTR ****)0x0) goto LAB_14013c14b;
          ppppppCVar12 = (LPSTR *****)((longlong)pppppCVar9 + 0x27U & 0xffffffffffffffe0);
          ppppppCVar12[-1] = pppppCVar9;
        }
        param_2[2] = ppppppCVar15;
        param_2[3] = ppppppCVar17;
        FUN_1404210f0(ppppppCVar12,local_res10,ppppppCVar15);
        *(undefined1 *)((longlong)ppppppCVar12 + (longlong)ppppppCVar15) = 0;
        if ((LPSTR *****)0xf < ppppppCVar20) {
          ppppppCVar17 = *param_2;
          ppppppCVar15 = (LPSTR *****)((longlong)ppppppCVar20 + 1);
          if ((LPSTR *****)0xfff < ppppppCVar15) {
            if (0x1f < (ulonglong)((longlong)ppppppCVar17 + (-8 - (longlong)ppppppCVar17[-1])))
            goto LAB_14013c14b;
            ppppppCVar15 = ppppppCVar20 + 5;
            ppppppCVar17 = (LPSTR *****)ppppppCVar17[-1];
          }
          thunk_FUN_14028af80(ppppppCVar17,ppppppCVar15);
        }
        *param_2 = ppppppCVar12;
      }
      else {
        pppppppCVar13 = param_2;
        if ((LPSTR *****)0xf < ppppppCVar20) {
          pppppppCVar13 = (LPSTR ******)*param_2;
        }
        param_2[2] = ppppppCVar15;
        FUN_1404210f0(pppppppCVar13,local_res10,ppppppCVar15);
        *(undefined1 *)((longlong)pppppppCVar13 + (longlong)ppppppCVar15) = 0;
      }
    }
    if (0xf < uVar19) {
      uVar16 = uVar19 + 1;
      pppppppCVar13 = local_a8;
      if (0xfff < uVar16) {
        pppppppCVar13 = (LPSTR ******)local_a8[-1];
        if ((LPSTR)0x1f < (LPSTR)((longlong)local_a8 + (-8 - (longlong)pppppppCVar13)))
        goto LAB_14013c14b;
        uVar16 = uVar19 + 0x28;
      }
      thunk_FUN_14028af80(pppppppCVar13,uVar16);
    }
    if (0xf < local_b0) {
      uVar19 = local_b0 + 1;
      pppppppCVar13 = pppppppCVar10;
      if (0xfff < uVar19) {
        pppppppCVar13 = (LPSTR ******)pppppppCVar10[-1];
        if ((LPSTR)0x1f < (LPSTR)((longlong)pppppppCVar10 + (-8 - (longlong)pppppppCVar13)))
        goto LAB_14013c14b;
        uVar19 = local_b0 + 0x28;
      }
      thunk_FUN_14028af80(pppppppCVar13,uVar19);
    }
    if (local_f8 != (longlong *)0x0) {
      (**(code **)(*local_f8 + 0x10))(local_f8);
    }
LAB_14013c125:
    if (local_res18 != (longlong *)0x0) {
      (**(code **)(*local_res18 + 0x10))();
    }
    return param_2;
  }
  local_108 = 0;
  local_118 = (LPCWSTR ******)0x0;
  uStack_110 = 0;
  local_100 = 0;
  uVar8 = FUN_1402d6aa0(local_res20);
  FUN_140016170(&local_118,pOVar4,uVar8);
  if (local_108 == 0) {
LAB_14013bd2c:
    uVar16 = 0xf;
    uStack_70 = 0;
    local_78 = (LPSTR ******)0x0;
  }
  else {
    pppppppWVar11 = (LPCWSTR ******)&local_118;
    if (7 < local_100) {
      pppppppWVar11 = local_118;
    }
    iVar7 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar11,(int)local_108,(LPSTR)0x0,0,
                                (LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar7 < 1) goto LAB_14013bd2c;
    FUN_140016940(&local_f0,(longlong)iVar7,0);
    pppppppCVar10 = (LPSTR ******)&local_f0;
    if (0xf < uStack_d8) {
      pppppppCVar10 = local_f0;
    }
    pppppppWVar11 = (LPCWSTR ******)&local_118;
    if (7 < local_100) {
      pppppppWVar11 = local_118;
    }
    WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar11,(int)local_108,(LPSTR)pppppppCVar10,iVar7,
                        (LPCSTR)0x0,(LPBOOL)0x0);
    local_78 = local_f0;
    uStack_70 = uStack_e8;
    uVar16 = uStack_d8;
    ppppppCVar20 = local_e0;
  }
  pppppppCVar10 = local_78;
  uStack_c0 = uStack_70;
  local_c8 = local_78;
  local_b8 = ppppppCVar20;
  local_b0 = uVar16;
  if (local_100 < 8) {
LAB_14013bd9b:
    CoTaskMemFree(local_res20);
    ppppppCVar15 = ppppppCVar20;
    goto LAB_14013bdab;
  }
  uVar14 = local_100 * 2 + 2;
  pppppppWVar11 = local_118;
  if (uVar14 < 0x1000) {
LAB_14013bd96:
    thunk_FUN_14028af80(pppppppWVar11,uVar14);
    goto LAB_14013bd9b;
  }
  pppppppWVar11 = (LPCWSTR ******)local_118[-1];
  if ((ulonglong)((longlong)local_118 + (-8 - (longlong)pppppppWVar11)) < 0x20) {
    uVar14 = local_100 * 2 + 0x29;
    goto LAB_14013bd96;
  }
LAB_14013c14b:
  pcVar3 = (code *)swi(0x29);
  (*pcVar3)(5);
  puVar18 = auStackY_150;
LAB_14013c152:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar18 + -8) = &UNK_14013c157;
  FUN_1400172e0();
}

