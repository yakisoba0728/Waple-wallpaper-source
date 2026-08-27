// Function: FUN_140007730
// Addr: 140007730
// Size: 970 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_140007730(void)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  BOOL BVar4;
  DWORD DVar5;
  int cbMultiByte;
  undefined8 uVar6;
  LPSTR *****ppppppCVar7;
  LPCWSTR ******pppppppWVar8;
  ulonglong uVar9;
  LPSTR ******pppppppCVar10;
  undefined8 *******pppppppuVar11;
  ulonglong uVar12;
  LPSTR ******pppppppCVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  DWORD local_res8 [2];
  undefined1 auStackY_2d8 [8];
  undefined1 auStackY_2d0 [24];
  LPSTR ******local_298;
  undefined8 uStack_290;
  longlong local_288;
  ulonglong uStack_280;
  LPCWSTR ******local_278;
  undefined8 uStack_270;
  longlong local_268;
  ulonglong local_260;
  LPSTR ******local_258;
  undefined8 uStack_250;
  longlong local_248;
  ulonglong uStack_240;
  undefined8 *******local_238 [3];
  ulonglong local_220;
  WCHAR local_218 [256];
  
  puVar14 = auStackY_2d8;
  FUN_1404217a0(local_218,0,0x200);
  local_res8[0] = 0x100;
  BVar4 = GetUserNameW(local_218,local_res8);
  if (BVar4 == 0) {
    DVar5 = GetLastError();
    FUN_140098760("Failed reading user name, error: %i\n",DVar5);
  }
  pppppppCVar13 = (LPSTR ******)0x0;
  local_268 = 0;
  local_278 = (LPCWSTR ******)0x0;
  uStack_270 = 0;
  local_260 = 0;
  uVar6 = FUN_1402d6aa0(local_218);
  FUN_140016170(&local_278,local_218,uVar6);
  if (local_268 == 0) {
LAB_140007887:
    local_288 = 0;
    uStack_290 = 0;
    local_298 = (LPSTR ******)0x0;
    uStack_280 = 0xf;
  }
  else {
    pppppppWVar8 = (LPCWSTR ******)&local_278;
    if (7 < local_260) {
      pppppppWVar8 = local_278;
    }
    cbMultiByte = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar8,(int)local_268,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
    if (cbMultiByte < 1) goto LAB_140007887;
    FUN_140016940(&local_258,(longlong)cbMultiByte,0);
    pppppppCVar10 = (LPSTR ******)&local_258;
    if (0xf < uStack_240) {
      pppppppCVar10 = local_258;
    }
    pppppppWVar8 = (LPCWSTR ******)&local_278;
    if (7 < local_260) {
      pppppppWVar8 = local_278;
    }
    WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppppWVar8,(int)local_268,(LPSTR)pppppppCVar10,
                        cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
    local_288 = local_248;
    uStack_280 = uStack_240;
    local_298 = local_258;
    uStack_290 = uStack_250;
  }
  if (local_260 < 8) {
LAB_1400078ff:
    uVar12 = uStack_280;
    pppppppCVar10 = local_298;
    if (local_288 == 0) {
      if (uStack_280 < 0xb) {
        uVar15 = 0x7fffffffffffffff;
        if (0x7fffffffffffffff - (uStack_280 >> 1) < uStack_280) {
          uVar9 = 0x8000000000000027;
LAB_14000796d:
          ppppppCVar7 = (LPSTR *****)FUN_14028af20(uVar9);
          if (ppppppCVar7 == (LPSTR *****)0x0) goto LAB_140007aee;
          pppppppCVar13 = (LPSTR ******)((longlong)ppppppCVar7 + 0x27U & 0xffffffffffffffe0);
          pppppppCVar13[-1] = ppppppCVar7;
        }
        else {
          uVar1 = (uStack_280 >> 1) + uStack_280;
          uVar15 = 0xf;
          if (0xf < uVar1) {
            uVar15 = uVar1;
          }
          uVar1 = uVar15 + 1;
          if (uVar1 != 0) {
            if (0xfff < uVar1) {
              uVar9 = uVar15 + 0x28;
              if (uVar9 <= uVar1) goto LAB_140007af5;
              goto LAB_14000796d;
            }
            pppppppCVar13 = (LPSTR ******)FUN_14028af20(uVar1);
          }
        }
        uVar3 = s_unknownuser_1404737e0._7_4_;
        local_288 = 0xb;
        *pppppppCVar13 =
             (LPSTR *****)CONCAT17(s_unknownuser_1404737e0[7],s_unknownuser_1404737e0._0_7_);
        *(undefined4 *)((longlong)pppppppCVar13 + 7) = uVar3;
        *(CHAR *)((longlong)pppppppCVar13 + 0xb) = '\0';
        pppppppCVar10 = pppppppCVar13;
        uStack_280 = uVar15;
        if (0xf < uVar12) {
          uVar15 = uVar12 + 1;
          pppppppCVar13 = local_298;
          if (0xfff < uVar15) {
            pppppppCVar13 = (LPSTR ******)local_298[-1];
            if ((LPSTR)0x1f < (LPSTR)((longlong)local_298 + (-8 - (longlong)pppppppCVar13)))
            goto LAB_140007aee;
            uVar15 = uVar12 + 0x28;
          }
          thunk_FUN_14028af80(pppppppCVar13,uVar15);
        }
      }
      else {
        local_288 = 0xb;
        pppppppCVar13 = (LPSTR ******)&local_298;
        if (0xf < uStack_280) {
          pppppppCVar13 = local_298;
        }
        FUN_1404210f0(pppppppCVar13,"unknownuser",0xb);
        *(CHAR *)((longlong)pppppppCVar13 + 0xb) = '\0';
        pppppppCVar10 = local_298;
      }
    }
    local_298 = pppppppCVar10;
    uVar6 = FUN_140005ee0(&local_258);
    uVar6 = FUN_140005d20(uVar6,"config.json");
    FUN_140016600(local_238,uVar6);
    FUN_140016770(&local_258);
    pppppppuVar11 = local_238;
    if (7 < local_220) {
      pppppppuVar11 = local_238[0];
    }
    FUN_140040470(&PTR_s_wallpaperconfig_1404df5a0,pppppppuVar11,&local_298,
                  DAT_1404df540 >> 0xc & 0xffffff01);
    FUN_140016770(local_238);
    if (uStack_280 < 0x10) {
      return;
    }
    uVar12 = uStack_280 + 1;
    pppppppCVar13 = local_298;
    if (uVar12 < 0x1000) {
LAB_140007ac6:
      thunk_FUN_14028af80(pppppppCVar13,uVar12);
      return;
    }
    pppppppCVar13 = (LPSTR ******)local_298[-1];
    if ((LPSTR)((longlong)local_298 + (-8 - (longlong)pppppppCVar13)) < (LPSTR)0x20) {
      uVar12 = uStack_280 + 0x28;
      goto LAB_140007ac6;
    }
  }
  else {
    uVar12 = local_260 * 2 + 2;
    pppppppWVar8 = local_278;
    if (uVar12 < 0x1000) {
LAB_1400078ed:
      thunk_FUN_14028af80(pppppppWVar8,uVar12);
      goto LAB_1400078ff;
    }
    pppppppWVar8 = (LPCWSTR ******)local_278[-1];
    if ((ulonglong)((longlong)local_278 + (-8 - (longlong)pppppppWVar8)) < 0x20) {
      uVar12 = local_260 * 2 + 0x29;
      goto LAB_1400078ed;
    }
  }
LAB_140007aee:
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)(5);
  puVar14 = auStackY_2d0;
LAB_140007af5:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar14 + -8) = &UNK_140007afa;
  FUN_140017370();
}

