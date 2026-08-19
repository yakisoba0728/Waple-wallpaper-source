// Function: FUN_1404cc6a8
// Addr: 1404cc6a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc6a8(char *param_1,int param_2)

{
  uint in_EAX;
  char *pcVar1;
  int *unaff_RBX;
  byte *unaff_RSI;
  
  pcVar1 = (char *)(ulonglong)(in_EAX ^ 0x4cc5b000);
  *param_1 = *param_1 + (char)((in_EAX ^ 0x4cc5b000) >> 8);
  *pcVar1 = *pcVar1 + (byte)in_EAX;
  pcVar1[7] = pcVar1[7] + (char)param_2;
  pcVar1 = (char *)((ulonglong)(in_EAX ^ 0x79c23400) + 0x19004cc5);
  *pcVar1 = *pcVar1 + (char)((uint)param_2 >> 8);
  pcVar1 = (char *)(ulonglong)CONCAT31((int3)((in_EAX ^ 0x79c23400) >> 8),(byte)in_EAX & *unaff_RSI)
  ;
  *pcVar1 = *pcVar1 + (char)param_2;
  *unaff_RBX = *unaff_RBX + param_2;
  *param_1 = *param_1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

