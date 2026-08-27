// Function: FUN_1403cabd0
// Addr: 1403cabd0
// Size: 372 bytes


undefined8 *
FUN_1403cabd0(longlong param_1,undefined8 *param_2,longlong param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 local_28;
  longlong lStack_20;
  ulonglong local_18;
  
  uVar3 = (ulonglong)param_5;
  uVar6 = 0;
  if (param_5 <= param_4) {
    if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
      uVar6 = ((uint)*(byte *)(param_1 + 0x15 + uVar3 * 2) +
              (uint)*(byte *)(param_1 + 0x14 + uVar3 * 2) * 0x100) * 2;
    }
    else {
      uVar6 = (uint)*(byte *)(param_1 + 0x15 + uVar3 * 4) * 0x10000 +
              (uint)*(byte *)(param_1 + 0x16 + uVar3 * 4) * 0x100 +
              (uint)*(byte *)(param_1 + 0x14 + uVar3 * 4) * 0x1000000 +
              (uint)*(byte *)(param_1 + 0x17 + uVar3 * 4);
    }
  }
  uVar3 = (ulonglong)(param_5 + 1);
  uVar4 = 0;
  if (param_5 + 1 <= param_4) {
    if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
      uVar4 = ((uint)*(byte *)(param_1 + 0x15 + uVar3 * 2) +
              (uint)*(byte *)(param_1 + 0x14 + uVar3 * 2) * 0x100) * 2;
    }
    else {
      uVar4 = (uint)*(byte *)(param_1 + 0x15 + uVar3 * 4) * 0x10000 +
              (uint)*(byte *)(param_1 + 0x16 + uVar3 * 4) * 0x100 +
              (uint)*(byte *)(param_1 + 0x14 + uVar3 * 4) * 0x1000000 +
              (uint)*(byte *)(param_1 + 0x17 + uVar3 * 4);
    }
  }
  if (uVar6 <= uVar4) {
    uVar2 = (uint)*(byte *)(param_1 + 0x11) * 0x10000 + (uint)*(byte *)(param_1 + 0x12) * 0x100 +
            (uint)*(byte *)(param_1 + 0x10) * 0x1000000 + uVar6 + (uint)*(byte *)(param_1 + 0x13);
    uVar1 = 0;
    if (uVar2 <= *(uint *)(param_3 + 0x18)) {
      uVar1 = *(int *)(param_3 + 0x18) - uVar2;
    }
    uVar5 = uVar4 - uVar6;
    if (uVar1 <= uVar4 - uVar6) {
      uVar5 = uVar1;
    }
    if (uVar5 < 4) {
      local_28 = 0;
      lStack_20 = 0;
      local_18 = 0;
    }
    else {
      lStack_20 = (ulonglong)uVar2 + *(longlong *)(param_3 + 0x10);
      local_18 = (ulonglong)uVar5;
    }
    *param_2 = local_28;
    param_2[1] = lStack_20;
    param_2[2] = local_18;
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}

