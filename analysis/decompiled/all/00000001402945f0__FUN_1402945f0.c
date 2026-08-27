// Function: FUN_1402945f0
// Addr: 1402945f0
// Size: 767 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1402945f0(LPCWSTR param_1,uint param_2,char *param_3,int param_4,undefined8 param_5,
                       int param_6,UINT param_7,int param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  DWORD dwFlags;
  ulonglong uVar9;
  LPCWSTR lpSrcStr;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  LPCWSTR lpWideCharStr;
  undefined1 auStackY_a8 [32];
  ulonglong local_58 [3];
  
  puVar10 = auStackY_a8;
  puVar11 = auStackY_a8;
  local_58[0] = DAT_1404dc040 ^ (ulonglong)local_58;
  iVar3 = param_4;
  if (0 < param_4) {
    sVar5 = __strncnt(param_3,(longlong)param_4);
    iVar2 = (int)sVar5;
    iVar3 = iVar2 + 1;
    if (param_4 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  dwFlags = 1;
  if (param_8 != 0) {
    dwFlags = 9;
  }
  iVar2 = MultiByteToWideChar(param_7,dwFlags,param_3,iVar3,(LPWSTR)0x0,0);
  puVar12 = auStackY_a8;
  if (iVar2 != 0) {
    uVar6 = (longlong)iVar2 * 2 + 0x10;
    uVar7 = 0;
    if ((ulonglong)((longlong)iVar2 * 2) < uVar6) {
      uVar7 = uVar6;
    }
    puVar12 = auStackY_a8;
    if (uVar7 != 0) {
      if (uVar7 < 0x401) {
        uVar6 = uVar7 + 0xf;
        if (uVar6 <= uVar7) {
          uVar6 = 0xffffffffffffff0;
        }
        lVar1 = -(uVar6 & 0xfffffffffffffff0);
        puVar10 = auStackY_a8 + lVar1;
        puVar8 = (undefined4 *)((longlong)local_58 + lVar1);
        puVar12 = auStackY_a8 + lVar1;
        if (puVar8 == (undefined4 *)0x0) goto LAB_140294726;
        *puVar8 = 0xcccc;
LAB_1402946e9:
        lpSrcStr = (LPCWSTR)(puVar8 + 4);
        puVar11 = puVar10;
      }
      else {
        puVar8 = (undefined4 *)_malloc_base(uVar7);
        lpSrcStr = (LPCWSTR)0x0;
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = 0xdddd;
          goto LAB_1402946e9;
        }
      }
      puVar12 = puVar11;
      if (lpSrcStr != (LPCWSTR)0x0) {
        *(int *)(puVar11 + 0x28) = iVar2;
        *(LPCWSTR *)(puVar11 + 0x20) = lpSrcStr;
        *(undefined8 *)(puVar11 + -8) = 0x140294710;
        iVar3 = MultiByteToWideChar(param_7,1,param_3,iVar3,*(LPWSTR *)(puVar11 + 0x20),
                                    *(int *)(puVar11 + 0x28));
        if (iVar3 != 0) {
          *(undefined8 *)(puVar11 + 0x40) = 0;
          *(undefined8 *)(puVar11 + 0x38) = 0;
          *(undefined8 *)(puVar11 + 0x30) = 0;
          *(undefined4 *)(puVar11 + 0x28) = 0;
          *(undefined8 *)(puVar11 + 0x20) = 0;
          *(undefined8 *)(puVar11 + -8) = 0x140294771;
          iVar3 = LCMapStringEx(param_1,param_2,lpSrcStr,iVar2,*(LPWSTR *)(puVar11 + 0x20),
                                *(int *)(puVar11 + 0x28),*(LPNLSVERSIONINFO *)(puVar11 + 0x30),
                                *(LPVOID *)(puVar11 + 0x38),*(LPARAM *)(puVar11 + 0x40));
          uVar6 = (ulonglong)iVar3;
          if (iVar3 != 0) {
            if ((param_2 >> 10 & 1) == 0) {
              uVar7 = uVar6 * 2 + 0x10;
              uVar9 = 0;
              if (uVar6 * 2 < uVar7) {
                uVar9 = uVar7;
              }
              if (uVar9 != 0) {
                if (uVar9 < 0x401) {
                  uVar7 = uVar9 + 0xf;
                  if (uVar7 <= uVar9) {
                    uVar7 = 0xffffffffffffff0;
                  }
                  *(undefined8 *)(puVar11 + -8) = 0x14029480d;
                  lVar1 = -(uVar7 & 0xfffffffffffffff0);
                  puVar12 = puVar11 + lVar1;
                  puVar8 = (undefined4 *)(puVar11 + lVar1 + 0x50);
                  if (puVar8 == (undefined4 *)0x0) goto LAB_1402948d6;
                  *puVar8 = 0xcccc;
                  puVar11 = puVar11 + lVar1;
LAB_14029483c:
                  lpWideCharStr = (LPCWSTR)(puVar8 + 4);
                  puVar12 = puVar11;
                }
                else {
                  *(undefined8 *)(puVar11 + -8) = 0x14029482e;
                  puVar8 = (undefined4 *)_malloc_base(uVar9);
                  lpWideCharStr = (LPCWSTR)0x0;
                  if (puVar8 != (undefined4 *)0x0) {
                    *puVar8 = 0xdddd;
                    goto LAB_14029483c;
                  }
                }
                if (lpWideCharStr != (LPCWSTR)0x0) {
                  *(undefined8 *)(puVar12 + 0x40) = 0;
                  *(undefined8 *)(puVar12 + 0x38) = 0;
                  *(undefined8 *)(puVar12 + 0x30) = 0;
                  *(int *)(puVar12 + 0x28) = iVar3;
                  *(LPCWSTR *)(puVar12 + 0x20) = lpWideCharStr;
                  *(undefined8 *)(puVar12 + -8) = 0x140294875;
                  iVar2 = LCMapStringEx(param_1,param_2,lpSrcStr,iVar2,*(LPWSTR *)(puVar12 + 0x20),
                                        *(int *)(puVar12 + 0x28),
                                        *(LPNLSVERSIONINFO *)(puVar12 + 0x30),
                                        *(LPVOID *)(puVar12 + 0x38),*(LPARAM *)(puVar12 + 0x40));
                  if (iVar2 != 0) {
                    if (param_6 == 0) {
                      param_5 = 0;
                      *(undefined8 *)(puVar12 + 0x38) = 0;
                      *(undefined8 *)(puVar12 + 0x30) = 0;
                      *(undefined4 *)(puVar12 + 0x28) = 0;
                    }
                    else {
                      *(undefined8 *)(puVar12 + 0x38) = 0;
                      *(undefined8 *)(puVar12 + 0x30) = 0;
                      *(int *)(puVar12 + 0x28) = param_6;
                    }
                    *(undefined8 *)(puVar12 + 0x20) = param_5;
                    *(undefined8 *)(puVar12 + -8) = 0x1402948c2;
                    uVar4 = WideCharToMultiByte(param_7,0,lpWideCharStr,iVar3,
                                                *(LPSTR *)(puVar12 + 0x20),*(int *)(puVar12 + 0x28),
                                                *(LPCSTR *)(puVar12 + 0x30),
                                                *(LPBOOL *)(puVar12 + 0x38));
                    uVar6 = (ulonglong)uVar4;
                  }
                  if (*(int *)(lpWideCharStr + -8) == 0xdddd) {
                    *(undefined8 *)(puVar12 + -8) = 0x1402948d6;
                    thunk_FUN_1402d9040(lpWideCharStr + -8);
                  }
                }
              }
            }
            else if ((param_6 != 0) && (iVar3 <= param_6)) {
              *(undefined8 *)(puVar11 + 0x40) = 0;
              *(undefined8 *)(puVar11 + 0x38) = 0;
              *(undefined8 *)(puVar11 + 0x30) = 0;
              *(int *)(puVar11 + 0x28) = param_6;
              *(undefined8 *)(puVar11 + 0x20) = param_5;
              *(undefined8 *)(puVar11 + -8) = 0x1402947c6;
              LCMapStringEx(param_1,param_2,lpSrcStr,iVar2,*(LPWSTR *)(puVar11 + 0x20),
                            *(int *)(puVar11 + 0x28),*(LPNLSVERSIONINFO *)(puVar11 + 0x30),
                            *(LPVOID *)(puVar11 + 0x38),*(LPARAM *)(puVar11 + 0x40));
            }
LAB_1402948d6:
            if (*(int *)(lpSrcStr + -8) == 0xdddd) {
              *(undefined8 *)(puVar12 + -8) = 0x1402948e8;
              thunk_FUN_1402d9040(lpSrcStr + -8);
            }
            uVar6 = uVar6 & 0xffffffff;
            goto LAB_140294728;
          }
        }
        if (*(int *)(lpSrcStr + -8) == 0xdddd) {
          *(undefined8 *)(puVar11 + -8) = 0x140294726;
          thunk_FUN_1402d9040(lpSrcStr + -8);
        }
      }
    }
  }
LAB_140294726:
  uVar6 = 0;
LAB_140294728:
  *(undefined8 *)(puVar12 + -8) = 0x140294734;
  return uVar6;
}

