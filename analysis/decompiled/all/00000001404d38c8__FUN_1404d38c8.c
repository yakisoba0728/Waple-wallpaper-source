// Function: FUN_1404d38c8
// Addr: 1404d38c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d38c8(char *param_1)

{
  int in_EAX;
  
  *param_1 = *param_1 + (char)((uint)(in_EAX + 0xa64) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

