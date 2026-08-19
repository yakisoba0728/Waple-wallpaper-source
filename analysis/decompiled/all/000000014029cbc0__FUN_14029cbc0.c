// Function: FUN_14029cbc0
// Addr: 14029cbc0
// Size: 305 bytes


void FUN_14029cbc0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar2 = param_1[2];
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  uVar3 = param_1[3];
  uVar5 = lVar2 + param_2 | 7;
  if ((uVar5 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar6 = uVar3 + (uVar3 >> 1);
    if (uVar5 < uVar6) {
      uVar5 = uVar6;
    }
    if (0x7fffffffffffffff < uVar5 + 1) goto LAB_14029ce05;
    uVar6 = (uVar5 + 1) * 2;
    if (uVar6 == 0) {
      if ((7 < (ulonglong)param_1[3]) && (DAT_140472300 != '\0')) {
        lVar4 = *param_1;
        uVar6 = lVar4 + (param_1[3] + 1U) * 2;
        uVar7 = uVar6 + 7 & 0xfffffffffffffff8;
        uVar1 = lVar4 + (param_1[2] + 1) * 2;
        uVar8 = uVar7;
        if (uVar1 <= uVar7) {
          uVar8 = uVar1;
        }
        if (uVar7 < uVar6) {
          uVar6 = uVar7;
        }
        func_0x00014000ed00(lVar4,uVar7,uVar8,uVar6);
      }
      param_1[3] = uVar5;
      param_1[2] = lVar2 + param_2;
      if (7 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(0,*param_1,lVar2 * 2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(0,param_1,lVar2 * 2);
    }
  }
  else {
    uVar6 = 0xfffffffffffffffe;
  }
  if (uVar6 < 0x1000) {
    func_0x00014028aff0();
    return;
  }
  if (uVar6 < uVar6 + 0x27) {
    func_0x00014028aff0(uVar6 + 0x27);
    return;
  }
LAB_14029ce05:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

