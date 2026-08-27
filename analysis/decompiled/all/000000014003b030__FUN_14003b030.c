// Function: FUN_14003b030
// Addr: 14003b030
// Size: 397 bytes


undefined8 * FUN_14003b030(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong local_48 [5];
  
  plVar1 = param_1 + 4;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *plVar1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 7;
  *(undefined2 *)plVar1 = 0;
  lVar7 = param_2[4];
  param_2[4] = -1;
  param_1[8] = lVar7;
  if (plVar1 != param_2) {
    uVar9 = param_1[7];
    if (7 < uVar9) {
      lVar7 = *plVar1;
      uVar8 = uVar9 * 2 + 2;
      if (0xfff < uVar8) {
        if (0x1f < (lVar7 - *(longlong *)(lVar7 + -8)) - 8U) goto LAB_14003b1b5;
        uVar8 = uVar9 * 2 + 0x29;
        lVar7 = *(longlong *)(lVar7 + -8);
      }
      thunk_FUN_14028af80(lVar7,uVar8);
    }
    param_1[6] = 0;
    param_1[7] = 7;
    *(undefined2 *)plVar1 = 0;
    uVar3 = *(undefined4 *)((longlong)param_2 + 4);
    lVar7 = param_2[1];
    uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(int *)plVar1 = (int)*param_2;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
    *(int *)(param_1 + 5) = (int)lVar7;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar7 = param_2[3];
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_1 + 6) = (int)param_2[2];
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
    *(int *)(param_1 + 7) = (int)lVar7;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
    param_2[2] = 0;
    param_2[3] = 7;
    *(undefined2 *)param_2 = 0;
  }
  *(int *)(param_1 + 2) = (int)param_2[5];
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)((longlong)param_1 + 0x1c) = 6;
  if ((*(uint *)(param_2 + 5) >> 10 & 1) == 0) {
    param_1[1] = CONCAT44(*(undefined4 *)((longlong)param_2 + 0x44),(int)param_2[9]);
    *param_1 = *(undefined8 *)((longlong)param_2 + 0x3c);
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0x2e;
  }
  uVar5 = FUN_1402d6aa0((undefined2 *)((longlong)param_2 + 0x54));
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_140016170(local_48,(undefined2 *)((longlong)param_2 + 0x54),uVar5);
  FUN_14003ba60(plVar1);
  FUN_140015460(plVar1,local_48);
  if (7 < (ulonglong)local_48[3]) {
    uVar9 = local_48[3] * 2 + 2;
    lVar7 = local_48[0];
    if (0xfff < uVar9) {
      lVar7 = *(longlong *)(local_48[0] + -8);
      if (0x1f < (local_48[0] - lVar7) - 8U) {
LAB_14003b1b5:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        puVar6 = (undefined8 *)(*pcVar2)();
        return puVar6;
      }
      uVar9 = local_48[3] * 2 + 0x29;
    }
    thunk_FUN_14028af80(lVar7,uVar9);
  }
  return param_1;
}

