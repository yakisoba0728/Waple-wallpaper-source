// Function: FUN_140161720
// Addr: 140161720
// Size: 373 bytes


undefined8 * FUN_140161720(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  lVar2 = *param_1;
  lVar11 = (param_1[1] - lVar2 >> 3) * -0x5555555555555555;
  if (lVar11 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar10 = (param_1[2] - lVar2 >> 3) * -0x5555555555555555;
  uVar7 = 0xaaaaaaaaaaaaaaa - (uVar10 >> 1);
  if (uVar10 < uVar7 || uVar10 - uVar7 == 0) {
    uVar7 = lVar11 + 1;
    uVar10 = (uVar10 >> 1) + uVar10;
    local_38 = uVar7;
    if (uVar7 <= uVar10) {
      local_38 = uVar10;
    }
    if (local_38 < 0xaaaaaaaaaaaaaab) {
      puVar8 = (undefined8 *)0x0;
      uVar10 = local_38 * 0x18;
      if (uVar10 == 0) {
        uVar3 = param_3[1];
        param_3[1] = 0;
        uVar4 = param_3[2];
        puVar1 = (undefined8 *)((((longlong)param_2 - lVar2) / 0x18) * 0x18);
        param_3[2] = 0;
        uVar5 = *param_3;
        local_28 = puVar1 + 3;
        *param_3 = 0;
        *puVar1 = uVar5;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = (undefined8 *)*param_1;
        if (param_2 == puVar6) {
          for (; local_30 = puVar1, puVar9 != puVar6; puVar9 = puVar9 + 3) {
            uVar3 = puVar9[2];
            uVar4 = puVar9[1];
            uVar5 = *puVar9;
            puVar9[2] = 0;
            puVar9[1] = 0;
            *puVar9 = 0;
            *puVar8 = uVar5;
            puVar8[1] = uVar4;
            puVar8[2] = uVar3;
            puVar8 = puVar8 + 3;
          }
        }
        else {
          for (; puVar9 != param_2; puVar9 = puVar9 + 3) {
            uVar3 = puVar9[2];
            uVar4 = puVar9[1];
            uVar5 = *puVar9;
            puVar9[2] = 0;
            puVar9[1] = 0;
            *puVar9 = 0;
            *puVar8 = uVar5;
            puVar8[1] = uVar4;
            puVar8[2] = uVar3;
            puVar8 = puVar8 + 3;
          }
          puVar8 = (undefined8 *)param_1[1];
          local_30 = (undefined8 *)0x0;
          puVar6 = local_28;
          for (; param_2 != puVar8; param_2 = param_2 + 3) {
            uVar3 = param_2[2];
            uVar4 = param_2[1];
            uVar5 = *param_2;
            param_2[2] = 0;
            param_2[1] = 0;
            *param_2 = 0;
            *puVar6 = uVar5;
            puVar6[1] = uVar4;
            puVar6[2] = uVar3;
            puVar6 = puVar6 + 3;
          }
        }
        uStack_40 = 0;
        local_48 = param_1;
        func_0x000140161c40(param_1,0,uVar7,local_38);
        FUN_140161b90(&local_48);
        return puVar1;
      }
      if (uVar10 < 0x1000) {
        puVar8 = (undefined8 *)func_0x00014028aff0();
        return puVar8;
      }
      if (uVar10 < uVar10 + 0x27) {
        puVar8 = (undefined8 *)func_0x00014028aff0(uVar10 + 0x27);
        return puVar8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

