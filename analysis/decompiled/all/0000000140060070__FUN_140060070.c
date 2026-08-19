// Function: FUN_140060070
// Addr: 140060070
// Size: 194 bytes


void FUN_140060070(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  if (param_1[1] - lVar1 == -8) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar3 = param_1[2] - lVar1 >> 3;
  if (uVar3 <= 0x1fffffffffffffff - (uVar3 >> 1)) {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar4 = (param_1[1] - lVar1 >> 3) + 1;
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar4 < 0x2000000000000000) {
      uVar4 = uVar4 * 8;
      if (uVar4 == 0) {
        lVar2 = 0;
      }
      else {
        if (0xfff < uVar4) {
          if (uVar4 < uVar4 + 0x27) {
            func_0x00014028aff0();
            return;
          }
          goto LAB_140060211;
        }
        lVar2 = func_0x00014028aff0(uVar4);
      }
      *(undefined8 *)((param_2 - lVar1 & 0xfffffffffffffff8U) + lVar2) = *param_3;
      lVar1 = *param_1;
      if (param_2 == param_1[1]) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(lVar2,lVar1,param_1[1] - lVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(lVar2,lVar1,param_2 - lVar1);
    }
  }
LAB_140060211:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

