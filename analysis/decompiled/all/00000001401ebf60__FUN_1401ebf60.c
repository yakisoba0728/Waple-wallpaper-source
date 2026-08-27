// Function: FUN_1401ebf60
// Addr: 1401ebf60
// Size: 1980 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401ebf60(longlong *param_1,longlong param_2,int param_3,int param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  longlong lVar19;
  int *piVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong *plVar23;
  int iVar24;
  int *piVar25;
  longlong *plVar26;
  longlong lVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  
  piVar12 = *(int **)(param_2 + 0xd0);
  lVar27 = (longlong)param_3;
  cVar7 = (char)piVar12[lVar27 * 0xc + 4];
  if (cVar7 < '\0') {
    plVar23 = (longlong *)0x0;
  }
  else {
    plVar23 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + (longlong)cVar7 * 0x50);
  }
  iVar24 = piVar12[lVar27 * 0xc];
  if (iVar24 != 0) {
    if (iVar24 != 1) {
      if (iVar24 != 2) {
        return;
      }
      if (*(char *)((longlong)piVar12 + lVar27 * 0x30 + 0x11) < '\0') {
        return;
      }
      if (cVar7 < '\0') {
        return;
      }
      piVar13 = *(int **)(param_2 + 0xd8);
      for (piVar25 = piVar12; piVar25 != piVar13; piVar25 = piVar25 + 0xc) {
        if (*piVar25 != 2) {
          cVar7 = *(char *)((longlong)piVar12 + lVar27 * 0x30 + 0x11);
          if (*(char *)((longlong)piVar25 + 0x11) == cVar7) {
            *(char *)((longlong)piVar25 + 0x11) = (char)piVar12[lVar27 * 0xc + 4];
          }
          else if (*(char *)((longlong)piVar25 + 0x11) == (char)piVar12[lVar27 * 0xc + 4]) {
            *(char *)((longlong)piVar25 + 0x11) = cVar7;
          }
          cVar7 = *(char *)((longlong)piVar12 + lVar27 * 0x30 + 0x11);
          if ((char)piVar25[4] == cVar7) {
            *(char *)(piVar25 + 4) = (char)piVar12[lVar27 * 0xc + 4];
          }
          else if ((char)piVar25[4] == (char)piVar12[lVar27 * 0xc + 4]) {
            *(char *)(piVar25 + 4) = cVar7;
          }
          piVar14 = *(int **)(piVar25 + 8);
          for (piVar20 = *(int **)(piVar25 + 6); piVar20 != piVar14; piVar20 = piVar20 + 2) {
            iVar24 = (int)*(char *)((longlong)piVar12 + lVar27 * 0x30 + 0x11);
            if (*piVar20 == iVar24) {
              *piVar20 = (int)(char)piVar12[lVar27 * 0xc + 4];
            }
            else if (*piVar20 == (int)(char)piVar12[lVar27 * 0xc + 4]) {
              *piVar20 = iVar24;
            }
          }
        }
      }
      return;
    }
    cVar7 = *(char *)((longlong)piVar12 + lVar27 * 0x30 + 0x11);
    if (cVar7 < '\0') {
      plVar26 = (longlong *)0x0;
    }
    else {
      plVar26 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + (longlong)cVar7 * 0x50);
      if (plVar26 != (longlong *)0x0) {
        lVar27 = plVar26[1];
        plVar22 = (longlong *)(lVar27 + 0x50);
        *plVar22 = *plVar22 + 8;
        **(longlong **)(lVar27 + 0x50) = (longlong)plVar26;
        (**(code **)(*plVar26 + 0x48))(plVar26);
      }
    }
    if (plVar23 != (longlong *)0x0) {
      (**(code **)(*plVar23 + 8))(plVar23);
    }
    if (plVar26 == (longlong *)0x0) {
      return;
    }
    *(longlong *)(plVar26[1] + 0x50) = *(longlong *)(plVar26[1] + 0x50) + -8;
    plVar22 = (longlong *)**(longlong **)(plVar26[1] + 0x50);
    if (plVar22 != (longlong *)0x0) goto LAB_1401ec6f9;
    lVar27 = *plVar26;
    plVar23 = plVar26;
    goto LAB_1401ec707;
  }
  if (plVar23 != (longlong *)0x0) {
    lVar21 = plVar23[1];
    plVar22 = (longlong *)(lVar21 + 0x50);
    *plVar22 = *plVar22 + 8;
    **(undefined8 **)(lVar21 + 0x50) = plVar23;
    (**(code **)(*plVar23 + 0x48))(plVar23);
  }
  piVar13 = *(int **)(piVar12 + lVar27 * 0xc + 8);
  piVar25 = *(int **)(piVar12 + lVar27 * 0xc + 6);
  if (piVar25 == piVar13) {
    if (param_4 < 0) {
      if (piVar25 != piVar13) goto LAB_1401ec165;
    }
    else {
      *(undefined8 *)(*(longlong *)(piVar12 + lVar27 * 0xc + 2) + 0xd0) =
           *(undefined8 *)(param_1[(longlong)param_4 + 0x59] + 0x20);
    }
  }
  else {
LAB_1401ec165:
    if (param_4 < 0) {
      do {
        if ((-1 < *piVar25) &&
           (lVar21 = *(longlong *)
                      (*(longlong *)(*(longlong *)(param_2 + 0xe8) + (longlong)*piVar25 * 0x50) +
                      0x20), lVar21 != 0)) {
          *(longlong *)(*(longlong *)(piVar12 + lVar27 * 0xc + 2) + 0xd0 + (longlong)piVar25[1] * 8)
               = lVar21;
        }
        piVar25 = piVar25 + 2;
      } while (piVar25 != piVar13);
    }
    else {
      do {
        if (*piVar25 < 0) {
          lVar21 = param_1[(longlong)param_4 + 0x59];
        }
        else {
          lVar21 = *(longlong *)(*(longlong *)(param_2 + 0xe8) + (longlong)*piVar25 * 0x50);
        }
        if (*(longlong *)(lVar21 + 0x20) != 0) {
          *(longlong *)(*(longlong *)(piVar12 + lVar27 * 0xc + 2) + 0xd0 + (longlong)piVar25[1] * 8)
               = *(longlong *)(lVar21 + 0x20);
        }
        piVar25 = piVar25 + 2;
      } while (piVar25 != piVar13);
    }
  }
  lVar21 = *(longlong *)(piVar12 + lVar27 * 0xc + 2);
  uVar8 = *(undefined1 *)(lVar21 + 0x1f2);
  uVar9 = *(undefined1 *)(lVar21 + 0x1f0);
  uVar10 = *(undefined1 *)(lVar21 + 499);
  if ((param_5 == '\0') || (*(int *)(param_2 + 0x144) != param_3)) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
    (**(code **)(*param_1 + 0x108))(param_1);
  }
  if ((*(byte *)(piVar12 + lVar27 * 0xc + 5) & 1) != 0) {
    lVar21 = param_1[0x19];
    uVar4 = *(undefined8 *)((longlong)param_1 + 0x38c);
    *(undefined8 *)(lVar21 + 0xa30) = *(undefined8 *)((longlong)param_1 + 900);
    *(undefined8 *)(lVar21 + 0xa38) = uVar4;
    uVar4 = *(undefined8 *)((longlong)param_1 + 0x39c);
    *(undefined8 *)(lVar21 + 0xa40) = *(undefined8 *)((longlong)param_1 + 0x394);
    *(undefined8 *)(lVar21 + 0xa48) = uVar4;
    uVar4 = *(undefined8 *)((longlong)param_1 + 0x3ac);
    *(undefined8 *)(lVar21 + 0xa50) = *(undefined8 *)((longlong)param_1 + 0x3a4);
    *(undefined8 *)(lVar21 + 0xa58) = uVar4;
    uVar4 = *(undefined8 *)((longlong)param_1 + 0x3bc);
    *(undefined8 *)(lVar21 + 0xa60) = *(undefined8 *)((longlong)param_1 + 0x3b4);
    *(undefined8 *)(lVar21 + 0xa68) = uVar4;
    fVar32 = DAT_1404926c0;
    lVar21 = param_1[0x19];
    if (param_5 == '\0') {
      lVar15 = param_1[0x71];
      uVar28 = *(undefined4 *)((longlong)param_1 + 0x3ac);
      lVar19 = param_1[0x76];
      uVar4 = *(undefined8 *)((longlong)param_1 + 0x3b4);
      uVar5 = *(undefined8 *)((longlong)param_1 + 0x3bc);
      fVar38 = (float)*(undefined8 *)((longlong)param_1 + 0x3a4) * _DAT_140492e30;
      fVar33 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x3a4) >> 0x20) *
               _UNK_140492e34;
      fVar34 = *(float *)(param_1 + 0x5e) * DAT_1404926c0;
      fVar35 = *(float *)((longlong)param_1 + 0x2f4) * DAT_1404926c0;
      fVar1 = *(float *)((longlong)param_1 + 0x394);
      lVar6 = param_1[0x73];
      fVar2 = *(float *)(param_1 + 0x72);
      fVar3 = *(float *)(param_1 + 0x74);
      *(float *)(lVar21 + 0x970) = fVar34 * *(float *)((longlong)param_1 + 900);
      *(float *)(lVar21 + 0x974) = fVar34 * (float)lVar15;
      *(float *)(lVar21 + 0x978) = fVar34 * (float)((ulonglong)lVar15 >> 0x20);
      *(float *)(lVar21 + 0x97c) = fVar34 * fVar2;
      *(float *)(lVar21 + 0x980) = fVar35 * fVar1;
      *(float *)(lVar21 + 0x984) = fVar35 * (float)lVar6;
      *(float *)(lVar21 + 0x988) = fVar35 * (float)((ulonglong)lVar6 >> 0x20);
      *(float *)(lVar21 + 0x98c) = fVar35 * fVar3;
      *(float *)(lVar21 + 0x990) = fVar38;
      *(float *)(lVar21 + 0x994) = fVar33;
      *(undefined4 *)(lVar21 + 0x998) = uVar28;
      *(int *)(lVar21 + 0x99c) = (int)lVar19;
      *(undefined8 *)(lVar21 + 0x9a0) = uVar4;
      *(undefined8 *)(lVar21 + 0x9a8) = uVar5;
      lVar21 = param_1[0x19];
      fVar1 = *(float *)(param_1 + 0x69);
      fVar2 = *(float *)((longlong)param_1 + 0x34c);
      fVar3 = *(float *)(param_1 + 0x6a);
      uVar4 = *(undefined8 *)((longlong)param_1 + 0x35c);
      fVar38 = *(float *)(param_1 + 0x5e) * fVar32;
      fVar33 = *(float *)((longlong)param_1 + 0x364) * _DAT_140492e30;
      fVar34 = *(float *)(param_1 + 0x6d) * _UNK_140492e34;
      fVar35 = *(float *)((longlong)param_1 + 0x36c) * _UNK_140492e38;
      fVar36 = *(float *)(param_1 + 0x6e) * _UNK_140492e3c;
      uVar5 = *(undefined8 *)((longlong)param_1 + 0x354);
      fVar32 = *(float *)((longlong)param_1 + 0x2f4) * fVar32;
      uVar16 = *(undefined8 *)((longlong)param_1 + 0x374);
      uVar17 = *(undefined8 *)((longlong)param_1 + 0x37c);
      *(float *)(lVar21 + 0x9b0) = *(float *)((longlong)param_1 + 0x344) * fVar38;
      *(float *)(lVar21 + 0x9b4) = fVar1 * fVar38;
      *(float *)(lVar21 + 0x9b8) = fVar2 * fVar38;
      *(float *)(lVar21 + 0x9bc) = fVar3 * fVar38;
      *(float *)(lVar21 + 0x9c0) = fVar32 * (float)uVar5;
      *(float *)(lVar21 + 0x9c4) = fVar32 * (float)((ulonglong)uVar5 >> 0x20);
      *(float *)(lVar21 + 0x9c8) = (float)uVar4 * fVar32;
      *(float *)(lVar21 + 0x9cc) = (float)((ulonglong)uVar4 >> 0x20) * fVar32;
      *(float *)(lVar21 + 0x9d0) = fVar33;
      *(float *)(lVar21 + 0x9d4) = fVar34;
      *(float *)(lVar21 + 0x9d8) = fVar35;
      *(float *)(lVar21 + 0x9dc) = fVar36;
      *(undefined8 *)(lVar21 + 0x9e0) = uVar16;
      *(undefined8 *)(lVar21 + 0x9e8) = uVar17;
      lVar21 = param_1[0x19];
      *(undefined8 *)(lVar21 + 0x9f0) = *(undefined8 *)(lVar21 + 0x9b0);
      *(undefined8 *)(lVar21 + 0x9f8) = *(undefined8 *)(lVar21 + 0x9b8);
      *(undefined8 *)(lVar21 + 0xa00) = *(undefined8 *)(lVar21 + 0x9c0);
      *(undefined8 *)(lVar21 + 0xa08) = *(undefined8 *)(lVar21 + 0x9c8);
      *(undefined4 *)(lVar21 + 0xa10) = *(undefined4 *)(lVar21 + 0x9d0);
      *(undefined4 *)(lVar21 + 0xa14) = *(undefined4 *)(lVar21 + 0x9d4);
      *(undefined4 *)(lVar21 + 0xa18) = *(undefined4 *)(lVar21 + 0x9d8);
      *(undefined4 *)(lVar21 + 0xa1c) = *(undefined4 *)(lVar21 + 0x9dc);
      uVar28 = *(undefined4 *)(lVar21 + 0x9e0);
      uVar29 = *(undefined4 *)(lVar21 + 0x9e4);
      uVar30 = *(undefined4 *)(lVar21 + 0x9e8);
      uVar31 = *(undefined4 *)(lVar21 + 0x9ec);
    }
    else {
      uVar4 = *(undefined8 *)((longlong)param_1 + 0x38c);
      *(undefined8 *)(lVar21 + 0x970) = *(undefined8 *)((longlong)param_1 + 900);
      *(undefined8 *)(lVar21 + 0x978) = uVar4;
      uVar4 = *(undefined8 *)((longlong)param_1 + 0x39c);
      *(undefined8 *)(lVar21 + 0x980) = *(undefined8 *)((longlong)param_1 + 0x394);
      *(undefined8 *)(lVar21 + 0x988) = uVar4;
      uVar4 = *(undefined8 *)((longlong)param_1 + 0x3ac);
      *(undefined8 *)(lVar21 + 0x990) = *(undefined8 *)((longlong)param_1 + 0x3a4);
      *(undefined8 *)(lVar21 + 0x998) = uVar4;
      uVar4 = *(undefined8 *)((longlong)param_1 + 0x3bc);
      *(undefined8 *)(lVar21 + 0x9a0) = *(undefined8 *)((longlong)param_1 + 0x3b4);
      *(undefined8 *)(lVar21 + 0x9a8) = uVar4;
      lVar21 = param_1[0x19];
      uVar4 = *(undefined8 *)((longlong)param_1 + 0x34c);
      *(undefined8 *)(lVar21 + 0x9b0) = *(undefined8 *)((longlong)param_1 + 0x344);
      *(undefined8 *)(lVar21 + 0x9b8) = uVar4;
      uVar4 = *(undefined8 *)((longlong)param_1 + 0x35c);
      *(undefined8 *)(lVar21 + 0x9c0) = *(undefined8 *)((longlong)param_1 + 0x354);
      *(undefined8 *)(lVar21 + 0x9c8) = uVar4;
      uVar4 = *(undefined8 *)((longlong)param_1 + 0x36c);
      *(undefined8 *)(lVar21 + 0x9d0) = *(undefined8 *)((longlong)param_1 + 0x364);
      *(undefined8 *)(lVar21 + 0x9d8) = uVar4;
      fVar38 = DAT_1404926c0;
      uVar4 = *(undefined8 *)((longlong)param_1 + 0x37c);
      *(undefined8 *)(lVar21 + 0x9e0) = *(undefined8 *)((longlong)param_1 + 0x374);
      *(undefined8 *)(lVar21 + 0x9e8) = uVar4;
      lVar21 = param_1[0x19];
      uVar4 = *(undefined8 *)((longlong)param_1 + 0x354);
      fVar37 = *(float *)(param_1 + 0x5e) * fVar38;
      fVar33 = *(float *)((longlong)param_1 + 0x364) * _DAT_140492e30;
      fVar34 = *(float *)(param_1 + 0x6d) * _UNK_140492e34;
      fVar35 = *(float *)((longlong)param_1 + 0x36c) * _UNK_140492e38;
      fVar36 = *(float *)(param_1 + 0x6e) * _UNK_140492e3c;
      fVar38 = *(float *)((longlong)param_1 + 0x2f4) * fVar38;
      uVar5 = *(undefined8 *)((longlong)param_1 + 0x344);
      fVar32 = *(float *)((longlong)param_1 + 0x34c);
      fVar1 = *(float *)(param_1 + 0x6a);
      fVar2 = *(float *)((longlong)param_1 + 0x35c);
      fVar3 = *(float *)(param_1 + 0x6c);
      uVar28 = *(undefined4 *)((longlong)param_1 + 0x374);
      uVar29 = (undefined4)param_1[0x6f];
      uVar30 = *(undefined4 *)((longlong)param_1 + 0x37c);
      uVar31 = (undefined4)param_1[0x70];
      *(float *)(lVar21 + 0x9f0) = fVar37 * (float)uVar5;
      *(float *)(lVar21 + 0x9f4) = fVar37 * (float)((ulonglong)uVar5 >> 0x20);
      *(float *)(lVar21 + 0x9f8) = fVar37 * fVar32;
      *(float *)(lVar21 + 0x9fc) = fVar37 * fVar1;
      *(float *)(lVar21 + 0xa00) = (float)uVar4 * fVar38;
      *(float *)(lVar21 + 0xa04) = (float)((ulonglong)uVar4 >> 0x20) * fVar38;
      *(float *)(lVar21 + 0xa08) = fVar38 * fVar2;
      *(float *)(lVar21 + 0xa0c) = fVar38 * fVar3;
      *(float *)(lVar21 + 0xa10) = fVar33;
      *(float *)(lVar21 + 0xa14) = fVar34;
      *(float *)(lVar21 + 0xa18) = fVar35;
      *(float *)(lVar21 + 0xa1c) = fVar36;
    }
    *(undefined4 *)(lVar21 + 0xa20) = uVar28;
    *(undefined4 *)(lVar21 + 0xa24) = uVar29;
    *(undefined4 *)(lVar21 + 0xa28) = uVar30;
    *(undefined4 *)(lVar21 + 0xa2c) = uVar31;
  }
  FUN_140155fc0(*(undefined8 *)(piVar12 + lVar27 * 0xc + 2));
  if (bVar18) {
    plVar22 = *(longlong **)(param_1[0x19] + 0x1518);
    (**(code **)(*plVar22 + 0xd8))(plVar22,1,*(char *)(param_1[0x19] + 0x1c9) != '\0');
    lVar21 = param_1[0x19];
    lVar15 = *(longlong *)(lVar21 + 0x1b0);
    iVar24 = *(int *)(lVar21 + 0x1b8) - (int)lVar15;
    *(undefined1 *)((ulonglong)(iVar24 - 1) + lVar15) =
         *(undefined1 *)((ulonglong)(iVar24 - 2) + lVar15);
    (**(code **)(**(longlong **)(lVar21 + 0x1518) + 0xb0))
              (*(longlong **)(lVar21 + 0x1518),*(undefined1 *)(*(longlong *)(lVar21 + 0x1b8) + -1));
    (**(code **)(*(longlong *)param_1[0x5d] + 8))();
    FUN_140157430(*(undefined8 *)(piVar12 + lVar27 * 0xc + 2));
    *(undefined1 *)(*(longlong *)(piVar12 + lVar27 * 0xc + 2) + 0x1f0) = uVar9;
    *(undefined1 *)(*(longlong *)(piVar12 + lVar27 * 0xc + 2) + 0x1f2) = uVar8;
    *(undefined1 *)(*(longlong *)(piVar12 + lVar27 * 0xc + 2) + 499) = uVar10;
  }
  else {
    (**(code **)(*(longlong *)param_1[0x5c] + 8))();
    FUN_140157430(*(undefined8 *)(piVar12 + lVar27 * 0xc + 2));
  }
  if (plVar23 == (longlong *)0x0) {
    return;
  }
  uVar11 = piVar12[lVar27 * 0xc + 5];
  *(longlong *)(plVar23[1] + 0x50) = *(longlong *)(plVar23[1] + 0x50) + -8;
  if ((uVar11 >> 2 & 1) == 0) {
    return;
  }
  plVar22 = (longlong *)**(longlong **)(plVar23[1] + 0x50);
  if (plVar22 != (longlong *)0x0) {
LAB_1401ec6f9:
    (**(code **)(*plVar22 + 0x48))();
    return;
  }
  lVar27 = *plVar23;
LAB_1401ec707:
  (**(code **)(lVar27 + 0x50))(plVar23);
  return;
}

