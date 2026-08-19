// Function: FUN_140161570
// Addr: 140161570
// Size: 190 bytes


void FUN_140161570(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  
  lVar1 = *param_1;
  if (param_1[1] - lVar1 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar9 = param_1[2] - lVar1 >> 5;
  if (uVar9 <= 0x7ffffffffffffff - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar11 = (param_1[1] - lVar1 >> 5) + 1;
    if (uVar11 <= uVar9) {
      uVar11 = uVar9;
    }
    if (uVar11 < 0x800000000000000) {
      uVar11 = uVar11 * 0x20;
      if (uVar11 == 0) {
        uVar2 = param_3[1];
        uVar3 = param_3[2];
        uVar4 = param_3[3];
        uVar5 = param_3[4];
        uVar6 = param_3[5];
        uVar7 = param_3[6];
        uVar8 = param_3[7];
        puVar10 = (undefined4 *)(param_2 - lVar1 & 0xffffffffffffffe0);
        *puVar10 = *param_3;
        puVar10[1] = uVar2;
        puVar10[2] = uVar3;
        puVar10[3] = uVar4;
        puVar10[4] = uVar5;
        puVar10[5] = uVar6;
        puVar10[6] = uVar7;
        puVar10[7] = uVar8;
        lVar1 = *param_1;
        if (param_2 == param_1[1]) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(0,lVar1,param_1[1] - lVar1);
        }
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(0,lVar1,param_2 - lVar1);
      }
      if (uVar11 < 0x1000) {
        func_0x00014028aff0(uVar11);
        return;
      }
      if (uVar11 < uVar11 + 0x27) {
        func_0x00014028aff0();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

