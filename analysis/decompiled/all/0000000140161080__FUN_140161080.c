// Function: FUN_140161080
// Addr: 140161080
// Size: 266 bytes


void FUN_140161080(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar2 = *param_1;
  lVar9 = (param_1[1] - lVar2 >> 3) * -0x3333333333333333;
  if (lVar9 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar8 = (param_1[2] - lVar2 >> 3) * -0x3333333333333333;
  uVar7 = 0x666666666666666 - (uVar8 >> 1);
  if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar7 = lVar9 + 1;
    if (uVar7 <= uVar8) {
      uVar7 = uVar8;
    }
    if (uVar7 < 0x666666666666667) {
      uVar7 = uVar7 * 0x28;
      if (uVar7 == 0) {
        uVar6 = param_3[1];
        lVar2 = (param_2 - lVar2) / 0x28;
        puVar1 = (undefined8 *)(lVar2 * 0x28);
        *puVar1 = *param_3;
        puVar1[1] = uVar6;
        lVar2 = lVar2 * 0x28;
        uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
        uVar4 = *(undefined4 *)(param_3 + 3);
        uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
        *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(param_3 + 2);
        *(undefined4 *)(lVar2 + 0x14) = uVar3;
        *(undefined4 *)(lVar2 + 0x18) = uVar4;
        *(undefined4 *)(lVar2 + 0x1c) = uVar5;
        *(undefined8 *)(lVar2 + 0x20) = param_3[4];
        lVar2 = *param_1;
        if (param_2 == param_1[1]) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(0,lVar2,param_1[1] - lVar2);
        }
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(0,lVar2,param_2 - lVar2);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

