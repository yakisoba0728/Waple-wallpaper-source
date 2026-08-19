// Function: FUN_1400cb940
// Addr: 1400cb940
// Size: 456 bytes


undefined8 * FUN_1400cb940(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar11 = auStack_38;
  lVar10 = *param_1;
  if (param_1[1] - lVar10 == -0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar8 = param_1[2] - lVar10 >> 4;
  if (uVar8 <= 0xfffffffffffffff - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar1 = (param_1[1] - lVar10 >> 4) + 1;
    uVar13 = uVar1;
    if (uVar1 <= uVar8) {
      uVar13 = uVar8;
    }
    if (uVar13 < 0x1000000000000000) {
      uVar13 = uVar13 * 0x10;
      if (uVar13 == 0) {
        puVar12 = (undefined8 *)0x0;
        puVar9 = (undefined8 *)((longlong)param_2 - lVar10 & 0xfffffffffffffff0);
        FUN_1400cd590(puVar9,puVar9,param_3);
        puVar7 = (undefined8 *)param_1[1];
        puVar5 = (undefined8 *)*param_1;
        if (param_2 == puVar7) {
          for (; puVar5 != puVar7; puVar5 = puVar5 + 2) {
            uVar3 = *puVar5;
            uVar4 = puVar5[1];
            *puVar5 = 0;
            puVar5[1] = 0;
            *puVar12 = uVar3;
            puVar12[1] = uVar4;
            puVar12 = puVar12 + 2;
          }
        }
        else {
          for (; puVar5 != param_2; puVar5 = puVar5 + 2) {
            uVar3 = *puVar5;
            uVar4 = puVar5[1];
            *puVar5 = 0;
            puVar5[1] = 0;
            *puVar12 = uVar3;
            puVar12[1] = uVar4;
            puVar12 = puVar12 + 2;
          }
          puVar7 = (undefined8 *)param_1[1];
          puVar5 = puVar9;
          for (; param_2 != puVar7; param_2 = param_2 + 2) {
            uVar3 = *param_2;
            uVar4 = param_2[1];
            *param_2 = 0;
            param_2[1] = 0;
            puVar5[2] = uVar3;
            puVar5[3] = uVar4;
            puVar5 = puVar5 + 2;
          }
        }
        lVar10 = *param_1;
        if (lVar10 == 0) {
          *param_1 = 0;
          param_1[1] = uVar1 * 0x10;
          param_1[2] = 0;
          return puVar9;
        }
        lVar6 = lVar10;
        while( true ) {
          if (lVar6 == param_1[1]) {
            if ((0xfff < (param_1[2] - lVar10 & 0xfffffffffffffff0U)) &&
               (lVar6 = lVar10 - *(longlong *)(lVar10 + -8), lVar10 = *(longlong *)(lVar10 + -8),
               puVar11 = auStack_38, 0x1f < lVar6 - 8U)) {
              lVar10 = 5;
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)(5);
              puVar11 = auStack_30;
            }
            *(undefined8 *)(puVar11 + -8) = 0x1400cbb0c;
            puVar7 = (undefined8 *)func_0x00014028b040(lVar10);
            return puVar7;
          }
          if (*(int *)(lVar6 + 8) != 0) break;
          lVar6 = lVar6 + 0x10;
        }
                    /* WARNING: Subroutine does not return */
        FUN_1400151e0();
      }
      if (uVar13 < 0x1000) {
        puVar7 = (undefined8 *)func_0x00014028aff0(uVar13);
        return puVar7;
      }
      if (uVar13 < uVar13 + 0x27) {
        puVar7 = (undefined8 *)func_0x00014028aff0();
        return puVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

