// Function: FUN_1404d77c0
// Addr: 1404d77c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d77c0(longlong param_1,char *param_2)

{
  byte in_AH;
  char unaff_BL;
  
  param_2[param_1] = param_2[param_1] | in_AH;
  *param_2 = *param_2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

