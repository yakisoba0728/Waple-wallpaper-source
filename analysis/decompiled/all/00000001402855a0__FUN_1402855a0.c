// Function: FUN_1402855a0
// Addr: 1402855a0
// Size: 375 bytes


undefined8 * FUN_1402855a0(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  undefined4 local_res8 [2];
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000140285f30(param_1 + 2,(param_2[1] - *param_2 >> 3) * -0x5555555555555555);
  lVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar4 != lVar5) {
    do {
      local_res8[0] = func_0x00014028a740(lVar4);
      FUN_14007ba90(param_1 + 2,local_res8);
      lVar5 = param_2[1];
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != lVar5);
  }
  lVar4 = param_1[5];
  lVar5 = lVar5 - *param_2 >> 3;
  lVar7 = param_1[6] - lVar4 >> 5;
  uVar6 = lVar5 * -0x5555555555555555;
  bVar8 = uVar6 < (ulonglong)(lVar7 * -0x3333333333333333);
  if (bVar8) {
    lVar4 = lVar5 * -0x5555555555555520 + lVar4;
  }
  else {
    if (bVar8 || uVar6 + lVar7 * 0x3333333333333333 == 0) {
      return param_1;
    }
    lVar4 = param_1[7] - lVar4 >> 5;
    uVar3 = lVar4 * -0x3333333333333333;
    if (uVar3 <= uVar6 && uVar6 + lVar4 * 0x3333333333333333 != 0) {
      if (0x199999999999999 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_140013120();
      }
      uVar1 = 0x199999999999999 - (uVar3 >> 1);
      if (uVar3 < uVar1 || uVar3 - uVar1 == 0) {
        uVar3 = (uVar3 >> 1) + uVar3;
        uVar1 = uVar6;
        if ((uVar3 < uVar6) || (uVar1 = uVar3, uVar3 < 0x19999999999999a)) {
          uVar1 = uVar1 * 0xa0;
          if (uVar1 == 0) {
            func_0x000140286020(lVar7 * 0x20,uVar6 + lVar7 * 0x3333333333333333);
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(0,param_1[5],param_1[6] - param_1[5]);
          }
          if (uVar1 < 0x1000) {
            puVar2 = (undefined8 *)func_0x00014028aff0(uVar1);
            return puVar2;
          }
          uVar6 = uVar1 + 0x27;
          if (uVar1 < uVar6) goto LAB_140285700;
        }
                    /* WARNING: Subroutine does not return */
        FUN_140017440();
      }
      uVar6 = 0xffffffffffffffc7;
LAB_140285700:
      puVar2 = (undefined8 *)func_0x00014028aff0(uVar6);
      return puVar2;
    }
    lVar4 = func_0x000140286020(param_1[6],uVar6 + lVar7 * 0x3333333333333333);
  }
  param_1[6] = lVar4;
  return param_1;
}

