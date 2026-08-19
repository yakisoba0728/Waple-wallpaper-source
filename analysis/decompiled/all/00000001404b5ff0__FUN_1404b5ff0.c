// Function: FUN_1404b5ff0
// Addr: 1404b5ff0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5ff0(void)

{
  char *pcVar1;
  char *in_RAX;
  char *in_R9;
  longlong unaff_retaddr;
  
  *in_R9 = *in_R9 + '\b';
  *in_RAX = *in_RAX + (char)in_RAX;
  pcVar1 = (char *)(unaff_retaddr + (longlong)in_RAX * 2);
  *pcVar1 = *pcVar1 + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

