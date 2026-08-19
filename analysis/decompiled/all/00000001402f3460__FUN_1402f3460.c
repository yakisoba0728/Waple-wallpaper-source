// Function: FUN_1402f3460
// Addr: 1402f3460
// Size: 358 bytes


/* WARNING: Removing unreachable block (ram,0x0001402f356a) */
/* WARNING: Removing unreachable block (ram,0x0001402f3585) */
/* WARNING: Removing unreachable block (ram,0x0001402f35b7) */
/* WARNING: Removing unreachable block (ram,0x0001402f35d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1402f3460(longlong *param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar2 = DAT_1404367a0;
  uVar11 = _UNK_14043679c;
  uVar10 = _UNK_140436798;
  uVar9 = _UNK_140436794;
  uVar8 = _DAT_140436790;
  uVar7 = _UNK_14043678c;
  uVar6 = _UNK_140436788;
  uVar5 = _UNK_140436784;
  uVar4 = _DAT_140436780;
  if (param_1 == (longlong *)0x0) {
    return 0x21;
  }
  if ((param_4 == (undefined4 *)0x0) || (lVar1 = *param_1, lVar1 == 0)) {
    return 6;
  }
  *param_4 = _DAT_140436780;
  param_4[1] = uVar5;
  param_4[2] = uVar6;
  param_4[3] = uVar7;
  param_4[4] = uVar8;
  param_4[5] = uVar9;
  param_4[6] = uVar10;
  param_4[7] = uVar11;
  *(undefined8 *)(param_4 + 8) = uVar2;
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
  }
  else {
    if (param_2 == 0) {
      *(undefined8 *)(param_4 + 2) = 0;
      *(undefined8 *)(param_4 + 4) = 0;
      if (param_3 == 0) {
        *(undefined8 *)(param_4 + 6) = 0;
code_r0x0001402f3676:
        param_4[8] = param_4[8] | 1;
        *(undefined2 *)((longlong)param_4 + 2) = 0;
        *(short *)param_4 = (short)param_3;
        return 0;
      }
      if ((int)param_3 < 0x40000000) {
        lVar1 = (**(code **)(lVar1 + 8))(lVar1,param_3 * 2);
        uVar3 = 0x40;
        if (lVar1 != 0) {
          func_0x000140421870(lVar1,0,(longlong)(int)(param_3 * 2));
          *(longlong *)(param_4 + 6) = lVar1;
          goto code_r0x0001402f3676;
        }
        *(undefined8 *)(param_4 + 6) = 0;
        uVar4 = _DAT_140436780;
        uVar5 = _UNK_140436784;
        uVar6 = _UNK_140436788;
        uVar7 = _UNK_14043678c;
        uVar8 = _DAT_140436790;
        uVar9 = _UNK_140436794;
        uVar10 = _UNK_140436798;
        uVar11 = _UNK_14043679c;
        uVar2 = DAT_1404367a0;
      }
      else {
        uVar3 = 10;
        *(undefined8 *)(param_4 + 6) = 0;
      }
      goto code_r0x0001402f36ba;
    }
    if ((int)param_2 < 0x10000000) {
      lVar1 = (**(code **)(lVar1 + 8))(lVar1,param_2 * 8);
      uVar3 = 0x40;
      if (lVar1 != 0) {
        uVar2 = func_0x000140421870(lVar1,0,(longlong)(int)(param_2 * 8));
        return uVar2;
      }
      *(undefined8 *)(param_4 + 2) = 0;
      uVar4 = _DAT_140436780;
      uVar5 = _UNK_140436784;
      uVar6 = _UNK_140436788;
      uVar7 = _UNK_14043678c;
      uVar8 = _DAT_140436790;
      uVar9 = _UNK_140436794;
      uVar10 = _UNK_140436798;
      uVar11 = _UNK_14043679c;
      uVar2 = DAT_1404367a0;
      goto code_r0x0001402f36ba;
    }
    uVar3 = 10;
  }
  *(undefined8 *)(param_4 + 2) = 0;
code_r0x0001402f36ba:
  param_4[8] = param_4[8] | 1;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (*(longlong *)(param_4 + 2) != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
      uVar4 = _DAT_140436780;
      uVar5 = _UNK_140436784;
      uVar6 = _UNK_140436788;
      uVar7 = _UNK_14043678c;
      uVar8 = _DAT_140436790;
      uVar9 = _UNK_140436794;
      uVar10 = _UNK_140436798;
      uVar11 = _UNK_14043679c;
      uVar2 = DAT_1404367a0;
    }
    *(longlong *)(param_4 + 2) = 0;
    if (*(longlong *)(param_4 + 4) != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
      uVar4 = _DAT_140436780;
      uVar5 = _UNK_140436784;
      uVar6 = _UNK_140436788;
      uVar7 = _UNK_14043678c;
      uVar8 = _DAT_140436790;
      uVar9 = _UNK_140436794;
      uVar10 = _UNK_140436798;
      uVar11 = _UNK_14043679c;
      uVar2 = DAT_1404367a0;
    }
    *(longlong *)(param_4 + 4) = 0;
    if (*(longlong *)(param_4 + 6) != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
      uVar4 = _DAT_140436780;
      uVar5 = _UNK_140436784;
      uVar6 = _UNK_140436788;
      uVar7 = _UNK_14043678c;
      uVar8 = _DAT_140436790;
      uVar9 = _UNK_140436794;
      uVar10 = _UNK_140436798;
      uVar11 = _UNK_14043679c;
      uVar2 = DAT_1404367a0;
    }
    *param_4 = uVar4;
    param_4[1] = uVar5;
    param_4[2] = uVar6;
    param_4[3] = uVar7;
    param_4[4] = uVar8;
    param_4[5] = uVar9;
    param_4[6] = uVar10;
    param_4[7] = uVar11;
    *(undefined8 *)(param_4 + 8) = uVar2;
    return uVar3;
  }
  return uVar3;
}

