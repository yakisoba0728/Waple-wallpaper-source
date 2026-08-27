// Function: FUN_140166a90
// Addr: 140166a90
// Size: 1577 bytes


void FUN_140166a90(longlong *param_1)

{
  ulonglong uVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  longlong *plVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  byte *pbVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 *_Buf2;
  size_t _Size;
  longlong lVar19;
  longlong lVar20;
  
LAB_140166ab8:
  pbVar16 = (byte *)*param_1;
  bVar3 = *pbVar16;
  while( true ) {
    if (bVar3 == 0) goto LAB_140166ada;
    iVar8 = isspace((uint)*pbVar16);
    pbVar16 = (byte *)*param_1;
    if (iVar8 == 0) break;
    pbVar16 = pbVar16 + 1;
    *param_1 = (longlong)pbVar16;
    bVar3 = *pbVar16;
  }
  bVar3 = *pbVar16;
  if (bVar3 == 0x2f) {
    if (pbVar16[1] == 0x2f) goto LAB_140166b10;
    if (pbVar16[1] == 0x2a) {
      pbVar16 = pbVar16 + 2;
      *param_1 = (longlong)pbVar16;
      bVar3 = *pbVar16;
      while ((bVar3 != 0 && ((*pbVar16 != 0x2a || (pbVar16[1] != 0x2f))))) {
        pbVar16 = pbVar16 + 1;
        *param_1 = (longlong)pbVar16;
        bVar3 = *pbVar16;
      }
      if (*pbVar16 != 0) {
        *param_1 = (longlong)(pbVar16 + 2);
      }
      goto LAB_140166ab8;
    }
  }
  else if (bVar3 == 0) goto LAB_140166ada;
  iVar8 = isdigit((uint)bVar3);
  pbVar16 = (byte *)*param_1;
  bVar3 = *pbVar16;
  if (iVar8 != 0) {
    iVar8 = 0;
    iVar9 = 0;
    if (bVar3 != 0x30) goto joined_r0x000140166ff6;
    if ((pbVar16[1] + 0xa8 & 0xdf) == 0) {
      pbVar16 = pbVar16 + 2;
      *param_1 = (longlong)pbVar16;
      bVar3 = *pbVar16;
      while ((bVar3 != 0 && (iVar9 = isxdigit((uint)*pbVar16), iVar9 != 0))) {
        uVar10 = tolower((uint)*(byte *)*param_1);
        iVar9 = isdigit(uVar10 & 0xff);
        iVar15 = 0x30;
        if (iVar9 == 0) {
          iVar15 = 0x57;
        }
        *param_1 = *param_1 + 1;
        pbVar16 = (byte *)*param_1;
        iVar8 = iVar8 * 0x10 + ((char)uVar10 - iVar15);
        bVar3 = *pbVar16;
      }
      goto LAB_14016701e;
    }
    goto LAB_140166ff8;
  }
  iVar8 = isalpha((uint)bVar3);
  if ((iVar8 == 0) && (bVar3 != 0x5f)) {
    pcVar7 = (char *)*param_1;
    cVar4 = *pcVar7;
    pcVar2 = pcVar7 + 1;
    *param_1 = (longlong)pcVar2;
    if (cVar4 == '(') {
      *(undefined4 *)(param_1 + 1) = 3;
      return;
    }
    if (cVar4 == ')') {
      *(undefined4 *)(param_1 + 1) = 4;
      return;
    }
    if (cVar4 == '+') {
      *(undefined4 *)(param_1 + 1) = 0xe;
      return;
    }
    if (cVar4 == '-') {
      *(undefined4 *)(param_1 + 1) = 0xf;
      return;
    }
    if (cVar4 == '*') {
      *(undefined4 *)(param_1 + 1) = 0x10;
      return;
    }
    if (cVar4 == '/') {
      *(undefined4 *)(param_1 + 1) = 0x11;
      return;
    }
    if (cVar4 == '%') {
      *(undefined4 *)(param_1 + 1) = 0x12;
      return;
    }
    if (cVar4 == '~') {
      *(undefined4 *)(param_1 + 1) = 0x16;
      return;
    }
    if (cVar4 == '^') {
      *(undefined4 *)(param_1 + 1) = 0x15;
      return;
    }
    if (cVar4 == '!') {
      if (*pcVar2 == '=') {
        *param_1 = (longlong)(pcVar7 + 2);
        *(undefined4 *)(param_1 + 1) = 7;
        return;
      }
      *(undefined4 *)(param_1 + 1) = 5;
      return;
    }
    if ((cVar4 == '=') && (*pcVar2 == '=')) {
      *(undefined4 *)(param_1 + 1) = 6;
      *param_1 = (longlong)(pcVar7 + 2);
      return;
    }
    if (cVar4 == '<') {
      if (*pcVar2 == '<') {
        *(undefined4 *)(param_1 + 1) = 0x17;
        *param_1 = (longlong)(pcVar7 + 2);
        return;
      }
      if (*pcVar2 == '=') {
        *(undefined4 *)(param_1 + 1) = 9;
        *param_1 = (longlong)(pcVar7 + 2);
        return;
      }
      *(undefined4 *)(param_1 + 1) = 8;
      return;
    }
    if (cVar4 != '>') {
      if (cVar4 == '&') {
        if (*pcVar2 == '&') {
          *param_1 = (longlong)(pcVar7 + 2);
          *(undefined4 *)(param_1 + 1) = 0xc;
          return;
        }
        *(undefined4 *)(param_1 + 1) = 0x13;
        return;
      }
      if (cVar4 != '|') {
        *(undefined4 *)(param_1 + 1) = 0x19;
        return;
      }
      if (*pcVar2 == '|') {
        *param_1 = (longlong)(pcVar7 + 2);
        *(undefined4 *)(param_1 + 1) = 0xd;
        return;
      }
      *(undefined4 *)(param_1 + 1) = 0x14;
      return;
    }
    if (*pcVar2 == '>') {
      *(undefined4 *)(param_1 + 1) = 0x18;
      *param_1 = (longlong)(pcVar7 + 2);
      return;
    }
    if (*pcVar2 == '=') {
      *(undefined4 *)(param_1 + 1) = 0xb;
      *param_1 = (longlong)(pcVar7 + 2);
      return;
    }
    *(undefined4 *)(param_1 + 1) = 10;
    return;
  }
  pbVar16 = (byte *)*param_1;
  bVar3 = *pbVar16;
  pbVar5 = pbVar16;
  goto joined_r0x000140166bb2;
LAB_140166ada:
  lVar18 = param_1[6];
  if (param_1[5] == lVar18) {
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  *param_1 = *(longlong *)(lVar18 + -8);
  param_1[6] = lVar18 + -8;
  *(int *)(param_1 + 8) = (int)param_1[8] + -1;
  goto LAB_140166ab8;
  while( true ) {
    pbVar16 = pbVar16 + 1;
    *param_1 = (longlong)pbVar16;
    if (*pbVar16 == 0) break;
LAB_140166b10:
    if ((*pbVar16 == 10) || (*pbVar16 == 0xd)) break;
  }
  goto LAB_140166ab8;
joined_r0x000140166bb2:
  if (bVar3 == 0) goto LAB_140166bee;
  bVar3 = *pbVar5;
  iVar8 = isalpha((uint)bVar3);
  if (((iVar8 == 0) && (bVar3 != 0x5f)) && (iVar8 = isdigit((uint)*(byte *)*param_1), iVar8 == 0))
  goto LAB_140166bee;
  *param_1 = *param_1 + 1;
  pbVar5 = (byte *)*param_1;
  bVar3 = *pbVar5;
  goto joined_r0x000140166bb2;
  while( true ) {
    cVar4 = *(char *)*param_1;
    pbVar16 = (byte *)((char *)*param_1 + 1);
    *param_1 = (longlong)pbVar16;
    bVar3 = *pbVar16;
    iVar9 = (int)cVar4 + (iVar8 * 5 + -0x18) * 2;
joined_r0x000140166ff6:
    iVar8 = iVar9;
    if (bVar3 == 0) break;
LAB_140166ff8:
    iVar9 = isdigit((uint)*pbVar16);
    if (iVar9 == 0) break;
  }
LAB_14016701e:
  if (*(char *)*param_1 == '.') {
    pbVar16 = (byte *)((char *)*param_1 + 1);
    *param_1 = (longlong)pbVar16;
    bVar3 = *pbVar16;
    while ((bVar3 != 0 && (iVar9 = isdigit((uint)*pbVar16), iVar9 != 0))) {
      *param_1 = *param_1 + 1;
      pbVar16 = (byte *)*param_1;
      bVar3 = *pbVar16;
    }
  }
  pbVar16 = (byte *)*param_1;
  bVar3 = *pbVar16;
  while ((bVar3 != 0 &&
         (((iVar9 = tolower((uint)*pbVar16), iVar9 == 0x75 ||
           (iVar9 = tolower((uint)*(byte *)*param_1), iVar9 == 0x66)) ||
          (iVar9 = tolower((uint)*(byte *)*param_1), iVar9 == 0x6c))))) {
    *param_1 = *param_1 + 1;
    pbVar16 = (byte *)*param_1;
    bVar3 = *pbVar16;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar8;
  *(undefined4 *)(param_1 + 1) = 1;
  return;
LAB_140166bee:
  lVar18 = *param_1;
  param_1[2] = (longlong)pbVar16;
  _Size = lVar18 - (longlong)pbVar16;
  param_1[3] = _Size;
  if (*(char *)((longlong)param_1 + 0x44) == '\0') {
    if (_Size == 7) {
      iVar8 = *(int *)pbVar16 + -0x69666564;
      if ((iVar8 == 0) && (iVar8 = *(ushort *)(pbVar16 + 4) - 0x656e, iVar8 == 0)) {
        iVar8 = pbVar16[6] - 100;
      }
      if (iVar8 == 0) goto LAB_140166f84;
    }
    lVar12 = param_1[4];
    uVar11 = FUN_1400138d0(pbVar16,_Size);
    uVar11 = uVar11 & *(ulonglong *)(lVar12 + 0x30);
    lVar20 = *(longlong *)(lVar12 + 8);
    lVar19 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + 8 + uVar11 * 0x10);
    if (lVar19 != lVar20) {
      lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + uVar11 * 0x10);
      while( true ) {
        _Buf2 = (undefined8 *)(lVar19 + 0x10);
        if (0xf < *(ulonglong *)(lVar19 + 0x28)) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        if ((_Size == *(size_t *)(lVar19 + 0x20)) &&
           ((_Size == 0 || (iVar8 = memcmp(pbVar16,_Buf2,_Size), iVar8 == 0)))) break;
        if (lVar19 == lVar12) goto LAB_140166f84;
        lVar19 = *(longlong *)(lVar19 + 8);
      }
      if (lVar19 == 0) {
        lVar19 = lVar20;
      }
      if ((lVar19 != lVar20) && ((int)param_1[8] < 99)) {
        plVar14 = (longlong *)param_1[6];
        if (plVar14 == (longlong *)param_1[7]) {
          uVar11 = (longlong)plVar14 - param_1[5];
          lVar12 = (longlong)uVar11 >> 3;
          if (lVar12 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_140133d70();
          }
          uVar1 = lVar12 + 1;
          uVar17 = param_1[7] - param_1[5] >> 3;
          if (0x1fffffffffffffff - (uVar17 >> 1) < uVar17) {
            uVar17 = 0x1fffffffffffffff;
          }
          else {
            uVar17 = (uVar17 >> 1) + uVar17;
            if (uVar17 < uVar1) {
              uVar17 = uVar1;
            }
          }
          uVar13 = FUN_140013910(uVar17);
          lVar12 = FUN_140017390(uVar13);
          uVar11 = uVar11 & 0xfffffffffffffff8;
          *(longlong *)(uVar11 + lVar12) = lVar18;
          plVar6 = (longlong *)param_1[5];
          if (plVar14 == (longlong *)param_1[6]) {
            lVar20 = param_1[6] - (longlong)plVar6;
            lVar18 = lVar12;
            plVar14 = plVar6;
          }
          else {
            FUN_1404210f0(lVar12,plVar6,(longlong)plVar14 - (longlong)plVar6);
            lVar20 = param_1[6] - (longlong)plVar14;
            lVar18 = uVar11 + 8 + lVar12;
          }
          FUN_1404210f0(lVar18,plVar14,lVar20);
          if (param_1[5] != 0) {
            FUN_140037480();
          }
          param_1[5] = lVar12;
          param_1[6] = lVar12 + uVar1 * 8;
          param_1[7] = lVar12 + uVar17 * 8;
        }
        else {
          *plVar14 = lVar18;
          param_1[6] = param_1[6] + 8;
        }
        plVar14 = (longlong *)(lVar19 + 0x30);
        if (0xf < *(ulonglong *)(lVar19 + 0x48)) {
          plVar14 = (longlong *)*plVar14;
        }
        *(int *)(param_1 + 8) = (int)param_1[8] + 1;
        *param_1 = (longlong)plVar14;
        goto LAB_140166ab8;
      }
    }
  }
LAB_140166f84:
  *(undefined4 *)(param_1 + 1) = 2;
  return;
}

