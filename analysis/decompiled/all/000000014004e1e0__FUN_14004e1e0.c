// Function: FUN_14004e1e0
// Addr: 14004e1e0
// Size: 3002 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_14004e1e0(undefined8 *******param_1,undefined8 *******param_2,longlong param_3,
                  undefined1 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 ******ppppppuVar3;
  code *pcVar4;
  undefined8 ******ppppppuVar5;
  undefined8 ******ppppppuVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  ulonglong uVar15;
  undefined8 *******pppppppuVar16;
  undefined8 ******ppppppuVar17;
  undefined8 *******pppppppuVar18;
  ulonglong uVar19;
  undefined8 ******ppppppuVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *******pppppppuVar22;
  undefined8 ******ppppppuVar23;
  undefined8 *******pppppppuVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
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
  
  lVar12 = (longlong)param_2 - (longlong)param_1;
joined_r0x00014004e220:
  if (0x20 < lVar12 >> 5) {
    uVar19 = (longlong)param_2 - (longlong)param_1;
    uVar25 = (longlong)uVar19 >> 6;
    if (0 < param_3) {
      pppppppuVar22 = param_2 + -4;
      pppppppuVar13 = param_1 + uVar25 * 4;
      lVar12 = (longlong)pppppppuVar22 - (longlong)param_1 >> 5;
      pppppppuVar14 = param_1;
      if (0x28 < lVar12) {
        lVar12 = lVar12 + 1 >> 3;
        pppppppuVar14 = param_1 + lVar12 * 4;
        FUN_1400506c0(param_1,pppppppuVar14,param_1 + lVar12 * 8);
        FUN_1400506c0(pppppppuVar13 + lVar12 * -4,pppppppuVar13,pppppppuVar13 + lVar12 * 4);
        pppppppuVar22 = pppppppuVar22 + lVar12 * -4;
        FUN_1400506c0(param_2 + lVar12 * -8 + -4,pppppppuVar22);
      }
      FUN_1400506c0(pppppppuVar14,pppppppuVar13,pppppppuVar22);
      pppppppuVar22 = pppppppuVar13;
      while (pppppppuVar14 = pppppppuVar22, param_1 < pppppppuVar14) {
        pppppppuVar22 = pppppppuVar14 + -4;
        cVar10 = FUN_140038c30(pppppppuVar22,pppppppuVar14);
        if ((cVar10 < '\0') || (cVar10 = FUN_140038c30(pppppppuVar14,pppppppuVar22), cVar10 < '\0'))
        break;
      }
      do {
        pppppppuVar13 = pppppppuVar13 + 4;
        pppppppuVar16 = pppppppuVar13;
        pppppppuVar22 = pppppppuVar14;
        if (param_2 <= pppppppuVar13) goto joined_r0x00014004e333;
        cVar10 = FUN_140038c30(pppppppuVar13,pppppppuVar14);
        if ((cVar10 < '\0') || (cVar10 = FUN_140038c30(pppppppuVar14,pppppppuVar13), cVar10 < '\0'))
        goto joined_r0x00014004e333;
      } while( true );
    }
    if ((longlong)uVar25 < 1) goto LAB_14004e95d;
    uVar1 = ((longlong)uVar19 >> 5) - 1;
    uVar15 = (longlong)uVar1 >> 1;
    goto LAB_14004e5f0;
  }
  if ((param_1 == param_2) || (pppppppuVar22 = param_1 + 4, pppppppuVar22 == param_2)) {
    return;
  }
LAB_14004e570:
  pppppppuVar13 = (undefined8 *******)*pppppppuVar22;
  ppppppuVar5 = pppppppuVar22[1];
  ppppppuVar6 = pppppppuVar22[2];
  ppppppuVar3 = pppppppuVar22[3];
  pppppppuVar22[2] = (undefined8 ******)0x0;
  pppppppuVar22[3] = (undefined8 ******)0xf;
  *(undefined1 *)pppppppuVar22 = 0;
  ppppppuVar17 = param_1[2];
  pppppppuVar14 = param_1;
  if ((undefined8 ******)0xf < param_1[3]) {
    pppppppuVar14 = (undefined8 *******)*param_1;
  }
  pppppppuVar16 = &local_c0;
  if ((undefined8 ******)0xf < ppppppuVar3) {
    pppppppuVar16 = pppppppuVar13;
  }
  ppppppuVar20 = ppppppuVar6;
  if (ppppppuVar17 < ppppppuVar6) {
    ppppppuVar20 = ppppppuVar17;
  }
  local_c0 = pppppppuVar13;
  ppppppuStack_b8 = ppppppuVar5;
  local_b0 = ppppppuVar6;
  ppppppuStack_a8 = ppppppuVar3;
  iVar11 = memcmp(pppppppuVar16,pppppppuVar14,(size_t)ppppppuVar20);
  if (iVar11 == 0) {
    if (ppppppuVar17 <= ppppppuVar6) {
      pppppppuVar14 = pppppppuVar22;
      if (ppppppuVar6 <= ppppppuVar17) goto LAB_14004ec00;
      goto LAB_14004eae7;
    }
    cVar10 = -1;
  }
  else if (iVar11 < 0) {
    cVar10 = -1;
  }
  else {
LAB_14004eae7:
    cVar10 = '\x01';
  }
  pppppppuVar14 = pppppppuVar22;
  if (-1 < cVar10) {
LAB_14004ec00:
    pppppppuVar21 = pppppppuVar14;
    pppppppuVar14 = pppppppuVar21 + -4;
    ppppppuVar17 = pppppppuVar21[-2];
    pppppppuVar16 = pppppppuVar14;
    if ((undefined8 ******)0xf < pppppppuVar21[-1]) {
      pppppppuVar16 = (undefined8 *******)*pppppppuVar14;
    }
    pppppppuVar18 = &local_c0;
    if ((undefined8 ******)0xf < ppppppuVar3) {
      pppppppuVar18 = pppppppuVar13;
    }
    ppppppuVar20 = ppppppuVar6;
    if (ppppppuVar17 < ppppppuVar6) {
      ppppppuVar20 = ppppppuVar17;
    }
    iVar11 = memcmp(pppppppuVar18,pppppppuVar16,(size_t)ppppppuVar20);
    if (iVar11 == 0) {
      if (ppppppuVar6 < ppppppuVar17) {
        cVar10 = -1;
      }
      else {
        if (ppppppuVar6 <= ppppppuVar17) goto LAB_14004ecd4;
LAB_14004ec55:
        cVar10 = '\x01';
      }
    }
    else {
      if (-1 < iVar11) goto LAB_14004ec55;
      cVar10 = -1;
    }
    if (-1 < cVar10) goto LAB_14004ecd4;
    if (pppppppuVar21 != pppppppuVar14) {
      ppppppuVar17 = pppppppuVar21[3];
      if ((undefined8 ******)0xf < ppppppuVar17) {
        ppppppuVar23 = *pppppppuVar21;
        ppppppuVar20 = (undefined8 ******)((longlong)ppppppuVar17 + 1);
        if ((undefined8 ******)0xfff < ppppppuVar20) {
          if (0x1f < (ulonglong)((longlong)ppppppuVar23 + (-8 - (longlong)ppppppuVar23[-1])))
          goto LAB_14004ed92;
          ppppppuVar20 = ppppppuVar17 + 5;
          ppppppuVar23 = (undefined8 ******)ppppppuVar23[-1];
        }
        thunk_FUN_14028af80(ppppppuVar23,ppppppuVar20);
      }
      pppppppuVar21[3] = (undefined8 ******)0xf;
      pppppppuVar21[2] = (undefined8 ******)0x0;
      *(undefined1 *)pppppppuVar21 = 0;
      *pppppppuVar21 = *pppppppuVar14;
      pppppppuVar21[1] = pppppppuVar21[-3];
      pppppppuVar21[2] = pppppppuVar21[-2];
      pppppppuVar21[3] = pppppppuVar21[-1];
      pppppppuVar21[-2] = (undefined8 ******)0x0;
      pppppppuVar21[-1] = (undefined8 ******)0xf;
      *(undefined1 *)pppppppuVar14 = 0;
    }
    goto LAB_14004ec00;
  }
  pppppppuVar14 = pppppppuVar22 + 4;
  pppppppuVar16 = pppppppuVar22;
  while (pppppppuVar18 = pppppppuVar16, pppppppuVar21 = pppppppuVar14, param_1 != pppppppuVar18) {
    pppppppuVar16 = pppppppuVar18 + -4;
    pppppppuVar14 = pppppppuVar21 + -4;
    if (pppppppuVar14 != pppppppuVar16) {
      ppppppuVar17 = pppppppuVar21[-1];
      if ((undefined8 ******)0xf < ppppppuVar17) {
        ppppppuVar23 = *pppppppuVar14;
        ppppppuVar20 = (undefined8 ******)((longlong)ppppppuVar17 + 1);
        if ((undefined8 ******)0xfff < ppppppuVar20) {
          if (0x1f < (ulonglong)((longlong)ppppppuVar23 + (-8 - (longlong)ppppppuVar23[-1])))
          goto LAB_14004ed92;
          ppppppuVar20 = ppppppuVar17 + 5;
          ppppppuVar23 = (undefined8 ******)ppppppuVar23[-1];
        }
        thunk_FUN_14028af80(ppppppuVar23,ppppppuVar20);
      }
      pppppppuVar21[-1] = (undefined8 ******)0xf;
      pppppppuVar21[-2] = (undefined8 ******)0x0;
      *(undefined1 *)pppppppuVar14 = 0;
      ppppppuVar17 = pppppppuVar18[-3];
      *pppppppuVar14 = *pppppppuVar16;
      pppppppuVar21[-3] = ppppppuVar17;
      ppppppuVar17 = pppppppuVar18[-1];
      pppppppuVar21[-2] = pppppppuVar18[-2];
      pppppppuVar21[-1] = ppppppuVar17;
      pppppppuVar18[-2] = (undefined8 ******)0x0;
      pppppppuVar18[-1] = (undefined8 ******)0xf;
      *(undefined1 *)pppppppuVar16 = 0;
    }
  }
  if ((undefined8 ********)param_1 == &local_c0) goto LAB_14004ed36;
  ppppppuVar17 = param_1[3];
  if ((undefined8 ******)0xf < ppppppuVar17) {
    ppppppuVar23 = *param_1;
    ppppppuVar20 = (undefined8 ******)((longlong)ppppppuVar17 + 1);
    if ((undefined8 ******)0xfff < ppppppuVar20) {
      if (0x1f < (ulonglong)((longlong)ppppppuVar23 + (-8 - (longlong)ppppppuVar23[-1]))) {
LAB_14004ed92:
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ppppppuVar20 = ppppppuVar17 + 5;
      ppppppuVar23 = (undefined8 ******)ppppppuVar23[-1];
    }
    thunk_FUN_14028af80(ppppppuVar23,ppppppuVar20);
  }
  *param_1 = pppppppuVar13;
  param_1[1] = ppppppuVar5;
  param_1[2] = ppppppuVar6;
  param_1[3] = ppppppuVar3;
  goto LAB_14004ed80;
joined_r0x00014004e333:
  pppppppuVar21 = pppppppuVar16;
  if (pppppppuVar13 < param_2) {
    cVar10 = FUN_140038c30(pppppppuVar22,pppppppuVar13);
    if (-1 < cVar10) {
      cVar10 = FUN_140038c30(pppppppuVar13,pppppppuVar22);
      if (cVar10 < '\0') goto joined_r0x00014004e386;
      if (pppppppuVar21 != pppppppuVar13) {
        ppppppuVar17 = pppppppuVar13[1];
        ppppppuVar5 = *pppppppuVar21;
        ppppppuVar6 = pppppppuVar21[1];
        ppppppuVar3 = pppppppuVar21[2];
        ppppppuVar20 = pppppppuVar21[3];
        *pppppppuVar21 = *pppppppuVar13;
        pppppppuVar21[1] = ppppppuVar17;
        ppppppuVar17 = pppppppuVar13[3];
        pppppppuVar21[2] = pppppppuVar13[2];
        pppppppuVar21[3] = ppppppuVar17;
        *pppppppuVar13 = ppppppuVar5;
        pppppppuVar13[1] = ppppppuVar6;
        pppppppuVar13[2] = ppppppuVar3;
        pppppppuVar13[3] = ppppppuVar20;
      }
      pppppppuVar21 = pppppppuVar21 + 4;
    }
    pppppppuVar13 = pppppppuVar13 + 4;
    pppppppuVar16 = pppppppuVar21;
    goto joined_r0x00014004e333;
  }
joined_r0x00014004e386:
  while (pppppppuVar24 = pppppppuVar22, pppppppuVar18 = pppppppuVar14, pppppppuVar22 = pppppppuVar24
        , param_1 < pppppppuVar18) {
    pppppppuVar14 = pppppppuVar18 + -4;
    cVar10 = FUN_140038c30(pppppppuVar14,pppppppuVar24);
    if (-1 < cVar10) {
      cVar10 = FUN_140038c30(pppppppuVar24,pppppppuVar14);
      if (cVar10 < '\0') break;
      pppppppuVar22 = pppppppuVar24 + -4;
      if (pppppppuVar22 != pppppppuVar14) {
        ppppppuVar17 = pppppppuVar18[-3];
        ppppppuVar5 = *pppppppuVar22;
        ppppppuVar6 = pppppppuVar24[-3];
        ppppppuVar3 = pppppppuVar24[-2];
        ppppppuVar20 = pppppppuVar24[-1];
        *pppppppuVar22 = *pppppppuVar14;
        pppppppuVar24[-3] = ppppppuVar17;
        ppppppuVar17 = pppppppuVar18[-1];
        pppppppuVar24[-2] = pppppppuVar18[-2];
        pppppppuVar24[-1] = ppppppuVar17;
        *pppppppuVar14 = ppppppuVar5;
        pppppppuVar18[-3] = ppppppuVar6;
        pppppppuVar18[-2] = ppppppuVar3;
        pppppppuVar18[-1] = ppppppuVar20;
      }
    }
  }
  if (pppppppuVar18 != param_1) {
    pppppppuVar14 = pppppppuVar18 + -4;
    if (pppppppuVar13 == param_2) {
      pppppppuVar22 = pppppppuVar24 + -4;
      if (pppppppuVar18 != pppppppuVar24) {
        ppppppuVar17 = pppppppuVar24[-3];
        ppppppuVar5 = *pppppppuVar14;
        ppppppuVar6 = pppppppuVar18[-3];
        ppppppuVar3 = pppppppuVar18[-2];
        ppppppuVar20 = pppppppuVar18[-1];
        *pppppppuVar14 = *pppppppuVar22;
        pppppppuVar18[-3] = ppppppuVar17;
        ppppppuVar17 = pppppppuVar24[-1];
        pppppppuVar18[-2] = pppppppuVar24[-2];
        pppppppuVar18[-1] = ppppppuVar17;
        *pppppppuVar22 = ppppppuVar5;
        pppppppuVar24[-3] = ppppppuVar6;
        pppppppuVar24[-2] = ppppppuVar3;
        pppppppuVar24[-1] = ppppppuVar20;
      }
      pppppppuVar16 = pppppppuVar21 + -4;
      if (pppppppuVar24 != pppppppuVar21) {
        ppppppuVar17 = pppppppuVar21[-3];
        ppppppuVar5 = *pppppppuVar22;
        ppppppuVar6 = pppppppuVar24[-3];
        ppppppuVar3 = pppppppuVar24[-2];
        ppppppuVar20 = pppppppuVar24[-1];
        *pppppppuVar22 = *pppppppuVar16;
        pppppppuVar24[-3] = ppppppuVar17;
        ppppppuVar17 = pppppppuVar21[-1];
        pppppppuVar24[-2] = pppppppuVar21[-2];
        pppppppuVar24[-1] = ppppppuVar17;
        *pppppppuVar16 = ppppppuVar5;
        pppppppuVar21[-3] = ppppppuVar6;
        pppppppuVar21[-2] = ppppppuVar3;
        pppppppuVar21[-1] = ppppppuVar20;
      }
    }
    else {
      if (pppppppuVar13 != pppppppuVar14) {
        ppppppuVar17 = pppppppuVar18[-3];
        ppppppuVar5 = *pppppppuVar13;
        ppppppuVar6 = pppppppuVar13[1];
        ppppppuVar3 = pppppppuVar13[2];
        ppppppuVar20 = pppppppuVar13[3];
        *pppppppuVar13 = *pppppppuVar14;
        pppppppuVar13[1] = ppppppuVar17;
        ppppppuVar17 = pppppppuVar18[-1];
        pppppppuVar13[2] = pppppppuVar18[-2];
        pppppppuVar13[3] = ppppppuVar17;
        *pppppppuVar14 = ppppppuVar5;
        pppppppuVar18[-3] = ppppppuVar6;
        pppppppuVar18[-2] = ppppppuVar3;
        pppppppuVar18[-1] = ppppppuVar20;
      }
      pppppppuVar13 = pppppppuVar13 + 4;
      pppppppuVar16 = pppppppuVar21;
    }
    goto joined_r0x00014004e333;
  }
  if (pppppppuVar13 != param_2) {
    if ((pppppppuVar21 != pppppppuVar13) && (pppppppuVar24 != pppppppuVar21)) {
      ppppppuVar17 = pppppppuVar21[1];
      ppppppuVar5 = *pppppppuVar24;
      ppppppuVar6 = pppppppuVar24[1];
      ppppppuVar3 = pppppppuVar24[2];
      ppppppuVar20 = pppppppuVar24[3];
      *pppppppuVar24 = *pppppppuVar21;
      pppppppuVar24[1] = ppppppuVar17;
      ppppppuVar17 = pppppppuVar21[3];
      pppppppuVar24[2] = pppppppuVar21[2];
      pppppppuVar24[3] = ppppppuVar17;
      *pppppppuVar21 = ppppppuVar5;
      pppppppuVar21[1] = ppppppuVar6;
      pppppppuVar21[2] = ppppppuVar3;
      pppppppuVar21[3] = ppppppuVar20;
    }
    if (pppppppuVar24 != pppppppuVar13) {
      ppppppuVar17 = pppppppuVar13[1];
      ppppppuVar5 = *pppppppuVar24;
      ppppppuVar6 = pppppppuVar24[1];
      ppppppuVar3 = pppppppuVar24[2];
      ppppppuVar20 = pppppppuVar24[3];
      *pppppppuVar24 = *pppppppuVar13;
      pppppppuVar24[1] = ppppppuVar17;
      ppppppuVar17 = pppppppuVar13[3];
      pppppppuVar24[2] = pppppppuVar13[2];
      pppppppuVar24[3] = ppppppuVar17;
      *pppppppuVar13 = ppppppuVar5;
      pppppppuVar13[1] = ppppppuVar6;
      pppppppuVar13[2] = ppppppuVar3;
      pppppppuVar13[3] = ppppppuVar20;
    }
    pppppppuVar13 = pppppppuVar13 + 4;
    pppppppuVar16 = pppppppuVar21 + 4;
    pppppppuVar14 = pppppppuVar18;
    pppppppuVar22 = pppppppuVar24 + 4;
    goto joined_r0x00014004e333;
  }
  param_3 = (param_3 >> 2) + (param_3 >> 1);
  if ((longlong)pppppppuVar24 - (longlong)param_1 >> 5 <
      (longlong)param_2 - (longlong)pppppppuVar21 >> 5) {
    FUN_14004e1e0(param_1,pppppppuVar24,param_3,param_4);
    param_1 = pppppppuVar21;
    pppppppuVar24 = param_2;
  }
  else {
    FUN_14004e1e0(pppppppuVar21,param_2,param_3,param_4);
  }
  lVar12 = (longlong)pppppppuVar24 - (longlong)param_1;
  param_2 = pppppppuVar24;
  goto joined_r0x00014004e220;
LAB_14004e5f0:
  do {
    uVar26 = uVar25 - 1;
    pppppppuVar22 = (undefined8 *******)param_1[uVar25 * 4 + -4];
    ppppppuVar17 = (param_1 + uVar25 * 4 + -4)[1];
    ppppppuVar5 = param_1[uVar25 * 4 + -2];
    ppppppuVar6 = (param_1 + uVar25 * 4 + -2)[1];
    param_1[uVar25 * 4 + -2] = (undefined8 ******)0x0;
    param_1[uVar25 * 4 + -1] = (undefined8 ******)0xf;
    *(undefined1 *)(param_1 + uVar25 * 4 + -4) = 0;
    uVar25 = uVar26;
    local_80 = pppppppuVar22;
    ppppppuStack_78 = ppppppuVar17;
    local_70 = ppppppuVar5;
    ppppppuStack_68 = ppppppuVar6;
    while (uVar27 = uVar25, (longlong)uVar27 < (longlong)uVar15) {
      uVar2 = uVar27 * 2 + 2;
      cVar10 = FUN_140038c30(param_1 + uVar2 * 4,param_1 + uVar2 * 4 + -4);
      uVar25 = uVar27 * 2 | 1;
      if (-1 < cVar10) {
        uVar25 = uVar2;
      }
      if (uVar27 * 0x20 != uVar25 * 0x20) {
        ppppppuVar3 = param_1[uVar27 * 4 + 3];
        if ((undefined8 ******)0xf < ppppppuVar3) {
          ppppppuVar23 = param_1[uVar27 * 4];
          ppppppuVar20 = (undefined8 ******)((longlong)ppppppuVar3 + 1);
          if ((undefined8 ******)0xfff < ppppppuVar20) {
            if (0x1f < (ulonglong)((longlong)ppppppuVar23 + (-8 - (longlong)ppppppuVar23[-1])))
            goto LAB_14004ed92;
            ppppppuVar20 = ppppppuVar3 + 5;
            ppppppuVar23 = (undefined8 ******)ppppppuVar23[-1];
          }
          thunk_FUN_14028af80(ppppppuVar23,ppppppuVar20);
        }
        param_1[uVar27 * 4 + 2] = (undefined8 ******)0x0;
        param_1[uVar27 * 4 + 3] = (undefined8 ******)0xf;
        *(undefined1 *)(param_1 + uVar27 * 4) = 0;
        ppppppuVar3 = (param_1 + uVar25 * 4)[1];
        param_1[uVar27 * 4] = param_1[uVar25 * 4];
        (param_1 + uVar27 * 4)[1] = ppppppuVar3;
        ppppppuVar3 = (param_1 + uVar25 * 4 + 2)[1];
        param_1[uVar27 * 4 + 2] = param_1[uVar25 * 4 + 2];
        (param_1 + uVar27 * 4 + 2)[1] = ppppppuVar3;
        param_1[uVar25 * 4 + 2] = (undefined8 ******)0x0;
        param_1[uVar25 * 4 + 3] = (undefined8 ******)0xf;
        *(undefined1 *)(param_1 + uVar25 * 4) = 0;
      }
    }
    if ((uVar27 == uVar15) && ((uVar19 & 0x20) == 0)) {
      FUN_14000de40(param_1 + uVar27 * 4,
                    (undefined1 *)(((uVar19 & 0xffffffffffffffe0) - 0x20) + (longlong)param_1));
      uVar27 = uVar1;
    }
    while (uVar25 = uVar27, (longlong)uVar26 < (longlong)uVar25) {
      uVar27 = (longlong)(uVar25 - 1) >> 1;
      ppppppuVar3 = param_1[uVar27 * 4 + 2];
      pppppppuVar13 = param_1 + uVar27 * 4;
      pppppppuVar14 = &local_80;
      if ((undefined8 ******)0xf < ppppppuVar6) {
        pppppppuVar14 = pppppppuVar22;
      }
      pppppppuVar16 = pppppppuVar13;
      if ((undefined8 ******)0xf < pppppppuVar13[3]) {
        pppppppuVar16 = (undefined8 *******)*pppppppuVar13;
      }
      ppppppuVar20 = ppppppuVar3;
      if (ppppppuVar5 < ppppppuVar3) {
        ppppppuVar20 = ppppppuVar5;
      }
      iVar11 = memcmp(pppppppuVar16,pppppppuVar14,(size_t)ppppppuVar20);
      if (iVar11 == 0) {
        if (ppppppuVar5 <= ppppppuVar3) {
          if (ppppppuVar5 < ppppppuVar3) goto LAB_14004e7d0;
          break;
        }
        cVar10 = -1;
      }
      else if (iVar11 < 0) {
        cVar10 = -1;
      }
      else {
LAB_14004e7d0:
        cVar10 = '\x01';
      }
      if (-1 < cVar10) break;
      if (uVar25 * 0x20 != uVar27 * 0x20) {
        ppppppuVar3 = param_1[uVar25 * 4 + 3];
        if ((undefined8 ******)0xf < ppppppuVar3) {
          ppppppuVar23 = param_1[uVar25 * 4];
          ppppppuVar20 = (undefined8 ******)((longlong)ppppppuVar3 + 1);
          if ((undefined8 ******)0xfff < ppppppuVar20) {
            if (0x1f < (ulonglong)((longlong)ppppppuVar23 + (-8 - (longlong)ppppppuVar23[-1])))
            goto LAB_14004ed92;
            ppppppuVar20 = ppppppuVar3 + 5;
            ppppppuVar23 = (undefined8 ******)ppppppuVar23[-1];
          }
          thunk_FUN_14028af80(ppppppuVar23,ppppppuVar20);
        }
        param_1[uVar25 * 4 + 3] = (undefined8 ******)0xf;
        param_1[uVar25 * 4 + 2] = (undefined8 ******)0x0;
        *(undefined1 *)(param_1 + uVar25 * 4) = 0;
        ppppppuVar3 = pppppppuVar13[1];
        param_1[uVar25 * 4] = *pppppppuVar13;
        (param_1 + uVar25 * 4)[1] = ppppppuVar3;
        ppppppuVar3 = pppppppuVar13[3];
        param_1[uVar25 * 4 + 2] = pppppppuVar13[2];
        (param_1 + uVar25 * 4 + 2)[1] = ppppppuVar3;
        pppppppuVar13[2] = (undefined8 ******)0x0;
        pppppppuVar13[3] = (undefined8 ******)0xf;
        *(undefined1 *)pppppppuVar13 = 0;
      }
    }
    pppppppuVar13 = param_1 + uVar25 * 4;
    if ((undefined8 ********)pppppppuVar13 == &local_80) {
      if ((undefined8 ******)0xf < ppppppuVar6) {
        ppppppuVar17 = (undefined8 ******)((longlong)ppppppuVar6 + 1);
        pppppppuVar13 = pppppppuVar22;
        if ((undefined8 ******)0xfff < ppppppuVar17) {
          pppppppuVar13 = (undefined8 *******)pppppppuVar22[-1];
          if (0x1f < (ulonglong)((longlong)pppppppuVar22 + (-8 - (longlong)pppppppuVar13)))
          goto LAB_14004ed92;
          ppppppuVar17 = ppppppuVar6 + 5;
        }
        thunk_FUN_14028af80(pppppppuVar13,ppppppuVar17);
      }
    }
    else {
      ppppppuVar3 = pppppppuVar13[3];
      if ((undefined8 ******)0xf < ppppppuVar3) {
        ppppppuVar20 = *pppppppuVar13;
        if (0xfff < (longlong)ppppppuVar3 + 1U) {
          if ((ulonglong)((longlong)ppppppuVar20 + (-8 - (longlong)ppppppuVar20[-1])) < 0x20) {
            thunk_FUN_14028af80(ppppppuVar20[-1],ppppppuVar3 + 5);
            *pppppppuVar13 = pppppppuVar22;
            pppppppuVar13[1] = ppppppuVar17;
            pppppppuVar13[2] = ppppppuVar5;
            pppppppuVar13[3] = ppppppuVar6;
            goto LAB_14004e93b;
          }
          goto LAB_14004ed92;
        }
        thunk_FUN_14028af80(ppppppuVar20,(longlong)ppppppuVar3 + 1U,ppppppuVar20);
      }
      *pppppppuVar13 = pppppppuVar22;
      pppppppuVar13[1] = ppppppuVar17;
      pppppppuVar13[2] = ppppppuVar5;
      pppppppuVar13[3] = ppppppuVar6;
    }
LAB_14004e93b:
    uVar25 = uVar26;
  } while (0 < (longlong)uVar26);
LAB_14004e95d:
  if ((longlong)uVar19 >> 5 < 2) {
    return;
  }
  do {
    if (1 < (longlong)param_2 - (longlong)param_1 >> 5) {
      local_a0 = param_2[-4];
      ppppppuStack_98 = param_2[-3];
      pppppppuVar22 = param_2 + -4;
      local_90 = *(undefined4 *)(param_2 + -2);
      uStack_8c = *(undefined4 *)((longlong)param_2 + -0xc);
      uStack_88 = *(undefined4 *)(param_2 + -1);
      uStack_84 = *(undefined4 *)((longlong)param_2 + -4);
      param_2[-2] = (undefined8 ******)0x0;
      param_2[-1] = (undefined8 ******)0xf;
      *(undefined1 *)pppppppuVar22 = 0;
      if (pppppppuVar22 != param_1) {
        param_2[-2] = (undefined8 ******)0x0;
        param_2[-1] = (undefined8 ******)0xf;
        *(undefined1 *)pppppppuVar22 = 0;
        ppppppuVar17 = param_1[1];
        *pppppppuVar22 = *param_1;
        param_2[-3] = ppppppuVar17;
        uVar7 = *(undefined4 *)((longlong)param_1 + 0x14);
        uVar8 = *(undefined4 *)(param_1 + 3);
        uVar9 = *(undefined4 *)((longlong)param_1 + 0x1c);
        *(undefined4 *)(param_2 + -2) = *(undefined4 *)(param_1 + 2);
        *(undefined4 *)((longlong)param_2 + -0xc) = uVar7;
        *(undefined4 *)(param_2 + -1) = uVar8;
        *(undefined4 *)((longlong)param_2 + -4) = uVar9;
        param_1[2] = (undefined8 ******)0x0;
        param_1[3] = (undefined8 ******)0xf;
        *(undefined1 *)param_1 = 0;
      }
      FUN_14004fee0(param_1,0,(longlong)pppppppuVar22 - (longlong)param_1 >> 5,&local_a0,param_4);
      if (0xf < CONCAT44(uStack_84,uStack_88)) {
        ppppppuVar17 = local_a0;
        if ((0xfff < CONCAT44(uStack_84,uStack_88) + 1) &&
           (ppppppuVar17 = (undefined8 ******)local_a0[-1],
           0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)ppppppuVar17))))
        goto LAB_14004ed92;
        thunk_FUN_14028af80(ppppppuVar17);
      }
    }
    param_2 = param_2 + -4;
    if ((longlong)param_2 - (longlong)param_1 < 0x40) {
      return;
    }
  } while( true );
LAB_14004ecd4:
  if ((undefined8 ********)pppppppuVar21 == &local_c0) {
LAB_14004ed36:
    if ((undefined8 ******)0xf < ppppppuVar3) {
      ppppppuVar17 = (undefined8 ******)((longlong)ppppppuVar3 + 1);
      if ((undefined8 ******)0xfff < ppppppuVar17) {
        if (0x1f < (ulonglong)((longlong)pppppppuVar13 + (-8 - (longlong)pppppppuVar13[-1])))
        goto LAB_14004ed92;
        ppppppuVar17 = ppppppuVar3 + 5;
        pppppppuVar13 = (undefined8 *******)pppppppuVar13[-1];
      }
      thunk_FUN_14028af80(pppppppuVar13,ppppppuVar17);
    }
  }
  else {
    ppppppuVar17 = pppppppuVar21[3];
    if ((undefined8 ******)0xf < ppppppuVar17) {
      ppppppuVar20 = *pppppppuVar21;
      if (0xfff < (longlong)ppppppuVar17 + 1U) {
        if (0x1f < (ulonglong)((longlong)ppppppuVar20 + (-8 - (longlong)ppppppuVar20[-1])))
        goto LAB_14004ed92;
        thunk_FUN_14028af80(ppppppuVar20[-1],ppppppuVar17 + 5);
        *pppppppuVar21 = pppppppuVar13;
        pppppppuVar21[1] = ppppppuVar5;
        pppppppuVar21[2] = ppppppuVar6;
        pppppppuVar21[3] = ppppppuVar3;
        goto LAB_14004ed80;
      }
      thunk_FUN_14028af80(ppppppuVar20,(longlong)ppppppuVar17 + 1U,ppppppuVar20);
    }
    *pppppppuVar21 = pppppppuVar13;
    pppppppuVar21[1] = ppppppuVar5;
    pppppppuVar21[2] = ppppppuVar6;
    pppppppuVar21[3] = ppppppuVar3;
  }
LAB_14004ed80:
  pppppppuVar22 = pppppppuVar22 + 4;
  if (pppppppuVar22 == param_2) {
    return;
  }
  goto LAB_14004e570;
}

