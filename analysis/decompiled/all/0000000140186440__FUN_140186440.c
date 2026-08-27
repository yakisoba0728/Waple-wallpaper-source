// Function: FUN_140186440
// Addr: 140186440
// Size: 373 bytes


void FUN_140186440(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xd8);
  *(undefined8 *)(lVar2 + 0x12b0) = *(undefined8 *)(param_1 + 0x380);
  *(undefined4 *)(lVar2 + 0x12b8) = *(undefined4 *)(param_1 + 0x388);
  lVar2 = *(longlong *)(param_1 + 0xd8);
  *(undefined8 *)(lVar2 + 0x12bc) = *(undefined8 *)(param_1 + 0x38c);
  *(undefined4 *)(lVar2 + 0x12c4) = *(undefined4 *)(param_1 + 0x394);
  *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0x12c8) = *(undefined4 *)(param_1 + 0x398);
  *(float *)(*(longlong *)(param_1 + 0xd8) + 0x12cc) =
       *(float *)(param_1 + 0x39c) - *(float *)(param_1 + 0x398);
  *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0x12d0) = *(undefined4 *)(param_1 + 0x3a0);
  *(float *)(*(longlong *)(param_1 + 0xd8) + 0x12d4) =
       *(float *)(param_1 + 0x3a4) - *(float *)(param_1 + 0x3a0);
  *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0x12d8) = *(undefined4 *)(param_1 + 0x3a8);
  *(float *)(*(longlong *)(param_1 + 0xd8) + 0x12dc) =
       *(float *)(param_1 + 0x3ac) - *(float *)(param_1 + 0x3a8);
  *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0x12e0) = *(undefined4 *)(param_1 + 0x3b0);
  *(float *)(*(longlong *)(param_1 + 0xd8) + 0x12e4) =
       *(float *)(param_1 + 0x3b4) - *(float *)(param_1 + 0x3b0);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xd8) + 0x118);
  uVar3 = uVar1 | 0x800000;
  if ((*(uint *)(param_1 + 0xe0) & 0x4000) == 0) {
    uVar3 = uVar1 & 0xff7fffff;
  }
  *(uint *)(*(longlong *)(param_1 + 0xd8) + 0x118) = uVar3;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xd8) + 0x118);
  uVar3 = uVar1 | 0x1000000;
  if ((*(uint *)(param_1 + 0xe0) & 0x8000) == 0) {
    uVar3 = uVar1 & 0xfeffffff;
  }
  *(uint *)(*(longlong *)(param_1 + 0xd8) + 0x118) = uVar3;
  return;
}

