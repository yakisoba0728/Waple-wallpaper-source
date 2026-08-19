// Function: FUN_140267270
// Addr: 140267270
// Size: 174 bytes


void FUN_140267270(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = param_1[0x19];
  for (lVar8 = param_1[0x18]; lVar8 != lVar7; lVar8 = lVar8 + 0x158) {
    lVar1 = *(longlong *)(lVar8 + 200);
    for (lVar4 = *(longlong *)(lVar8 + 0xc0); lVar4 != lVar1; lVar4 = lVar4 + 0x10) {
      FUN_1402d3ea0(*(undefined8 *)(lVar4 + 8));
    }
    puVar2 = *(undefined8 **)(lVar8 + 0xe0);
    for (puVar5 = *(undefined8 **)(lVar8 + 0xd8); puVar5 != puVar2; puVar5 = puVar5 + 1) {
      FUN_1402d3ea0(*puVar5);
    }
    puVar2 = *(undefined8 **)(lVar8 + 0xf8);
    for (puVar5 = *(undefined8 **)(lVar8 + 0xf0); puVar5 != puVar2; puVar5 = puVar5 + 1) {
      FUN_1402d3ea0(*puVar5);
    }
    lVar1 = *(longlong *)(lVar8 + 0x140);
    for (lVar4 = *(longlong *)(lVar8 + 0x138); lVar4 != lVar1; lVar4 = lVar4 + 0x20) {
      lVar3 = *(longlong *)(lVar4 + 0x10);
      for (lVar6 = *(longlong *)(lVar4 + 8); lVar6 != lVar3; lVar6 = lVar6 + 0x10) {
        FUN_1402d3ea0(*(undefined8 *)(lVar6 + 8));
      }
    }
    puVar2 = *(undefined8 **)(lVar8 + 0x110);
    for (puVar5 = *(undefined8 **)(lVar8 + 0x108); puVar5 != puVar2; puVar5 = puVar5 + 1) {
      FUN_1402d3ea0(*puVar5);
    }
    FUN_1402d3ea0(*(undefined8 *)(lVar8 + 0x70));
    FUN_1402d3ea0(*(undefined8 *)(lVar8 + 0x78));
    FUN_1402d3ea0(*(undefined8 *)(lVar8 + 0x80));
    FUN_1402d3ea0(*(undefined8 *)(lVar8 + 0x88));
    func_0x00014028b040(*(undefined8 *)(lVar8 + 0x150),0xc0);
  }
  lVar8 = param_1[3];
  for (lVar7 = param_1[2]; lVar7 != lVar8; lVar7 = lVar7 + 200) {
    func_0x00014028b040(*(undefined8 *)(lVar7 + 0x98));
  }
  *param_1 = 0;
  lVar8 = param_1[3];
  lVar7 = param_1[2];
  if (lVar7 != lVar8) {
    do {
      func_0x0001401dce10(lVar7 + 0xb0);
      FUN_1401d9e20(lVar7 + 0x68);
      func_0x00014000dab0(lVar7);
      lVar7 = lVar7 + 200;
    } while (lVar7 != lVar8);
    param_1[3] = param_1[2];
  }
  lVar8 = param_1[6];
  if (lVar8 != param_1[7]) {
    FUN_1401dd480(lVar8 + 0xd8);
                    /* WARNING: Subroutine does not return */
    FUN_140017310(lVar8);
  }
  if (param_1[9] != param_1[10]) {
    param_1[10] = param_1[9];
  }
  lVar8 = param_1[0xf];
  if (lVar8 != param_1[0x10]) {
    FUN_1401dd480(lVar8 + 0x68);
                    /* WARNING: Subroutine does not return */
    FUN_140017310(lVar8);
  }
  if (param_1[0x12] != param_1[0x13]) {
    param_1[0x13] = param_1[0x12];
  }
  lVar8 = param_1[0x19];
  lVar7 = param_1[0x18];
  if (lVar7 != lVar8) {
    do {
      FUN_1401dced0(lVar7);
      lVar7 = lVar7 + 0x158;
    } while (lVar7 != lVar8);
    param_1[0x19] = param_1[0x18];
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (param_1[0x1b] != param_1[0x1c]) {
    param_1[0x1c] = param_1[0x1b];
  }
  lVar8 = param_1[0x1f];
  lVar7 = param_1[0x1e];
  if (lVar7 != lVar8) {
    do {
      func_0x00014000dab0(lVar7 + 0x18);
      func_0x00014003df40(lVar7 + 8);
      lVar7 = lVar7 + 0x40;
    } while (lVar7 != lVar8);
    param_1[0x1f] = param_1[0x1e];
  }
  lVar8 = param_1[0x22];
  lVar7 = param_1[0x21];
  if (lVar7 != lVar8) {
    do {
      func_0x000140031c50(lVar7 + 0x20);
      FUN_1401dd360(lVar7 + 8);
      lVar7 = lVar7 + 0x40;
    } while (lVar7 != lVar8);
    param_1[0x22] = param_1[0x21];
  }
  func_0x000140161d20(param_1 + 0x24);
  func_0x000140161d20(param_1 + 0x2c);
  if (param_1[0x34] != param_1[0x35]) {
    param_1[0x35] = param_1[0x34];
  }
  if (param_1[0x3a] != param_1[0x3b]) {
    param_1[0x3b] = param_1[0x3a];
  }
  if (param_1[0x15] == param_1[0x16]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017310(param_1[0x15]);
}

