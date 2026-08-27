// Function: FUN_14003b6c0
// Addr: 14003b6c0
// Size: 344 bytes


uint * FUN_14003b6c0(longlong param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined1 local_28 [16];
  uint local_18;
  int local_14;
  
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
LAB_14003b78f:
        *param_2 = 4;
        return param_2;
      }
      if (*(int *)(param_1 + 0x14) == -0x5ffffffd) {
LAB_14003b7a6:
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
  uVar1 = FUN_140290230(plVar2,local_28,param_3,uVar4);
  param_2[2] = uVar1;
  if (uVar1 == 0) {
    uVar1 = 0x16d;
    if ((local_18 & 1) == 0) {
      uVar1 = 0x1ff;
    }
    param_2[1] = uVar1;
    if ((local_18 >> 10 & 1) != 0) {
      if (local_14 == -0x5ffffff4) goto LAB_14003b78f;
      if (local_14 == -0x5ffffffd) goto LAB_14003b7a6;
    }
    *param_2 = ((local_18 & 0x10) != 0) + 2;
    return param_2;
  }
  param_2[1] = 0xffff;
  if (uVar1 < 0x41) {
    if (((uVar1 == 0x40) || (uVar1 == 2)) || (uVar1 == 3)) goto LAB_14003b808;
    bVar5 = uVar1 == 0x35;
  }
  else {
    if ((uVar1 == 0x7b) || (uVar1 == 0xa1)) goto LAB_14003b808;
    bVar5 = uVar1 == 0x10b;
  }
  if (!bVar5) {
    *param_2 = 0;
    return param_2;
  }
LAB_14003b808:
  *param_2 = 1;
  return param_2;
}

