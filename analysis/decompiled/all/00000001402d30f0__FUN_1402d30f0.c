// Function: FUN_1402d30f0
// Addr: 1402d30f0
// Size: 473 bytes


void FUN_1402d30f0(longlong param_1,int param_2,wchar_t *param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  size_t sVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  size_t _MaxCount;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  undefined **ppuVar13;
  undefined1 auStackY_248 [32];
  short local_208 [136];
  undefined1 auStack_f8 [176];
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStackY_248;
  iVar11 = 0;
  if (param_2 != 0) {
    if (param_3 != (wchar_t *)0x0) {
      FUN_1402d3388();
    }
    goto LAB_1402d3298;
  }
  if (param_3 != (wchar_t *)0x0) {
    iVar10 = iVar11;
    if (((*param_3 == L'L') && (param_3[1] == L'C')) && (param_3[2] == L'_')) {
      do {
        psVar4 = (short *)FUN_1402e5880(param_3,&DAT_14042eaa0);
        if (((psVar4 == (short *)0x0) ||
            (_MaxCount = (longlong)psVar4 - (longlong)param_3 >> 1, _MaxCount == 0)) ||
           (*psVar4 == 0x3b)) goto LAB_1402d3298;
        iVar11 = 1;
        ppuVar13 = &PTR_DAT_14042e9a8;
        do {
          iVar3 = wcsncmp((wchar_t *)*ppuVar13,param_3,_MaxCount);
          if (iVar3 == 0) {
            sVar5 = 0xffffffffffffffff;
            do {
              sVar5 = sVar5 + 1;
            } while (*(short *)(*ppuVar13 + sVar5 * 2) != 0);
            if (_MaxCount == sVar5) break;
          }
          iVar11 = iVar11 + 1;
          ppuVar13 = ppuVar13 + 3;
        } while ((longlong)ppuVar13 < 0x14042ea09);
        psVar4 = psVar4 + 1;
        lVar6 = FUN_1402e57e0(psVar4,&DAT_14042eaa8);
        if ((lVar6 == 0) && (*psVar4 != 0x3b)) goto LAB_1402d3298;
        if (iVar11 < 6) {
          iVar3 = FUN_1402d9bf0();
          if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          if (0x105 < (ulonglong)(lVar6 * 2)) {
                    /* WARNING: Subroutine does not return */
            FUN_1402ed5a0();
          }
          local_208[lVar6] = 0;
          lVar7 = FUN_1402d3388(param_1,iVar11,local_208);
          if (lVar7 != 0) {
            iVar10 = iVar10 + 1;
          }
        }
      } while ((psVar4[lVar6] != 0) && (param_3 = psVar4 + lVar6 + 1, *param_3 != L'\0'));
    }
    else {
      lVar6 = FUN_1402d2974(param_3,local_208,0x83,auStack_f8);
      if (lVar6 == 0) goto LAB_1402d3298;
      plVar12 = (longlong *)(param_1 + 0x28);
      iVar3 = iVar11;
      iVar8 = 1;
      do {
        iVar9 = iVar8;
        if (iVar3 != 0) {
          psVar4 = local_208;
          lVar6 = *plVar12 - (longlong)psVar4;
          do {
            sVar1 = *psVar4;
            sVar2 = *(short *)((longlong)psVar4 + lVar6);
            if (sVar1 != sVar2) break;
            psVar4 = psVar4 + 1;
          } while (sVar2 != 0);
          if ((sVar1 == sVar2) ||
             (lVar6 = FUN_1402d3388(param_1,iVar3,local_208), iVar9 = iVar11, lVar6 != 0)) {
            iVar10 = iVar10 + 1;
            iVar9 = iVar8;
          }
        }
        iVar3 = iVar3 + 1;
        plVar12 = plVar12 + 4;
        iVar8 = iVar9;
      } while (iVar3 < 6);
      if (iVar9 != 0) goto LAB_1402d3293;
    }
    if (iVar10 == 0) goto LAB_1402d3298;
  }
LAB_1402d3293:
  FUN_1402d2f04(param_1);
LAB_1402d3298:
  func_0x0001402ed2f0(local_48 ^ (ulonglong)auStackY_248);
  return;
}

