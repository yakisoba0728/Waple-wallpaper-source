// Function: FUN_14022ac60
// Addr: 14022ac60
// Size: 707 bytes


void FUN_14022ac60(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong local_128 [32];
  
  lVar9 = param_1[0x91];
  for (lVar7 = param_1[0x90]; lVar7 != lVar9; lVar7 = lVar7 + 0x10) {
    lVar1 = *(longlong *)(lVar7 + 8);
    if (lVar1 != 0) {
      FUN_14022ac60(lVar1);
      thunk_FUN_14028af80(lVar1,0x4b0);
    }
  }
  if (param_1[0x90] != param_1[0x91]) {
    param_1[0x91] = param_1[0x90];
  }
  lVar7 = param_1[0x94];
  for (lVar9 = param_1[0x93]; lVar9 != lVar7; lVar9 = lVar9 + 0x38) {
    plVar6 = *(longlong **)(lVar9 + 0x10);
    for (plVar8 = *(longlong **)(lVar9 + 8); plVar8 != plVar6; plVar8 = plVar8 + 1) {
      lVar1 = *plVar8;
      if (lVar1 != 0) {
        FUN_14022ac60(lVar1);
        thunk_FUN_14028af80(lVar1,0x4b0);
      }
    }
    if (*(longlong *)(lVar9 + 8) != *(longlong *)(lVar9 + 0x10)) {
      *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 8);
    }
    plVar6 = *(longlong **)(lVar9 + 0x28);
    for (plVar8 = *(longlong **)(lVar9 + 0x20); plVar8 != plVar6; plVar8 = plVar8 + 1) {
      lVar1 = *plVar8;
      if (lVar1 != 0) {
        FUN_14022ac60(lVar1);
        thunk_FUN_14028af80(lVar1,0x4b0);
      }
    }
    if (*(longlong *)(lVar9 + 0x20) != *(longlong *)(lVar9 + 0x28)) {
      *(longlong *)(lVar9 + 0x28) = *(longlong *)(lVar9 + 0x20);
    }
  }
  lVar7 = param_1[0x94];
  lVar9 = param_1[0x93];
  if (lVar9 != lVar7) {
    do {
      FUN_14000d9e0(lVar9 + 0x20);
      FUN_14000d9e0(lVar9 + 8);
      lVar9 = lVar9 + 0x38;
    } while (lVar9 != lVar7);
    param_1[0x94] = param_1[0x93];
  }
  FUN_140161c50(param_1 + 0x87);
  uVar10 = FUN_1401c4000(*param_1 + 0x1a60,param_1 + 3);
  FUN_1401d3650(uVar10,param_1 + 0x3f);
  if ((int)param_1[0x69] != 0) {
    FUN_1402d3dd0(param_1[0x4b]);
    FUN_1404217a0(local_128,0,0x100);
    lVar7 = 2;
    plVar6 = local_128;
    plVar8 = param_1 + 0x4b;
    do {
      lVar9 = plVar6[1];
      lVar1 = plVar6[2];
      lVar3 = plVar6[3];
      *plVar8 = *plVar6;
      plVar8[1] = lVar9;
      lVar9 = plVar6[4];
      lVar4 = plVar6[5];
      plVar8[2] = lVar1;
      plVar8[3] = lVar3;
      lVar1 = plVar6[6];
      lVar3 = plVar6[7];
      plVar8[4] = lVar9;
      plVar8[5] = lVar4;
      lVar9 = plVar6[8];
      lVar4 = plVar6[9];
      plVar8[6] = lVar1;
      plVar8[7] = lVar3;
      lVar1 = plVar6[10];
      lVar3 = plVar6[0xb];
      plVar8[8] = lVar9;
      plVar8[9] = lVar4;
      lVar4 = plVar6[0xc];
      uVar10 = *(undefined4 *)((longlong)plVar6 + 100);
      lVar5 = plVar6[0xd];
      uVar2 = *(undefined4 *)((longlong)plVar6 + 0x6c);
      plVar8[10] = lVar1;
      plVar8[0xb] = lVar3;
      lVar9 = plVar6[0xe];
      lVar1 = plVar6[0xf];
      *(int *)(plVar8 + 0xc) = (int)lVar4;
      *(undefined4 *)((longlong)plVar8 + 100) = uVar10;
      *(int *)(plVar8 + 0xd) = (int)lVar5;
      *(undefined4 *)((longlong)plVar8 + 0x6c) = uVar2;
      plVar8[0xe] = lVar9;
      plVar8[0xf] = lVar1;
      lVar7 = lVar7 + -1;
      plVar6 = plVar6 + 0x10;
      plVar8 = plVar8 + 0x10;
    } while (lVar7 != 0);
  }
  FUN_1402d3dd0(param_1[0x80]);
  FUN_140251cf0(param_1 + 0x93);
  FUN_14003df80(param_1 + 0x90);
  FUN_14000d9e0(param_1 + 0x8a);
  FUN_140049340(param_1 + 0x88);
  FUN_140031b80(param_1 + 0x84);
  FUN_140031b80(param_1 + 0x81);
  FUN_140031b80(param_1 + 0x43);
  FUN_1401d9100(param_1 + 0x3c);
  FUN_1400efc60(param_1 + 0x39);
  FUN_140017240(param_1 + 10);
  return;
}

