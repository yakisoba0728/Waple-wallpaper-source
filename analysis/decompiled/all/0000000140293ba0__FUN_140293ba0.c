// Function: FUN_140293ba0
// Addr: 140293ba0
// Size: 15 bytes


void FUN_140293ba0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStackX_8 [32];
  
  func_0x000140291580(auStackX_8,0);
  if (*(ulonglong *)(param_1 + 0x18) <= param_3) {
    uVar3 = param_3 + 1;
    if (uVar3 < 0x28) {
      uVar3 = 0x28;
    }
    lVar1 = func_0x0001402cb2b0(*(undefined8 *)(param_1 + 0x10));
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14028b990();
    }
    *(longlong *)(param_1 + 0x10) = lVar1;
    uVar2 = *(ulonglong *)(param_1 + 0x18);
    while (uVar2 < uVar3) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar2 * 8) = 0;
      uVar2 = *(longlong *)(param_1 + 0x18) + 1;
      *(ulonglong *)(param_1 + 0x18) = uVar2;
    }
  }
  (*(code *)PTR_FUN_140426bb8)(param_2);
  if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + param_3 * 8) != 0) &&
     (lVar1 = (*(code *)PTR_FUN_140426bb8)(), lVar1 != 0)) {
    (*(code *)PTR_FUN_140426bb8)(lVar1,1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + param_3 * 8) = param_2;
  FUN_140291620(auStackX_8);
  return;
}

