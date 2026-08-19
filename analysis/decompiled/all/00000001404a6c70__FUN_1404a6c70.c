// Function: FUN_1404a6c70
// Addr: 1404a6c70
// Size: 1 bytes


void FUN_1404a6c70(char *param_1,longlong param_2)

{
  int in_EAX;
  uint uVar1;
  
  *(char *)(param_2 + 0x4a) = *(char *)(param_2 + 0x4a) + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + (char)((uint)in_EAX >> 8);
  uVar1 = in_EAX + 0x74050002;
  uVar1 = CONCAT31((int3)(uVar1 >> 8),(char)uVar1 + *(char *)(ulonglong)uVar1);
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
  return;
}

