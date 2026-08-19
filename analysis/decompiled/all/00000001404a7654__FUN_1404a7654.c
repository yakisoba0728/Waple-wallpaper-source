// Function: FUN_1404a7654
// Addr: 1404a7654
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7654(int param_1,int *param_2)

{
  char *pcVar1;
  byte bVar2;
  uint in_EAX;
  byte bVar5;
  uint uVar3;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte *pbVar4;
  
  uVar3 = (param_1 - *param_2) - (uint)(0xf0fff9cb < in_EAX);
  pbVar4 = (byte *)(ulonglong)uVar3;
  bVar2 = *pbVar4;
  bVar5 = (byte)(uVar3 >> 8);
  *pbVar4 = *pbVar4 + bVar5;
  uVar3 = (uVar3 - *param_2) - (uint)CARRY1(bVar2,bVar5);
  pcVar1 = (char *)(unaff_RBP + 0x4a + unaff_RSI * 2);
  *pcVar1 = *pcVar1 + (char)(uVar3 >> 8);
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)(in_EAX + 0xf000634 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

