// Function: FUN_1402616e0
// Addr: 1402616e0
// Size: 39 bytes


ulonglong FUN_1402616e0(longlong *param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)param_1[1];
  if ((longlong)(ulonglong)*(uint *)(param_1 + 2) < (longlong)(pbVar2 + (1 - *param_1))) {
    return (ulonglong)(uint3)(*(uint *)(param_1 + 2) >> 8) << 8;
  }
  bVar1 = *pbVar2;
  param_1[1] = (longlong)(pbVar2 + 1);
  return (ulonglong)bVar1;
}

