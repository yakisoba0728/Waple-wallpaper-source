// Function: FUN_1401ec7f0
// Addr: 1401ec7f0
// Size: 528 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401ec7f0(longlong *param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  
  lVar12 = (longlong)param_2;
  plVar3 = (longlong *)param_1[lVar12 + 0x59];
  if ((*(byte *)((longlong)param_1 + 0x304) & 2) == 0) {
    uVar2 = *(uint *)(param_1[0x19] + 0x118);
    lVar4 = plVar3[1];
    plVar1 = (longlong *)(lVar4 + 0x50);
    *plVar1 = *plVar1 + 8;
    **(longlong **)(lVar4 + 0x50) = (longlong)plVar3;
    (**(code **)(*plVar3 + 0x48))();
    (**(code **)(*param_1 + 0xe0))();
    puVar5 = *(undefined8 **)(param_1[0x19] + 0x30);
    if ((*(byte *)((longlong)param_1 + 0x304) & 0x20) == 0) {
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
      puVar5 = *(undefined8 **)(param_1[0x19] + 0x30);
      puVar6 = *(undefined8 **)(param_1[0x19] + 0x38);
      uVar11 = puVar5[1];
      *puVar6 = *puVar5;
      puVar6[1] = uVar11;
      uVar11 = puVar5[3];
      puVar6[2] = puVar5[2];
      puVar6[3] = uVar11;
      uVar11 = puVar5[5];
      puVar6[4] = puVar5[4];
      puVar6[5] = uVar11;
      uVar11 = puVar5[7];
      puVar6[6] = puVar5[6];
      puVar6[7] = uVar11;
      plVar3 = *(longlong **)(param_1[0x19] + 0x1518);
      pcVar7 = *(code **)(*plVar3 + 0x18);
      if ((uVar2 & 1) == 0) {
        (*pcVar7)(plVar3,*(undefined8 *)(param_1[0x19] + 0x40));
      }
      else {
        (*pcVar7)();
      }
    }
    else {
      uVar11 = param_3[1];
      *puVar5 = *param_3;
      puVar5[1] = uVar11;
      uVar11 = param_3[3];
      puVar5[2] = param_3[2];
      puVar5[3] = uVar11;
      uVar8 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar9 = *(undefined4 *)(param_3 + 5);
      uVar10 = *(undefined4 *)((longlong)param_3 + 0x2c);
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)((longlong)puVar5 + 0x24) = uVar8;
      *(undefined4 *)(puVar5 + 5) = uVar9;
      *(undefined4 *)((longlong)puVar5 + 0x2c) = uVar10;
      uVar11 = param_3[7];
      puVar5[6] = param_3[6];
      puVar5[7] = uVar11;
    }
    *(undefined1 *)(param_1[0x19] + 0x1ca) = 1;
    if (((byte)(short)param_1[0x24] & 6) == 6) {
      lVar4 = param_1[0x19];
      puVar5 = *(undefined8 **)(lVar4 + 0x38);
      *(undefined1 *)(lVar4 + 0x1ca) = 1;
      *(undefined8 **)(lVar4 + 0x38) = puVar5 + 8;
      puVar5[8] = *puVar5;
      puVar5[9] = puVar5[1];
      puVar5[10] = puVar5[2];
      puVar5[0xb] = puVar5[3];
      puVar5[0xc] = puVar5[4];
      puVar5[0xd] = puVar5[5];
      puVar5[0xe] = puVar5[6];
      puVar5[0xf] = puVar5[7];
      lVar4 = param_1[0x19];
      puVar5 = *(undefined8 **)(lVar4 + 0x40);
      *(undefined1 *)(lVar4 + 0x1ca) = 1;
      *(undefined8 **)(lVar4 + 0x40) = puVar5 + 8;
      puVar5[8] = *puVar5;
      puVar5[9] = puVar5[1];
      puVar5[10] = puVar5[2];
      puVar5[0xb] = puVar5[3];
      puVar5[0xc] = puVar5[4];
      puVar5[0xd] = puVar5[5];
      puVar5[0xe] = puVar5[6];
      puVar5[0xf] = puVar5[7];
      lVar4 = param_1[0x19];
      puVar5 = *(undefined8 **)(lVar4 + 0x38);
      uVar11 = *(undefined8 *)(lVar4 + 0x1168);
      *puVar5 = *(undefined8 *)(lVar4 + 0x1160);
      puVar5[1] = uVar11;
      uVar11 = *(undefined8 *)(lVar4 + 0x1178);
      puVar5[2] = *(undefined8 *)(lVar4 + 0x1170);
      puVar5[3] = uVar11;
      uVar11 = *(undefined8 *)(lVar4 + 0x1188);
      puVar5[4] = *(undefined8 *)(lVar4 + 0x1180);
      puVar5[5] = uVar11;
      uVar11 = *(undefined8 *)(lVar4 + 0x1198);
      puVar5[6] = *(undefined8 *)(lVar4 + 0x1190);
      puVar5[7] = uVar11;
      lVar4 = param_1[0x19];
      puVar5 = *(undefined8 **)(lVar4 + 0x40);
      uVar11 = *(undefined8 *)(lVar4 + 0x11a8);
      *puVar5 = *(undefined8 *)(lVar4 + 0x11a0);
      puVar5[1] = uVar11;
      uVar11 = *(undefined8 *)(lVar4 + 0x11b8);
      puVar5[2] = *(undefined8 *)(lVar4 + 0x11b0);
      puVar5[3] = uVar11;
      uVar8 = *(undefined4 *)(lVar4 + 0x11c4);
      uVar9 = *(undefined4 *)(lVar4 + 0x11c8);
      uVar10 = *(undefined4 *)(lVar4 + 0x11cc);
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(lVar4 + 0x11c0);
      *(undefined4 *)((longlong)puVar5 + 0x24) = uVar8;
      *(undefined4 *)(puVar5 + 5) = uVar9;
      *(undefined4 *)((longlong)puVar5 + 0x2c) = uVar10;
      uVar8 = *(undefined4 *)(lVar4 + 0x11d4);
      uVar9 = *(undefined4 *)(lVar4 + 0x11d8);
      uVar10 = *(undefined4 *)(lVar4 + 0x11dc);
      *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(lVar4 + 0x11d0);
      *(undefined4 *)((longlong)puVar5 + 0x34) = uVar8;
      *(undefined4 *)(puVar5 + 7) = uVar9;
      *(undefined4 *)((longlong)puVar5 + 0x3c) = uVar10;
      (**(code **)(*param_1 + 0xe8))(param_1);
      lVar4 = param_1[0x19];
      plVar3 = (longlong *)(lVar4 + 0x40);
      *plVar3 = *plVar3 + -0x40;
      *(undefined1 *)(lVar4 + 0x1ca) = 1;
      lVar4 = param_1[0x19];
      plVar3 = (longlong *)(lVar4 + 0x38);
      *plVar3 = *plVar3 + -0x40;
      *(undefined1 *)(lVar4 + 0x1ca) = 1;
    }
    else {
      (**(code **)(*param_1 + 0xe8))(param_1);
    }
  }
  else {
    (**(code **)(*plVar3 + 8))();
    if (param_1[0x33] == param_1[0x34]) {
      return;
    }
    plVar1 = (longlong *)param_1[lVar12 + 0x59];
    lVar4 = plVar1[1];
    plVar3 = (longlong *)(lVar4 + 0x50);
    *plVar3 = *plVar3 + 8;
    **(longlong **)(lVar4 + 0x50) = (longlong)plVar1;
    (**(code **)(*plVar1 + 0x48))();
    func_0x0001401ecbf0(param_1);
  }
  plVar3 = (longlong *)param_1[lVar12 + 0x59];
  lVar12 = param_1[100];
  *(longlong *)(plVar3[1] + 0x50) = *(longlong *)(plVar3[1] + 0x50) + -8;
  if ((int)lVar12 < 2) {
    if ((longlong *)**(longlong **)(plVar3[1] + 0x50) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001401ecb23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)**(longlong **)(plVar3[1] + 0x50) + 0x48))();
      return;
    }
    (**(code **)(*plVar3 + 0x50))(plVar3);
  }
  return;
}

