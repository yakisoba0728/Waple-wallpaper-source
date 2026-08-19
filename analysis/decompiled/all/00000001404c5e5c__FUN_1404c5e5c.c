// Function: FUN_1404c5e5c
// Addr: 1404c5e5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5e5c(longlong param_1)

{
  char unaff_BL;
  
  *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

