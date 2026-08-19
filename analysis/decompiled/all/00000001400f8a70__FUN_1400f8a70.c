// Function: FUN_1400f8a70
// Addr: 1400f8a70
// Size: 524 bytes


longlong * FUN_1400f8a70(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar8 = auStack_48;
  if (param_1 != param_2) {
    puVar7 = (undefined4 *)*param_2;
    puVar11 = (undefined4 *)*param_1;
    uVar12 = param_2[1] - (longlong)puVar7;
    lVar5 = param_1[2] - (longlong)puVar11 >> 3;
    uVar9 = ((longlong)uVar12 >> 3) * 0x6db6db6db6db6db7;
    uVar6 = lVar5 * 0x6db6db6db6db6db7;
    if (uVar9 < uVar6 || uVar9 + lVar5 * -0x6db6db6db6db6db7 == 0) {
      puVar10 = (undefined4 *)param_1[1];
      lVar5 = (longlong)puVar10 - (longlong)puVar11 >> 3;
      if (uVar9 < (ulonglong)(lVar5 * 0x6db6db6db6db6db7) ||
          uVar9 + lVar5 * -0x6db6db6db6db6db7 == 0) {
        puVar10 = puVar11 + ((longlong)uVar12 >> 3) * 2;
        while (uVar12 != 0) {
          *puVar11 = *puVar7;
          if (puVar11 != puVar7) {
            plVar4 = (longlong *)(puVar7 + 2);
            if (0xf < *(ulonglong *)(puVar7 + 8)) {
              plVar4 = (longlong *)*plVar4;
            }
                    /* WARNING: Subroutine does not return */
            FUN_14000f950(puVar11 + 2,plVar4,*(undefined8 *)(puVar7 + 6));
          }
          puVar11[10] = puVar7[10];
          *(undefined1 *)(puVar11 + 0xb) = *(undefined1 *)(puVar7 + 0xb);
          puVar1 = puVar7 + 0xc;
          puVar7 = puVar7 + 0xe;
          puVar11[0xc] = *puVar1;
          puVar11 = puVar11 + 0xe;
          uVar9 = uVar9 - 1;
          uVar12 = uVar9;
        }
        if (puVar10 != (undefined4 *)param_1[1]) {
                    /* WARNING: Subroutine does not return */
          FUN_140017310(puVar10 + 2);
        }
      }
      else {
        if (puVar11 != puVar10) {
          do {
            *puVar11 = *puVar7;
            if (puVar11 != puVar7) {
              plVar4 = (longlong *)(puVar7 + 2);
              if (0xf < *(ulonglong *)(puVar7 + 8)) {
                plVar4 = (longlong *)*plVar4;
              }
                    /* WARNING: Subroutine does not return */
              FUN_14000f950(puVar11 + 2,plVar4,*(undefined8 *)(puVar7 + 6));
            }
            puVar11[10] = puVar7[10];
            *(undefined1 *)(puVar11 + 0xb) = *(undefined1 *)(puVar7 + 0xb);
            puVar10 = puVar7 + 0xc;
            puVar7 = puVar7 + 0xe;
            puVar11[0xc] = *puVar10;
            puVar11 = puVar11 + 0xe;
            puVar10 = (undefined4 *)param_1[1];
          } while (puVar11 != puVar10);
        }
        if (uVar9 + lVar5 * -0x6db6db6db6db6db7 != 0) {
          *puVar10 = *puVar7;
                    /* WARNING: Subroutine does not return */
          FUN_140017090(puVar10 + 2,puVar7 + 2);
        }
      }
    }
    else {
      if (0x492492492492492 < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_140013120();
      }
      uVar3 = 0x492492492492492 - (uVar6 >> 1);
      if (uVar6 < uVar3 || uVar6 - uVar3 == 0) {
        uVar6 = (uVar6 >> 1) + uVar6;
        if (uVar6 < uVar9) {
          uVar6 = uVar9;
        }
      }
      else {
        uVar6 = 0x492492492492492;
      }
      puVar10 = (undefined4 *)0x0;
      if (puVar11 == (undefined4 *)0x0) {
        if (0x492492492492492 < uVar6) {
UNWIND_INFO_1400f8d68_UnwindCodes_4__UnwindOpCode:
                    /* WARNING: Subroutine does not return */
          FUN_140017440();
        }
        uVar6 = uVar6 * 0x38;
        if (uVar6 != 0) {
          if (uVar6 < 0x1000) {
            plVar4 = (longlong *)func_0x00014028aff0(uVar6);
            return plVar4;
          }
          if (uVar6 < uVar6 + 0x27) {
            plVar4 = (longlong *)func_0x00014028aff0();
            return plVar4;
          }
          goto UNWIND_INFO_1400f8d68_UnwindCodes_4__UnwindOpCode;
        }
        puVar11 = (undefined4 *)0x0;
      }
      else {
        if (puVar11 != (undefined4 *)param_1[1]) {
                    /* WARNING: Subroutine does not return */
          FUN_140017310(puVar11 + 2);
        }
        lVar5 = *param_1;
        uVar6 = (param_1[2] - lVar5 >> 3) * 8;
        if (uVar6 < 0x1000) {
LAB_1400f8b75:
          plVar4 = (longlong *)func_0x00014028b040(lVar5,uVar6);
          return plVar4;
        }
        if ((lVar5 - *(longlong *)(lVar5 + -8)) - 8U < 0x20) {
          uVar6 = uVar6 + 0x27;
          lVar5 = *(longlong *)(lVar5 + -8);
          goto LAB_1400f8b75;
        }
        pcVar2 = (code *)swi(0x29);
        lVar5 = (*pcVar2)(5);
        puVar8 = auStack_40;
        puVar10 = (undefined4 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(puVar10 + -2) = lVar5;
      }
      *param_1 = (longlong)puVar10;
      param_1[1] = (longlong)puVar10;
      param_1[2] = (longlong)puVar11 + (longlong)puVar10;
      if (uVar12 != 0) {
        *puVar10 = *puVar7;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar8 + -8) = &UNK_1400f8c05;
        FUN_140017090(puVar10 + 2,puVar7 + 2);
      }
    }
    param_1[1] = (longlong)puVar10;
  }
  return param_1;
}

