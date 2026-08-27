// Function: FUN_1402d3020
// Addr: 1402d3020
// Size: 659 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1402d3020(longlong param_1,int param_2,wchar_t *param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  short *psVar5;
  size_t sVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  size_t _MaxCount;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  undefined **ppuVar14;
  undefined1 auStackY_248 [32];
  short local_208 [136];
  undefined1 local_f8 [176];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStackY_248;
  iVar12 = 0;
  if (param_2 != 0) {
    if (param_3 == (wchar_t *)0x0) {
      return *(undefined8 *)((longlong)param_2 * 0x20 + 0x28 + param_1);
    }
    uVar4 = FUN_1402d32b8();
    return uVar4;
  }
  if (param_3 != (wchar_t *)0x0) {
    iVar11 = iVar12;
    if (((*param_3 == L'L') && (param_3[1] == L'C')) && (param_3[2] == L'_')) {
      do {
        psVar5 = (short *)FUN_1402e57b0(param_3,&DAT_14042e9d0);
        if (((psVar5 == (short *)0x0) ||
            (_MaxCount = (longlong)psVar5 - (longlong)param_3 >> 1, _MaxCount == 0)) ||
           (*psVar5 == 0x3b)) {
          return 0;
        }
        iVar12 = 1;
        ppuVar14 = &PTR_u_LC_COLLATE_14042e8d8;
        do {
          iVar3 = wcsncmp((wchar_t *)*ppuVar14,param_3,_MaxCount);
          if (iVar3 == 0) {
            sVar6 = 0xffffffffffffffff;
            do {
              sVar6 = sVar6 + 1;
            } while (*(short *)(*ppuVar14 + sVar6 * 2) != 0);
            if (_MaxCount == sVar6) break;
          }
          iVar12 = iVar12 + 1;
          ppuVar14 = ppuVar14 + 3;
        } while ((longlong)ppuVar14 < 0x14042e939);
        psVar5 = psVar5 + 1;
        lVar7 = FUN_1402e5710(psVar5,&DAT_14042e9d8);
        if ((lVar7 == 0) && (*psVar5 != 0x3b)) {
          return 0;
        }
        if (iVar12 < 6) {
          iVar3 = FUN_1402d9b20();
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          if (0x105 < (ulonglong)(lVar7 * 2)) {
                    /* WARNING: Subroutine does not return */
            FUN_1402ed4d0();
          }
          local_208[lVar7] = 0;
          lVar8 = FUN_1402d32b8(param_1,iVar12,local_208);
          if (lVar8 != 0) {
            iVar11 = iVar11 + 1;
          }
        }
      } while ((psVar5[lVar7] != 0) && (param_3 = psVar5 + lVar7 + 1, *param_3 != L'\0'));
    }
    else {
      lVar7 = FUN_1402d28a4(param_3,local_208,0x83,local_f8);
      if (lVar7 == 0) {
        return 0;
      }
      plVar13 = (longlong *)(param_1 + 0x28);
      iVar3 = iVar12;
      iVar9 = 1;
      do {
        iVar10 = iVar9;
        if (iVar3 != 0) {
          psVar5 = local_208;
          lVar7 = *plVar13 - (longlong)psVar5;
          do {
            sVar1 = *psVar5;
            sVar2 = *(short *)((longlong)psVar5 + lVar7);
            if (sVar1 != sVar2) break;
            psVar5 = psVar5 + 1;
          } while (sVar2 != 0);
          if ((sVar1 == sVar2) ||
             (lVar7 = FUN_1402d32b8(param_1,iVar3,local_208), iVar10 = iVar12, lVar7 != 0)) {
            iVar11 = iVar11 + 1;
            iVar10 = iVar9;
          }
        }
        iVar3 = iVar3 + 1;
        plVar13 = plVar13 + 4;
        iVar9 = iVar10;
      } while (iVar3 < 6);
      if (iVar10 != 0) goto LAB_1402d31c3;
    }
    if (iVar11 == 0) {
      return 0;
    }
  }
LAB_1402d31c3:
  uVar4 = FUN_1402d2e34(param_1);
  return uVar4;
}

