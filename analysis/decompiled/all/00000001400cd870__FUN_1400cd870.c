// Function: FUN_1400cd870
// Addr: 1400cd870
// Size: 81 bytes


void FUN_1400cd870(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    if (param_2 < 0x1000) {
      func_0x00014028aff0(param_2);
      return;
    }
    if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
    lVar2 = func_0x00014028aff0();
    lVar4 = lVar2;
    if (lVar2 == 0) {
      lVar4 = 5;
      pcVar1 = (code *)swi(0x29);
      lVar2 = (*pcVar1)();
    }
    uVar3 = lVar2 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar3 - 8) = lVar4;
  }
  *param_1 = uVar3;
  param_1[1] = uVar3;
  param_1[2] = uVar3 + param_2;
  return;
}

