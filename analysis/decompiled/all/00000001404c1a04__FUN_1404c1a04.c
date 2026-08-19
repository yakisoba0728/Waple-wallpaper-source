// Function: FUN_1404c1a04
// Addr: 1404c1a04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1a04(char *param_1)

{
  char *in_RAX;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  *param_1 = *param_1 + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

