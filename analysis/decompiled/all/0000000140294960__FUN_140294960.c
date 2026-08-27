// Function: FUN_140294960
// Addr: 140294960
// Size: 895 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_140294960(LPCWSTR param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,
                 UINT param_7)

{
  int *piVar1;
  longlong lVar2;
  int cchCount1;
  int dwCmpFlags;
  LPCWSTR lpLocaleName;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  BYTE *pBVar7;
  ulonglong uVar8;
  LPCWSTR lpString1;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined1 auStackY_c8 [32];
  int local_78 [2];
  LPCWSTR local_70;
  _cpinfo local_68;
  ulonglong local_50;
  
  puVar12 = auStackY_c8;
  local_50 = DAT_1404dc040 ^ (ulonglong)local_78;
  local_78[1] = param_2;
  local_70 = param_1;
  if (param_4 < 1) {
    puVar11 = auStackY_c8;
    if (-2 < param_4) goto LAB_1402949b9;
  }
  else {
    sVar6 = __strncnt((char *)param_3,(longlong)param_4);
    param_4 = (int)sVar6;
LAB_1402949b9:
    if (param_6 < 1) {
      puVar11 = auStackY_c8;
      if (param_6 < -1) goto LAB_140294c61;
    }
    else {
      sVar6 = __strncnt((char *)param_5,(longlong)param_6);
      param_6 = (int)sVar6;
    }
    if ((param_4 == 0) || (param_6 == 0)) {
      if (param_4 == param_6) {
LAB_140294cd8:
        iVar4 = 2;
        puVar12 = auStackY_c8;
        goto LAB_140294c63;
      }
      if (param_6 < 2) {
        if (param_4 < 2) {
          BVar3 = GetCPInfo(param_7,&local_68);
          puVar11 = auStackY_c8;
          if (BVar3 == 0) goto LAB_140294c61;
          if (param_4 < 1) {
            if (param_6 < 1) goto LAB_140294a9b;
            if (1 < local_68.MaxCharSize) {
              pBVar7 = local_68.LeadByte;
              while ((local_68.LeadByte[0] != 0 && (pBVar7[1] != 0))) {
                if ((*pBVar7 <= *param_5) && (*param_5 <= pBVar7[1])) goto LAB_140294cd8;
                pBVar7 = pBVar7 + 2;
                local_68.LeadByte[0] = *pBVar7;
              }
            }
            goto LAB_140294a91;
          }
          if (1 < local_68.MaxCharSize) {
            pBVar7 = local_68.LeadByte;
            while ((local_68.LeadByte[0] != 0 && (pBVar7[1] != 0))) {
              if ((*pBVar7 <= *param_3) && (*param_3 <= pBVar7[1])) goto LAB_140294cd8;
              pBVar7 = pBVar7 + 2;
              local_68.LeadByte[0] = *pBVar7;
            }
          }
        }
        iVar4 = 3;
        puVar12 = auStackY_c8;
      }
      else {
LAB_140294a91:
        iVar4 = 1;
      }
      goto LAB_140294c63;
    }
LAB_140294a9b:
    iVar4 = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,param_4,(LPWSTR)0x0,0);
    local_78[0] = iVar4;
    puVar11 = auStackY_c8;
    if (iVar4 != 0) {
      uVar8 = (longlong)iVar4 * 2 + 0x10;
      uVar10 = 0;
      if ((ulonglong)((longlong)iVar4 * 2) < uVar8) {
        uVar10 = uVar8;
      }
      puVar11 = auStackY_c8;
      if (uVar10 != 0) {
        if (uVar10 < 0x401) {
          uVar8 = uVar10 + 0xf;
          if (uVar8 <= uVar10) {
            uVar8 = 0xffffffffffffff0;
          }
          lVar2 = -(uVar8 & 0xfffffffffffffff0);
          puVar11 = auStackY_c8 + lVar2;
          if ((undefined4 *)((longlong)local_78 + lVar2) == (undefined4 *)0x0) goto LAB_140294c61;
          *(undefined4 *)((longlong)local_78 + lVar2) = 0xcccc;
          lpString1 = (LPCWSTR)((longlong)&local_68 + lVar2);
          puVar11 = auStackY_c8 + lVar2;
        }
        else {
          lpString1 = (LPCWSTR)_malloc_base(uVar10);
          puVar11 = auStackY_c8;
          iVar4 = local_78[0];
          if (lpString1 != (LPCWSTR)0x0) {
            lpString1[0] = L'\xdddd';
            lpString1[1] = L'\0';
            lpString1 = lpString1 + 8;
            puVar11 = auStackY_c8;
          }
        }
        if (lpString1 != (LPCWSTR)0x0) {
          *(int *)(puVar11 + 0x28) = iVar4;
          *(LPCWSTR *)(puVar11 + 0x20) = lpString1;
          *(undefined8 *)(puVar11 + -8) = 0x140294b72;
          iVar4 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,*(LPWSTR *)(puVar11 + 0x20),
                                      *(int *)(puVar11 + 0x28));
          puVar12 = puVar11;
          if (iVar4 != 0) {
            *(undefined4 *)(puVar11 + 0x28) = 0;
            *(undefined8 *)(puVar11 + 0x20) = 0;
            *(undefined8 *)(puVar11 + -8) = 0x140294b98;
            iVar4 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,
                                        *(LPWSTR *)(puVar11 + 0x20),*(int *)(puVar11 + 0x28));
            if (iVar4 != 0) {
              uVar8 = (longlong)iVar4 * 2 + 0x10;
              uVar10 = 0;
              if ((ulonglong)((longlong)iVar4 * 2) < uVar8) {
                uVar10 = uVar8;
              }
              if (uVar10 != 0) {
                if (uVar10 < 0x401) {
                  uVar8 = uVar10 + 0xf;
                  if (uVar8 <= uVar10) {
                    uVar8 = 0xffffffffffffff0;
                  }
                  *(undefined8 *)(puVar11 + -8) = 0x140294be4;
                  lVar2 = -(uVar8 & 0xfffffffffffffff0);
                  puVar12 = puVar11 + lVar2;
                  puVar9 = (undefined4 *)(puVar11 + lVar2 + 0x50);
                  if (puVar9 == (undefined4 *)0x0) goto LAB_140294c4f;
                  *puVar9 = 0xcccc;
                  puVar11 = puVar11 + lVar2;
LAB_140294c0f:
                  puVar13 = puVar9 + 4;
                  puVar12 = puVar11;
                }
                else {
                  *(undefined8 *)(puVar11 + -8) = 0x140294c01;
                  puVar9 = (undefined4 *)_malloc_base(uVar10);
                  puVar13 = (undefined4 *)0x0;
                  if (puVar9 != (undefined4 *)0x0) {
                    *puVar9 = 0xdddd;
                    goto LAB_140294c0f;
                  }
                }
                if (puVar13 != (undefined4 *)0x0) {
                  *(int *)(puVar12 + 0x28) = iVar4;
                  piVar1 = puVar13 + -4;
                  *(undefined4 **)(puVar12 + 0x20) = puVar13;
                  *(undefined8 *)(puVar12 + -8) = 0x140294c3a;
                  iVar5 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,
                                              *(LPWSTR *)(puVar12 + 0x20),*(int *)(puVar12 + 0x28));
                  lpLocaleName = local_70;
                  dwCmpFlags = local_78[1];
                  cchCount1 = local_78[0];
                  if (iVar5 != 0) {
                    *(undefined8 *)(puVar12 + 0x40) = 0;
                    *(undefined8 *)(puVar12 + 0x38) = 0;
                    *(undefined8 *)(puVar12 + 0x30) = 0;
                    *(int *)(puVar12 + 0x28) = iVar4;
                    *(undefined4 **)(puVar12 + 0x20) = puVar13;
                    *(undefined8 *)(puVar12 + -8) = 0x140294caf;
                    iVar4 = CompareStringEx(lpLocaleName,dwCmpFlags,lpString1,cchCount1,
                                            *(LPCWSTR *)(puVar12 + 0x20),*(int *)(puVar12 + 0x28),
                                            *(LPNLSVERSIONINFO *)(puVar12 + 0x30),
                                            *(LPVOID *)(puVar12 + 0x38),*(LPARAM *)(puVar12 + 0x40))
                    ;
                    if (*piVar1 == 0xdddd) {
                      *(undefined8 *)(puVar12 + -8) = 0x140294cc2;
                      thunk_FUN_1402d9040(piVar1);
                    }
                    if (*(int *)(lpString1 + -8) == 0xdddd) {
                      *(undefined8 *)(puVar12 + -8) = 0x140294cd4;
                      thunk_FUN_1402d9040(lpString1 + -8);
                    }
                    goto LAB_140294c63;
                  }
                  if (*piVar1 == 0xdddd) {
                    *(undefined8 *)(puVar12 + -8) = 0x140294c4f;
                    thunk_FUN_1402d9040(piVar1);
                  }
                }
              }
            }
          }
LAB_140294c4f:
          puVar11 = puVar12;
          if (*(int *)(lpString1 + -8) == 0xdddd) {
            *(undefined8 *)(puVar12 + -8) = 0x140294c61;
            thunk_FUN_1402d9040(lpString1 + -8);
          }
        }
      }
    }
  }
LAB_140294c61:
  puVar12 = puVar11;
  iVar4 = 0;
LAB_140294c63:
  *(undefined8 *)(puVar12 + -8) = 0x140294c6f;
  return iVar4;
}

