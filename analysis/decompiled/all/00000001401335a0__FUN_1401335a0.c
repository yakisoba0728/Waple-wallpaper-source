// Function: FUN_1401335a0
// Addr: 1401335a0
// Size: 300 bytes


void FUN_1401335a0(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  if (0xaaaaaaaaaaaaaaa < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar9 = (param_1[2] - *param_1 >> 3) * -0x5555555555555555;
  uVar7 = 0xaaaaaaaaaaaaaaa - (uVar9 >> 1);
  if ((uVar9 < uVar7 || uVar9 - uVar7 == 0) &&
     ((uVar9 = (uVar9 >> 1) + uVar9, uVar7 = param_2, uVar9 < param_2 ||
      (uVar7 = uVar9, uVar9 < 0xaaaaaaaaaaaaaab)))) {
    uVar7 = uVar7 * 0x18;
    if (uVar7 == 0) {
      lVar11 = param_1[1] - *param_1 >> 3;
      puVar1 = (undefined8 *)(lVar11 * 8);
      for (lVar11 = param_2 + lVar11 * 0x5555555555555555; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1 = puVar1 + 3;
      }
      puVar1 = (undefined8 *)param_1[1];
      puVar6 = (undefined8 *)0x0;
      for (puVar8 = (undefined8 *)*param_1; puVar8 != puVar1; puVar8 = puVar8 + 3) {
        uVar2 = puVar8[2];
        uVar3 = puVar8[1];
        uVar4 = *puVar8;
        puVar8[2] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
        *puVar6 = uVar4;
        puVar6[1] = uVar3;
        puVar6[2] = uVar2;
        puVar6 = puVar6 + 3;
      }
      lVar11 = *param_1;
      if (lVar11 != 0) {
        lVar10 = param_1[1];
        for (; lVar11 != lVar10; lVar11 = lVar11 + 0x18) {
          func_0x000140031c50(lVar11);
        }
        lVar11 = *param_1;
        lVar10 = lVar11;
        puVar12 = auStack_48;
        if ((0xfff < (ulonglong)((param_1[2] - lVar11 >> 3) * 8)) &&
           (lVar10 = *(longlong *)(lVar11 + -8), puVar12 = auStack_48, 0x1f < (lVar11 - lVar10) - 8U
           )) {
          lVar10 = 5;
          pcVar5 = (code *)swi(0x29);
          (*pcVar5)(5);
          puVar12 = auStack_40;
        }
        *(undefined8 *)(puVar12 + -8) = 0x140133771;
        func_0x00014028b040(lVar10);
      }
      *param_1 = 0;
      param_1[1] = param_2 * 0x18;
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

