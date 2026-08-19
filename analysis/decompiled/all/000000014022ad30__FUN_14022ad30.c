// Function: FUN_14022ad30
// Addr: 14022ad30
// Size: 90 bytes


void FUN_14022ad30(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  longlong alStack_128 [32];
  
  lVar8 = param_1[0x90];
  while( true ) {
    if (lVar8 == param_1[0x91]) {
      if (param_1[0x90] != param_1[0x91]) {
        param_1[0x91] = param_1[0x90];
      }
      lVar8 = param_1[0x94];
      for (lVar11 = param_1[0x93]; lVar11 != lVar8; lVar11 = lVar11 + 0x38) {
        plVar7 = *(longlong **)(lVar11 + 0x10);
        for (plVar9 = *(longlong **)(lVar11 + 8); plVar9 != plVar7; plVar9 = plVar9 + 1) {
          lVar1 = *plVar9;
          if (lVar1 != 0) {
            FUN_14022ad30(lVar1);
            func_0x00014028b040(lVar1,0x4b0);
          }
        }
        if (*(longlong *)(lVar11 + 8) != *(longlong *)(lVar11 + 0x10)) {
          *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 8);
        }
        plVar7 = *(longlong **)(lVar11 + 0x28);
        for (plVar9 = *(longlong **)(lVar11 + 0x20); plVar9 != plVar7; plVar9 = plVar9 + 1) {
          lVar1 = *plVar9;
          if (lVar1 != 0) {
            FUN_14022ad30(lVar1);
            func_0x00014028b040(lVar1,0x4b0);
          }
        }
        if (*(longlong *)(lVar11 + 0x20) != *(longlong *)(lVar11 + 0x28)) {
          *(longlong *)(lVar11 + 0x28) = *(longlong *)(lVar11 + 0x20);
        }
      }
      lVar8 = param_1[0x94];
      lVar11 = param_1[0x93];
      if (lVar11 != lVar8) {
        do {
          func_0x00014000dab0(lVar11 + 0x20);
          func_0x00014000dab0(lVar11 + 8);
          lVar11 = lVar11 + 0x38;
        } while (lVar11 != lVar8);
        param_1[0x94] = param_1[0x93];
      }
      func_0x000140161d20(param_1 + 0x87);
      uVar12 = FUN_1401c40d0(*param_1 + 0x1a60,param_1 + 3);
      FUN_1401d3720(uVar12,param_1 + 0x3f);
      if ((int)param_1[0x69] != 0) {
        FUN_1402d3ea0(param_1[0x4b]);
        func_0x000140421870(alStack_128,0,0x100);
        lVar8 = 2;
        plVar7 = alStack_128;
        plVar9 = param_1 + 0x4b;
        do {
          lVar11 = plVar7[1];
          lVar1 = plVar7[2];
          lVar4 = plVar7[3];
          *plVar9 = *plVar7;
          plVar9[1] = lVar11;
          lVar11 = plVar7[4];
          lVar5 = plVar7[5];
          plVar9[2] = lVar1;
          plVar9[3] = lVar4;
          lVar1 = plVar7[6];
          lVar4 = plVar7[7];
          plVar9[4] = lVar11;
          plVar9[5] = lVar5;
          lVar11 = plVar7[8];
          lVar5 = plVar7[9];
          plVar9[6] = lVar1;
          plVar9[7] = lVar4;
          lVar1 = plVar7[10];
          lVar4 = plVar7[0xb];
          plVar9[8] = lVar11;
          plVar9[9] = lVar5;
          lVar5 = plVar7[0xc];
          uVar12 = *(undefined4 *)((longlong)plVar7 + 100);
          lVar6 = plVar7[0xd];
          uVar3 = *(undefined4 *)((longlong)plVar7 + 0x6c);
          plVar9[10] = lVar1;
          plVar9[0xb] = lVar4;
          lVar11 = plVar7[0xe];
          lVar1 = plVar7[0xf];
          *(int *)(plVar9 + 0xc) = (int)lVar5;
          *(undefined4 *)((longlong)plVar9 + 100) = uVar12;
          *(int *)(plVar9 + 0xd) = (int)lVar6;
          *(undefined4 *)((longlong)plVar9 + 0x6c) = uVar3;
          plVar9[0xe] = lVar11;
          plVar9[0xf] = lVar1;
          lVar8 = lVar8 + -1;
          plVar7 = plVar7 + 0x10;
          plVar9 = plVar9 + 0x10;
        } while (lVar8 != 0);
      }
      FUN_1402d3ea0(param_1[0x80]);
      func_0x000140251dc0(param_1 + 0x93);
      FUN_14003e050(param_1 + 0x90);
      func_0x00014000dab0(param_1 + 0x8a);
      func_0x000140049410(param_1 + 0x88);
      func_0x000140031c50(param_1 + 0x84);
      func_0x000140031c50(param_1 + 0x81);
      func_0x000140031c50(param_1 + 0x43);
      FUN_1401d91d0(param_1 + 0x3c);
      func_0x0001400efd30(param_1 + 0x39);
      if (0xf < (ulonglong)param_1[0xd]) {
        lVar8 = param_1[10];
        puVar10 = &stack0xffffffffffffffd8;
        lVar11 = lVar8;
        if ((0xfff < param_1[0xd] + 1U) &&
           (lVar11 = *(longlong *)(lVar8 + -8), puVar10 = &stack0xffffffffffffffd8,
           0x1f < (lVar8 - lVar11) - 8U)) {
          pcVar2 = (code *)swi(0x29);
          lVar11 = (*pcVar2)(5);
          puVar10 = &stack0xffffffffffffffe0;
        }
        *(undefined8 *)(puVar10 + -8) = 0x14001735c;
        func_0x00014028b040(lVar11);
      }
      param_1[0xc] = 0;
      param_1[0xd] = 0xf;
      *(undefined1 *)(param_1 + 10) = 0;
      return;
    }
    lVar11 = *(longlong *)(lVar8 + 8);
    if (lVar11 != 0) break;
    lVar8 = lVar8 + 0x10;
  }
  FUN_14022ad30(lVar11);
  func_0x00014028b040(lVar11,0x4b0);
  return;
}

