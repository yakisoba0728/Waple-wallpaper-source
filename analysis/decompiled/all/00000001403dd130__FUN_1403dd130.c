// Function: FUN_1403dd130
// Addr: 1403dd130
// Size: 256 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403dd130(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int local_18;
  
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 == 0) {
    local_18 = (int)DAT_14045dd20;
    local_28 = (int)DAT_14045dd10;
    iStack_24 = DAT_14045dd10._4_4_;
    iStack_20 = (int)DAT_14045dd18;
    iStack_1c = DAT_14045dd18._4_4_;
LAB_1403dd194:
    DAT_1404e4f20._0_4_ = (int)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
    DAT_1404e4f28 = (int)DAT_14045dd18;
    _DAT_1404e4f2c = DAT_14045dd18._4_4_;
    piVar3 = (int *)&DAT_1404e4f20;
    DAT_1404e4f30 = (int)DAT_14045dd20;
  }
  else {
    uVar2 = iVar1 - 1;
    piVar3 = (int *)(*(longlong *)(param_2 + 0x28) + (ulonglong)uVar2 * 0x14);
    local_28 = *piVar3;
    iStack_24 = piVar3[1];
    iStack_20 = piVar3[2];
    iStack_1c = piVar3[3];
    local_18 = *(int *)(*(longlong *)(param_2 + 0x28) + 0x10 + (ulonglong)uVar2 * 0x14);
    *(uint *)(param_2 + 0x24) = uVar2;
    if (uVar2 <= iVar1 - 2U) goto LAB_1403dd194;
    piVar3 = (int *)(*(longlong *)(param_2 + 0x28) + (ulonglong)(iVar1 - 2U) * 0x14);
  }
  switch(param_3) {
  case 0:
    *piVar3 = 2;
    return;
  case 1:
  case 7:
switchD_1403dd1ce_caseD_1:
    *piVar3 = local_28;
    piVar3[1] = iStack_24;
    piVar3[2] = iStack_20;
    piVar3[3] = iStack_1c;
    piVar3[4] = local_18;
    return;
  case 2:
  case 8:
    goto switchD_1403dd1ce_caseD_2;
  default:
    if (local_28 == 0) {
      *piVar3 = 0;
      return;
    }
    if (local_28 == 1) {
      if (*piVar3 == 2) goto switchD_1403dd1ce_caseD_1;
      if (*piVar3 == 1) {
        FUN_14040ee30(piVar3 + 1,&iStack_24);
      }
    }
switchD_1403dd1ce_caseD_2:
    return;
  case 5:
  case 6:
    FUN_1403e6390(piVar3,&local_28);
    return;
  }
}

