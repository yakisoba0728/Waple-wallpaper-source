// Function: FUN_1404a9f70
// Addr: 1404a9f70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9f70(char *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint in_EAX;
  uint uVar5;
  byte bVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char in_SF;
  char in_OF;
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  if (in_OF == in_SF) {
    pcVar1 = (char *)(unaff_RSI + unaff_RBX * 4);
    *pcVar1 = *pcVar1 + (char)param_2;
    *param_1 = *param_1 + (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = in_EAX + 0x21000050;
  pbVar4 = (byte *)((ulonglong)uVar5 * 2);
  bVar2 = *pbVar4;
  bVar3 = *pbVar4 + (byte)uVar5;
  *pbVar4 = bVar3 + (0xdeffffaf < in_EAX);
  *(char *)(unaff_RBP + param_2) =
       *(char *)(unaff_RBP + param_2) + bVar6 +
       (CARRY1(bVar2,(byte)uVar5) || CARRY1(bVar3,0xdeffffaf < in_EAX));
  (&stack0x00000000)[param_2] = (&stack0x00000000)[param_2] | bVar6;
  pcVar1 = (char *)((ulonglong)uVar5 - 0x27fff281);
  *pcVar1 = *pcVar1 + (char)param_2;
  uRam00000001244f9fa4 = uRam00000001244f9fa4 & uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

