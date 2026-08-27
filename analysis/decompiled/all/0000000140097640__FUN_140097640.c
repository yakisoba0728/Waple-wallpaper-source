// Function: FUN_140097640
// Addr: 140097640
// Size: 855 bytes


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_140097640(int *param_1,undefined8 *param_2,char *param_3)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  size_t sVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  LPWSTR ******pppppppWVar9;
  byte bVar10;
  ulonglong uVar11;
  char *_Str;
  LPWSTR ******pppppppWVar12;
  ulonglong uVar13;
  LPWSTR ******local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  
  iVar3 = FUN_1402c9e60(param_3,&DAT_140485608,2);
  if (iVar3 == 0) {
    bVar10 = 1;
    uVar13 = 1;
  }
  else {
    iVar3 = FUN_1402c9e60(param_3,&DAT_140485620,4);
    bVar10 = -(iVar3 != 0) & 2;
    uVar13 = (ulonglong)(-(uint)(iVar3 != 0) & 2);
  }
  FUN_1400979a0(param_1,*param_1,bVar10);
  iVar3 = *param_1;
  sVar4 = strlen(param_3);
  lVar5 = FUN_140086de0(param_1 + ((longlong)iVar3 + uVar13 * 0x24) * 10 + 2,param_3,param_3 + sVar4
                       );
  if (*(char *)(lVar5 + 8) == '\x04') {
    iVar3 = *param_1;
    sVar4 = strlen(param_3);
    uVar6 = FUN_140086de0(param_1 + ((longlong)iVar3 + uVar13 * 0x24) * 10 + 2,param_3,
                          param_3 + sVar4);
    uVar6 = FUN_140085cc0(uVar6,&local_68);
    FUN_140005880(param_2,uVar6);
    pppppppWVar12 = local_68;
    uVar13 = uStack_50;
    goto joined_r0x00014009797d;
  }
  FUN_1400979a0(param_1,0,bVar10);
  if ((char)param_1[uVar13 * 0x168 + 4] == '\a') {
    sVar4 = strlen(param_3);
    lVar5 = FUN_140086de0(param_1 + uVar13 * 0x168 + 2,param_3,param_3 + sVar4);
    if (*(char *)(lVar5 + 8) != '\x04') goto LAB_14009789c;
    sVar4 = strlen(param_3);
    plVar7 = (longlong *)FUN_140086de0(param_1 + uVar13 * 0x168 + 2,param_3,param_3 + sVar4);
    _Str = (char *)0x0;
    pcVar1 = (char *)*plVar7;
    if ((pcVar1 != (char *)0x0) && (_Str = pcVar1, (*(uint *)(plVar7 + 1) >> 8 & 1) != 0)) {
      _Str = pcVar1 + 4;
    }
    local_78 = 0;
    local_70 = 0;
    local_88 = (LPWSTR ******)0x0;
    uStack_80 = 0;
    sVar4 = strlen(_Str);
    FUN_140017480(&local_88,_Str,sVar4);
    if (local_78 != 0) {
      pppppppWVar12 = (LPWSTR ******)&local_88;
      if (0xf < local_70) {
        pppppppWVar12 = local_88;
      }
      iVar3 = MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppWVar12,(int)local_78,(LPWSTR)0x0,0);
      if (iVar3 < 1) goto LAB_140097960;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = (LPWSTR ******)0x0;
      uStack_60 = 0;
      FUN_1400167e0(&local_68,0,(longlong)iVar3);
      pppppppWVar12 = (LPWSTR ******)&local_68;
      if (7 < uStack_50) {
        pppppppWVar12 = local_68;
      }
LAB_140097930:
      pppppppWVar9 = (LPWSTR ******)&local_88;
      if (0xf < local_70) {
        pppppppWVar9 = local_88;
      }
      MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppWVar9,(int)local_78,(LPWSTR)pppppppWVar12,iVar3);
      *(undefined4 *)param_2 = (undefined4)local_68;
      *(undefined4 *)((longlong)param_2 + 4) = local_68._4_4_;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_60._4_4_;
      param_2[2] = local_58;
      param_2[3] = uStack_50;
      pppppppWVar12 = local_88;
      uVar13 = local_70;
      goto joined_r0x00014009797d;
    }
  }
  else {
LAB_14009789c:
    local_78 = 0;
    local_88 = (LPWSTR ******)0x0;
    uStack_80 = 0;
    local_70 = 0;
    sVar4 = strlen(param_3);
    FUN_140017480(&local_88,param_3,sVar4);
    if (local_78 != 0) {
      pppppppWVar12 = (LPWSTR ******)&local_88;
      if (0xf < local_70) {
        pppppppWVar12 = local_88;
      }
      iVar3 = MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppWVar12,(int)local_78,(LPWSTR)0x0,0);
      if (0 < iVar3) {
        local_58 = 0;
        uStack_50 = 0;
        local_68 = (LPWSTR ******)0x0;
        uStack_60 = 0;
        FUN_1400167e0(&local_68,0,(longlong)iVar3);
        pppppppWVar12 = (LPWSTR ******)&local_68;
        if (7 < uStack_50) {
          pppppppWVar12 = local_68;
        }
        goto LAB_140097930;
      }
    }
  }
LAB_140097960:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 7;
  *(undefined2 *)param_2 = 0;
  pppppppWVar12 = local_88;
  uVar13 = local_70;
joined_r0x00014009797d:
  if (0xf < uVar13) {
    uVar11 = uVar13 + 1;
    pppppppWVar9 = pppppppWVar12;
    if (0xfff < uVar11) {
      pppppppWVar9 = (LPWSTR ******)pppppppWVar12[-1];
      if (0x1f < (ulonglong)((longlong)pppppppWVar12 + (-8 - (longlong)pppppppWVar9))) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        puVar8 = (undefined8 *)(*pcVar2)();
        return puVar8;
      }
      uVar11 = uVar13 + 0x28;
    }
    thunk_FUN_14028af80(pppppppWVar9,uVar11);
  }
  return param_2;
}

