// Function: FUN_1404aa368
// Addr: 1404aa368
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa368(char *param_1,char param_2)

{
  uint in_EAX;
  char *pcVar1;
  char unaff_BH;
  char unaff_SPL;
  
  pcVar1 = (char *)(ulonglong)(in_EAX | 0xdeb6800);
  pcVar1[-0x5e] = pcVar1[-0x5e] + unaff_BH;
  *param_1 = *param_1 + unaff_SPL;
  *pcVar1 = *pcVar1 + (char)in_EAX;
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

