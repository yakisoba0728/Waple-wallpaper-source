// Function: FUN_1401b66f0
// Addr: 1401b66f0
// Size: 235 bytes


undefined8 * FUN_1401b66f0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 *local_40;
  undefined8 *puStack_38;
  
  lVar2 = *param_1;
  if (param_1[1] - lVar2 == -8) {
                    /* WARNING: Subroutine does not return */
    FUN_140133e40();
  }
  uVar7 = param_1[2] - lVar2 >> 3;
  if (uVar7 <= 0x1fffffffffffffff - (uVar7 >> 1)) {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar1 = (param_1[1] - lVar2 >> 3) + 1;
    local_48 = uVar1;
    if (uVar1 <= uVar7) {
      local_48 = uVar7;
    }
    if (local_48 < 0x2000000000000000) {
      uVar7 = local_48 * 8;
      puVar5 = (undefined8 *)0x0;
      if (uVar7 == 0) {
        puVar8 = (undefined8 *)((longlong)param_2 - lVar2 & 0xfffffffffffffff8);
        *puVar8 = *param_3;
        puStack_38 = puVar8 + 1;
        puVar3 = (undefined8 *)param_1[1];
        puVar6 = (undefined8 *)*param_1;
        if (param_2 == puVar3) {
          for (; local_40 = puVar8, puVar6 != puVar3; puVar6 = puVar6 + 1) {
            uVar4 = *puVar6;
            *puVar6 = 0;
            *puVar5 = uVar4;
            puVar5 = puVar5 + 1;
          }
        }
        else {
          for (; puVar6 != param_2; puVar6 = puVar6 + 1) {
            uVar4 = *puVar6;
            *puVar6 = 0;
            *puVar5 = uVar4;
            puVar5 = puVar5 + 1;
          }
          puVar5 = (undefined8 *)param_1[1];
          local_40 = (undefined8 *)0x0;
          puVar3 = puStack_38;
          for (; param_2 != puVar5; param_2 = param_2 + 1) {
            uVar4 = *param_2;
            *param_2 = 0;
            *puVar3 = uVar4;
            puVar3 = puVar3 + 1;
          }
        }
        uStack_50 = 0;
        local_58 = param_1;
        func_0x0001401b7350(param_1,0,uVar1,local_48);
        func_0x0001401b7290(&local_58);
        return puVar8;
      }
      if (uVar7 < 0x1000) {
        puVar5 = (undefined8 *)func_0x00014028aff0();
        return puVar5;
      }
      if (uVar7 < uVar7 + 0x27) {
        puVar5 = (undefined8 *)func_0x00014028aff0(uVar7 + 0x27);
        return puVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

