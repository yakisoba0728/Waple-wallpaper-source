// Function: FUN_140274a10
// Addr: 140274a10
// Size: 1212 bytes


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_140274a10(longlong param_1,char *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  char *******pppppppcVar4;
  char *******pppppppcVar5;
  char *pcVar6;
  int iVar7;
  size_t sVar8;
  HANDLE hFile;
  ulonglong uVar9;
  char *******pppppppcVar10;
  LPCSTR ******pppppppCVar11;
  LPCWSTR pWVar12;
  longlong lVar13;
  LPWSTR ******pppppppWVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  char *******pppppppcVar19;
  longlong lVar20;
  _FILETIME local_res8;
  char *local_res10;
  char *******local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  LPCSTR ******local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  ulonglong local_a0;
  LPWSTR ******local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  LPWSTR ******local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  WCHAR local_58;
  undefined6 uStack_56;
  undefined8 local_48;
  ulonglong local_40;
  
  local_c8 = 0;
  local_c0 = 0;
  local_d8 = (char *******)0x0;
  uStack_d0 = 0;
  local_res10 = param_2;
  sVar8 = strlen(param_2);
  FUN_140017480(&local_d8,param_2,sVar8);
  pppppppcVar10 = (char *******)&local_d8;
  if (0xf < local_c0) {
    pppppppcVar10 = local_d8;
  }
  pppppppcVar19 = (char *******)((longlong)pppppppcVar10 + local_c8);
  pppppppcVar4 = (char *******)&local_d8;
  pppppppcVar5 = local_d8;
  uVar17 = local_c8;
  uVar18 = local_c0;
  if (0xf < local_c0) {
    pppppppcVar4 = local_d8;
  }
  for (; local_d8 = pppppppcVar5, local_c8 = uVar17, local_c0 = uVar18,
      pppppppcVar4 != pppppppcVar19; pppppppcVar4 = (char *******)((longlong)pppppppcVar4 + 1)) {
    iVar7 = tolower((int)*(char *)pppppppcVar4);
    *(char *)pppppppcVar10 = (char)iVar7;
    pppppppcVar10 = (char *******)((longlong)pppppppcVar10 + 1);
    pppppppcVar5 = local_d8;
    uVar17 = local_c8;
    uVar18 = local_c0;
  }
  uVar9 = 0xcbf29ce484222325;
  pppppppcVar10 = (char *******)&local_d8;
  if (0xf < uVar18) {
    pppppppcVar10 = pppppppcVar5;
  }
  uVar15 = 0;
  if (uVar17 != 0) {
    do {
      pbVar1 = (byte *)((longlong)pppppppcVar10 + uVar15);
      uVar15 = uVar15 + 1;
      uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
    } while (uVar15 < uVar17);
  }
  uVar9 = uVar9 & *(ulonglong *)(param_1 + 0x68);
  lVar13 = *(longlong *)(param_1 + 0x40);
  lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8 + uVar9 * 0x10);
  if (lVar20 != lVar13) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + uVar9 * 0x10);
    while( true ) {
      puVar16 = (undefined8 *)(lVar20 + 0x10);
      if (0xf < *(ulonglong *)(lVar20 + 0x28)) {
        puVar16 = (undefined8 *)*puVar16;
      }
      pppppppcVar10 = (char *******)&local_d8;
      if (0xf < uVar18) {
        pppppppcVar10 = pppppppcVar5;
      }
      if ((uVar17 == *(ulonglong *)(lVar20 + 0x20)) &&
         ((uVar17 == 0 || (iVar7 = memcmp(pppppppcVar10,puVar16,uVar17), iVar7 == 0))))
      goto LAB_140274b5e;
      if (lVar20 == lVar2) break;
      lVar20 = *(longlong *)(lVar20 + 8);
    }
  }
  lVar20 = 0;
LAB_140274b5e:
  if (lVar20 == 0) {
    lVar20 = lVar13;
  }
  if (0xf < uVar18) {
    uVar17 = uVar18 + 1;
    pppppppcVar10 = pppppppcVar5;
    if (0xfff < uVar17) {
      pppppppcVar10 = (char *******)pppppppcVar5[-1];
      if ((char *)0x1f < (char *)((longlong)pppppppcVar5 + (-8 - (longlong)pppppppcVar10))) {
LAB_140274e9d:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        return DAT_1404929d0;
      }
      uVar17 = uVar18 + 0x28;
    }
    thunk_FUN_14028af80(pppppppcVar10,uVar17);
  }
  if (lVar20 == *(longlong *)(param_1 + 0x40)) {
    puVar16 = (undefined8 *)**(undefined8 **)(param_1 + 8);
    do {
      pcVar6 = local_res10;
      if (puVar16 == *(undefined8 **)(param_1 + 8)) {
        return DAT_1404929d0;
      }
      local_a8 = 0;
      local_b8 = (LPCSTR ******)0x0;
      uStack_b0 = 0;
      local_a0 = 0;
      sVar8 = strlen(local_res10);
      FUN_140017480(&local_b8,pcVar6,sVar8);
      if (local_a8 == 0) {
LAB_140274d26:
        local_88 = 0;
        uStack_90 = 0;
        local_98 = (LPWSTR ******)0x0;
        uStack_80 = 7;
      }
      else {
        pppppppCVar11 = (LPCSTR ******)&local_b8;
        if (0xf < local_a0) {
          pppppppCVar11 = local_b8;
        }
        iVar7 = MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppCVar11,(int)local_a8,(LPWSTR)0x0,0);
        if (iVar7 < 1) goto LAB_140274d26;
        local_68 = 0;
        uStack_60 = 0;
        local_78 = (LPWSTR ******)0x0;
        uStack_70 = 0;
        FUN_1400167e0(&local_78,0,(longlong)iVar7);
        pppppppWVar14 = (LPWSTR ******)&local_78;
        if (7 < uStack_60) {
          pppppppWVar14 = local_78;
        }
        pppppppCVar11 = (LPCSTR ******)&local_b8;
        if (0xf < local_a0) {
          pppppppCVar11 = local_b8;
        }
        MultiByteToWideChar(0xfde9,0,(LPCSTR)pppppppCVar11,(int)local_a8,(LPWSTR)pppppppWVar14,iVar7
                           );
        local_88 = local_68;
        uStack_80 = uStack_60;
        local_98 = local_78;
        uStack_90 = uStack_70;
      }
      uVar17 = local_88;
      if (0xf < local_a0) {
        uVar18 = local_a0 + 1;
        pppppppCVar11 = local_b8;
        if (0xfff < uVar18) {
          pppppppCVar11 = (LPCSTR ******)local_b8[-1];
          if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pppppppCVar11)))
          goto LAB_140274e9d;
          uVar18 = local_a0 + 0x28;
        }
        thunk_FUN_14028af80(pppppppCVar11,uVar18);
      }
      if (0x7ffffffffffffffe - puVar16[4] < uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_1400172e0();
      }
      FUN_140277b40(&local_58);
      pWVar12 = &local_58;
      if (7 < local_40) {
        pWVar12 = (LPCWSTR)CONCAT62(uStack_56,local_58);
      }
      hFile = CreateFileW(pWVar12,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      if (7 < local_40) {
        lVar20 = CONCAT62(uStack_56,local_58);
        uVar17 = local_40 * 2 + 2;
        lVar13 = lVar20;
        if (0xfff < uVar17) {
          lVar13 = *(longlong *)(lVar20 + -8);
          if (0x1f < (lVar20 - lVar13) - 8U) goto LAB_140274e9d;
          uVar17 = local_40 * 2 + 0x29;
        }
        thunk_FUN_14028af80(lVar13,uVar17);
      }
      local_48 = 0;
      local_40 = 7;
      local_58 = L'\0';
      if (7 < uStack_80) {
        uVar17 = uStack_80 * 2 + 2;
        pppppppWVar14 = local_98;
        if (0xfff < uVar17) {
          pppppppWVar14 = (LPWSTR ******)local_98[-1];
          if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pppppppWVar14)))
          goto LAB_140274e9d;
          uVar17 = uStack_80 * 2 + 0x29;
        }
        thunk_FUN_14028af80(pppppppWVar14,uVar17);
      }
      puVar16 = (undefined8 *)*puVar16;
    } while (hFile == (HANDLE)0xffffffffffffffff);
  }
  else {
    pWVar12 = (LPCWSTR)(param_1 + 0x18);
    if (7 < *(ulonglong *)(param_1 + 0x30)) {
      pWVar12 = *(LPCWSTR *)pWVar12;
    }
    hFile = CreateFileW(pWVar12,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (hFile == (HANDLE)0xffffffffffffffff) {
      return DAT_1404929d0;
    }
  }
  GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,&local_res8);
  CloseHandle(hFile);
  return (double)(longlong)local_res8 / _DAT_140492880 - _DAT_1404928b8;
}

