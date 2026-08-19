// Function: FUN_14007a940
// Addr: 14007a940
// Size: 479 bytes


longlong * FUN_14007a940(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar7 = auStack_48;
  if (param_1 != param_2) {
    puVar6 = (undefined8 *)*param_2;
    puVar8 = (undefined8 *)*param_1;
    uVar10 = param_2[1] - (longlong)puVar6;
    lVar4 = param_1[2] - (longlong)puVar8 >> 3;
    uVar11 = ((longlong)uVar10 >> 3) * -0x71c71c71c71c71c7;
    uVar5 = lVar4 * -0x71c71c71c71c71c7;
    if (uVar11 < uVar5 || uVar11 + lVar4 * 0x71c71c71c71c71c7 == 0) {
      puVar9 = (undefined8 *)param_1[1];
      lVar4 = (longlong)puVar9 - (longlong)puVar8 >> 3;
      if (uVar11 < (ulonglong)(lVar4 * -0x71c71c71c71c71c7) ||
          uVar11 + lVar4 * 0x71c71c71c71c71c7 == 0) {
        puVar9 = puVar8 + ((longlong)uVar10 >> 3);
        while (uVar10 != 0) {
          if (puVar8 != puVar6) {
            puVar9 = puVar6;
            if (0xf < (ulonglong)puVar6[3]) {
              puVar9 = (undefined8 *)*puVar6;
            }
                    /* WARNING: Subroutine does not return */
            FUN_14000f950(puVar8,puVar9,puVar6[2]);
          }
          *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(puVar6 + 4);
          puVar8 = puVar8 + 9;
          puVar6 = puVar6 + 9;
          uVar11 = uVar11 - 1;
          uVar10 = uVar11;
        }
        if (puVar9 != (undefined8 *)param_1[1]) {
                    /* WARNING: Subroutine does not return */
          FUN_140017310(puVar9 + 5);
        }
      }
      else {
        if (puVar8 != puVar9) {
          do {
            func_0x000140069020(puVar8,puVar6);
            puVar9 = (undefined8 *)param_1[1];
            puVar8 = puVar8 + 9;
            puVar6 = puVar6 + 9;
          } while (puVar8 != puVar9);
        }
        if (uVar11 + lVar4 * 0x71c71c71c71c71c7 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140017090(puVar9,puVar6);
        }
      }
    }
    else {
      if (0x38e38e38e38e38e < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_140013120();
      }
      uVar2 = 0x38e38e38e38e38e - (uVar5 >> 1);
      if (uVar5 < uVar2 || uVar5 - uVar2 == 0) {
        uVar5 = (uVar5 >> 1) + uVar5;
        if (uVar5 < uVar11) {
          uVar5 = uVar11;
        }
      }
      else {
        uVar5 = 0x38e38e38e38e38e;
      }
      puVar9 = (undefined8 *)0x0;
      if (puVar8 == (undefined8 *)0x0) {
        if (0x38e38e38e38e38e < uVar5) {
UNWIND_INFO_14007abf9_UnwindCodes_40__UnwindOpCode:
                    /* WARNING: Subroutine does not return */
          FUN_140017440();
        }
        uVar5 = uVar5 * 0x48;
        if (uVar5 != 0) {
          if (uVar5 < 0x1000) {
            plVar3 = (longlong *)func_0x00014028aff0(uVar5);
            return plVar3;
          }
          if (uVar5 < uVar5 + 0x27) {
            plVar3 = (longlong *)func_0x00014028aff0();
            return plVar3;
          }
          goto UNWIND_INFO_14007abf9_UnwindCodes_40__UnwindOpCode;
        }
        puVar8 = (undefined8 *)0x0;
      }
      else {
        if (puVar8 != (undefined8 *)param_1[1]) {
                    /* WARNING: Subroutine does not return */
          FUN_140017310(puVar8 + 5);
        }
        lVar4 = *param_1;
        uVar5 = (param_1[2] - lVar4 >> 3) * 8;
        if (uVar5 < 0x1000) {
LAB_14007aa58:
          plVar3 = (longlong *)func_0x00014028b040(lVar4,uVar5);
          return plVar3;
        }
        if ((lVar4 - *(longlong *)(lVar4 + -8)) - 8U < 0x20) {
          uVar5 = uVar5 + 0x27;
          lVar4 = *(longlong *)(lVar4 + -8);
          goto LAB_14007aa58;
        }
        pcVar1 = (code *)swi(0x29);
        lVar4 = (*pcVar1)(5);
        puVar7 = auStack_40;
        puVar9 = (undefined8 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
        puVar9[-1] = lVar4;
      }
      *param_1 = (longlong)puVar9;
      param_1[1] = (longlong)puVar9;
      param_1[2] = (longlong)puVar8 + (longlong)puVar9;
      if (uVar10 != 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar7 + -8) = &UNK_14007aaef;
        FUN_140017090(puVar9,puVar6);
      }
    }
    param_1[1] = (longlong)puVar9;
  }
  return param_1;
}

