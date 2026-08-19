// Function: FUN_1404c146c
// Addr: 1404c146c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c146c(undefined8 param_1)

{
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + 2) = *(char *)(unaff_RBP + 2) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

