// Function: FUN_1404c58e8
// Addr: 1404c58e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c58e8(int *param_1)

{
  int unaff_ESP;
  byte in_CF;
  
  *param_1 = (*param_1 - unaff_ESP) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

