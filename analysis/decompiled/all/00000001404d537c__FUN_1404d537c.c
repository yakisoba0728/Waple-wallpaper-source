// Function: FUN_1404d537c
// Addr: 1404d537c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d537c(int *param_1)

{
  int unaff_ESP;
  byte in_CF;
  
  *param_1 = (*param_1 - unaff_ESP) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

