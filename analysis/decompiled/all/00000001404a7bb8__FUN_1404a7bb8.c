// Function: FUN_1404a7bb8
// Addr: 1404a7bb8
// Size: 1 bytes


void FUN_1404a7bb8(undefined1 *param_1,undefined4 param_2)

{
  code *pcVar1;
  byte bVar2;
  uint in_EAX;
  byte *pbVar3;
  ulonglong unaff_RBP;
  char *pcVar4;
  
  pbVar3 = (byte *)(unaff_RBP & 0xffffffff);
  bVar2 = (byte)pbVar3 | *pbVar3;
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)pbVar3 >> 8),bVar2);
  *(undefined4 *)((ulonglong)((in_EAX | 0xc4) + 0x80000a64) + 0x7acc000a) = param_2;
  *param_1 = *param_1;
  *pcVar4 = *pcVar4 + bVar2;
  pcVar4[-0x76fff56b] = pcVar4[-0x76fff56b] + bVar2;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

