// Function: FUN_14011b0b0
// Addr: 14011b0b0
// Size: 2070 bytes


void FUN_14011b0b0(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint *puVar5;
  code *pcVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  HMODULE hModule;
  FARPROC pFVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  longlong *plVar24;
  undefined1 local_res10;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [24];
  uint local_158;
  undefined1 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined **local_138;
  undefined8 local_130;
  ulonglong local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  uint local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined **local_a0;
  code *local_98;
  undefined8 local_90;
  longlong lStack_88;
  undefined8 local_80;
  undefined ***local_68;
  longlong local_60 [3];
  ulonglong local_48;
  
  puVar22 = auStack_178;
  lVar19 = param_1;
  puVar23 = auStack_178;
  switch(*param_2) {
  case 9:
    if (*(HWND *)(param_1 + 0x68) != (HWND)0x0) {
      PostMessageW(*(HWND *)(param_1 + 0x68),0x40a,(ulonglong)*(uint *)(param_1 + 0x154),0);
    }
  case 10:
  case 0xc:
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    goto switchD_14011b0fd_caseD_a;
  case 0xb:
    lVar19 = 0;
    local_a8 = 0xf;
    uStack_b8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    FUN_14000f880(&local_c0,*(undefined8 *)(param_2 + 2),param_2[1]);
    local_100 = (local_100 >> 8 & 0xfffffe) << 8;
    local_e8 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    cVar7 = FUN_140017840(&local_c0,&local_108,0);
    if (cVar7 != '\0') {
      plVar10 = (longlong *)FUN_140086de0(&local_108,"plugin","");
      plVar11 = (longlong *)FUN_140086de0(&local_108,"function","");
      lVar12 = FUN_140086de0(&local_108,"callback","");
      plVar13 = (longlong *)FUN_140086de0(&local_108,"parameters","");
      local_98 = (code *)((ulonglong)local_98 & 0xfffffffffffffe00);
      local_90 = 0;
      lStack_88 = 0;
      local_80 = 0;
      if (((char)plVar10[1] == '\x04') && ((char)plVar11[1] == '\x04')) {
        plVar3 = *(longlong **)(param_1 + 0xb0);
        for (plVar24 = *(longlong **)(param_1 + 0xa8); plVar24 != plVar3; plVar24 = plVar24 + 1) {
          lVar4 = *plVar10;
          puVar17 = (undefined8 *)*plVar24;
          lVar21 = lVar19;
          if ((lVar4 != 0) && (lVar21 = lVar4, (*(uint *)(plVar10 + 1) >> 8 & 1) != 0)) {
            lVar21 = lVar4 + 4;
          }
          uVar14 = (**(code **)(*(longlong *)*puVar17 + 0x30))();
          iVar9 = FUN_1402c10d0(uVar14,lVar21);
          if (iVar9 == 0) {
            lVar4 = *plVar11;
            lVar21 = lVar19;
            if ((lVar4 != 0) && (lVar21 = lVar4, (*(uint *)(plVar11 + 1) >> 8 & 1) != 0)) {
              lVar21 = lVar4 + 4;
            }
            plVar11 = (longlong *)puVar17[1];
            local_138 = &PTR_FUN_1404776f8;
            local_128 = local_128 & 0xfffffffffffffe00;
            lStack_120 = 0;
            local_118 = 0;
            lVar4 = *plVar13;
            local_110 = 0;
            if ((lVar4 != 0) && (lVar19 = lVar4, (*(uint *)(plVar13 + 1) >> 8 & 1) != 0)) {
              lVar19 = lVar4 + 4;
            }
            (**(code **)(*plVar11 + 0x28))(plVar11,lVar21,lVar19,&local_138);
            FUN_140085520(&local_a0,&local_130);
            switch(local_128 & 0xff) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 5:
              break;
            case 4:
              if (((uint)local_128 >> 8 & 1) != 0) {
                thunk_FUN_1402d9040(local_130);
              }
              break;
            case 6:
            case 7:
              if (local_130 != 0) {
                FUN_140088e40(local_130);
                thunk_FUN_14028af80(local_130,0x10);
              }
              break;
            default:
              FID_conflict__assert
                        (L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
            }
            lVar19 = lStack_120;
            local_130 = 0;
            if (lStack_120 != 0) {
              FUN_140017240(lStack_120 + 0x40);
              FUN_140017240(lVar19 + 0x20);
              FUN_140017240(lVar19);
              thunk_FUN_14028af80(lVar19,0x60);
            }
            break;
          }
        }
      }
      uVar20 = local_130;
      if (*(char *)(lVar12 + 8) == '\0') {
LAB_14011b64f:
        FUN_140085440(&local_a0);
        FUN_140085440(&local_108);
        goto LAB_14011b21f;
      }
      local_130 = CONCAT71(local_130._1_7_,7);
      local_130._4_4_ = SUB84(uVar20,4);
      local_130 = CONCAT44(local_130._4_4_,(undefined4)local_130) & 0xfffffffffffffeff;
      local_128 = 0;
      lStack_120 = 0;
      local_118 = 0;
      ppuVar15 = (undefined **)FUN_14028af20(0x10);
      *ppuVar15 = (undefined *)0x0;
      ppuVar15[1] = (undefined *)0x0;
      puVar16 = (undefined *)FUN_14028af20(0x58);
      *(undefined **)puVar16 = puVar16;
      *(undefined **)(puVar16 + 8) = puVar16;
      *(undefined **)(puVar16 + 0x10) = puVar16;
      *(undefined2 *)(puVar16 + 0x18) = 0x101;
      *ppuVar15 = puVar16;
      local_138 = ppuVar15;
      uVar14 = FUN_140086de0(&local_138,"plugin","");
      FUN_140085520(uVar14,plVar10);
      uVar14 = FUN_140086de0(&local_138,"callback","");
      FUN_140085520(uVar14,lVar12);
      uVar14 = FUN_140086de0(&local_138,"return","");
      FUN_140085520(uVar14,&local_a0);
      puVar17 = (undefined8 *)FUN_140004d00(local_60,&local_138,0);
      local_e0 = 0xc;
      local_d8 = 0;
      local_d0 = 0;
      uVar20 = puVar17[2];
      local_c8 = 0;
      if (uVar20 != 0) {
        local_d0 = (int)uVar20;
        uVar14 = thunk_FUN_14028af20(uVar20 & 0xffffffff);
        if (0xf < (ulonglong)puVar17[3]) {
          puVar17 = (undefined8 *)*puVar17;
        }
        local_c8 = uVar14;
        FUN_1404210f0(uVar14,puVar17,uVar20 & 0xffffffff);
        local_e0 = CONCAT44((int)uVar20,(undefined4)local_e0);
        local_d8 = uVar14;
      }
      uVar14 = local_d8;
      if (local_48 < 0x10) {
LAB_14011b5fc:
        iVar9 = FUN_140290d80(param_1 + 0x4a0);
        if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140290d30(5);
        }
        if (*(int *)(param_1 + 0x4ec) == 0x7fffffff) {
          *(undefined4 *)(param_1 + 0x4ec) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_140290d30(6);
        }
        FUN_1400182d0(param_1 + 0x158,&local_e0);
        FUN_140290ea0(param_1 + 0x4a0);
        thunk_FUN_14028af80(uVar14);
        FUN_140085440(&local_138);
        goto LAB_14011b64f;
      }
      uVar20 = local_48 + 1;
      lVar19 = local_60[0];
      if (uVar20 < 0x1000) {
LAB_14011b5f7:
        thunk_FUN_14028af80(lVar19,uVar20);
        goto LAB_14011b5fc;
      }
      lVar19 = *(longlong *)(local_60[0] + -8);
      if ((local_60[0] - lVar19) - 8U < 0x20) {
        uVar20 = local_48 + 0x28;
        goto LAB_14011b5f7;
      }
LAB_14011b667:
      lVar19 = 5;
      pcVar6 = (code *)swi(0x29);
      (*pcVar6)(5);
      puVar23 = auStack_170;
      goto switchD_14011b0fd_caseD_d;
    }
    switch((undefined1)local_100) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((local_100 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(local_108);
      }
      break;
    case 6:
    case 7:
      if (local_108 != 0) {
        FUN_140088e40(local_108);
        thunk_FUN_14028af80(local_108,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    lVar19 = local_f8;
    local_108 = 0;
    if (local_f8 != 0) {
      FUN_140017240(local_f8 + 0x40);
      FUN_140017240(lVar19 + 0x20);
      FUN_140017240(lVar19);
      thunk_FUN_14028af80(lVar19,0x60);
    }
LAB_14011b21f:
    if (0xf < local_a8) {
      uVar20 = local_a8 + 1;
      lVar19 = local_c0;
      if (0xfff < uVar20) {
        lVar19 = *(longlong *)(local_c0 + -8);
        if (0x1f < (local_c0 - lVar19) - 8U) goto LAB_14011b667;
        uVar20 = local_a8 + 0x28;
      }
      thunk_FUN_14028af80(lVar19,uVar20);
    }
    goto switchD_14011b0fd_caseD_a;
  case 0xd:
switchD_14011b0fd_caseD_d:
    puVar22 = puVar23;
    *(undefined8 *)(puVar22 + -8) = 0x14011b67a;
    iVar9 = FUN_140290d80(lVar19 + 0x4a0);
    puVar23 = puVar22;
    if (iVar9 != 0) {
LAB_14011b8bf:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar23 + -8) = &UNK_14011b8c9;
      FUN_140290d30(5);
    }
    iVar9 = *(int *)(param_1 + 0x4ec);
    if (iVar9 == 0x7fffffff) {
LAB_14011b88e:
      *(int *)(param_1 + 0x4ec) = iVar9 + -1;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar23 + -8) = &UNK_14011b8a0;
      FUN_140290d30(6);
    }
    *(undefined2 *)(param_1 + 0x43a) = 0x101;
    break;
  case 0xe:
    iVar9 = FUN_140290d80(param_1 + 0x4a0);
    puVar23 = auStack_178;
    if (iVar9 != 0) goto LAB_14011b8bf;
    iVar9 = *(int *)(param_1 + 0x4ec);
    puVar23 = auStack_178;
    if (iVar9 == 0x7fffffff) goto LAB_14011b88e;
    *(undefined1 *)(param_1 + 0x43a) = 1;
    *(undefined1 *)(param_1 + 0x43c) = 1;
    break;
  case 0x10:
    iVar9 = FUN_140290d80(param_1 + 0x4a0);
    puVar23 = auStack_178;
    if (iVar9 != 0) goto LAB_14011b8bf;
    iVar9 = *(int *)(param_1 + 0x4ec);
    puVar23 = auStack_178;
    if (iVar9 == 0x7fffffff) goto LAB_14011b88e;
    *(undefined2 *)(param_1 + 0x43c) = 0x101;
    if (*(int *)(param_1 + 0x4f8) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x160))();
    }
    local_a0 = &PTR_LAB_140489b98;
    local_98 = FUN_14011be40;
    local_90 = CONCAT71(local_90._1_7_,local_res10);
    local_68 = &local_a0;
    lStack_88 = param_1;
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x158))
                      (*(longlong **)(param_1 + 0x98),&local_a0,0);
    *(undefined4 *)(param_1 + 0x4f8) = uVar8;
    puVar22 = auStack_178;
    break;
  case 0x17:
    iVar9 = FUN_140290d80(param_1 + 0x4a0);
    puVar23 = auStack_178;
    if (iVar9 != 0) goto LAB_14011b8bf;
    iVar9 = *(int *)(param_1 + 0x4ec);
    puVar23 = auStack_178;
    if (iVar9 == 0x7fffffff) goto LAB_14011b88e;
    *(undefined1 *)(param_1 + 0x510) = 1;
    thunk_FUN_14028af80(*(undefined8 *)(param_1 + 0x508));
    *(undefined8 *)(param_1 + 0x508) = 0;
    iVar9 = param_2[1];
    puVar22 = auStack_178;
    if (iVar9 != 0) {
      puVar5 = *(uint **)(param_2 + 2);
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      hModule = (HMODULE)FUN_1400576d0(L"resourceutil64.dll");
      puVar22 = auStack_178;
      if (hModule != (HMODULE)0x0) {
        pFVar18 = GetProcAddress(hModule,"LoadNativeImageBitsFromMemory2");
        *(uint *)(param_1 + 0x500) = uVar1;
        *(uint *)(param_1 + 0x504) = uVar2;
        local_140 = thunk_FUN_14028af20((longlong)(int)(uVar2 * uVar1 * 4));
        local_148 = 0;
        local_150 = 0;
        *(undefined8 *)(param_1 + 0x508) = local_140;
        local_158 = uVar2;
        (*pFVar18)(2,(ulonglong)(iVar9 - 8),puVar5 + 2,(ulonglong)uVar1);
        FreeLibrary(hModule);
        puVar22 = auStack_178;
      }
    }
    break;
  default:
    goto switchD_14011b0fd_default;
  }
  *(undefined8 *)(puVar22 + -8) = 0x14011b85b;
  FUN_140290ea0(param_1 + 0x4a0);
switchD_14011b0fd_caseD_a:
switchD_14011b0fd_default:
  return;
}

