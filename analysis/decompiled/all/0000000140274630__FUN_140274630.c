// Function: FUN_140274630
// Addr: 140274630
// Size: 992 bytes


/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_140274630(longlong param_1,char *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  char *******pppppppcVar4;
  int iVar5;
  DWORD DVar6;
  uint uVar7;
  size_t sVar8;
  undefined8 *puVar9;
  HANDLE hFile;
  ulonglong uVar10;
  LPCWSTR ******pppppppWVar11;
  longlong lVar12;
  char *******pppppppcVar13;
  LPCSTR ******pppppppCVar14;
  LPCWSTR pWVar15;
  longlong lVar16;
  LPWSTR ******pppppppWVar17;
  ulonglong uVar18;
  char *pcVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  char *******pppppppcVar22;
  longlong lVar23;
  char *******pppppppcVar24;
  char *******pppppppcStack_1e8;
  undefined8 uStack_1e0;
  ulonglong uStack_1d8;
  ulonglong uStack_1d0;
  LPCSTR ******pppppppCStack_1c8;
  undefined8 uStack_1c0;
  longlong lStack_1b8;
  ulonglong uStack_1b0;
  LPWSTR ******pppppppWStack_1a8;
  undefined8 uStack_1a0;
  ulonglong uStack_198;
  ulonglong uStack_190;
  LPWSTR ******pppppppWStack_188;
  undefined8 uStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  WCHAR WStack_168;
  undefined6 uStack_166;
  undefined8 uStack_158;
  ulonglong uStack_150;
  char *******pppppppcStack_148;
  longlong lStack_140;
  ulonglong uStack_138;
  longlong lStack_130;
  undefined8 uStack_128;
  ulonglong uStack_120;
  longlong lStack_118;
  _FILETIME _Stack_108;
  char *pcStack_100;
  char *******local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  LPCSTR ******local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  ulonglong local_b0;
  LPWSTR ******local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  LPCWSTR ******local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong uStack_70;
  LPWSTR ******local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  
  local_d8 = 0;
  local_d0 = 0;
  local_e8 = (char *******)0x0;
  uStack_e0 = 0;
  uStack_120 = 0x14027466d;
  sVar8 = strlen(param_2);
  uStack_120 = 0x14027467d;
  FUN_140017480(&local_e8,param_2,sVar8);
  pppppppcVar13 = (char *******)&local_e8;
  if (0xf < local_d0) {
    pppppppcVar13 = local_e8;
  }
  pppppppcVar22 = (char *******)((longlong)pppppppcVar13 + local_d8);
  pppppppcVar4 = (char *******)&local_e8;
  pppppppcVar24 = local_e8;
  uVar20 = local_d8;
  uVar21 = local_d0;
  if (0xf < local_d0) {
    pppppppcVar4 = local_e8;
  }
  for (; local_e8 = pppppppcVar24, local_d8 = uVar20, local_d0 = uVar21,
      pppppppcVar4 != pppppppcVar22; pppppppcVar4 = (char *******)((longlong)pppppppcVar4 + 1)) {
    uStack_120 = 0x1402746bd;
    iVar5 = tolower((int)*(char *)pppppppcVar4);
    *(char *)pppppppcVar13 = (char)iVar5;
    pppppppcVar13 = (char *******)((longlong)pppppppcVar13 + 1);
    pppppppcVar24 = local_e8;
    uVar20 = local_d8;
    uVar21 = local_d0;
  }
  uVar10 = 0xcbf29ce484222325;
  pppppppcVar13 = (char *******)&local_e8;
  if (0xf < uVar21) {
    pppppppcVar13 = pppppppcVar24;
  }
  uVar18 = 0;
  if (uVar20 != 0) {
    do {
      pbVar1 = (byte *)((longlong)pppppppcVar13 + uVar18);
      uVar18 = uVar18 + 1;
      uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
    } while (uVar18 < uVar20);
  }
  uVar10 = uVar10 & *(ulonglong *)(param_1 + 0x68);
  lVar16 = *(longlong *)(param_1 + 0x40);
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8 + uVar10 * 0x10);
  if (lVar12 != lVar16) {
    lVar23 = *(longlong *)(*(longlong *)(param_1 + 0x50) + uVar10 * 0x10);
    while( true ) {
      puVar9 = (undefined8 *)(lVar12 + 0x10);
      if (0xf < *(ulonglong *)(lVar12 + 0x28)) {
        puVar9 = (undefined8 *)*puVar9;
      }
      pppppppcVar13 = (char *******)&local_e8;
      if (0xf < uVar21) {
        pppppppcVar13 = pppppppcVar24;
      }
      if (uVar20 == *(ulonglong *)(lVar12 + 0x20)) {
        if (uVar20 == 0) goto LAB_140274785;
        uStack_120 = 0x14027476e;
        iVar5 = memcmp(pppppppcVar13,puVar9,uVar20);
        if (iVar5 == 0) goto LAB_140274785;
      }
      if (lVar12 == lVar23) break;
      lVar12 = *(longlong *)(lVar12 + 8);
    }
  }
  lVar12 = 0;
LAB_140274785:
  if (lVar12 == 0) {
    lVar12 = lVar16;
  }
  pppppppcVar13 = pppppppcVar24;
  if (0xf < uVar21) {
    pcVar19 = (char *)(uVar21 + 1);
    if ((char *)0xfff < pcVar19) {
      pppppppcVar13 = (char *******)pppppppcVar24[-1];
      pppppppcVar24 = (char *******)((longlong)pppppppcVar24 + (-8 - (longlong)pppppppcVar13));
      if (&DAT_00000020 <= pppppppcVar24) goto LAB_140274a09;
      pcVar19 = (char *)(uVar21 + 0x28);
    }
    uStack_120 = 0x1402747c3;
    thunk_FUN_14028af80(pppppppcVar13,pcVar19);
  }
  if (lVar12 != lVar16) {
    return 1;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return 0;
  }
  local_b8 = 0;
  local_c8 = (LPCSTR ******)0x0;
  uStack_c0 = 0;
  local_b0 = 0;
  uStack_120 = 0x1402747f9;
  sVar8 = strlen(param_2);
  uStack_120 = 0x140274808;
  FUN_140017480(&local_c8,param_2,sVar8);
  if (local_b8 == 0) {
LAB_1402748a5:
    local_98 = 0;
    uStack_a0 = 0;
    local_a8 = (LPWSTR ******)0x0;
    uStack_90 = 7;
  }
  else {
    pppppppCVar14 = (LPCSTR ******)&local_c8;
    if (0xf < local_b0) {
      pppppppCVar14 = local_c8;
    }
    uStack_120 = 0x140274839;
    iVar5 = MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppCVar14,(int)local_b8,(LPWSTR)0x0,0);
    if (iVar5 < 1) goto LAB_1402748a5;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = (LPWSTR ******)0x0;
    uStack_60 = 0;
    uStack_120 = 0x14027485d;
    FUN_1400167e0(&local_68,0,(longlong)iVar5);
    pppppppWVar17 = (LPWSTR ******)&local_68;
    if (7 < uStack_50) {
      pppppppWVar17 = local_68;
    }
    pppppppCVar14 = (LPCSTR ******)&local_c8;
    if (0xf < local_b0) {
      pppppppCVar14 = local_c8;
    }
    uStack_120 = 0x140274893;
    MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppCVar14,(int)local_b8,(LPWSTR)pppppppWVar17,iVar5);
    local_a8 = local_68;
    uStack_a0 = uStack_60;
    local_98 = local_58;
    uStack_90 = uStack_50;
  }
  uStack_120 = 0x1402748e0;
  puVar9 = (undefined8 *)FUN_140015910(&local_a8);
  local_88 = (LPCWSTR ******)*puVar9;
  uStack_80 = puVar9[1];
  local_78 = puVar9[2];
  uStack_70 = puVar9[3];
  puVar9[2] = 0;
  puVar9[3] = 7;
  *(undefined2 *)puVar9 = 0;
  pppppppcVar24 = pppppppcVar13;
  if (7 < uStack_90) {
    pcVar19 = (char *)(uStack_90 * 2 + 2);
    pppppppWVar17 = local_a8;
    if ((char *)0xfff < pcVar19) {
      pppppppWVar17 = (LPWSTR ******)local_a8[-1];
      if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)pppppppWVar17)))
      goto LAB_140274a09;
      pcVar19 = (char *)(uStack_90 * 2 + 0x29);
    }
    uStack_120 = 0x140274951;
    thunk_FUN_14028af80(pppppppWVar17,pcVar19);
  }
  local_98 = 0;
  uStack_90 = 7;
  local_a8 = (LPWSTR ******)((ulonglong)local_a8 & 0xffffffffffff0000);
  if (0xf < local_b0) {
    pcVar19 = (char *)(local_b0 + 1);
    pppppppCVar14 = local_c8;
    if ((char *)0xfff < pcVar19) {
      pppppppCVar14 = (LPCSTR ******)local_c8[-1];
      if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)pppppppCVar14)))
      goto LAB_140274a09;
      pcVar19 = (char *)(local_b0 + 0x28);
    }
    uStack_120 = 0x140274998;
    thunk_FUN_14028af80(pppppppCVar14,pcVar19);
  }
  pppppppWVar11 = (LPCWSTR ******)&local_88;
  if (7 < uStack_70) {
    pppppppWVar11 = local_88;
  }
  uStack_120 = 0x1402749ac;
  DVar6 = GetFileAttributesW((LPCWSTR)pppppppWVar11);
  if (7 < uStack_70) {
    pcVar19 = (char *)(uStack_70 * 2 + 2);
    pppppppWVar11 = local_88;
    if ((char *)0xfff < pcVar19) {
      pppppppWVar11 = (LPCWSTR ******)local_88[-1];
      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppWVar11))) {
LAB_140274a09:
        lVar12 = 5;
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)();
        uStack_128 = 0;
        uStack_1d8 = 0;
        uStack_1d0 = 0;
        pppppppcStack_1e8 = (char *******)0x0;
        uStack_1e0 = 0;
        pppppppcStack_148 = pppppppcVar24;
        lStack_140 = lVar16;
        uStack_138 = uVar21;
        lStack_130 = param_1;
        uStack_120 = uVar20;
        lStack_118 = (longlong)&uStack_60 + 1;
        pcStack_100 = pcVar19;
        sVar8 = strlen(pcVar19);
        FUN_140017480(&pppppppcStack_1e8,pcVar19,sVar8);
        pppppppcVar13 = (char *******)&pppppppcStack_1e8;
        if (0xf < uStack_1d0) {
          pppppppcVar13 = pppppppcStack_1e8;
        }
        pppppppcVar22 = (char *******)((longlong)pppppppcVar13 + uStack_1d8);
        pppppppcVar4 = (char *******)&pppppppcStack_1e8;
        pppppppcVar24 = pppppppcStack_1e8;
        uVar20 = uStack_1d8;
        uVar21 = uStack_1d0;
        if (0xf < uStack_1d0) {
          pppppppcVar4 = pppppppcStack_1e8;
        }
        for (; pppppppcStack_1e8 = pppppppcVar24, uStack_1d8 = uVar20, uStack_1d0 = uVar21,
            pppppppcVar4 != pppppppcVar22; pppppppcVar4 = (char *******)((longlong)pppppppcVar4 + 1)
            ) {
          iVar5 = tolower((int)*(char *)pppppppcVar4);
          *(char *)pppppppcVar13 = (char)iVar5;
          pppppppcVar13 = (char *******)((longlong)pppppppcVar13 + 1);
          pppppppcVar24 = pppppppcStack_1e8;
          uVar20 = uStack_1d8;
          uVar21 = uStack_1d0;
        }
        uVar10 = 0xcbf29ce484222325;
        pppppppcVar13 = (char *******)&pppppppcStack_1e8;
        if (0xf < uVar21) {
          pppppppcVar13 = pppppppcVar24;
        }
        uVar18 = 0;
        if (uVar20 != 0) {
          do {
            pbVar1 = (byte *)((longlong)pppppppcVar13 + uVar18);
            uVar18 = uVar18 + 1;
            uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
          } while (uVar18 < uVar20);
        }
        uVar10 = uVar10 & *(ulonglong *)(lVar12 + 0x68);
        lVar16 = *(longlong *)(lVar12 + 0x40);
        uVar18 = uVar10 * 2;
        lVar23 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + 8 + uVar10 * 0x10);
        if (lVar23 != lVar16) {
          lVar2 = *(longlong *)(*(longlong *)(lVar12 + 0x50) + uVar10 * 0x10);
          while( true ) {
            puVar9 = (undefined8 *)(lVar23 + 0x10);
            if (0xf < *(ulonglong *)(lVar23 + 0x28)) {
              puVar9 = (undefined8 *)*puVar9;
            }
            pppppppcVar13 = (char *******)&pppppppcStack_1e8;
            if (0xf < uVar21) {
              pppppppcVar13 = pppppppcVar24;
            }
            if (uVar20 == *(ulonglong *)(lVar23 + 0x20)) {
              if (uVar20 == 0) goto LAB_140274b5e;
              uVar7 = memcmp(pppppppcVar13,puVar9,uVar20);
              uVar18 = (ulonglong)uVar7;
              if (uVar7 == 0) goto LAB_140274b5e;
            }
            if (lVar23 == lVar2) break;
            lVar23 = *(longlong *)(lVar23 + 8);
          }
        }
        lVar23 = 0;
LAB_140274b5e:
        if (lVar23 == 0) {
          lVar23 = lVar16;
        }
        if (0xf < uVar21) {
          uVar20 = uVar21 + 1;
          pppppppcVar13 = pppppppcVar24;
          if (0xfff < uVar20) {
            pppppppcVar13 = (char *******)pppppppcVar24[-1];
            if ((char *)0x1f < (char *)((longlong)pppppppcVar24 + (-8 - (longlong)pppppppcVar13))) {
LAB_140274e9d:
              pcVar3 = (code *)swi(0x29);
              uVar20 = (*pcVar3)(5);
              return uVar20;
            }
            uVar20 = uVar21 + 0x28;
          }
          uVar18 = thunk_FUN_14028af80(pppppppcVar13,uVar20);
        }
        if (lVar23 == *(longlong *)(lVar12 + 0x40)) {
          puVar9 = (undefined8 *)**(undefined8 **)(lVar12 + 8);
          do {
            pcVar19 = pcStack_100;
            if (puVar9 == *(undefined8 **)(lVar12 + 8)) {
              return uVar18;
            }
            lStack_1b8 = 0;
            pppppppCStack_1c8 = (LPCSTR ******)0x0;
            uStack_1c0 = 0;
            uStack_1b0 = 0;
            sVar8 = strlen(pcStack_100);
            FUN_140017480(&pppppppCStack_1c8,pcVar19,sVar8);
            if (lStack_1b8 == 0) {
LAB_140274d26:
              uStack_198 = 0;
              uStack_1a0 = 0;
              pppppppWStack_1a8 = (LPWSTR ******)0x0;
              uStack_190 = 7;
            }
            else {
              pppppppCVar14 = (LPCSTR ******)&pppppppCStack_1c8;
              if (0xf < uStack_1b0) {
                pppppppCVar14 = pppppppCStack_1c8;
              }
              iVar5 = MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppCVar14,(int)lStack_1b8,(LPWSTR)0x0
                                          ,0);
              if (iVar5 < 1) goto LAB_140274d26;
              uStack_178 = 0;
              uStack_170 = 0;
              pppppppWStack_188 = (LPWSTR ******)0x0;
              uStack_180 = 0;
              FUN_1400167e0(&pppppppWStack_188,0,(longlong)iVar5);
              pppppppWVar17 = (LPWSTR ******)&pppppppWStack_188;
              if (7 < uStack_170) {
                pppppppWVar17 = pppppppWStack_188;
              }
              pppppppCVar14 = (LPCSTR ******)&pppppppCStack_1c8;
              if (0xf < uStack_1b0) {
                pppppppCVar14 = pppppppCStack_1c8;
              }
              MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppCVar14,(int)lStack_1b8,
                                  (LPWSTR)pppppppWVar17,iVar5);
              uStack_198 = uStack_178;
              uStack_190 = uStack_170;
              pppppppWStack_1a8 = pppppppWStack_188;
              uStack_1a0 = uStack_180;
            }
            uVar20 = uStack_198;
            if (0xf < uStack_1b0) {
              uVar21 = uStack_1b0 + 1;
              pppppppCVar14 = pppppppCStack_1c8;
              if (0xfff < uVar21) {
                pppppppCVar14 = (LPCSTR ******)pppppppCStack_1c8[-1];
                if (0x1f < (ulonglong)((longlong)pppppppCStack_1c8 + (-8 - (longlong)pppppppCVar14))
                   ) goto LAB_140274e9d;
                uVar21 = uStack_1b0 + 0x28;
              }
              thunk_FUN_14028af80(pppppppCVar14,uVar21);
            }
            if (0x7ffffffffffffffe - puVar9[4] < uVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_1400172e0();
            }
            FUN_140277b40(&WStack_168);
            pWVar15 = &WStack_168;
            if (7 < uStack_150) {
              pWVar15 = (LPCWSTR)CONCAT62(uStack_166,WStack_168);
            }
            hFile = CreateFileW(pWVar15,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
            if (7 < uStack_150) {
              lVar23 = CONCAT62(uStack_166,WStack_168);
              uVar20 = uStack_150 * 2 + 2;
              lVar16 = lVar23;
              if (0xfff < uVar20) {
                lVar16 = *(longlong *)(lVar23 + -8);
                if (0x1f < (lVar23 - lVar16) - 8U) goto LAB_140274e9d;
                uVar20 = uStack_150 * 2 + 0x29;
              }
              thunk_FUN_14028af80(lVar16,uVar20);
            }
            uStack_158 = 0;
            uStack_150 = 7;
            WStack_168 = L'\0';
            uVar18 = uStack_190;
            if (7 < uStack_190) {
              uVar20 = uStack_190 * 2 + 2;
              pppppppWVar17 = pppppppWStack_1a8;
              if (0xfff < uVar20) {
                pppppppWVar17 = (LPWSTR ******)pppppppWStack_1a8[-1];
                if (0x1f < (ulonglong)((longlong)pppppppWStack_1a8 + (-8 - (longlong)pppppppWVar17))
                   ) goto LAB_140274e9d;
                uVar20 = uStack_190 * 2 + 0x29;
              }
              uVar18 = thunk_FUN_14028af80(pppppppWVar17,uVar20);
            }
            puVar9 = (undefined8 *)*puVar9;
          } while (hFile == (HANDLE)0xffffffffffffffff);
        }
        else {
          pWVar15 = (LPCWSTR)(lVar12 + 0x18);
          if (7 < *(ulonglong *)(lVar12 + 0x30)) {
            pWVar15 = *(LPCWSTR *)pWVar15;
          }
          hFile = CreateFileW(pWVar15,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
          if (hFile == (HANDLE)0xffffffffffffffff) {
            return 0xffffffffffffffff;
          }
        }
        GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,&_Stack_108);
        uVar7 = CloseHandle(hFile);
        return (ulonglong)uVar7;
      }
      pcVar19 = (char *)(uStack_70 * 2 + 0x29);
    }
    uStack_120 = 0x1402749f2;
    thunk_FUN_14028af80(pppppppWVar11,pcVar19);
  }
  return (ulonglong)(DVar6 != 0xffffffff);
}

