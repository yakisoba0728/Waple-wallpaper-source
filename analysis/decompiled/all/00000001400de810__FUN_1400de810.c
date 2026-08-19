// Function: FUN_1400de810
// Addr: 1400de810
// Size: 152 bytes


longlong * FUN_1400de810(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  puVar4 = auStack_48;
  puVar5 = auStack_48;
  *param_1 = (longlong)&DAT_1404856c8;
  param_1[0x13] = 0;
  param_1[0x12] = (longlong)&DAT_14042af70;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_140012bb0(param_1,param_1 + 2);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       &PTR_UNWIND_INFO_1404856d0;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x90;
  func_0x000140012c50(param_1 + 2);
  param_1[2] = (longlong)&PTR_UNWIND_INFO_1400144a2_UnwindCodes_61__OffsetInProlog_140474188;
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (uVar1 < 0x80000000) {
    if (uVar1 == 0) {
      param_1[0xf] = 0;
      *(undefined4 *)(param_1 + 0x10) = 2;
      return param_1;
    }
    if (uVar1 < 0x1000) {
      uVar6 = func_0x00014028aff0(uVar1);
    }
    else {
      if (uVar1 + 0x27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_140017440();
      }
      lVar3 = func_0x00014028aff0();
      if (lVar3 == 0) {
        pcVar2 = (code *)swi(0x29);
        lVar3 = (*pcVar2)(5);
        puVar4 = auStack_40;
      }
      uVar6 = lVar3 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar6 - 8) = lVar3;
      puVar5 = puVar4;
    }
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar5 + -8) = 0x1400de930;
    FUN_1404211c0(uVar6,param_2,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028b990();
}

