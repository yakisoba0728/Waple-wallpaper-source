// Function: FUN_1401b7950
// Addr: 1401b7950
// Size: 216 bytes


void FUN_1401b7950(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = param_1[2];
  if (0x3ffffffffffffffeU - lVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  uVar2 = param_1[3];
  uVar3 = lVar1 + param_2 | 3;
  if ((uVar3 < 0x3fffffffffffffff) && (uVar2 <= 0x3ffffffffffffffe - (uVar2 >> 1))) {
    uVar4 = (uVar2 >> 1) + uVar2;
    if (uVar3 < uVar4) {
      uVar3 = uVar4;
    }
    if (0x3fffffffffffffff < uVar3 + 1) goto LAB_1401b7b0b;
    uVar4 = (uVar3 + 1) * 4;
    if (uVar4 == 0) {
      param_1[2] = lVar1 + param_2;
      param_1[3] = uVar3;
      if (3 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(0,*param_1,lVar1 * 4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(0,param_1,lVar1 * 4);
    }
  }
  else {
    uVar4 = 0xfffffffffffffffc;
  }
  if (uVar4 < 0x1000) {
    func_0x00014028aff0();
    return;
  }
  if (uVar4 < uVar4 + 0x27) {
    func_0x00014028aff0(uVar4 + 0x27);
    return;
  }
LAB_1401b7b0b:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

