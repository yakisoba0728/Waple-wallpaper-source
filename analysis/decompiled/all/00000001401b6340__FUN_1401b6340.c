// Function: FUN_1401b6340
// Addr: 1401b6340
// Size: 197 bytes


longlong FUN_1401b6340(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plStack_58;
  undefined8 uStack_50;
  ulonglong uStack_48;
  longlong lStack_40;
  longlong lStack_38;
  
  lVar2 = *param_1;
  lVar6 = (param_1[1] - lVar2 >> 4) * -0x3333333333333333;
  if (lVar6 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_140133e40();
  }
  uVar3 = (param_1[2] - lVar2 >> 4) * -0x3333333333333333;
  uVar1 = 0x333333333333333 - (uVar3 >> 1);
  if (uVar3 < uVar1 || uVar3 - uVar1 == 0) {
    uVar1 = lVar6 + 1;
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar4 = uVar1;
    if (uVar1 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar4 < 0x333333333333334) {
      uVar3 = uVar4 * 0x50;
      if (uVar3 == 0) {
        lVar7 = ((param_2 - lVar2) / 0x50) * 0x50;
        plStack_58 = param_1;
        uStack_48 = uVar4;
        lStack_38 = lVar7 + 0x50;
        FUN_1401b6f70(-(param_2 - lVar2 >> 0x3f),lVar7,param_3);
        lVar2 = param_1[1];
        lVar6 = *param_1;
        lVar5 = 0;
        lStack_40 = lVar7;
        if (param_2 != lVar2) {
          func_0x0001401b70b0(*param_1,param_2,0);
          lVar2 = param_1[1];
          lStack_40 = 0;
          lVar6 = param_2;
          lVar5 = lVar7 + 0x50;
        }
        func_0x0001401b70b0(lVar6,lVar2,lVar5);
        uStack_50 = 0;
        FUN_1401b74e0(param_1,0,uVar1,uVar4);
        func_0x0001401b7430(&plStack_58);
        return lVar7;
      }
      if (uVar3 < 0x1000) {
        lVar2 = func_0x00014028aff0();
        return lVar2;
      }
      if (uVar3 < uVar3 + 0x27) {
        lVar2 = func_0x00014028aff0(uVar3 + 0x27);
        return lVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

