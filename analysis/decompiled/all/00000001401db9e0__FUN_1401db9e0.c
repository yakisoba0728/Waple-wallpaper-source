// Function: FUN_1401db9e0
// Addr: 1401db9e0
// Size: 265 bytes


longlong FUN_1401db9e0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar4 = *param_1;
  lVar7 = (param_1[1] - lVar4 >> 3) * -0x1111111111111111;
  if (lVar7 == 0x222222222222222) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar3 = (param_1[2] - lVar4 >> 3) * -0x1111111111111111;
  uVar2 = 0x222222222222222 - (uVar3 >> 1);
  if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar2 = lVar7 + 1;
    uVar9 = uVar2;
    if (uVar2 <= uVar3) {
      uVar9 = uVar3;
    }
    if (uVar9 < 0x222222222222223) {
      uVar9 = uVar9 * 0x78;
      if (uVar9 == 0) {
        lVar7 = 0;
        lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_2 - lVar4),8) +
                (param_2 - lVar4);
        lVar4 = -(lVar5 >> 0x3f);
        lVar8 = ((lVar5 >> 6) + lVar4) * 0x78;
        FUN_1401dc4c0(lVar4,lVar8,param_3);
        lVar4 = param_1[1];
        lVar5 = *param_1;
        if (param_2 != lVar4) {
          func_0x0001401dc530(*param_1,param_2,0);
          lVar4 = param_1[1];
          lVar7 = lVar8 + 0x78;
          lVar5 = param_2;
        }
        func_0x0001401dc530(lVar5,lVar4,lVar7);
        lVar4 = *param_1;
        if (lVar4 != 0) {
          if (lVar4 != param_1[1]) {
                    /* WARNING: Subroutine does not return */
            FUN_140017310(lVar4);
          }
          lVar4 = *param_1;
          lVar7 = lVar4;
          puVar6 = auStack_48;
          if ((0xfff < (ulonglong)((param_1[2] - lVar4 >> 3) * 8)) &&
             (lVar7 = *(longlong *)(lVar4 + -8), puVar6 = auStack_48, 0x1f < (lVar4 - lVar7) - 8U))
          {
            lVar7 = 5;
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar6 = auStack_40;
          }
          *(undefined8 *)(puVar6 + -8) = 0x1401dbb93;
          func_0x00014028b040(lVar7);
        }
        *param_1 = 0;
        param_1[1] = uVar2 * 0x78;
        param_1[2] = 0;
        return lVar8;
      }
      if (uVar9 < 0x1000) {
        lVar4 = func_0x00014028aff0(uVar9);
        return lVar4;
      }
      if (uVar9 < uVar9 + 0x27) {
        lVar4 = func_0x00014028aff0();
        return lVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

