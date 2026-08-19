// Function: FUN_1404b9578
// Addr: 1404b9578
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9578(void)

{
  longlong *in_RAX;
  float10 in_ST0;
  
  *in_RAX = (longlong)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

