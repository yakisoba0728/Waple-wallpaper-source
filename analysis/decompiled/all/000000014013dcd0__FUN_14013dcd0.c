// Function: FUN_14013dcd0
// Addr: 14013dcd0
// Size: 1016 bytes


void FUN_14013dcd0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t *psVar1;
  size_t _Size;
  code *pcVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *_Buf1;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  undefined8 *_Buf2;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  puVar12 = auStack_68;
  puVar11 = auStack_68;
  puVar13 = auStack_68;
  if ((undefined8 *)(param_1 + 0x58) == param_2) goto LAB_14013e00c;
  puVar10 = (ulonglong *)*param_2;
  puVar15 = *(ulonglong **)(param_1 + 0x58);
  uVar16 = param_2[1] - (longlong)puVar10;
  lVar6 = *(longlong *)(param_1 + 0x68) - (longlong)puVar15 >> 3;
  uVar17 = ((longlong)uVar16 >> 3) * -0x71c71c71c71c71c7;
  uVar7 = lVar6 * -0x71c71c71c71c71c7;
  if (uVar17 < uVar7 || uVar17 + lVar6 * 0x71c71c71c71c71c7 == 0) {
    puVar8 = *(ulonglong **)(param_1 + 0x60);
    lVar6 = (longlong)puVar8 - (longlong)puVar15 >> 3;
    if (uVar17 < (ulonglong)(lVar6 * -0x71c71c71c71c71c7) ||
        uVar17 + lVar6 * 0x71c71c71c71c71c7 == 0) {
      puVar8 = puVar15 + ((longlong)uVar16 >> 3);
      while (uVar16 != 0) {
        if (puVar15 != puVar10) {
          puVar9 = puVar10;
          if (0xf < puVar10[3]) {
            puVar9 = (ulonglong *)*puVar10;
          }
          FUN_14000f880(puVar15,puVar9,puVar10[2]);
          puVar9 = puVar10 + 4;
          if (0xf < puVar10[7]) {
            puVar9 = (ulonglong *)*puVar9;
          }
          FUN_14000f880(puVar15 + 4,puVar9,puVar10[6]);
        }
        puVar9 = puVar10 + 8;
        puVar10 = puVar10 + 9;
        *(int *)(puVar15 + 8) = (int)*puVar9;
        puVar15 = puVar15 + 9;
        uVar17 = uVar17 - 1;
        uVar16 = uVar17;
      }
      puVar15 = *(ulonglong **)(param_1 + 0x60);
      for (puVar10 = puVar8; puVar10 != puVar15; puVar10 = puVar10 + 9) {
        FUN_140017240(puVar10 + 4);
        FUN_140017240(puVar10);
      }
    }
    else {
      if (puVar15 != puVar8) {
        do {
          if (puVar15 != puVar10) {
            puVar8 = puVar10;
            if (0xf < puVar10[3]) {
              puVar8 = (ulonglong *)*puVar10;
            }
            FUN_14000f880(puVar15,puVar8,puVar10[2]);
            puVar8 = puVar10 + 4;
            if (0xf < puVar10[7]) {
              puVar8 = (ulonglong *)*puVar8;
            }
            FUN_14000f880(puVar15 + 4,puVar8,puVar10[6]);
          }
          puVar8 = puVar10 + 8;
          puVar10 = puVar10 + 9;
          *(int *)(puVar15 + 8) = (int)*puVar8;
          puVar15 = puVar15 + 9;
          puVar8 = *(ulonglong **)(param_1 + 0x60);
        } while (puVar15 != puVar8);
      }
      for (lVar6 = uVar17 + lVar6 * 0x71c71c71c71c71c7; lVar6 != 0; lVar6 = lVar6 + -1) {
        FUN_140016fc0(puVar8,puVar10);
        FUN_140016fc0(puVar8 + 4,puVar10 + 4);
        puVar15 = puVar10 + 8;
        puVar10 = puVar10 + 9;
        *(int *)(puVar8 + 8) = (int)*puVar15;
        puVar8 = puVar8 + 9;
      }
    }
    *(ulonglong **)(param_1 + 0x60) = puVar8;
    puVar13 = auStack_68;
    goto LAB_14013e00c;
  }
  if (0x38e38e38e38e38e < uVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar4 = 0x38e38e38e38e38e - (uVar7 >> 1);
  if (uVar7 < uVar4 || uVar7 - uVar4 == 0) {
    uVar7 = (uVar7 >> 1) + uVar7;
    if (uVar7 < uVar17) {
      uVar7 = uVar17;
    }
  }
  else {
    uVar7 = 0x38e38e38e38e38e;
  }
  if (puVar15 == (ulonglong *)0x0) {
LAB_14013de01:
    uVar4 = 0;
    if (0x38e38e38e38e38e < uVar7) {
LAB_14013e0be:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    puVar15 = (ulonglong *)(uVar7 * 0x48);
    if (puVar15 != (ulonglong *)0x0) {
      if ((ulonglong *)0xfff < puVar15) {
        if ((ulonglong *)((longlong)puVar15 + 0x27U) <= puVar15) goto LAB_14013e0be;
        lVar5 = FUN_14028af20();
        lVar6 = lVar5;
        if (lVar5 == 0) goto LAB_14013de43;
        goto LAB_14013de4a;
      }
      uVar4 = FUN_14028af20(puVar15);
      puVar12 = auStack_68;
    }
  }
  else {
    puVar8 = *(ulonglong **)(param_1 + 0x60);
    for (; puVar15 != puVar8; puVar15 = puVar15 + 9) {
      FUN_140017240(puVar15 + 4);
      FUN_140017240(puVar15);
    }
    lVar6 = *(longlong *)(param_1 + 0x58);
    uVar4 = (*(longlong *)(param_1 + 0x68) - lVar6 >> 3) * 8;
    if (uVar4 < 0x1000) {
LAB_14013ddde:
      thunk_FUN_14028af80(lVar6,uVar4);
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      goto LAB_14013de01;
    }
    if ((lVar6 - *(longlong *)(lVar6 + -8)) - 8U < 0x20) {
      uVar4 = uVar4 + 0x27;
      lVar6 = *(longlong *)(lVar6 + -8);
      goto LAB_14013ddde;
    }
LAB_14013de43:
    lVar6 = 5;
    pcVar2 = (code *)swi(0x29);
    lVar5 = (*pcVar2)();
    puVar11 = auStack_60;
LAB_14013de4a:
    uVar4 = lVar5 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar4 - 8) = lVar6;
    puVar12 = puVar11;
  }
  *(ulonglong *)(param_1 + 0x58) = uVar4;
  *(ulonglong *)(param_1 + 0x60) = uVar4;
  *(ulonglong *)(param_1 + 0x68) = uVar4 + (longlong)puVar15;
  uVar7 = *(ulonglong *)(param_1 + 0x58);
  while (uVar16 != 0) {
    *(undefined8 *)(puVar12 + -8) = 0x14013de8b;
    FUN_140016fc0(uVar7,puVar10);
    *(undefined8 *)(puVar12 + -8) = 0x14013de98;
    FUN_140016fc0(uVar7 + 0x20,puVar10 + 4);
    puVar15 = puVar10 + 8;
    puVar10 = puVar10 + 9;
    *(int *)(uVar7 + 0x40) = (int)*puVar15;
    uVar7 = uVar7 + 0x48;
    uVar17 = uVar17 - 1;
    uVar16 = uVar17;
  }
  *(ulonglong *)(param_1 + 0x60) = uVar7;
  puVar13 = puVar12;
LAB_14013e00c:
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  iVar14 = 0;
  lVar6 = *(longlong *)(param_1 + 0x58);
  if ((*(longlong *)(param_1 + 0x60) - lVar6 >> 3) * -0x71c71c71c71c71c7 != 0) {
    do {
      _Buf2 = (undefined8 *)(lVar6 + (longlong)iVar14 * 0x48);
      *(undefined8 *)(puVar13 + -8) = 0x14013e046;
      FUN_14013daf0(param_1,_Buf2);
      if (*(int *)(param_1 + 0x50) < 0) {
        psVar1 = _Buf2 + 2;
        if (0xf < (ulonglong)_Buf2[3]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        _Size = param_3[2];
        _Buf1 = param_3;
        if (0xf < (ulonglong)param_3[3]) {
          _Buf1 = (undefined8 *)*param_3;
        }
        if (_Size == *psVar1) {
          if (_Size != 0) {
            *(undefined8 *)(puVar13 + -8) = 0x14013e082;
            iVar3 = memcmp(_Buf1,_Buf2,_Size);
            if (iVar3 != 0) goto LAB_14013e089;
          }
          *(int *)(param_1 + 0x50) = iVar14;
        }
      }
LAB_14013e089:
      lVar6 = *(longlong *)(param_1 + 0x58);
      iVar14 = iVar14 + 1;
    } while ((ulonglong)(longlong)iVar14 <
             (ulonglong)((*(longlong *)(param_1 + 0x60) - lVar6 >> 3) * -0x71c71c71c71c71c7));
  }
  FUN_140017240(param_3);
  return;
}

