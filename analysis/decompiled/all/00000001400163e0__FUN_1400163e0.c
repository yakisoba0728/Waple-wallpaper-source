// Function: FUN_1400163e0
// Addr: 1400163e0
// Size: 206 bytes


void FUN_1400163e0(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar2 = param_1[2];
  uVar6 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  uVar3 = param_1[3];
  uVar5 = lVar2 + param_2 | 7;
  if ((uVar5 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar1 = (uVar3 >> 1) + uVar3;
    uVar6 = uVar5;
    if (uVar5 < uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffff < uVar6 + 1) goto LAB_14001658c;
    uVar5 = (uVar6 + 1) * 2;
    if (uVar5 == 0) {
      uVar4 = 0;
      goto UNWIND_INFO_1400164bc_UnwindCodes_1__UnwindOpCode;
    }
  }
  else {
    uVar5 = 0xfffffffffffffffe;
  }
  if (uVar5 < 0x1000) {
    uVar4 = func_0x00014028aff0();
UNWIND_INFO_1400164bc_UnwindCodes_1__UnwindOpCode:
    param_1[2] = lVar2 + param_2;
    param_1[3] = uVar6;
    if (7 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(uVar4,*param_1,lVar2 * 2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(uVar4,param_1,lVar2 * 2);
  }
  if (uVar5 < uVar5 + 0x27) {
    func_0x00014028aff0(uVar5 + 0x27);
    return;
  }
LAB_14001658c:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

