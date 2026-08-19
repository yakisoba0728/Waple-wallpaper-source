// Function: FUN_14026a5d0
// Addr: 14026a5d0
// Size: 338 bytes


void FUN_14026a5d0(longlong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  if (0x3ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar8 = param_1[2] - *param_1 >> 6;
  if (0x3ffffffffffffff - (uVar8 >> 1) < uVar8) {
    uVar8 = 0xffffffffffffffe7;
LAB_14026a67e:
    func_0x00014028aff0(uVar8);
    return;
  }
  uVar8 = (uVar8 >> 1) + uVar8;
  uVar11 = param_2;
  if ((uVar8 < param_2) || (uVar11 = uVar8, uVar8 < 0x400000000000000)) {
    uVar11 = uVar11 * 0x40;
    if (uVar11 == 0) {
      uVar8 = param_1[1] - *param_1;
      puVar9 = (undefined4 *)(uVar8 & 0xffffffffffffffc0);
      for (lVar6 = param_2 - ((longlong)uVar8 >> 6); lVar6 != 0; lVar6 = lVar6 + -1) {
        puVar9[1] = 0;
        *(undefined8 *)(puVar9 + 0xe) = 0;
        *(undefined8 *)(puVar9 + 2) = 0;
        *(undefined8 *)(puVar9 + 4) = 0;
        *(undefined8 *)(puVar9 + 6) = 0;
        *puVar9 = 0xffffffff;
        *(undefined8 *)(puVar9 + 8) = 0;
        *(undefined8 *)(puVar9 + 10) = 0;
        *(undefined8 *)(puVar9 + 0xc) = 0;
        puVar9 = puVar9 + 0x10;
      }
      puVar9 = (undefined4 *)param_1[1];
      puVar5 = (undefined4 *)0x0;
      for (puVar12 = (undefined4 *)*param_1; puVar12 != puVar9; puVar12 = puVar12 + 0x10) {
        *puVar5 = *puVar12;
        uVar1 = *(undefined8 *)(puVar12 + 6);
        uVar2 = *(undefined8 *)(puVar12 + 4);
        uVar3 = *(undefined8 *)(puVar12 + 2);
        *(undefined8 *)(puVar12 + 6) = 0;
        *(undefined8 *)(puVar12 + 4) = 0;
        *(undefined8 *)(puVar12 + 2) = 0;
        *(undefined8 *)(puVar5 + 2) = uVar3;
        *(undefined8 *)(puVar5 + 4) = uVar2;
        *(undefined8 *)(puVar5 + 6) = uVar1;
        uVar1 = *(undefined8 *)(puVar12 + 8);
        uVar2 = *(undefined8 *)(puVar12 + 0xc);
        uVar3 = *(undefined8 *)(puVar12 + 10);
        *(undefined8 *)(puVar12 + 0xc) = 0;
        *(undefined8 *)(puVar12 + 10) = 0;
        *(undefined8 *)(puVar12 + 8) = 0;
        *(undefined8 *)(puVar5 + 8) = uVar1;
        *(undefined8 *)(puVar5 + 10) = uVar3;
        *(undefined8 *)(puVar5 + 0xc) = uVar2;
        puVar5[0xe] = puVar12[0xe];
        puVar5 = puVar5 + 0x10;
      }
      lVar6 = *param_1;
      if (lVar6 != 0) {
        lVar7 = param_1[1];
        for (; lVar6 != lVar7; lVar6 = lVar6 + 0x40) {
          func_0x000140031c50(lVar6 + 0x20);
          FUN_1401dd360(lVar6 + 8);
        }
        lVar6 = *param_1;
        lVar7 = lVar6;
        puVar10 = auStack_38;
        if ((0xfff < (param_1[2] - lVar6 & 0xffffffffffffffc0U)) &&
           (lVar7 = *(longlong *)(lVar6 + -8), puVar10 = auStack_38, 0x1f < (lVar6 - lVar7) - 8U)) {
          pcVar4 = (code *)swi(0x29);
          lVar7 = (*pcVar4)(5);
          puVar10 = auStack_30;
        }
        *(undefined8 *)(puVar10 + -8) = 0x14026a7cc;
        func_0x00014028b040(lVar7);
      }
      *param_1 = 0;
      param_1[1] = param_2 * 0x40;
      param_1[2] = 0;
      return;
    }
    if (uVar11 < 0x1000) {
      func_0x00014028aff0();
      return;
    }
    uVar8 = uVar11 | 0x27;
    if (uVar11 < uVar8) goto LAB_14026a67e;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

