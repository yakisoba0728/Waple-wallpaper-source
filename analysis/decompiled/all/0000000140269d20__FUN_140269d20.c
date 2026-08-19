// Function: FUN_140269d20
// Addr: 140269d20
// Size: 251 bytes


void FUN_140269d20(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar2 = *param_1;
  lVar8 = (param_1[1] - lVar2 >> 2) * -0x3333333333333333;
  if (lVar8 == 0xccccccccccccccc) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar7 = (param_1[2] - lVar2 >> 2) * -0x3333333333333333;
  uVar6 = 0xccccccccccccccc - (uVar7 >> 1);
  if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar6 = lVar8 + 1;
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (uVar6 < 0xccccccccccccccd) {
      uVar6 = uVar6 * 0x14;
      if (uVar6 == 0) {
        uVar3 = param_3[1];
        uVar4 = param_3[2];
        uVar5 = param_3[3];
        lVar2 = (param_2 - lVar2) / 0x14;
        puVar1 = (undefined4 *)(lVar2 * 0x14);
        *puVar1 = *param_3;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        *(undefined4 *)(lVar2 * 0x14 + 0x10) = param_3[4];
        lVar2 = *param_1;
        if (param_2 == param_1[1]) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(0,lVar2,param_1[1] - lVar2);
        }
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(0,lVar2,param_2 - lVar2);
      }
      if (uVar6 < 0x1000) {
        func_0x00014028aff0(uVar6);
        return;
      }
      if (uVar6 < uVar6 + 0x27) {
        func_0x00014028aff0();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

