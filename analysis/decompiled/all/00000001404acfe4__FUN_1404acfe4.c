// Function: FUN_1404acfe4
// Addr: 1404acfe4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acfe4(char *param_1)

{
  char *in_RAX;
  char unaff_SPL;
  
  *param_1 = *param_1 + unaff_SPL;
  *in_RAX = *in_RAX + (char)in_RAX;
  in_RAX[0x6400113c] = in_RAX[0x6400113c] + (char)in_RAX;
  *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

