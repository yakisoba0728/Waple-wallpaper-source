// Function: FUN_1404b5f8c
// Addr: 1404b5f8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5f8c(void)

{
  int in_EAX;
  longlong unaff_RBX;
  char unaff_SPL;
  char *in_R9;
  byte in_CF;
  
  *(int *)(unaff_RBX * 2) = (*(int *)(unaff_RBX * 2) - in_EAX) - (uint)in_CF;
  *in_R9 = *in_R9 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

