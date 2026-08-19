// Function: FUN_1404b8c60
// Addr: 1404b8c60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8c60(char param_1)

{
  char *in_RAX;
  char unaff_BH;
  char in_CF;
  
  in_RAX[9] = in_RAX[9] + unaff_BH + in_CF;
  *in_RAX = *in_RAX + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

