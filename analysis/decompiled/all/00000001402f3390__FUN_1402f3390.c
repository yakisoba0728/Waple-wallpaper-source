// Function: FUN_1402f3390
// Addr: 1402f3390
// Size: 771 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1402f3390(longlong *param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  
  uVar12 = DAT_1404366d0;
  uVar11 = _UNK_1404366cc;
  uVar10 = _UNK_1404366c8;
  uVar9 = _UNK_1404366c4;
  uVar8 = _DAT_1404366c0;
  uVar7 = _UNK_1404366bc;
  uVar6 = _UNK_1404366b8;
  uVar5 = _UNK_1404366b4;
  uVar4 = _DAT_1404366b0;
  if (param_1 == (longlong *)0x0) {
    return 0x21;
  }
  if ((param_4 == (undefined4 *)0x0) || (lVar2 = *param_1, lVar2 == 0)) {
    return 6;
  }
  *param_4 = _DAT_1404366b0;
  param_4[1] = uVar5;
  param_4[2] = uVar6;
  param_4[3] = uVar7;
  param_4[4] = uVar8;
  param_4[5] = uVar9;
  param_4[6] = uVar10;
  param_4[7] = uVar11;
  *(undefined8 *)(param_4 + 8) = uVar12;
  if ((int)param_3 < 0) {
    return 6;
  }
  if (param_2 < param_3) {
    return 6;
  }
  if (0xffff < param_2) {
    return 10;
  }
  if ((int)param_2 < 0) {
    uVar3 = 6;
LAB_1402f35dd:
    *(undefined8 *)(param_4 + 2) = 0;
  }
  else {
    if (param_2 == 0) {
      *(undefined8 *)(param_4 + 2) = 0;
      *(undefined8 *)(param_4 + 4) = 0;
    }
    else {
      if (0xfffffff < (int)param_2) {
        uVar3 = 10;
        goto LAB_1402f35dd;
      }
      lVar1 = (**(code **)(lVar2 + 8))(lVar2,param_2 * 8);
      uVar3 = 0x40;
      if (lVar1 == 0) {
        *(longlong *)(param_4 + 2) = 0;
        uVar4 = _DAT_1404366b0;
        uVar5 = _UNK_1404366b4;
        uVar6 = _UNK_1404366b8;
        uVar7 = _UNK_1404366bc;
        uVar8 = _DAT_1404366c0;
        uVar9 = _UNK_1404366c4;
        uVar10 = _UNK_1404366c8;
        uVar11 = _UNK_1404366cc;
        uVar12 = DAT_1404366d0;
        goto LAB_1402f35ea;
      }
      FUN_1404217a0(lVar1,0,(longlong)(int)(param_2 * 8));
      *(longlong *)(param_4 + 2) = lVar1;
      lVar1 = (**(code **)(lVar2 + 8))(lVar2,param_2);
      uVar12 = DAT_1404366d0;
      uVar3 = 0x40;
      if (lVar1 == 0) {
        *(longlong *)(param_4 + 4) = 0;
        uVar4 = _DAT_1404366b0;
        uVar5 = _UNK_1404366b4;
        uVar6 = _UNK_1404366b8;
        uVar7 = _UNK_1404366bc;
        uVar8 = _DAT_1404366c0;
        uVar9 = _UNK_1404366c4;
        uVar10 = _UNK_1404366c8;
        uVar11 = _UNK_1404366cc;
        goto LAB_1402f35ea;
      }
      FUN_1404217a0(lVar1,0,(longlong)(int)param_2);
      uVar12 = DAT_1404366d0;
      uVar11 = _UNK_1404366cc;
      uVar10 = _UNK_1404366c8;
      uVar9 = _UNK_1404366c4;
      uVar8 = _DAT_1404366c0;
      *(longlong *)(param_4 + 4) = lVar1;
      uVar4 = _DAT_1404366b0;
      uVar5 = _UNK_1404366b4;
      uVar6 = _UNK_1404366b8;
      uVar7 = _UNK_1404366bc;
    }
    if (param_3 == 0) {
      *(undefined8 *)(param_4 + 6) = 0;
LAB_1402f35a6:
      param_4[8] = param_4[8] | 1;
      *(short *)((longlong)param_4 + 2) = (short)param_2;
      *(short *)param_4 = (short)param_3;
      return 0;
    }
    if ((int)param_3 < 0x40000000) {
      lVar2 = (**(code **)(lVar2 + 8))(lVar2,param_3 * 2);
      uVar3 = 0x40;
      if (lVar2 != 0) {
        FUN_1404217a0(lVar2,0,(longlong)(int)(param_3 * 2));
        *(longlong *)(param_4 + 6) = lVar2;
        goto LAB_1402f35a6;
      }
      *(undefined8 *)(param_4 + 6) = 0;
      uVar4 = _DAT_1404366b0;
      uVar5 = _UNK_1404366b4;
      uVar6 = _UNK_1404366b8;
      uVar7 = _UNK_1404366bc;
      uVar8 = _DAT_1404366c0;
      uVar9 = _UNK_1404366c4;
      uVar10 = _UNK_1404366c8;
      uVar11 = _UNK_1404366cc;
      uVar12 = DAT_1404366d0;
    }
    else {
      uVar3 = 10;
      *(undefined8 *)(param_4 + 6) = 0;
    }
  }
LAB_1402f35ea:
  param_4[8] = param_4[8] | 1;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    if (*(longlong *)(param_4 + 2) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
      uVar4 = _DAT_1404366b0;
      uVar5 = _UNK_1404366b4;
      uVar6 = _UNK_1404366b8;
      uVar7 = _UNK_1404366bc;
      uVar8 = _DAT_1404366c0;
      uVar9 = _UNK_1404366c4;
      uVar10 = _UNK_1404366c8;
      uVar11 = _UNK_1404366cc;
      uVar12 = DAT_1404366d0;
    }
    *(longlong *)(param_4 + 2) = 0;
    if (*(longlong *)(param_4 + 4) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
      uVar4 = _DAT_1404366b0;
      uVar5 = _UNK_1404366b4;
      uVar6 = _UNK_1404366b8;
      uVar7 = _UNK_1404366bc;
      uVar8 = _DAT_1404366c0;
      uVar9 = _UNK_1404366c4;
      uVar10 = _UNK_1404366c8;
      uVar11 = _UNK_1404366cc;
      uVar12 = DAT_1404366d0;
    }
    *(longlong *)(param_4 + 4) = 0;
    if (*(longlong *)(param_4 + 6) != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2);
      uVar4 = _DAT_1404366b0;
      uVar5 = _UNK_1404366b4;
      uVar6 = _UNK_1404366b8;
      uVar7 = _UNK_1404366bc;
      uVar8 = _DAT_1404366c0;
      uVar9 = _UNK_1404366c4;
      uVar10 = _UNK_1404366c8;
      uVar11 = _UNK_1404366cc;
      uVar12 = DAT_1404366d0;
    }
    *param_4 = uVar4;
    param_4[1] = uVar5;
    param_4[2] = uVar6;
    param_4[3] = uVar7;
    param_4[4] = uVar8;
    param_4[5] = uVar9;
    param_4[6] = uVar10;
    param_4[7] = uVar11;
    *(undefined8 *)(param_4 + 8) = uVar12;
    return uVar3;
  }
  return uVar3;
}

