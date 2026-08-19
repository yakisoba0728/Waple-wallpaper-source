// Function: FUN_1404cb87c
// Addr: 1404cb87c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb87c(char *param_1)

{
  char unaff_R12B;
  
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

