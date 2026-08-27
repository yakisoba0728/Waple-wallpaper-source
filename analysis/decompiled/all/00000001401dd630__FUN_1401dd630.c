// Function: FUN_1401dd630
// Addr: 1401dd630
// Size: 405 bytes


void FUN_1401dd630(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0x140) = *param_2;
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 1);
  uVar1 = *(undefined4 *)(param_2 + 1);
  fVar2 = (float)FUN_14041a2e0(uVar1);
  fVar3 = (float)FUN_14041a9c0(uVar1);
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  fVar4 = (float)FUN_14041a2e0(uVar1);
  fVar5 = (float)FUN_14041a9c0(uVar1);
  uVar1 = *(undefined4 *)param_2;
  fVar6 = (float)FUN_14041a2e0(uVar1);
  fVar7 = (float)FUN_14041a9c0(uVar1);
  *(float *)(param_1 + 0x14c) = fVar4 * fVar2;
  uVar8 = (uint)fVar5 ^ DAT_140492ff0;
  *(float *)(param_1 + 0x150) = fVar4 * fVar3;
  *(uint *)(param_1 + 0x154) = uVar8;
  *(float *)(param_1 + 0x158) = fVar5 * fVar2 * fVar7 - fVar6 * fVar3;
  *(float *)(param_1 + 0x15c) = fVar5 * fVar3 * fVar7 + fVar6 * fVar2;
  *(float *)(param_1 + 0x160) = fVar7 * fVar4;
  *(float *)(param_1 + 0x164) = fVar6 * fVar2 * fVar5 + fVar7 * fVar3;
  *(float *)(param_1 + 0x168) = fVar6 * fVar3 * fVar5 - fVar7 * fVar2;
  *(float *)(param_1 + 0x16c) = fVar6 * fVar4;
  return;
}

