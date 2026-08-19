// Function: FUN_140067320
// Addr: 140067320
// Size: 147 bytes


undefined8 * FUN_140067320(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar7 = auStack_48;
  *param_1 = *param_2;
  FUN_14007a940(param_1 + 1,param_2 + 1);
  FUN_14007a940(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  if (param_1 == param_2) {
    *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
    *(undefined1 *)((longlong)param_1 + 0xb1) = *(undefined1 *)((longlong)param_2 + 0xb1);
    *(undefined1 *)((longlong)param_1 + 0xb2) = *(undefined1 *)((longlong)param_2 + 0xb2);
    return param_1;
  }
  lVar1 = param_2[0xb];
  uVar6 = param_1[0xb];
  uVar8 = param_2[0xc] - lVar1 >> 2;
  uVar5 = (longlong)(param_1[0xd] - uVar6) >> 2;
  if (uVar5 < uVar8) {
    if (uVar8 < 0x4000000000000000) {
      uVar9 = 0x3fffffffffffffff;
      if ((uVar5 <= 0x3fffffffffffffff - (uVar5 >> 1)) &&
         (uVar9 = (uVar5 >> 1) + uVar5, uVar9 < uVar8)) {
        uVar9 = uVar8;
      }
      if (uVar6 != 0) {
        uVar5 = uVar6;
        puVar7 = auStack_48;
        if (0xfff < (ulonglong)(((longlong)(param_1[0xd] - uVar6) >> 2) * 4)) {
          uVar5 = *(ulonglong *)(uVar6 - 8);
          uVar6 = (uVar6 - uVar5) - 8;
          puVar7 = auStack_48;
          if (0x1f < uVar6) {
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            uVar5 = uVar6;
            puVar7 = auStack_40;
          }
        }
        *(undefined **)(puVar7 + -8) = &UNK_14006743f;
        func_0x00014028b040(uVar5);
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
      }
      *(undefined **)(puVar7 + -8) = &UNK_140067455;
      lVar4 = func_0x000140039ac0();
      param_1[0xb] = lVar4;
      param_1[0xc] = lVar4;
      param_1[0xd] = lVar4 + uVar9 * 4;
      uVar2 = param_1[0xb];
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar7 + -8) = &UNK_14006747f;
      FUN_1404211c0(uVar2,lVar1,uVar8 * 4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar5 = (longlong)(param_1[0xc] - uVar6) >> 2;
  if (uVar8 <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(uVar6,lVar1,param_2[0xc] - lVar1 & 0xfffffffffffffffc);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(uVar6,lVar1,uVar5 * 4);
}

