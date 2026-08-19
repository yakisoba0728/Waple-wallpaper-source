// Function: FUN_14026ad30
// Addr: 14026ad30
// Size: 350 bytes


void FUN_14026ad30(longlong *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  if (0x666666666666666 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar8 = (param_1[2] - *param_1 >> 3) * -0x3333333333333333;
  uVar7 = 0x666666666666666 - (uVar8 >> 1);
  if ((uVar8 < uVar7 || uVar8 - uVar7 == 0) &&
     ((uVar8 = (uVar8 >> 1) + uVar8, uVar7 = param_2, uVar8 < param_2 ||
      (uVar7 = uVar8, uVar8 < 0x666666666666667)))) {
    uVar7 = uVar7 * 0x28;
    if (uVar7 == 0) {
      lVar10 = param_1[1] - *param_1 >> 3;
      puVar1 = (undefined4 *)(lVar10 * 8);
      for (lVar10 = param_2 + lVar10 * 0x3333333333333333; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar1 = 0xffffffff;
        *(undefined8 *)(puVar1 + 1) = 0;
        puVar1[3] = 0;
        *(undefined8 *)(puVar1 + 4) = 0;
        *(undefined8 *)(puVar1 + 6) = 0;
        *(undefined8 *)(puVar1 + 8) = 0;
        puVar1 = puVar1 + 10;
      }
      puVar1 = (undefined4 *)param_1[1];
      puVar6 = (undefined4 *)0x0;
      for (puVar12 = (undefined4 *)*param_1; puVar12 != puVar1; puVar12 = puVar12 + 10) {
        *puVar6 = *puVar12;
        puVar6[1] = puVar12[1];
        puVar6[2] = puVar12[2];
        puVar6[3] = puVar12[3];
        uVar2 = *(undefined8 *)(puVar12 + 8);
        uVar3 = *(undefined8 *)(puVar12 + 6);
        uVar4 = *(undefined8 *)(puVar12 + 4);
        *(undefined8 *)(puVar12 + 8) = 0;
        *(undefined8 *)(puVar12 + 6) = 0;
        *(undefined8 *)(puVar12 + 4) = 0;
        *(undefined8 *)(puVar6 + 4) = uVar4;
        *(undefined8 *)(puVar6 + 6) = uVar3;
        *(undefined8 *)(puVar6 + 8) = uVar2;
        puVar6 = puVar6 + 10;
      }
      lVar10 = *param_1;
      if (lVar10 != 0) {
        lVar9 = param_1[1];
        for (; lVar10 != lVar9; lVar10 = lVar10 + 0x28) {
          func_0x000140031c50(lVar10 + 0x10);
        }
        lVar10 = *param_1;
        lVar9 = lVar10;
        puVar11 = auStack_48;
        if ((0xfff < (ulonglong)((param_1[2] - lVar10 >> 3) * 8)) &&
           (lVar9 = *(longlong *)(lVar10 + -8), puVar11 = auStack_48, 0x1f < (lVar10 - lVar9) - 8U))
        {
          lVar9 = 5;
          pcVar5 = (code *)swi(0x29);
          (*pcVar5)(5);
          puVar11 = auStack_40;
        }
        *(undefined8 *)(puVar11 + -8) = 0x14026af32;
        func_0x00014028b040(lVar9);
      }
      *param_1 = 0;
      param_1[1] = param_2 * 0x28;
      param_1[2] = 0;
      return;
    }
    if (uVar7 < 0x1000) {
      func_0x00014028aff0(uVar7);
      return;
    }
    if (uVar7 < uVar7 + 0x27) {
      func_0x00014028aff0();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

