// Function: FUN_1402dd468
// Addr: 1402dd468
// Size: 561 bytes


uint * FUN_1402dd468(uint *param_1,short *param_2)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = DAT_1404e46b4;
  sVar7 = *param_2;
  while (sVar7 == 0x20) {
    param_2 = param_2 + 1;
    sVar7 = *param_2;
  }
  if (sVar7 == 0x61) {
    *param_1 = 0x109;
LAB_1402dd4de:
    param_1[1] = 2;
  }
  else {
    if (sVar7 != 0x72) {
      if (sVar7 != 0x77) goto UNWIND_INFO_1402dd736_UnwindCodes_1__OffsetInProlog;
      *param_1 = 0x301;
      goto LAB_1402dd4de;
    }
    param_1[1] = 1;
  }
  pwVar12 = param_2 + 1;
  bVar6 = true;
  bVar2 = false;
  bVar5 = false;
  lVar11 = 10;
  bVar3 = bVar2;
  bVar4 = bVar2;
LAB_1402dd4fc:
  if (*pwVar12 == L'\0') goto LAB_1402dd64e;
  wVar1 = *pwVar12;
  if ((ushort)wVar1 < 0x54) {
    if (wVar1 == L'S') {
      if (bVar2) goto LAB_1402dd62c;
      *param_1 = *param_1 | 0x20;
LAB_1402dd5ad:
      bVar2 = true;
      bVar6 = true;
      goto LAB_1402dd639;
    }
    if (wVar1 == L' ') goto LAB_1402dd639;
    if (wVar1 == L'+') {
      if (!bVar5) {
        bVar5 = true;
        if ((*param_1 & 2) == 0) {
          bVar6 = true;
          *param_1 = *param_1 & 0xfffffffe | 2;
          param_1[1] = param_1[1] & 0xfffffffc | 4;
          goto LAB_1402dd639;
        }
      }
    }
    else if (wVar1 == L',') {
      bVar4 = true;
    }
    else {
      if (wVar1 == L'D') {
        if ((*param_1 & 0x40) == 0) {
          uVar8 = *param_1 | 0x40;
          goto LAB_1402dd635;
        }
        goto LAB_1402dd62c;
      }
      if (wVar1 == L'N') {
        *param_1 = *param_1 | 0x80;
LAB_1402dd637:
        bVar6 = true;
        goto LAB_1402dd639;
      }
      if (wVar1 != L'R') goto UNWIND_INFO_1402dd736_UnwindCodes_1__OffsetInProlog;
      if (!bVar2) {
        *param_1 = *param_1 | 0x10;
        goto LAB_1402dd5ad;
      }
    }
  }
  else if (wVar1 == L'T') {
    if ((*param_1 >> 0xc & 1) == 0) {
      uVar8 = *param_1 | 0x1000;
      goto LAB_1402dd635;
    }
  }
  else if (wVar1 == L'b') {
    if ((*param_1 & 0xc000) == 0) {
      uVar8 = *param_1 | 0x8000;
      goto LAB_1402dd635;
    }
  }
  else if (wVar1 == L'c') {
    if (!bVar3) {
      param_1[1] = param_1[1] | 0x800;
LAB_1402dd60d:
      bVar3 = true;
      bVar6 = true;
      goto LAB_1402dd639;
    }
  }
  else if (wVar1 == L'n') {
    if (!bVar3) {
      param_1[1] = param_1[1] & 0xfffff7ff;
      goto LAB_1402dd60d;
    }
  }
  else if (wVar1 == L't') {
    if ((*param_1 & 0xc000) == 0) {
      uVar8 = *param_1 | 0x4000;
      goto LAB_1402dd635;
    }
  }
  else {
    if (wVar1 != L'x') goto UNWIND_INFO_1402dd736_UnwindCodes_1__OffsetInProlog;
    if ((*param_1 >> 9 & 1) != 0) {
      uVar8 = *param_1 | 0x400;
LAB_1402dd635:
      *param_1 = uVar8;
      goto LAB_1402dd637;
    }
  }
LAB_1402dd62c:
  bVar6 = false;
LAB_1402dd639:
  pwVar12 = (wchar_t *)((longlong)pwVar12 + (ulonglong)(-(uint)bVar6 & 2));
  if (!bVar6) goto LAB_1402dd64e;
  goto LAB_1402dd4fc;
LAB_1402dd64e:
  pwVar10 = pwVar12 + 1;
  if (!bVar4) {
    pwVar10 = pwVar12;
  }
  for (; *pwVar10 == L' '; pwVar10 = pwVar10 + 1) {
  }
  if (bVar4) {
    iVar9 = wcsncmp(pwVar10,L"ccs",3);
    if (iVar9 != 0) goto UNWIND_INFO_1402dd736_UnwindCodes_1__OffsetInProlog;
    for (pwVar10 = pwVar10 + 3; *pwVar10 == L' '; pwVar10 = pwVar10 + 1) {
    }
    if (*pwVar10 != L'=') goto UNWIND_INFO_1402dd736_UnwindCodes_1__OffsetInProlog;
    do {
      pwVar10 = pwVar10 + 1;
    } while (*pwVar10 == L' ');
    iVar9 = FUN_1402cb0a0(pwVar10,&UNK_1404303c0,5);
    if (iVar9 == 0) {
      *param_1 = *param_1 | 0x40000;
    }
    else {
      iVar9 = FUN_1402cb0a0(pwVar10,L"UTF-16LEUNICODE",8);
      if (iVar9 == 0) {
        *param_1 = *param_1 | 0x20000;
        lVar11 = 0x10;
      }
      else {
        iVar9 = FUN_1402cb0a0(pwVar10,L"UNICODE",7);
        if (iVar9 != 0) goto UNWIND_INFO_1402dd736_UnwindCodes_1__OffsetInProlog;
        *param_1 = *param_1 | 0x10000;
        lVar11 = 0xe;
      }
    }
    for (pwVar10 = (wchar_t *)((longlong)pwVar10 + lVar11); wVar1 = *pwVar10, wVar1 == L' ';
        pwVar10 = pwVar10 + 1) {
    }
  }
  else {
    wVar1 = *pwVar10;
  }
  if (wVar1 == L'\0') {
    *(undefined1 *)(param_1 + 2) = 1;
    return param_1;
  }
UNWIND_INFO_1402dd736_UnwindCodes_1__OffsetInProlog:
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

