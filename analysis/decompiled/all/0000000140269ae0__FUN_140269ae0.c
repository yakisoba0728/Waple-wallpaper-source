// Function: FUN_140269ae0
// Addr: 140269ae0
// Size: 333 bytes


longlong FUN_140269ae0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
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
  
  lVar4 = *param_1;
  lVar3 = (param_1[1] - lVar4 >> 3) * -0x70a3d70a3d70a3d7;
  if (lVar3 == 0x147ae147ae147ae) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar2 = (param_1[2] - lVar4 >> 3) * -0x70a3d70a3d70a3d7;
  uVar1 = 0x147ae147ae147ae - (uVar2 >> 1);
  if (uVar2 < uVar1 || uVar2 - uVar1 == 0) {
    uVar1 = lVar3 + 1;
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar8 = uVar1;
    if (uVar1 <= uVar2) {
      uVar8 = uVar2;
    }
    if (uVar8 < 0x147ae147ae147af) {
      uVar2 = uVar8 * 200;
      if (uVar2 == 0) {
        lVar7 = 0;
        lVar4 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_2 - lVar4),8) +
                (param_2 - lVar4);
        lVar5 = ((lVar4 >> 7) - (lVar4 >> 0x3f)) * 200;
        lVar4 = lVar5 + 200;
        local_58 = param_1;
        local_48 = uVar8;
        local_38 = lVar4;
        FUN_1401dd500(lVar5,param_3);
        lVar3 = param_1[1];
        lVar6 = *param_1;
        local_40 = lVar5;
        if (param_2 == lVar3) {
          for (; lVar6 != lVar3; lVar6 = lVar6 + 200) {
            FUN_1401dd500(lVar7,lVar6);
            lVar7 = lVar7 + 200;
          }
        }
        else {
          for (; lVar6 != param_2; lVar6 = lVar6 + 200) {
            FUN_1401dd500(lVar7,lVar6);
            lVar7 = lVar7 + 200;
          }
          lVar3 = param_1[1];
          local_40 = 0;
          for (; param_2 != lVar3; param_2 = param_2 + 200) {
            FUN_1401dd500(lVar4,param_2);
            lVar4 = lVar4 + 200;
          }
        }
        uStack_50 = 0;
        func_0x0001401dcd10(param_1,0,uVar1,uVar8);
        func_0x0001401dcc50(&local_58);
        return lVar5;
      }
      if (uVar2 < 0x1000) {
        lVar4 = func_0x00014028aff0();
        return lVar4;
      }
      if (uVar2 < uVar2 + 0x27) {
        lVar4 = func_0x00014028aff0(uVar2 + 0x27);
        return lVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

