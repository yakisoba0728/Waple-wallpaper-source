// Function: FUN_1404d6728
// Addr: 1404d6728
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6728(char *param_1)

{
  int in_EAX;
  char *pcVar1;
  char unaff_BL;
  longlong unaff_RBP;
  undefined8 unaff_retaddr;
  
  pcVar1 = (char *)(ulonglong)(in_EAX + 0x700007e4U);
  *(char *)(unaff_RBP + 0x34003702) = *(char *)(unaff_RBP + 0x34003702) + unaff_BL;
  *param_1 = *param_1 + '\b';
  *pcVar1 = *pcVar1 + (char)(in_EAX + 0x700007e4U);
  pcVar1[2] = pcVar1[2] + (char)((ulonglong)unaff_retaddr >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

