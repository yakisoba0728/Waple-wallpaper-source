// Function: FUN_1400c2200
// Addr: 1400c2200
// Size: 18 bytes


ulonglong * FUN_1400c2200(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar5 = auStack_48;
  if (param_1 == param_2) {
    *(int *)(param_1 + 7) = (int)param_2[7];
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(int *)(param_1 + 8) = (int)param_2[8];
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
    *(int *)(param_1 + 9) = (int)param_2[9];
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    *(int *)(param_1 + 10) = (int)param_2[10];
    return param_1;
  }
  uVar1 = *param_2;
  uVar7 = param_2[1] - uVar1;
  uVar4 = *param_1;
  uVar3 = param_1[2] - uVar4;
  if (uVar3 < uVar7) {
    if (uVar7 < 0x8000000000000000) {
      uVar6 = 0x7fffffffffffffff;
      if ((uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1)) &&
         (uVar6 = (uVar3 >> 1) + uVar3, uVar6 < uVar7)) {
        uVar6 = uVar7;
      }
      if (uVar4 != 0) {
        uVar3 = uVar4;
        puVar5 = auStack_48;
        if (0xfff < param_1[2] - uVar4) {
          uVar3 = *(ulonglong *)(uVar4 - 8);
          uVar4 = (uVar4 - uVar3) - 8;
          puVar5 = auStack_48;
          if (0x1f < uVar4) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            uVar3 = uVar4;
            puVar5 = auStack_40;
          }
        }
        *(undefined **)(puVar5 + -8) = &UNK_1400c22ab;
        func_0x00014028b040(uVar3);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      *(undefined **)(puVar5 + -8) = &UNK_1400c22c3;
      FUN_1400cd870(param_1,uVar6);
      uVar4 = *param_1;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar5 + -8) = 0x1400c22d4;
      FUN_1404211c0(uVar4,uVar1,uVar7);
    }
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  if (uVar7 <= param_1[1] - uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(uVar4,uVar1,uVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(uVar4,uVar1,param_1[1] - uVar4);
}

