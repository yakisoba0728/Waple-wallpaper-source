// Function: FUN_1402824e0
// Addr: 1402824e0
// Size: 179 bytes


undefined8 * FUN_1402824e0(longlong *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  lVar3 = *param_1;
  if (param_1[1] - lVar3 == -8) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar6 = param_1[2] - lVar3 >> 3;
  if (uVar6 <= 0x1fffffffffffffff - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar1 = (param_1[1] - lVar3 >> 3) + 1;
    uVar7 = uVar1;
    if (uVar1 <= uVar6) {
      uVar7 = uVar6;
    }
    if (uVar7 < 0x2000000000000000) {
      uVar6 = uVar7 * 8;
      if (uVar6 == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        if (0xfff < uVar6) {
          if (uVar6 < uVar6 + 0x27) {
            puVar4 = (undefined8 *)func_0x00014028aff0(uVar6 + 0x27);
            return puVar4;
          }
          goto LAB_140282677;
        }
        puVar4 = (undefined8 *)func_0x00014028aff0();
      }
      puVar8 = (undefined8 *)((param_2 - lVar3 & 0xfffffffffffffff8U) + (longlong)puVar4);
      puVar2 = puVar8 + 1;
      plStack_58 = param_1;
      uStack_48 = uVar7;
      puStack_38 = puVar2;
      if ((longlong *)*param_3 == (longlong *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*(longlong *)*param_3 + 8))();
      }
      *puVar8 = uVar5;
      puStack_40 = puVar8;
      if (param_2 == param_1[1]) {
        FUN_140282680(*param_1,param_1[1],puVar4);
      }
      else {
        FUN_140282680(*param_1,param_2,puVar4);
        puStack_40 = puVar4;
        FUN_140282680(param_2,param_1[1],puVar2);
      }
      uStack_50 = 0;
      FUN_140282920(param_1,puVar4,uVar1,uVar7);
      FUN_140282870(&plStack_58);
      return puVar8;
    }
  }
LAB_140282677:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

