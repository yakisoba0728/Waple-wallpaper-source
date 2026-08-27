// Function: FUN_14017acd0
// Addr: 14017acd0
// Size: 106 bytes


bool FUN_14017acd0(float *param_1)

{
  ulonglong uVar1;
  float fVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  if (-1 < (longlong)uVar1) {
    fVar2 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)(longlong)uVar1;
    return *param_1 <= fVar2 && fVar2 != *param_1;
  }
  fVar2 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar1;
  return *param_1 <= fVar2 && fVar2 != *param_1;
}

