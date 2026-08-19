// Function: FUN_1401afed0
// Addr: 1401afed0
// Size: 307 bytes


void FUN_1401afed0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  puVar1 = *(undefined8 **)(param_1 + 0x148);
  puVar2 = (undefined8 *)*puVar1;
  while( true ) {
    if (puVar2 == puVar1) {
      func_0x0001400f10d0(param_1 + 0x140);
      if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_1402efcc0();
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
      func_0x00014028b040(*(undefined8 *)(param_1 + 8),0x20);
      return;
    }
    lVar3 = puVar2[6];
    FUN_1401acaf0(*(undefined8 *)(lVar3 + 0x70));
    *(undefined8 *)(lVar3 + 0x70) = 0;
    puVar4 = *(undefined8 **)(lVar3 + 0x80);
    for (puVar5 = (undefined8 *)*puVar4; puVar5 != puVar4; puVar5 = (undefined8 *)*puVar5) {
      FUN_1401acaf0(puVar5[3]);
    }
    FUN_14015a460(lVar3 + 0x78);
    puVar4 = *(undefined8 **)(lVar3 + 0x38);
    for (puVar5 = (undefined8 *)*puVar4; puVar5 != puVar4; puVar5 = (undefined8 *)*puVar5) {
      plVar6 = (longlong *)puVar5[4];
      for (plVar7 = (longlong *)puVar5[3]; plVar7 != plVar6; plVar7 = plVar7 + 3) {
        if (plVar7[1] != 0) {
          func_0x0001402efb50();
        }
        if (plVar7[2] != 0) {
          FUN_140415f90();
        }
        *(int *)(*plVar7 + 0xc) = *(int *)(*plVar7 + 0xc) + -1;
      }
    }
    func_0x0001401b4690(lVar3 + 0x30);
    if (puVar2[6] != 0) break;
    puVar2 = (undefined8 *)*puVar2;
  }
  func_0x00014000dab0(puVar2[6] + 0xd0);
  return;
}

