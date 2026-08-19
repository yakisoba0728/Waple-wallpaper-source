// Function: FUN_14019ebd0
// Addr: 14019ebd0
// Size: 57 bytes


ulonglong * FUN_14019ebd0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar5 = auStack_38;
  if (param_1 == param_2) {
    return param_1;
  }
  uVar4 = *param_1;
  uVar1 = *param_2;
  uVar6 = (longlong)(param_2[1] - uVar1) >> 3;
  uVar3 = (longlong)(param_1[2] - uVar4) >> 3;
  if (uVar3 < uVar6) {
    if (uVar6 < 0x2000000000000000) {
      uVar7 = 0x1fffffffffffffff;
      if ((uVar3 <= 0x1fffffffffffffff - (uVar3 >> 1)) &&
         (uVar7 = (uVar3 >> 1) + uVar3, uVar7 < uVar6)) {
        uVar7 = uVar6;
      }
      if (uVar4 != 0) {
        uVar3 = uVar4;
        puVar5 = auStack_38;
        if (0xfff < (ulonglong)(((longlong)(param_1[2] - uVar4) >> 3) * 8)) {
          uVar3 = *(ulonglong *)(uVar4 - 8);
          uVar4 = (uVar4 - uVar3) - 8;
          puVar5 = auStack_38;
          if (0x1f < uVar4) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            uVar3 = uVar4;
            puVar5 = auStack_30;
          }
        }
        *(undefined **)(puVar5 + -8) = &UNK_14019ec8c;
        func_0x00014028b040(uVar3);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      *(undefined **)(puVar5 + -8) = &UNK_14019eca4;
      FUN_1401a3040(param_1,uVar7);
      uVar4 = *param_1;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar5 + -8) = &UNK_14019ecbd;
      FUN_1404211c0(uVar4,uVar1,uVar6 * 8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar3 = (longlong)(param_1[1] - uVar4) >> 3;
  if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(uVar4,uVar1,param_2[1] - uVar1 & 0xfffffffffffffff8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(uVar4,uVar1,uVar3 * 8);
}

