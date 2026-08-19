// Function: FUN_140013a40
// Addr: 140013a40
// Size: 17 bytes


undefined8 * FUN_140013a40(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong alStack_38 [6];
  
  uVar2 = *param_3;
  uVar3 = param_3[1];
  alStack_38[2] = 0;
  alStack_38[3] = 0;
  alStack_38[0] = 0;
  alStack_38[1] = 0;
  uVar4 = func_0x000140421ed0(param_2);
  func_0x000140017550(alStack_38,param_2,uVar4);
  param_1[1] = "system error";
  *param_1 = &PTR_UNWIND_INFO_1400138cf_UnwindCodes_54__UnwindOpCode_14042abe0;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  if (0xf < (ulonglong)alStack_38[3]) {
    uVar7 = alStack_38[3] + 1;
    lVar6 = alStack_38[0];
    if (0xfff < uVar7) {
      lVar6 = *(longlong *)(alStack_38[0] + -8);
      if (0x1f < (alStack_38[0] - lVar6) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined8 *)(*pcVar1)();
        return puVar5;
      }
      uVar7 = alStack_38[3] + 0x28;
    }
    func_0x00014028b040(lVar6,uVar7);
  }
  *param_1 = &PTR_UNWIND_INFO_1400138cf_UnwindCodes_54__UnwindOpCode_14042af48;
  return param_1;
}

