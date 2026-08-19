// Function: FUN_1403dd200
// Addr: 1403dd200
// Size: 83 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403dd200(undefined8 param_1,longlong param_2,undefined4 param_3)

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
    local_18 = (int)DAT_14045ddf0;
    local_28 = (int)DAT_14045dde0;
    iStack_24 = DAT_14045dde0._4_4_;
    iStack_20 = _DAT_14045dde8;
    iStack_1c = _DAT_14045ddec;
UNWIND_INFO_1403dd254_UnwindCodes_6__OffsetInProlog:
    DAT_1404e4ff0._0_4_ = (int)DAT_14045dde0;
    DAT_1404e4ff0._4_4_ = DAT_14045dde0._4_4_;
    DAT_1404e4ff8._0_4_ = _DAT_14045dde8;
    DAT_1404e4ff8._4_4_ = _DAT_14045ddec;
    piVar3 = (int *)&DAT_1404e4ff0;
    DAT_1404e5000 = (int)DAT_14045ddf0;
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
    if (uVar2 <= iVar1 - 2U) goto UNWIND_INFO_1403dd254_UnwindCodes_6__OffsetInProlog;
    piVar3 = (int *)(*(longlong *)(param_2 + 0x28) + (ulonglong)(iVar1 - 2U) * 0x14);
  }
  switch(param_3) {
  case 0:
    *piVar3 = 2;
    return;
  case 1:
  case 7:
code_r0x0001403dd2db:
    *piVar3 = local_28;
    piVar3[1] = iStack_24;
    piVar3[2] = iStack_20;
    piVar3[3] = iStack_1c;
    piVar3[4] = local_18;
    return;
  case 2:
  case 8:
    goto code_r0x0001403dd2fb;
  default:
    if (local_28 == 0) {
      *piVar3 = 0;
      return;
    }
    if (local_28 == 1) {
      if (*piVar3 == 2) goto code_r0x0001403dd2db;
      if (*piVar3 == 1) {
        func_0x00014040ef00(piVar3 + 1,&iStack_24);
      }
    }
code_r0x0001403dd2fb:
    return;
  case 5:
  case 6:
    FUN_1403e6460(piVar3,&local_28);
    return;
  }
}

