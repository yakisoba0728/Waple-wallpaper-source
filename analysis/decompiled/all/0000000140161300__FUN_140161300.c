// Function: FUN_140161300
// Addr: 140161300
// Size: 375 bytes


longlong FUN_140161300(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  longlong local_40;
  undefined8 *local_38;
  
  lVar6 = *param_1;
  lVar9 = (param_1[1] - lVar6 >> 3) * -0x5555555555555555;
  if (lVar9 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar8 = (param_1[2] - lVar6 >> 3) * -0x5555555555555555;
  uVar5 = 0xaaaaaaaaaaaaaaa - (uVar8 >> 1);
  if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
    uVar5 = lVar9 + 1;
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar11 = uVar5;
    if (uVar5 <= uVar8) {
      uVar11 = uVar8;
    }
    if (uVar11 < 0xaaaaaaaaaaaaaab) {
      uVar8 = uVar11 * 0x18;
      if (uVar8 == 0) {
        puVar10 = (undefined8 *)0x0;
        lVar9 = (((longlong)param_2 - lVar6) / 0x18) * 0x18;
        local_58 = param_1;
        local_48 = uVar11;
        local_38 = (undefined8 *)(lVar9 + 0x18);
        FUN_140161a10(-((longlong)param_2 - lVar6 >> 0x3f),lVar9,param_3);
        puVar1 = (undefined8 *)param_1[1];
        puVar7 = (undefined8 *)*param_1;
        if (param_2 == puVar1) {
          for (; local_40 = lVar9, puVar7 != puVar1; puVar7 = puVar7 + 3) {
            uVar2 = puVar7[2];
            uVar3 = puVar7[1];
            uVar4 = *puVar7;
            puVar7[2] = 0;
            puVar7[1] = 0;
            *puVar7 = 0;
            *puVar10 = uVar4;
            puVar10[1] = uVar3;
            puVar10[2] = uVar2;
            puVar10 = puVar10 + 3;
          }
        }
        else {
          for (; puVar7 != param_2; puVar7 = puVar7 + 3) {
            uVar2 = puVar7[2];
            uVar3 = puVar7[1];
            uVar4 = *puVar7;
            puVar7[2] = 0;
            puVar7[1] = 0;
            *puVar7 = 0;
            *puVar10 = uVar4;
            puVar10[1] = uVar3;
            puVar10[2] = uVar2;
            puVar10 = puVar10 + 3;
          }
          puVar1 = (undefined8 *)param_1[1];
          local_40 = 0;
          puVar7 = (undefined8 *)(lVar9 + 0x18);
          for (; param_2 != puVar1; param_2 = param_2 + 3) {
            uVar2 = param_2[2];
            uVar3 = param_2[1];
            uVar4 = *param_2;
            param_2[2] = 0;
            param_2[1] = 0;
            *param_2 = 0;
            *puVar7 = uVar4;
            puVar7[1] = uVar3;
            puVar7[2] = uVar2;
            puVar7 = puVar7 + 3;
          }
        }
        uStack_50 = 0;
        func_0x000140161c40(param_1,0,uVar5,uVar11);
        FUN_140161b90(&local_58);
        return lVar9;
      }
      if (uVar8 < 0x1000) {
        lVar6 = func_0x00014028aff0();
        return lVar6;
      }
      if (uVar8 < uVar8 + 0x27) {
        lVar6 = func_0x00014028aff0(uVar8 + 0x27);
        return lVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

