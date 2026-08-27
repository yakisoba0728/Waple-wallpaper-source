// Function: FUN_1402cb2ac
// Addr: 1402cb2ac
// Size: 1275 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402cb2ac(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4,long param_5
                  ,LPCWSTR param_6)

{
  short sVar1;
  int iVar2;
  BOOL BVar3;
  DWORD DVar4;
  errno_t eVar5;
  undefined4 *puVar6;
  short *psVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 local_2d2;
  undefined2 local_2ce [15];
  undefined *puStackY_2b0;
  undefined1 auStackY_2a8 [32];
  HMODULE local_278 [2];
  WCHAR local_268 [264];
  ulonglong local_58;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStackY_2a8;
  puStackY_2b0 = (undefined *)0x1402cb2f2;
  iVar2 = FUN_1402deba0();
  if (iVar2 != 0) goto LAB_1402cb793;
  puStackY_2b0 = (undefined *)0x1402cb30f;
  iVar2 = FUN_1402c9d90();
  if (iVar2 != 0) goto LAB_1402cb793;
  puStackY_2b0 = (undefined *)0x1402cb329;
  iVar2 = FUN_1402c9d90();
  if (iVar2 != 0) goto LAB_1402cb793;
  puStackY_2b0 = (undefined *)0x1402cb345;
  FUN_1404217a0(local_268,0,0x20a);
  local_278[0] = (HMODULE)0x0;
  puStackY_2b0 = (undefined *)0x1402cb35c;
  BVar3 = GetModuleHandleExW(6,param_6,local_278);
  if (BVar3 == 0) {
    local_278[0] = (HMODULE)0x0;
  }
  puStackY_2b0 = (undefined *)0x1402cb382;
  DVar4 = GetModuleFileNameW(local_278[0],local_268,0x105);
  if (DVar4 == 0) {
    puStackY_2b0 = (undefined *)0x1402cb399;
    iVar2 = FUN_1402deba0();
    if (iVar2 != 0) goto LAB_1402cb793;
  }
  lVar10 = -1;
  lVar9 = -1;
  do {
    lVar8 = lVar9;
    lVar9 = lVar8 + 1;
  } while (local_268[lVar9] != L'\0');
  if (0x40 < lVar8 + 0xcU) {
    puVar6 = (undefined4 *)((longlong)&local_2d2 + lVar9 * 2);
    if (puVar6 == (undefined4 *)0x0) {
      puStackY_2b0 = (undefined *)0x1402cb3e0;
      puVar6 = (undefined4 *)FUN_1402caf34();
      *puVar6 = 0x16;
    }
    else {
      if (5 < 0x20aU - (lVar9 * 2 + -0x6a)) {
        *puVar6 = (undefined4)DAT_14042d9f0;
        local_2ce[lVar9] = DAT_14042d9f0._4_2_;
        goto LAB_1402cb409;
      }
      puStackY_2b0 = (undefined *)0x1402cb516;
      FUN_1404217a0();
      puStackY_2b0 = (undefined *)0x1402cb51b;
      puVar6 = (undefined4 *)FUN_1402caf34();
      *puVar6 = 0x22;
    }
    puStackY_2b0 = (undefined *)0x1402cb526;
    FUN_1402cad8c();
    goto LAB_1402cb793;
  }
LAB_1402cb409:
  puStackY_2b0 = (undefined *)0x1402cb417;
  iVar2 = FUN_1402c9d90();
  if (iVar2 != 0) goto LAB_1402cb793;
  puStackY_2b0 = (undefined *)0x1402cb431;
  iVar2 = FUN_1402c9d90();
  if (iVar2 != 0) goto LAB_1402cb793;
  puStackY_2b0 = (undefined *)0x1402cb44b;
  iVar2 = FUN_1402c9d90();
  if (iVar2 != 0) goto LAB_1402cb793;
  lVar9 = -1;
  do {
    lVar8 = lVar9;
    lVar9 = lVar8 + 1;
  } while (*(short *)(param_4 + lVar9 * 2) != 0);
  if (lVar8 + 9U < 0x41) {
LAB_1402cb5ff:
    puStackY_2b0 = (undefined *)0x1402cb60a;
    iVar2 = FUN_1402c9d90();
  }
  else {
    uVar11 = 0xffffffffffffffff;
    do {
      uVar11 = uVar11 + 1;
    } while (*(short *)(param_4 + uVar11 * 2) != 0);
    sVar1 = *(short *)(param_4 + -2 + uVar11 * 2);
    uVar12 = 1;
    if (sVar1 != 0x5c) {
      psVar7 = (short *)(param_4 + -2 + uVar11 * 2);
      do {
        if ((sVar1 == 0x2f) || (uVar11 <= uVar12)) break;
        psVar7 = psVar7 + -1;
        uVar12 = uVar12 + 1;
        sVar1 = *psVar7;
      } while (sVar1 != 0x5c);
    }
    if (0x26 < uVar11 - uVar12) {
      if (0x11 < uVar12) goto LAB_1402cb583;
      puStackY_2b0 = (undefined *)0x1402cb4de;
      iVar2 = FUN_1402bfe60();
      if (iVar2 != 0) goto LAB_1402cb793;
      puStackY_2b0 = (undefined *)0x1402cb4fb;
      iVar2 = FUN_1402c9d90();
joined_r0x0001402cb4fd:
      if (iVar2 != 0) goto LAB_1402cb793;
      goto LAB_1402cb5ff;
    }
    if (0x25 < uVar11 - uVar12) {
LAB_1402cb583:
      puStackY_2b0 = (undefined *)0x1402cb597;
      iVar2 = FUN_1402bfe60();
      if (iVar2 != 0) goto LAB_1402cb793;
      puStackY_2b0 = (undefined *)0x1402cb5b4;
      iVar2 = FUN_1402c9d90();
      if (iVar2 != 0) goto LAB_1402cb793;
      puStackY_2b0 = (undefined *)0x1402cb5cf;
      iVar2 = FUN_1402bfe60();
      if (iVar2 != 0) goto LAB_1402cb793;
      puStackY_2b0 = (undefined *)0x1402cb5e9;
      iVar2 = FUN_1402c9d90();
      goto joined_r0x0001402cb4fd;
    }
    puStackY_2b0 = (undefined *)0x1402cb547;
    iVar2 = FUN_1402bfe60();
    if (iVar2 != 0) goto LAB_1402cb793;
    puStackY_2b0 = (undefined *)0x1402cb561;
    iVar2 = FUN_1402c9d90();
    if (iVar2 != 0) goto LAB_1402cb793;
    puStackY_2b0 = (undefined *)0x1402cb57b;
    iVar2 = FUN_1402c9d90();
  }
  if (iVar2 == 0) {
    puStackY_2b0 = (undefined *)0x1402cb624;
    iVar2 = FUN_1402c9d90();
    if (iVar2 == 0) {
      puStackY_2b0 = (undefined *)0x1402cb63e;
      iVar2 = FUN_1402c9d90();
      if (iVar2 == 0) {
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (*(short *)(param_1 + lVar9 * 2) != 0);
        lVar8 = -1;
        do {
          lVar8 = lVar8 + 1;
        } while (*(short *)(param_1 + lVar8 * 2) != 0);
        puStackY_2b0 = (undefined *)0x1402cb67c;
        eVar5 = FID_conflict__ltow_s(param_5,(wchar_t *)(param_1 + lVar8 * 2),param_2 - lVar9,10);
        if (eVar5 == 0) {
          puStackY_2b0 = (undefined *)0x1402cb696;
          iVar2 = FUN_1402c9d90();
          if (iVar2 == 0) {
            puStackY_2b0 = (undefined *)0x1402cb6b0;
            iVar2 = FUN_1402c9d90();
            if (iVar2 == 0) {
              lVar9 = -1;
              do {
                lVar8 = lVar9;
                lVar9 = lVar8 + 1;
              } while (*(short *)(param_1 + lVar9 * 2) != 0);
              do {
                lVar10 = lVar10 + 1;
              } while (*(short *)(param_3 + lVar10 * 2) != 0);
              if (param_2 < (ulonglong)(lVar10 + lVar8 + 0xb1)) {
                puStackY_2b0 = (undefined *)0x1402cb6f6;
                iVar2 = FUN_1402bfe60();
                if (iVar2 != 0) goto LAB_1402cb793;
              }
              puStackY_2b0 = (undefined *)0x1402cb710;
              iVar2 = FUN_1402c9d90();
              if (iVar2 == 0) {
                puStackY_2b0 = (undefined *)0x1402cb726;
                iVar2 = FUN_1402c9d90();
                if (iVar2 == 0) {
                  puStackY_2b0 = (undefined *)0x1402cb73c;
                  iVar2 = FUN_1402c9d90();
                  if (iVar2 == 0) {
                    puStackY_2b0 = (undefined *)0x1402cb752;
                    iVar2 = FUN_1402c9d90();
                    if (iVar2 == 0) {
                      puStackY_2b0 = (undefined *)0x1402cb768;
                      iVar2 = FUN_1402c9d90();
                      if (iVar2 == 0) {
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1402cb793:
                    /* WARNING: Subroutine does not return */
  puStackY_2b0 = &UNK_1402cb7a7;
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

