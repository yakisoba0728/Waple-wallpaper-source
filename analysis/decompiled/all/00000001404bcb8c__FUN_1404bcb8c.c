// Function: FUN_1404bcb8c
// Addr: 1404bcb8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bcb8c(void)

{
  int *in_RAX;
  int unaff_EBP;
  
  *in_RAX = *in_RAX + unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

