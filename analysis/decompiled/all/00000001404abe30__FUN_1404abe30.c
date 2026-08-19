// Function: FUN_1404abe30
// Addr: 1404abe30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abe30(char *param_1)

{
  char in_AL;
  undefined7 in_register_00000001;
  float10 in_ST0;
  
  *(double *)(CONCAT71(in_register_00000001,in_AL) + -0x42effff1) = (double)in_ST0;
  *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

