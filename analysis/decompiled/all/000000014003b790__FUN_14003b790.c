// Function: FUN_14003b790
// Addr: 14003b790
// Size: 136 bytes


uint * FUN_14003b790(longlong param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined1 auStack_28 [16];
  uint uStack_18;
  int iStack_14;
  
  *param_2 = 0;
  param_2[1] = 0xffff;
  if ((*(uint *)(param_1 + 0x1c) & (uint)param_3) == (uint)param_3) {
    param_2[2] = 0;
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar3 = 0x16d;
    if ((uVar1 & 1) == 0) {
      uVar3 = 0x1ff;
    }
    param_2[1] = uVar3;
    if ((uVar1 >> 10 & 1) != 0) {
      if (*(int *)(param_1 + 0x14) == -0x5ffffff4) {
UNWIND_INFO_14003b818_UnwindCodes_33__UnwindOpCode:
        *param_2 = 4;
        return param_2;
      }
      if (*(int *)(param_1 + 0x14) == -0x5ffffffd) {
UNWIND_INFO_14003b818_UnwindCodes_45__OffsetInProlog:
        *param_2 = 10;
        return param_2;
      }
    }
    *param_2 = (uVar1 & 0x10 | 0x20) >> 4;
    return param_2;
  }
  if ((*(uint *)(param_1 + 0x1c) & 2) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x10);
  }
  plVar2 = (longlong *)(param_1 + 0x20);
  if (7 < *(ulonglong *)(param_1 + 0x38)) {
    plVar2 = (longlong *)*plVar2;
  }
  uVar1 = FUN_140290300(plVar2,auStack_28,param_3,uVar4);
  param_2[2] = uVar1;
  if (uVar1 == 0) {
    uVar1 = 0x16d;
    if ((uStack_18 & 1) == 0) {
      uVar1 = 0x1ff;
    }
    param_2[1] = uVar1;
    if ((uStack_18 >> 10 & 1) != 0) {
      if (iStack_14 == -0x5ffffff4) goto UNWIND_INFO_14003b818_UnwindCodes_33__UnwindOpCode;
      if (iStack_14 == -0x5ffffffd) goto UNWIND_INFO_14003b818_UnwindCodes_45__OffsetInProlog;
    }
    *param_2 = ((uStack_18 & 0x10) != 0) + 2;
    return param_2;
  }
  param_2[1] = 0xffff;
  if (uVar1 < 0x41) {
    if (((uVar1 == 0x40) || (uVar1 == 2)) || (uVar1 == 3)) goto code_r0x00014003b8d8;
    bVar5 = uVar1 == 0x35;
  }
  else {
    if ((uVar1 == 0x7b) || (uVar1 == 0xa1)) goto code_r0x00014003b8d8;
    bVar5 = uVar1 == 0x10b;
  }
  if (!bVar5) {
    *param_2 = 0;
    return param_2;
  }
code_r0x00014003b8d8:
  *param_2 = 1;
  return param_2;
}

