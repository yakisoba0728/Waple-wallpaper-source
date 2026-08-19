// Function: FUN_140166b60
// Addr: 140166b60
// Size: 1386 bytes


void FUN_140166b60(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  int iVar17;
  char *pcVar18;
  ulonglong uVar19;
  byte *pbVar20;
  longlong lVar21;
  longlong lVar22;
  
LAB_140166b88:
  pcVar18 = (char *)*param_1;
  cVar2 = *pcVar18;
  while( true ) {
    if (cVar2 == '\0') goto LAB_140166baa;
    iVar11 = FUN_1402d5910(*pcVar18);
    pcVar18 = (char *)*param_1;
    if (iVar11 == 0) break;
    pcVar18 = pcVar18 + 1;
    *param_1 = (longlong)pcVar18;
    cVar2 = *pcVar18;
  }
  cVar2 = *pcVar18;
  if (cVar2 == '/') {
    if (pcVar18[1] == '/') goto LAB_140166be0;
    if (pcVar18[1] == '*') {
      pcVar18 = pcVar18 + 2;
      *param_1 = (longlong)pcVar18;
      cVar2 = *pcVar18;
      while ((cVar2 != '\0' && ((*pcVar18 != '*' || (pcVar18[1] != '/'))))) {
        pcVar18 = pcVar18 + 1;
        *param_1 = (longlong)pcVar18;
        cVar2 = *pcVar18;
      }
      if (*pcVar18 != '\0') {
        *param_1 = (longlong)(pcVar18 + 2);
      }
      goto LAB_140166b88;
    }
  }
  else if (cVar2 == '\0') goto LAB_140166baa;
  iVar11 = FUN_1402d57b0(cVar2);
  pcVar18 = (char *)*param_1;
  cVar2 = *pcVar18;
  if (iVar11 != 0) {
    iVar11 = 0;
    iVar12 = 0;
    if (cVar2 != '0') goto joined_r0x0001401670c6;
    if ((pcVar18[1] + 0xa8U & 0xdf) == 0) {
      pbVar20 = (byte *)(pcVar18 + 2);
      *param_1 = (longlong)pbVar20;
      bVar3 = *pbVar20;
      while ((bVar3 != 0 && (iVar12 = isxdigit((uint)*pbVar20), iVar12 != 0))) {
        uVar13 = tolower((uint)*(byte *)*param_1);
        iVar12 = FUN_1402d57b0(uVar13 & 0xff);
        iVar17 = 0x30;
        if (iVar12 == 0) {
          iVar17 = 0x57;
        }
        *param_1 = *param_1 + 1;
        pbVar20 = (byte *)*param_1;
        iVar11 = iVar11 * 0x10 + ((char)uVar13 - iVar17);
        bVar3 = *pbVar20;
      }
      goto UNWIND_INFO_1401670ed_SizeOfProlog;
    }
    goto LAB_1401670c8;
  }
  iVar11 = FUN_1402d5700(cVar2);
  if ((iVar11 == 0) && (cVar2 != '_')) {
    pcVar10 = (char *)*param_1;
    cVar2 = *pcVar10;
    pcVar18 = pcVar10 + 1;
    *param_1 = (longlong)pcVar18;
    if (cVar2 == '(') {
      *(undefined4 *)(param_1 + 1) = 3;
      return;
    }
    if (cVar2 == ')') {
      *(undefined4 *)(param_1 + 1) = 4;
      return;
    }
    if (cVar2 == '+') {
      *(undefined4 *)(param_1 + 1) = 0xe;
      return;
    }
    if (cVar2 == '-') {
      *(undefined4 *)(param_1 + 1) = 0xf;
      return;
    }
    if (cVar2 == '*') {
      *(undefined4 *)(param_1 + 1) = 0x10;
      return;
    }
    if (cVar2 == '/') {
      *(undefined4 *)(param_1 + 1) = 0x11;
      return;
    }
    if (cVar2 == '%') {
      *(undefined4 *)(param_1 + 1) = 0x12;
      return;
    }
    if (cVar2 == '~') {
      *(undefined4 *)(param_1 + 1) = 0x16;
      return;
    }
    if (cVar2 == '^') {
      *(undefined4 *)(param_1 + 1) = 0x15;
      return;
    }
    if (cVar2 == '!') {
      if (*pcVar18 == '=') {
        *param_1 = (longlong)(pcVar10 + 2);
        *(undefined4 *)(param_1 + 1) = 7;
        return;
      }
      *(undefined4 *)(param_1 + 1) = 5;
      return;
    }
    if ((cVar2 == '=') && (*pcVar18 == '=')) {
      *(undefined4 *)(param_1 + 1) = 6;
      *param_1 = (longlong)(pcVar10 + 2);
      return;
    }
    if (cVar2 == '<') {
      if (*pcVar18 == '<') {
        *(undefined4 *)(param_1 + 1) = 0x17;
        *param_1 = (longlong)(pcVar10 + 2);
        return;
      }
      if (*pcVar18 == '=') {
        *(undefined4 *)(param_1 + 1) = 9;
        *param_1 = (longlong)(pcVar10 + 2);
        return;
      }
      *(undefined4 *)(param_1 + 1) = 8;
      return;
    }
    if (cVar2 != '>') {
      if (cVar2 == '&') {
        if (*pcVar18 == '&') {
          *param_1 = (longlong)(pcVar10 + 2);
          *(undefined4 *)(param_1 + 1) = 0xc;
          return;
        }
        *(undefined4 *)(param_1 + 1) = 0x13;
        return;
      }
      if (cVar2 != '|') {
        *(undefined4 *)(param_1 + 1) = 0x19;
        return;
      }
      if (*pcVar18 == '|') {
        *param_1 = (longlong)(pcVar10 + 2);
        *(undefined4 *)(param_1 + 1) = 0xd;
        return;
      }
      *(undefined4 *)(param_1 + 1) = 0x14;
      return;
    }
    if (*pcVar18 == '>') {
      *(undefined4 *)(param_1 + 1) = 0x18;
      *param_1 = (longlong)(pcVar10 + 2);
      return;
    }
    if (*pcVar18 == '=') {
      *(undefined4 *)(param_1 + 1) = 0xb;
      *param_1 = (longlong)(pcVar10 + 2);
      return;
    }
    *(undefined4 *)(param_1 + 1) = 10;
    return;
  }
  piVar6 = (int *)*param_1;
  cVar2 = (char)*piVar6;
  piVar7 = piVar6;
  goto joined_r0x000140166c82;
LAB_140166baa:
  lVar5 = param_1[6];
  if (param_1[5] == lVar5) {
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  *param_1 = *(longlong *)(lVar5 + -8);
  param_1[6] = lVar5 + -8;
  *(int *)(param_1 + 8) = (int)param_1[8] + -1;
  goto LAB_140166b88;
  while( true ) {
    pcVar18 = pcVar18 + 1;
    *param_1 = (longlong)pcVar18;
    if (*pcVar18 == '\0') break;
LAB_140166be0:
    if ((*pcVar18 == '\n') || (*pcVar18 == '\r')) break;
  }
  goto LAB_140166b88;
joined_r0x000140166c82:
  if (cVar2 == '\0') goto LAB_140166cbe;
  iVar11 = *piVar7;
  iVar12 = FUN_1402d5700((char)iVar11);
  if (((iVar12 == 0) && ((char)iVar11 != '_')) &&
     (iVar11 = FUN_1402d57b0(*(undefined1 *)*param_1), iVar11 == 0)) goto LAB_140166cbe;
  *param_1 = *param_1 + 1;
  piVar7 = (int *)*param_1;
  cVar2 = (char)*piVar7;
  goto joined_r0x000140166c82;
  while( true ) {
    cVar4 = *(char *)*param_1;
    pcVar18 = (char *)*param_1 + 1;
    *param_1 = (longlong)pcVar18;
    cVar2 = *pcVar18;
    iVar12 = (int)cVar4 + (iVar11 * 5 + -0x18) * 2;
joined_r0x0001401670c6:
    iVar11 = iVar12;
    if (cVar2 == '\0') break;
LAB_1401670c8:
    iVar12 = FUN_1402d57b0(*pcVar18);
    if (iVar12 == 0) break;
  }
UNWIND_INFO_1401670ed_SizeOfProlog:
  if (*(char *)*param_1 == '.') {
    pcVar18 = (char *)*param_1 + 1;
    *param_1 = (longlong)pcVar18;
    cVar2 = *pcVar18;
    while ((cVar2 != '\0' && (iVar12 = FUN_1402d57b0(*pcVar18), iVar12 != 0))) {
      *param_1 = *param_1 + 1;
      pcVar18 = (char *)*param_1;
      cVar2 = *pcVar18;
    }
  }
  pbVar20 = (byte *)*param_1;
  bVar3 = *pbVar20;
  while ((bVar3 != 0 &&
         (((iVar12 = tolower((uint)*pbVar20), iVar12 == 0x75 ||
           (iVar12 = tolower((uint)*(byte *)*param_1), iVar12 == 0x66)) ||
          (iVar12 = tolower((uint)*(byte *)*param_1), iVar12 == 0x6c))))) {
    *param_1 = *param_1 + 1;
    pbVar20 = (byte *)*param_1;
    bVar3 = *pbVar20;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar11;
  *(undefined4 *)(param_1 + 1) = 1;
  return;
LAB_140166cbe:
  lVar5 = *param_1;
  param_1[2] = (longlong)piVar6;
  lVar21 = lVar5 - (longlong)piVar6;
  param_1[3] = lVar21;
  if (*(char *)((longlong)param_1 + 0x44) == '\0') {
    if (lVar21 == 7) {
      iVar11 = *piVar6 + -0x69666564;
      if ((iVar11 == 0) && (iVar11 = *(ushort *)(piVar6 + 1) - 0x656e, iVar11 == 0)) {
        iVar11 = *(byte *)((longlong)piVar6 + 6) - 100;
      }
      if (iVar11 == 0) goto LAB_140167054;
    }
    lVar8 = param_1[4];
    uVar14 = FUN_1400139a0(piVar6,lVar21);
    uVar14 = uVar14 & *(ulonglong *)(lVar8 + 0x30);
    lVar9 = *(longlong *)(lVar8 + 8);
    lVar22 = *(longlong *)(*(longlong *)(lVar8 + 0x18) + 8 + uVar14 * 0x10);
    if (lVar22 != lVar9) {
      lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x18) + uVar14 * 0x10);
      while( true ) {
        plVar16 = (longlong *)(lVar22 + 0x10);
        if (0xf < *(ulonglong *)(lVar22 + 0x28)) {
          plVar16 = (longlong *)*plVar16;
        }
        if ((lVar21 == *(longlong *)(lVar22 + 0x20)) &&
           ((lVar21 == 0 || (iVar11 = func_0x0001404210c0(piVar6,plVar16,lVar21), iVar11 == 0))))
        break;
        if (lVar22 == lVar8) goto LAB_140167054;
        lVar22 = *(longlong *)(lVar22 + 8);
      }
      if (lVar22 == 0) {
        lVar22 = lVar9;
      }
      if ((lVar22 != lVar9) && ((int)param_1[8] < 99)) {
        plVar16 = (longlong *)param_1[6];
        if (plVar16 == (longlong *)param_1[7]) {
          uVar14 = (longlong)plVar16 - param_1[5];
          lVar21 = (longlong)uVar14 >> 3;
          if (lVar21 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_140133e40();
          }
          uVar1 = lVar21 + 1;
          uVar19 = param_1[7] - param_1[5] >> 3;
          if (0x1fffffffffffffff - (uVar19 >> 1) < uVar19) {
            uVar19 = 0x1fffffffffffffff;
          }
          else {
            uVar19 = (uVar19 >> 1) + uVar19;
            if (uVar19 < uVar1) {
              uVar19 = uVar1;
            }
          }
          uVar15 = FUN_1400139e0(uVar19);
          lVar21 = FUN_140017460(uVar15);
          *(longlong *)((uVar14 & 0xfffffffffffffff8) + lVar21) = lVar5;
          lVar5 = param_1[5];
          if (plVar16 == (longlong *)param_1[6]) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(lVar21,lVar5,param_1[6] - lVar5);
          }
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(lVar21,lVar5,(longlong)plVar16 - lVar5);
        }
        *plVar16 = lVar5;
        param_1[6] = param_1[6] + 8;
        plVar16 = (longlong *)(lVar22 + 0x30);
        if (0xf < *(ulonglong *)(lVar22 + 0x48)) {
          plVar16 = (longlong *)*plVar16;
        }
        *(int *)(param_1 + 8) = (int)param_1[8] + 1;
        *param_1 = (longlong)plVar16;
        goto LAB_140166b88;
      }
    }
  }
LAB_140167054:
  *(undefined4 *)(param_1 + 1) = 2;
  return;
}

