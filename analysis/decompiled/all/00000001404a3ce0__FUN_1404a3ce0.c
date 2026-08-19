// Function: FUN_1404a3ce0
// Addr: 1404a3ce0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3ce0(char param_1)

{
  char *in_RAX;
  char unaff_BH;
  char in_CF;
  
  in_RAX[0xf] = (in_RAX[0xf] - unaff_BH) - in_CF;
  *in_RAX = *in_RAX + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

