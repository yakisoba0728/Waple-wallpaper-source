// Function: FUN_1400df7d0
// Addr: 1400df7d0
// Size: 314 bytes


longlong FUN_1400df7d0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  longlong local_40;
  longlong local_38;
  
  lVar6 = *param_1;
  lVar2 = (param_1[1] - lVar6) / 0x28;
  if (lVar2 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar3 = (param_1[2] - lVar6) / 0x28;
  if (uVar3 <= 0x666666666666666 - (uVar3 >> 1)) {
    uVar1 = lVar2 + 1;
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar8 = uVar1;
    if (uVar1 <= uVar3) {
      uVar8 = uVar3;
    }
    if (uVar8 < 0x666666666666667) {
      uVar3 = uVar8 * 0x28;
      if (uVar3 == 0) {
        lVar7 = 0;
        lVar2 = ((param_2 - lVar6) / 0x28) * 0x28;
        lVar6 = lVar2 + 0x28;
        local_58 = param_1;
        local_48 = uVar8;
        local_38 = lVar6;
        func_0x0001400e6c20(lVar2,param_3);
        lVar4 = param_1[1];
        lVar5 = *param_1;
        local_40 = lVar2;
        if (param_2 == lVar4) {
          for (; lVar5 != lVar4; lVar5 = lVar5 + 0x28) {
            func_0x0001400e6c20(lVar7,lVar5);
            lVar7 = lVar7 + 0x28;
          }
        }
        else {
          for (; lVar5 != param_2; lVar5 = lVar5 + 0x28) {
            func_0x0001400e6c20(lVar7,lVar5);
            lVar7 = lVar7 + 0x28;
          }
          lVar4 = param_1[1];
          local_40 = 0;
          for (; param_2 != lVar4; param_2 = param_2 + 0x28) {
            func_0x0001400e6c20(lVar6,param_2);
            lVar6 = lVar6 + 0x28;
          }
        }
        uStack_50 = 0;
        FUN_1400e4730(param_1,0,uVar1,uVar8);
        FUN_1400e4680(&local_58);
        return lVar2;
      }
      if (uVar3 < 0x1000) {
        lVar6 = func_0x00014028aff0();
        return lVar6;
      }
      if (uVar3 < uVar3 + 0x27) {
        lVar6 = func_0x00014028aff0(uVar3 + 0x27);
        return lVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

