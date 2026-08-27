// Function: FUN_1403e6c40
// Addr: 1403e6c40
// Size: 266 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1403e6c40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_38;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 8) = local_38;
  iVar4 = iVar2 + 1;
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  *(int *)(param_2 + 0x18) = iVar4;
  *(code **)(param_2 + 0x20) = FUN_1403e6b70;
  *(undefined **)(param_2 + 0x28) = &DAT_14047054c;
  uVar6 = DAT_14045dd20;
  uVar7 = (undefined4)DAT_14045dd10;
  uVar8 = DAT_14045dd10._4_4_;
  uVar9 = (undefined4)DAT_14045dd18;
  uVar10 = DAT_14045dd18._4_4_;
  while( true ) {
    puVar5 = (undefined8 *)0x0;
    if (param_2 != -9) {
      puVar5 = (undefined8 *)(param_2 + 8);
    }
    if (*(int *)(puVar5 + 2) == 0) {
      return param_2;
    }
    plVar1 = (longlong *)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x18) == 0) {
      puVar5 = &DAT_1404e4f20;
      DAT_1404e4f20._0_4_ = uVar7;
      DAT_1404e4f20._4_4_ = uVar8;
      DAT_1404e4f28 = uVar9;
      _DAT_1404e4f2c = uVar10;
      _DAT_1404e4f30 = uVar6;
    }
    else {
      puVar5 = (undefined8 *)*plVar1;
    }
    if (*(code **)(param_2 + 0x20) == FUN_1403e6b70) {
      bVar3 = *(byte *)((longlong)puVar5 + 4) & 1;
    }
    else {
      bVar3 = (**(code **)(param_2 + 0x20))();
      uVar6 = DAT_14045dd20;
      uVar7 = (undefined4)DAT_14045dd10;
      uVar8 = DAT_14045dd10._4_4_;
      uVar9 = (undefined4)DAT_14045dd18;
      uVar10 = DAT_14045dd18._4_4_;
    }
    if (bVar3 != 0) break;
    if (*(int *)(param_2 + 0x18) != 0) {
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      *plVar1 = *plVar1 + 0x18;
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + -1;
      uVar6 = DAT_14045dd20;
      uVar7 = (undefined4)DAT_14045dd10;
      uVar8 = DAT_14045dd10._4_4_;
      uVar9 = (undefined4)DAT_14045dd18;
      uVar10 = DAT_14045dd18._4_4_;
    }
  }
  return param_2;
}

