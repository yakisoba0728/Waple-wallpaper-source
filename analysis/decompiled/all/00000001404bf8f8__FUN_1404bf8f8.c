// Function: FUN_1404bf8f8
// Addr: 1404bf8f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf8f8(longlong param_1,char param_2,undefined8 param_3,char *param_4)

{
  uint in_EAX;
  char *pcVar1;
  char unaff_SPL;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(ulonglong)(in_EAX ^ 0x30002779);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar1 = *pcVar1 + (char)(in_EAX ^ 0x30002779);
  pcVar1 = pcVar1 + 0x2b002778;
  *pcVar1 = *pcVar1 + param_2;
  if (*pcVar1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

