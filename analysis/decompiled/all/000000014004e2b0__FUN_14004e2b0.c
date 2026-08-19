// Function: FUN_14004e2b0
// Addr: 14004e2b0
// Size: 2877 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_14004e2b0(undefined8 *******param_1,undefined8 *******param_2,longlong param_3,
                  undefined1 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 ******ppppppuVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  ulonglong uVar13;
  undefined8 *******pppppppuVar14;
  undefined8 ******ppppppuVar15;
  undefined8 *******pppppppuVar16;
  ulonglong uVar17;
  undefined8 ******ppppppuVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuVar20;
  undefined8 ******ppppppuVar21;
  undefined8 ******ppppppuVar22;
  undefined8 *******pppppppuVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined8 *******local_c0;
  undefined8 ******ppppppuStack_b8;
  undefined8 ******local_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 ******local_a0;
  undefined8 ******ppppppuStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 *******local_80;
  undefined8 ******ppppppuStack_78;
  undefined8 ******local_70;
  undefined8 ******ppppppuStack_68;
  
  lVar10 = (longlong)param_2 - (longlong)param_1;
joined_r0x00014004e2f0:
  if (0x20 < lVar10 >> 5) {
    uVar17 = (longlong)param_2 - (longlong)param_1;
    uVar24 = (longlong)uVar17 >> 6;
    if (0 < param_3) {
      pppppppuVar20 = param_2 + -4;
      pppppppuVar11 = param_1 + uVar24 * 4;
      lVar10 = (longlong)pppppppuVar20 - (longlong)param_1 >> 5;
      pppppppuVar12 = param_1;
      if (0x28 < lVar10) {
        lVar10 = lVar10 + 1 >> 3;
        pppppppuVar12 = param_1 + lVar10 * 4;
        func_0x000140050790(param_1,pppppppuVar12,param_1 + lVar10 * 8);
        func_0x000140050790(pppppppuVar11 + lVar10 * -4,pppppppuVar11,pppppppuVar11 + lVar10 * 4);
        pppppppuVar20 = pppppppuVar20 + lVar10 * -4;
        func_0x000140050790(param_2 + lVar10 * -8 + -4,pppppppuVar20);
      }
      func_0x000140050790(pppppppuVar12,pppppppuVar11,pppppppuVar20);
      pppppppuVar20 = pppppppuVar11;
      while (pppppppuVar12 = pppppppuVar20, param_1 < pppppppuVar12) {
        pppppppuVar20 = pppppppuVar12 + -4;
        cVar8 = func_0x000140038d00(pppppppuVar20,pppppppuVar12);
        if ((cVar8 < '\0') ||
           (cVar8 = func_0x000140038d00(pppppppuVar12,pppppppuVar20), cVar8 < '\0')) break;
      }
      do {
        pppppppuVar11 = pppppppuVar11 + 4;
        pppppppuVar14 = pppppppuVar11;
        pppppppuVar20 = pppppppuVar12;
        if (param_2 <= pppppppuVar11) goto joined_r0x00014004e403;
        cVar8 = func_0x000140038d00(pppppppuVar11,pppppppuVar12);
        if ((cVar8 < '\0') ||
           (cVar8 = func_0x000140038d00(pppppppuVar12,pppppppuVar11), cVar8 < '\0'))
        goto joined_r0x00014004e403;
      } while( true );
    }
    if ((longlong)uVar24 < 1) goto LAB_14004ea2d;
    uVar1 = ((longlong)uVar17 >> 5) - 1;
    uVar13 = (longlong)uVar1 >> 1;
    goto LAB_14004e6c0;
  }
  if ((param_1 == param_2) || (pppppppuVar20 = param_1 + 4, pppppppuVar20 == param_2)) {
    return;
  }
LAB_14004e640:
  pppppppuVar11 = (undefined8 *******)*pppppppuVar20;
  ppppppuVar18 = pppppppuVar20[1];
  ppppppuVar22 = pppppppuVar20[2];
  ppppppuVar3 = pppppppuVar20[3];
  pppppppuVar20[2] = (undefined8 ******)0x0;
  pppppppuVar20[3] = (undefined8 ******)0xf;
  *(undefined1 *)pppppppuVar20 = 0;
  ppppppuVar15 = param_1[2];
  pppppppuVar12 = param_1;
  if ((undefined8 ******)0xf < param_1[3]) {
    pppppppuVar12 = (undefined8 *******)*param_1;
  }
  pppppppuVar14 = &local_c0;
  if ((undefined8 ******)0xf < ppppppuVar3) {
    pppppppuVar14 = pppppppuVar11;
  }
  ppppppuVar21 = ppppppuVar22;
  if (ppppppuVar15 < ppppppuVar22) {
    ppppppuVar21 = ppppppuVar15;
  }
  local_c0 = pppppppuVar11;
  ppppppuStack_b8 = ppppppuVar18;
  local_b0 = ppppppuVar22;
  ppppppuStack_a8 = ppppppuVar3;
  iVar9 = func_0x0001404210c0(pppppppuVar14,pppppppuVar12,ppppppuVar21);
  if (iVar9 == 0) {
    if (ppppppuVar15 <= ppppppuVar22) {
      pppppppuVar12 = pppppppuVar20;
      if (ppppppuVar22 <= ppppppuVar15) goto code_r0x00014004ecd0;
      goto LAB_14004ebb7;
    }
    cVar8 = -1;
  }
  else if (iVar9 < 0) {
    cVar8 = -1;
  }
  else {
LAB_14004ebb7:
    cVar8 = '\x01';
  }
  pppppppuVar12 = pppppppuVar20;
  if (-1 < cVar8) {
code_r0x00014004ecd0:
    pppppppuVar19 = pppppppuVar12;
    pppppppuVar12 = pppppppuVar19 + -4;
    ppppppuVar15 = pppppppuVar19[-2];
    pppppppuVar14 = pppppppuVar12;
    if ((undefined8 ******)0xf < pppppppuVar19[-1]) {
      pppppppuVar14 = (undefined8 *******)*pppppppuVar12;
    }
    pppppppuVar16 = &local_c0;
    if ((undefined8 ******)0xf < ppppppuVar3) {
      pppppppuVar16 = pppppppuVar11;
    }
    ppppppuVar21 = ppppppuVar22;
    if (ppppppuVar15 < ppppppuVar22) {
      ppppppuVar21 = ppppppuVar15;
    }
    iVar9 = func_0x0001404210c0(pppppppuVar16,pppppppuVar14,ppppppuVar21);
    if (iVar9 == 0) {
      if (ppppppuVar22 < ppppppuVar15) {
        cVar8 = -1;
      }
      else {
        if (ppppppuVar22 <= ppppppuVar15) goto UNWIND_INFO_14004ed99_UnwindCodes_3__UnwindOpCode;
LAB_14004ed25:
        cVar8 = '\x01';
      }
    }
    else {
      if (-1 < iVar9) goto LAB_14004ed25;
      cVar8 = -1;
    }
    if (-1 < cVar8) goto UNWIND_INFO_14004ed99_UnwindCodes_3__UnwindOpCode;
    if (pppppppuVar19 != pppppppuVar12) {
      ppppppuVar15 = pppppppuVar19[3];
      if ((undefined8 ******)0xf < ppppppuVar15) {
        ppppppuVar22 = *pppppppuVar19;
        ppppppuVar18 = (undefined8 ******)((longlong)ppppppuVar15 + 1);
        if ((undefined8 ******)0xfff < ppppppuVar18) {
          if (0x1f < (ulonglong)((longlong)ppppppuVar22 + (-8 - (longlong)ppppppuVar22[-1])))
          goto LAB_14004ee62;
          ppppppuVar18 = ppppppuVar15 + 5;
          ppppppuVar22 = (undefined8 ******)ppppppuVar22[-1];
        }
        func_0x00014028b040(ppppppuVar22,ppppppuVar18);
        return;
      }
      pppppppuVar19[3] = (undefined8 ******)0xf;
      pppppppuVar19[2] = (undefined8 ******)0x0;
      *(undefined1 *)pppppppuVar19 = 0;
      *pppppppuVar19 = *pppppppuVar12;
      pppppppuVar19[1] = pppppppuVar19[-3];
      pppppppuVar19[2] = pppppppuVar19[-2];
      pppppppuVar19[3] = pppppppuVar19[-1];
      pppppppuVar19[-2] = (undefined8 ******)0x0;
      pppppppuVar19[-1] = (undefined8 ******)0xf;
      *(undefined1 *)pppppppuVar12 = 0;
    }
    goto code_r0x00014004ecd0;
  }
  pppppppuVar12 = pppppppuVar20 + 4;
  pppppppuVar14 = pppppppuVar20;
  while (pppppppuVar16 = pppppppuVar14, pppppppuVar19 = pppppppuVar12, param_1 != pppppppuVar16) {
    pppppppuVar14 = pppppppuVar16 + -4;
    pppppppuVar12 = pppppppuVar19 + -4;
    if (pppppppuVar12 != pppppppuVar14) {
      ppppppuVar15 = pppppppuVar19[-1];
      if ((undefined8 ******)0xf < ppppppuVar15) {
        ppppppuVar22 = *pppppppuVar12;
        ppppppuVar18 = (undefined8 ******)((longlong)ppppppuVar15 + 1);
        if ((undefined8 ******)0xfff < ppppppuVar18) {
          if (0x1f < (ulonglong)((longlong)ppppppuVar22 + (-8 - (longlong)ppppppuVar22[-1])))
          goto LAB_14004ee62;
          ppppppuVar18 = ppppppuVar15 + 5;
          ppppppuVar22 = (undefined8 ******)ppppppuVar22[-1];
        }
        func_0x00014028b040(ppppppuVar22,ppppppuVar18);
        return;
      }
      pppppppuVar19[-1] = (undefined8 ******)0xf;
      pppppppuVar19[-2] = (undefined8 ******)0x0;
      *(undefined1 *)pppppppuVar12 = 0;
      ppppppuVar15 = pppppppuVar16[-3];
      *pppppppuVar12 = *pppppppuVar14;
      pppppppuVar19[-3] = ppppppuVar15;
      ppppppuVar15 = pppppppuVar16[-1];
      pppppppuVar19[-2] = pppppppuVar16[-2];
      pppppppuVar19[-1] = ppppppuVar15;
      pppppppuVar16[-2] = (undefined8 ******)0x0;
      pppppppuVar16[-1] = (undefined8 ******)0xf;
      *(undefined1 *)pppppppuVar14 = 0;
    }
  }
  if ((undefined8 ********)param_1 == &local_c0) goto LAB_14004ee06;
  ppppppuVar15 = param_1[3];
  if (ppppppuVar15 < (undefined8 ******)0x10) {
    *param_1 = pppppppuVar11;
    param_1[1] = ppppppuVar18;
    param_1[2] = ppppppuVar22;
    param_1[3] = ppppppuVar3;
    goto LAB_14004ee50;
  }
  ppppppuVar22 = *param_1;
  ppppppuVar18 = (undefined8 ******)((longlong)ppppppuVar15 + 1);
  if ((undefined8 ******)0xfff < ppppppuVar18) {
    if (0x1f < (ulonglong)((longlong)ppppppuVar22 + (-8 - (longlong)ppppppuVar22[-1]))) {
LAB_14004ee62:
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ppppppuVar18 = ppppppuVar15 + 5;
    ppppppuVar22 = (undefined8 ******)ppppppuVar22[-1];
  }
  func_0x00014028b040(ppppppuVar22,ppppppuVar18);
  return;
joined_r0x00014004e403:
  pppppppuVar19 = pppppppuVar14;
  if (pppppppuVar11 < param_2) {
    cVar8 = func_0x000140038d00(pppppppuVar20,pppppppuVar11);
    if (-1 < cVar8) {
      cVar8 = func_0x000140038d00(pppppppuVar11,pppppppuVar20);
      if (cVar8 < '\0') goto joined_r0x00014004e456;
      if (pppppppuVar19 != pppppppuVar11) {
        ppppppuVar15 = pppppppuVar11[1];
        ppppppuVar18 = *pppppppuVar19;
        ppppppuVar22 = pppppppuVar19[1];
        ppppppuVar3 = pppppppuVar19[2];
        ppppppuVar21 = pppppppuVar19[3];
        *pppppppuVar19 = *pppppppuVar11;
        pppppppuVar19[1] = ppppppuVar15;
        ppppppuVar15 = pppppppuVar11[3];
        pppppppuVar19[2] = pppppppuVar11[2];
        pppppppuVar19[3] = ppppppuVar15;
        *pppppppuVar11 = ppppppuVar18;
        pppppppuVar11[1] = ppppppuVar22;
        pppppppuVar11[2] = ppppppuVar3;
        pppppppuVar11[3] = ppppppuVar21;
      }
      pppppppuVar19 = pppppppuVar19 + 4;
    }
    pppppppuVar11 = pppppppuVar11 + 4;
    pppppppuVar14 = pppppppuVar19;
    goto joined_r0x00014004e403;
  }
joined_r0x00014004e456:
  while (pppppppuVar23 = pppppppuVar20, pppppppuVar16 = pppppppuVar12, pppppppuVar20 = pppppppuVar23
        , param_1 < pppppppuVar16) {
    pppppppuVar12 = pppppppuVar16 + -4;
    cVar8 = func_0x000140038d00(pppppppuVar12,pppppppuVar23);
    if (-1 < cVar8) {
      cVar8 = func_0x000140038d00(pppppppuVar23,pppppppuVar12);
      if (cVar8 < '\0') break;
      pppppppuVar20 = pppppppuVar23 + -4;
      if (pppppppuVar20 != pppppppuVar12) {
        ppppppuVar15 = pppppppuVar16[-3];
        ppppppuVar18 = *pppppppuVar20;
        ppppppuVar22 = pppppppuVar23[-3];
        ppppppuVar3 = pppppppuVar23[-2];
        ppppppuVar21 = pppppppuVar23[-1];
        *pppppppuVar20 = *pppppppuVar12;
        pppppppuVar23[-3] = ppppppuVar15;
        ppppppuVar15 = pppppppuVar16[-1];
        pppppppuVar23[-2] = pppppppuVar16[-2];
        pppppppuVar23[-1] = ppppppuVar15;
        *pppppppuVar12 = ppppppuVar18;
        pppppppuVar16[-3] = ppppppuVar22;
        pppppppuVar16[-2] = ppppppuVar3;
        pppppppuVar16[-1] = ppppppuVar21;
      }
    }
  }
  if (pppppppuVar16 != param_1) {
    pppppppuVar12 = pppppppuVar16 + -4;
    if (pppppppuVar11 == param_2) {
      pppppppuVar20 = pppppppuVar23 + -4;
      if (pppppppuVar16 != pppppppuVar23) {
        ppppppuVar15 = pppppppuVar23[-3];
        ppppppuVar18 = *pppppppuVar12;
        ppppppuVar22 = pppppppuVar16[-3];
        ppppppuVar3 = pppppppuVar16[-2];
        ppppppuVar21 = pppppppuVar16[-1];
        *pppppppuVar12 = *pppppppuVar20;
        pppppppuVar16[-3] = ppppppuVar15;
        ppppppuVar15 = pppppppuVar23[-1];
        pppppppuVar16[-2] = pppppppuVar23[-2];
        pppppppuVar16[-1] = ppppppuVar15;
        *pppppppuVar20 = ppppppuVar18;
        pppppppuVar23[-3] = ppppppuVar22;
        pppppppuVar23[-2] = ppppppuVar3;
        pppppppuVar23[-1] = ppppppuVar21;
      }
      pppppppuVar14 = pppppppuVar19 + -4;
      if (pppppppuVar23 != pppppppuVar19) {
        ppppppuVar15 = pppppppuVar19[-3];
        ppppppuVar18 = *pppppppuVar20;
        ppppppuVar22 = pppppppuVar23[-3];
        ppppppuVar3 = pppppppuVar23[-2];
        ppppppuVar21 = pppppppuVar23[-1];
        *pppppppuVar20 = *pppppppuVar14;
        pppppppuVar23[-3] = ppppppuVar15;
        ppppppuVar15 = pppppppuVar19[-1];
        pppppppuVar23[-2] = pppppppuVar19[-2];
        pppppppuVar23[-1] = ppppppuVar15;
        *pppppppuVar14 = ppppppuVar18;
        pppppppuVar19[-3] = ppppppuVar22;
        pppppppuVar19[-2] = ppppppuVar3;
        pppppppuVar19[-1] = ppppppuVar21;
      }
    }
    else {
      if (pppppppuVar11 != pppppppuVar12) {
        ppppppuVar15 = pppppppuVar16[-3];
        ppppppuVar18 = *pppppppuVar11;
        ppppppuVar22 = pppppppuVar11[1];
        ppppppuVar3 = pppppppuVar11[2];
        ppppppuVar21 = pppppppuVar11[3];
        *pppppppuVar11 = *pppppppuVar12;
        pppppppuVar11[1] = ppppppuVar15;
        ppppppuVar15 = pppppppuVar16[-1];
        pppppppuVar11[2] = pppppppuVar16[-2];
        pppppppuVar11[3] = ppppppuVar15;
        *pppppppuVar12 = ppppppuVar18;
        pppppppuVar16[-3] = ppppppuVar22;
        pppppppuVar16[-2] = ppppppuVar3;
        pppppppuVar16[-1] = ppppppuVar21;
      }
      pppppppuVar11 = pppppppuVar11 + 4;
      pppppppuVar14 = pppppppuVar19;
    }
    goto joined_r0x00014004e403;
  }
  if (pppppppuVar11 != param_2) {
    if ((pppppppuVar19 != pppppppuVar11) && (pppppppuVar23 != pppppppuVar19)) {
      ppppppuVar15 = pppppppuVar19[1];
      ppppppuVar18 = *pppppppuVar23;
      ppppppuVar22 = pppppppuVar23[1];
      ppppppuVar3 = pppppppuVar23[2];
      ppppppuVar21 = pppppppuVar23[3];
      *pppppppuVar23 = *pppppppuVar19;
      pppppppuVar23[1] = ppppppuVar15;
      ppppppuVar15 = pppppppuVar19[3];
      pppppppuVar23[2] = pppppppuVar19[2];
      pppppppuVar23[3] = ppppppuVar15;
      *pppppppuVar19 = ppppppuVar18;
      pppppppuVar19[1] = ppppppuVar22;
      pppppppuVar19[2] = ppppppuVar3;
      pppppppuVar19[3] = ppppppuVar21;
    }
    if (pppppppuVar23 != pppppppuVar11) {
      ppppppuVar15 = pppppppuVar11[1];
      ppppppuVar18 = *pppppppuVar23;
      ppppppuVar22 = pppppppuVar23[1];
      ppppppuVar3 = pppppppuVar23[2];
      ppppppuVar21 = pppppppuVar23[3];
      *pppppppuVar23 = *pppppppuVar11;
      pppppppuVar23[1] = ppppppuVar15;
      ppppppuVar15 = pppppppuVar11[3];
      pppppppuVar23[2] = pppppppuVar11[2];
      pppppppuVar23[3] = ppppppuVar15;
      *pppppppuVar11 = ppppppuVar18;
      pppppppuVar11[1] = ppppppuVar22;
      pppppppuVar11[2] = ppppppuVar3;
      pppppppuVar11[3] = ppppppuVar21;
    }
    pppppppuVar11 = pppppppuVar11 + 4;
    pppppppuVar14 = pppppppuVar19 + 4;
    pppppppuVar12 = pppppppuVar16;
    pppppppuVar20 = pppppppuVar23 + 4;
    goto joined_r0x00014004e403;
  }
  param_3 = (param_3 >> 2) + (param_3 >> 1);
  if ((longlong)pppppppuVar23 - (longlong)param_1 >> 5 <
      (longlong)param_2 - (longlong)pppppppuVar19 >> 5) {
    FUN_14004e2b0(param_1,pppppppuVar23,param_3,param_4);
    param_1 = pppppppuVar19;
    pppppppuVar23 = param_2;
  }
  else {
    FUN_14004e2b0(pppppppuVar19,param_2,param_3,param_4);
  }
  lVar10 = (longlong)pppppppuVar23 - (longlong)param_1;
  param_2 = pppppppuVar23;
  goto joined_r0x00014004e2f0;
LAB_14004e6c0:
  do {
    uVar25 = uVar24 - 1;
    pppppppuVar20 = (undefined8 *******)param_1[uVar24 * 4 + -4];
    ppppppuVar15 = (param_1 + uVar24 * 4 + -4)[1];
    ppppppuVar18 = param_1[uVar24 * 4 + -2];
    ppppppuVar22 = (param_1 + uVar24 * 4 + -2)[1];
    param_1[uVar24 * 4 + -2] = (undefined8 ******)0x0;
    param_1[uVar24 * 4 + -1] = (undefined8 ******)0xf;
    *(undefined1 *)(param_1 + uVar24 * 4 + -4) = 0;
    uVar24 = uVar25;
    local_80 = pppppppuVar20;
    ppppppuStack_78 = ppppppuVar15;
    local_70 = ppppppuVar18;
    ppppppuStack_68 = ppppppuVar22;
    while (uVar26 = uVar24, (longlong)uVar26 < (longlong)uVar13) {
      uVar2 = uVar26 * 2 + 2;
      cVar8 = func_0x000140038d00(param_1 + uVar2 * 4,param_1 + uVar2 * 4 + -4);
      uVar24 = uVar26 * 2 | 1;
      if (-1 < cVar8) {
        uVar24 = uVar2;
      }
      if (uVar26 * 0x20 != uVar24 * 0x20) {
        ppppppuVar3 = param_1[uVar26 * 4 + 3];
        if ((undefined8 ******)0xf < ppppppuVar3) {
          ppppppuVar18 = param_1[uVar26 * 4];
          ppppppuVar15 = (undefined8 ******)((longlong)ppppppuVar3 + 1);
          if ((undefined8 ******)0xfff < ppppppuVar15) {
            if (0x1f < (ulonglong)((longlong)ppppppuVar18 + (-8 - (longlong)ppppppuVar18[-1])))
            goto LAB_14004ee62;
            ppppppuVar15 = ppppppuVar3 + 5;
            ppppppuVar18 = (undefined8 ******)ppppppuVar18[-1];
          }
          func_0x00014028b040(ppppppuVar18,ppppppuVar15);
          return;
        }
        param_1[uVar26 * 4 + 2] = (undefined8 ******)0x0;
        param_1[uVar26 * 4 + 3] = (undefined8 ******)0xf;
        *(undefined1 *)(param_1 + uVar26 * 4) = 0;
        ppppppuVar3 = (param_1 + uVar24 * 4)[1];
        param_1[uVar26 * 4] = param_1[uVar24 * 4];
        (param_1 + uVar26 * 4)[1] = ppppppuVar3;
        ppppppuVar3 = (param_1 + uVar24 * 4 + 2)[1];
        param_1[uVar26 * 4 + 2] = param_1[uVar24 * 4 + 2];
        (param_1 + uVar26 * 4 + 2)[1] = ppppppuVar3;
        param_1[uVar24 * 4 + 2] = (undefined8 ******)0x0;
        param_1[uVar24 * 4 + 3] = (undefined8 ******)0xf;
        *(undefined1 *)(param_1 + uVar24 * 4) = 0;
      }
    }
    if ((uVar26 == uVar13) && ((uVar17 & 0x20) == 0)) {
      FUN_14000df10(param_1 + uVar26 * 4,
                    (undefined1 *)(((uVar17 & 0xffffffffffffffe0) - 0x20) + (longlong)param_1));
      uVar26 = uVar1;
    }
    while (uVar24 = uVar26, (longlong)uVar25 < (longlong)uVar24) {
      uVar26 = (longlong)(uVar24 - 1) >> 1;
      ppppppuVar3 = param_1[uVar26 * 4 + 2];
      pppppppuVar11 = param_1 + uVar26 * 4;
      pppppppuVar12 = &local_80;
      if ((undefined8 ******)0xf < ppppppuVar22) {
        pppppppuVar12 = pppppppuVar20;
      }
      pppppppuVar14 = pppppppuVar11;
      if ((undefined8 ******)0xf < pppppppuVar11[3]) {
        pppppppuVar14 = (undefined8 *******)*pppppppuVar11;
      }
      ppppppuVar21 = ppppppuVar3;
      if (ppppppuVar18 < ppppppuVar3) {
        ppppppuVar21 = ppppppuVar18;
      }
      iVar9 = func_0x0001404210c0(pppppppuVar14,pppppppuVar12,ppppppuVar21);
      if (iVar9 == 0) {
        if (ppppppuVar18 <= ppppppuVar3) {
          if (ppppppuVar18 < ppppppuVar3) goto LAB_14004e8a0;
          break;
        }
        cVar8 = -1;
      }
      else if (iVar9 < 0) {
        cVar8 = -1;
      }
      else {
LAB_14004e8a0:
        cVar8 = '\x01';
      }
      if (-1 < cVar8) break;
      if (uVar24 * 0x20 != uVar26 * 0x20) {
        ppppppuVar3 = param_1[uVar24 * 4 + 3];
        if ((undefined8 ******)0xf < ppppppuVar3) {
          ppppppuVar18 = param_1[uVar24 * 4];
          ppppppuVar15 = (undefined8 ******)((longlong)ppppppuVar3 + 1);
          if ((undefined8 ******)0xfff < ppppppuVar15) {
            if (0x1f < (ulonglong)((longlong)ppppppuVar18 + (-8 - (longlong)ppppppuVar18[-1])))
            goto LAB_14004ee62;
            ppppppuVar15 = ppppppuVar3 + 5;
            ppppppuVar18 = (undefined8 ******)ppppppuVar18[-1];
          }
          func_0x00014028b040(ppppppuVar18,ppppppuVar15);
          return;
        }
        param_1[uVar24 * 4 + 3] = (undefined8 ******)0xf;
        param_1[uVar24 * 4 + 2] = (undefined8 ******)0x0;
        *(undefined1 *)(param_1 + uVar24 * 4) = 0;
        ppppppuVar3 = pppppppuVar11[1];
        param_1[uVar24 * 4] = *pppppppuVar11;
        (param_1 + uVar24 * 4)[1] = ppppppuVar3;
        ppppppuVar3 = pppppppuVar11[3];
        param_1[uVar24 * 4 + 2] = pppppppuVar11[2];
        (param_1 + uVar24 * 4 + 2)[1] = ppppppuVar3;
        pppppppuVar11[2] = (undefined8 ******)0x0;
        pppppppuVar11[3] = (undefined8 ******)0xf;
        *(undefined1 *)pppppppuVar11 = 0;
      }
    }
    pppppppuVar11 = param_1 + uVar24 * 4;
    if ((undefined8 ********)pppppppuVar11 == &local_80) {
      if ((undefined8 ******)0xf < ppppppuVar22) {
        ppppppuVar15 = (undefined8 ******)((longlong)ppppppuVar22 + 1);
        pppppppuVar11 = pppppppuVar20;
        if ((undefined8 ******)0xfff < ppppppuVar15) {
          pppppppuVar11 = (undefined8 *******)pppppppuVar20[-1];
          if (0x1f < (ulonglong)((longlong)pppppppuVar20 + (-8 - (longlong)pppppppuVar11)))
          goto LAB_14004ee62;
          ppppppuVar15 = ppppppuVar22 + 5;
        }
        func_0x00014028b040(pppppppuVar11,ppppppuVar15);
        return;
      }
    }
    else {
      ppppppuVar3 = pppppppuVar11[3];
      if ((undefined8 ******)0xf < ppppppuVar3) {
        ppppppuVar15 = *pppppppuVar11;
        if ((longlong)ppppppuVar3 + 1U < 0x1000) {
          func_0x00014028b040(ppppppuVar15,(longlong)ppppppuVar3 + 1U,ppppppuVar15);
          return;
        }
        if ((ulonglong)((longlong)ppppppuVar15 + (-8 - (longlong)ppppppuVar15[-1])) < 0x20) {
          func_0x00014028b040(ppppppuVar15[-1],ppppppuVar3 + 5);
          return;
        }
        goto LAB_14004ee62;
      }
      *pppppppuVar11 = pppppppuVar20;
      pppppppuVar11[1] = ppppppuVar15;
      pppppppuVar11[2] = ppppppuVar18;
      pppppppuVar11[3] = ppppppuVar22;
    }
    uVar24 = uVar25;
  } while (0 < (longlong)uVar25);
LAB_14004ea2d:
  if ((longlong)uVar17 >> 5 < 2) {
    return;
  }
  do {
    if (1 < (longlong)param_2 - (longlong)param_1 >> 5) {
      local_a0 = param_2[-4];
      ppppppuStack_98 = param_2[-3];
      pppppppuVar20 = param_2 + -4;
      local_90 = *(undefined4 *)(param_2 + -2);
      uStack_8c = *(undefined4 *)((longlong)param_2 + -0xc);
      uStack_88 = *(undefined4 *)(param_2 + -1);
      uStack_84 = *(undefined4 *)((longlong)param_2 + -4);
      param_2[-2] = (undefined8 ******)0x0;
      param_2[-1] = (undefined8 ******)0xf;
      *(undefined1 *)pppppppuVar20 = 0;
      if (pppppppuVar20 != param_1) {
        param_2[-2] = (undefined8 ******)0x0;
        param_2[-1] = (undefined8 ******)0xf;
        *(undefined1 *)pppppppuVar20 = 0;
        ppppppuVar15 = param_1[1];
        *pppppppuVar20 = *param_1;
        param_2[-3] = ppppppuVar15;
        uVar5 = *(undefined4 *)((longlong)param_1 + 0x14);
        uVar6 = *(undefined4 *)(param_1 + 3);
        uVar7 = *(undefined4 *)((longlong)param_1 + 0x1c);
        *(undefined4 *)(param_2 + -2) = *(undefined4 *)(param_1 + 2);
        *(undefined4 *)((longlong)param_2 + -0xc) = uVar5;
        *(undefined4 *)(param_2 + -1) = uVar6;
        *(undefined4 *)((longlong)param_2 + -4) = uVar7;
        param_1[2] = (undefined8 ******)0x0;
        param_1[3] = (undefined8 ******)0xf;
        *(undefined1 *)param_1 = 0;
      }
      FUN_14004ffb0(param_1,0,(longlong)pppppppuVar20 - (longlong)param_1 >> 5,&local_a0,param_4);
      uVar24 = CONCAT44(uStack_84,uStack_88);
      if (0xf < uVar24) {
        uVar17 = uVar24 + 1;
        ppppppuVar15 = local_a0;
        if (0xfff < uVar17) {
          ppppppuVar15 = (undefined8 ******)local_a0[-1];
          if (0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)ppppppuVar15)))
          goto LAB_14004ee62;
          uVar17 = uVar24 + 0x28;
        }
        func_0x00014028b040(ppppppuVar15,uVar17);
        return;
      }
    }
    param_2 = param_2 + -4;
    if ((longlong)param_2 - (longlong)param_1 < 0x40) {
      return;
    }
  } while( true );
UNWIND_INFO_14004ed99_UnwindCodes_3__UnwindOpCode:
  if ((undefined8 ********)pppppppuVar19 == &local_c0) {
LAB_14004ee06:
    if ((undefined8 ******)0xf < ppppppuVar3) {
      ppppppuVar15 = (undefined8 ******)((longlong)ppppppuVar3 + 1);
      if ((undefined8 ******)0xfff < ppppppuVar15) {
        if (0x1f < (ulonglong)((longlong)pppppppuVar11 + (-8 - (longlong)pppppppuVar11[-1])))
        goto LAB_14004ee62;
        ppppppuVar15 = ppppppuVar3 + 5;
        pppppppuVar11 = (undefined8 *******)pppppppuVar11[-1];
      }
      func_0x00014028b040(pppppppuVar11,ppppppuVar15);
      return;
    }
  }
  else {
    ppppppuVar15 = pppppppuVar19[3];
    if ((undefined8 ******)0xf < ppppppuVar15) {
      ppppppuVar21 = *pppppppuVar19;
      if (0xfff < (longlong)ppppppuVar15 + 1U) {
        if (0x1f < (ulonglong)((longlong)ppppppuVar21 + (-8 - (longlong)ppppppuVar21[-1])))
        goto LAB_14004ee62;
        func_0x00014028b040(ppppppuVar21[-1],ppppppuVar15 + 5);
        *pppppppuVar19 = pppppppuVar11;
        pppppppuVar19[1] = ppppppuVar18;
        pppppppuVar19[2] = ppppppuVar22;
        pppppppuVar19[3] = ppppppuVar3;
        goto LAB_14004ee50;
      }
      func_0x00014028b040(ppppppuVar21,(longlong)ppppppuVar15 + 1U,ppppppuVar21);
    }
    *pppppppuVar19 = pppppppuVar11;
    pppppppuVar19[1] = ppppppuVar18;
    pppppppuVar19[2] = ppppppuVar22;
    pppppppuVar19[3] = ppppppuVar3;
  }
LAB_14004ee50:
  pppppppuVar20 = pppppppuVar20 + 4;
  if (pppppppuVar20 == param_2) {
    return;
  }
  goto LAB_14004e640;
}

