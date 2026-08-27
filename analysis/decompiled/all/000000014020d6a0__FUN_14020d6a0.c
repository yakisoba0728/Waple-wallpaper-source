// Function: FUN_14020d6a0
// Addr: 14020d6a0
// Size: 1180 bytes


void FUN_14020d6a0(longlong *param_1,ulonglong param_2,undefined4 param_3,char param_4,byte param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  lVar2 = *(longlong *)(param_1[2] + 0xb0);
  uVar10 = *(uint *)(lVar2 + 0x44 + (param_2 & 0xffffffff) * 0x50);
  plVar3 = *(longlong **)(*(longlong *)(*param_1 + 200) + 0x1500 + (ulonglong)param_5 * 8);
  lVar9 = plVar3[1];
  plVar1 = (longlong *)(lVar9 + 0x50);
  *plVar1 = *plVar1 + 8;
  **(longlong **)(lVar9 + 0x50) = (longlong)plVar3;
  (**(code **)(*plVar3 + 0x48))(plVar3);
  uVar11 = DAT_140492704;
  plVar1 = *(longlong **)(*(longlong *)(*param_1 + 200) + 0x1518);
  uVar10 = uVar10 & 2;
  uVar12 = DAT_140492704;
  if (uVar10 == 0) {
    uVar12 = 0;
  }
  (**(code **)(*plVar1 + 0x118))(plVar1,uVar12,uVar12,uVar12,uVar12);
  if ((param_4 != '\0') || (param_5 != 0)) {
    plVar1 = *(longlong **)(*(longlong *)(*param_1 + 200) + 0x1518);
    (**(code **)(*plVar1 + 0x120))(plVar1,1,0);
  }
  if (uVar10 == 0) {
    uVar11 = 0;
  }
  *(undefined4 *)(*(longlong *)(*param_1 + 200) + 0xa8) = uVar11;
  lVar9 = *(longlong *)(*(longlong *)(*param_1 + 0x4b8) + 0x420);
  *(undefined8 *)(lVar9 + 0xd0) = *(undefined8 *)(*(longlong *)param_1[1] + 0xd0);
  lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x4b8) + 0x420);
  uVar8 = FUN_14014cf90(*(longlong *)(*param_1 + 200) + 0x1520,
                        *(undefined8 *)(lVar2 + 0x38 + (param_2 & 0xffffffff) * 0x50),
                        CONCAT71((int7)((ulonglong)lVar9 >> 8),1));
  *(undefined8 *)(lVar4 + 0xd8) = uVar8;
  *(undefined8 *)(*(longlong *)(*(longlong *)(*param_1 + 0x4b8) + 0x420) + 0xf8) =
       *(undefined8 *)(*(longlong *)(*param_1 + 0x4b8) + 0x418);
  FUN_140155fc0(*(undefined8 *)(*(longlong *)(*param_1 + 0x4b8) + 0x420));
  (**(code **)(**(longlong **)(*param_1 + 0x490) + 0x40))(*(longlong **)(*param_1 + 0x490),param_3);
  FUN_140157430(*(undefined8 *)(*(longlong *)(*param_1 + 0x4b8) + 0x420));
  *(longlong *)(plVar3[1] + 0x50) = *(longlong *)(plVar3[1] + 0x50) + -8;
  if ((longlong *)**(longlong **)(plVar3[1] + 0x50) == (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3);
  }
  else {
    (**(code **)(*(longlong *)**(longlong **)(plVar3[1] + 0x50) + 0x48))();
  }
  if (param_5 != 0) {
    lVar2 = *(longlong *)(*param_1 + 200);
    puVar5 = *(undefined8 **)(lVar2 + 0x30);
    *(undefined1 *)(lVar2 + 0x1ca) = 1;
    *(undefined8 **)(lVar2 + 0x30) = puVar5 + 8;
    puVar5[8] = *puVar5;
    puVar5[9] = puVar5[1];
    puVar5[10] = puVar5[2];
    puVar5[0xb] = puVar5[3];
    puVar5[0xc] = puVar5[4];
    puVar5[0xd] = puVar5[5];
    puVar5[0xe] = puVar5[6];
    puVar5[0xf] = puVar5[7];
    lVar2 = *(longlong *)(*param_1 + 200);
    puVar5 = *(undefined8 **)(lVar2 + 0x38);
    *(undefined1 *)(lVar2 + 0x1ca) = 1;
    *(undefined8 **)(lVar2 + 0x38) = puVar5 + 8;
    puVar5[8] = *puVar5;
    puVar5[9] = puVar5[1];
    puVar5[10] = puVar5[2];
    puVar5[0xb] = puVar5[3];
    puVar5[0xc] = puVar5[4];
    puVar5[0xd] = puVar5[5];
    puVar5[0xe] = puVar5[6];
    puVar5[0xf] = puVar5[7];
    lVar2 = *(longlong *)(*param_1 + 200);
    puVar5 = *(undefined8 **)(lVar2 + 0x40);
    *(undefined1 *)(lVar2 + 0x1ca) = 1;
    *(undefined8 **)(lVar2 + 0x40) = puVar5 + 8;
    puVar5[8] = *puVar5;
    puVar5[9] = puVar5[1];
    puVar5[10] = puVar5[2];
    puVar5[0xb] = puVar5[3];
    puVar5[0xc] = puVar5[4];
    puVar5[0xd] = puVar5[5];
    puVar5[0xe] = puVar5[6];
    puVar5[0xf] = puVar5[7];
    puVar5 = *(undefined8 **)(*(longlong *)(*param_1 + 200) + 0x30);
    *puVar5 = 0x3f800000;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x14) = 0x3f800000;
    *(undefined8 *)((longlong)puVar5 + 0x1c) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
    puVar5[5] = 0x3f800000;
    puVar5[6] = 0;
    *(undefined4 *)(puVar5 + 7) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = 0x3f800000;
    puVar5 = *(undefined8 **)(*(longlong *)(*param_1 + 200) + 0x30);
    puVar6 = *(undefined8 **)(*(longlong *)(*param_1 + 200) + 0x38);
    uVar8 = puVar5[1];
    *puVar6 = *puVar5;
    puVar6[1] = uVar8;
    uVar8 = puVar5[3];
    puVar6[2] = puVar5[2];
    puVar6[3] = uVar8;
    uVar8 = puVar5[5];
    puVar6[4] = puVar5[4];
    puVar6[5] = uVar8;
    uVar8 = puVar5[7];
    puVar6[6] = puVar5[6];
    puVar6[7] = uVar8;
    puVar5 = *(undefined8 **)(*(longlong *)(*param_1 + 200) + 0x38);
    puVar6 = *(undefined8 **)(*(longlong *)(*param_1 + 200) + 0x40);
    uVar8 = puVar5[1];
    *puVar6 = *puVar5;
    puVar6[1] = uVar8;
    uVar8 = puVar5[3];
    puVar6[2] = puVar5[2];
    puVar6[3] = uVar8;
    uVar11 = *(undefined4 *)((longlong)puVar5 + 0x24);
    uVar12 = *(undefined4 *)(puVar5 + 5);
    uVar7 = *(undefined4 *)((longlong)puVar5 + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(puVar5 + 4);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar11;
    *(undefined4 *)(puVar6 + 5) = uVar12;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar7;
    uVar11 = *(undefined4 *)((longlong)puVar5 + 0x34);
    uVar12 = *(undefined4 *)(puVar5 + 7);
    uVar7 = *(undefined4 *)((longlong)puVar5 + 0x3c);
    *(undefined4 *)(puVar6 + 6) = *(undefined4 *)(puVar5 + 6);
    *(undefined4 *)((longlong)puVar6 + 0x34) = uVar11;
    *(undefined4 *)(puVar6 + 7) = uVar12;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = uVar7;
    *(undefined4 *)(*(longlong *)(*param_1 + 200) + 0x120) = 0x3f800000;
    lVar9 = FUN_14014ff70(*(longlong *)(*param_1 + 200) + 0x1630,"materials/util/flattexture.json");
    *(longlong *)(lVar9 + 0xd0) = plVar3[4];
    FUN_140155fc0(lVar9);
    plVar1 = *(longlong **)(*(longlong *)(*param_1 + 200) + 0x1518);
    (**(code **)(*plVar1 + 0x108))
              (plVar1,CONCAT71((int7)((ulonglong)*(longlong *)(*param_1 + 200) >> 8),1));
    plVar3 = *(longlong **)(*(longlong *)(*param_1 + 200) + 0x1500);
    lVar2 = plVar3[1];
    plVar1 = (longlong *)(lVar2 + 0x50);
    *plVar1 = *plVar1 + 8;
    **(longlong **)(lVar2 + 0x50) = (longlong)plVar3;
    (**(code **)(*plVar3 + 0x48))();
    (**(code **)(**(longlong **)(*(longlong *)(*param_1 + 200) + 0x48) + 8))();
    plVar1 = *(longlong **)(*(longlong *)(*param_1 + 200) + 0x1500);
    *(longlong *)(plVar1[1] + 0x50) = *(longlong *)(plVar1[1] + 0x50) + -8;
    if ((longlong *)**(longlong **)(plVar1[1] + 0x50) == (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x50))(plVar1);
    }
    else {
      (**(code **)(*(longlong *)**(longlong **)(plVar1[1] + 0x50) + 0x48))();
    }
    plVar1 = *(longlong **)(*(longlong *)(*param_1 + 200) + 0x1518);
    (**(code **)(*plVar1 + 0x108))(plVar1,0);
    FUN_140157430(lVar9);
    lVar2 = *(longlong *)(*param_1 + 200);
    plVar1 = (longlong *)(lVar2 + 0x40);
    *plVar1 = *plVar1 + -0x40;
    *(undefined1 *)(lVar2 + 0x1ca) = 1;
    lVar2 = *(longlong *)(*param_1 + 200);
    plVar1 = (longlong *)(lVar2 + 0x38);
    *plVar1 = *plVar1 + -0x40;
    *(undefined1 *)(lVar2 + 0x1ca) = 1;
    lVar2 = *(longlong *)(*param_1 + 200);
    plVar1 = (longlong *)(lVar2 + 0x30);
    *plVar1 = *plVar1 + -0x40;
    *(undefined1 *)(lVar2 + 0x1ca) = 1;
  }
  return;
}

