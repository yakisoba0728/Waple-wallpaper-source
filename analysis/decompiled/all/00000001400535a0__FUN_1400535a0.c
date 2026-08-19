// Function: FUN_1400535a0
// Addr: 1400535a0
// Size: 240 bytes


void FUN_1400535a0(undefined8 *param_1,undefined1 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 unaff_RSI;
  
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  if (uVar2 < uVar3) {
    param_1[2] = uVar2 + 1;
    if (0xf < uVar3) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined1 *)((longlong)param_1 + uVar2) = param_2;
    *(undefined1 *)((longlong)param_1 + uVar2 + 1) = 0;
    return;
  }
  uVar7 = 0x7fffffffffffffff;
  if (uVar2 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  uVar6 = uVar2 + 1 | 0xf;
  if ((uVar6 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar1 = (uVar3 >> 1) + uVar3;
    uVar7 = uVar6;
    if (uVar6 < uVar1) {
      uVar7 = uVar1;
    }
    uVar1 = uVar7 + 1;
    if (uVar1 == 0) {
      uVar6 = 0;
      goto LAB_140053698;
    }
    if (uVar1 < 0x1000) {
      func_0x00014028aff0(uVar1);
      return;
    }
    uVar6 = uVar7 + 0x28;
    if (uVar6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
  }
  else {
    uVar6 = 0x8000000000000027;
  }
  lVar5 = func_0x00014028aff0(uVar6);
  if (lVar5 == 0) {
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    func_0x00014028b040(uVar7);
    *param_1 = unaff_RSI;
    return;
  }
  uVar6 = lVar5 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar6 - 8) = lVar5;
LAB_140053698:
  param_1[2] = uVar2 + 1;
  param_1[3] = uVar7;
  if (uVar3 < 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(uVar6,param_1,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(uVar6,*param_1,uVar2);
}

