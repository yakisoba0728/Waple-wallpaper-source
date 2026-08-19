// Function: FUN_1404d09e8
// Addr: 1404d09e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d09e8(char param_1,char *param_2)

{
  *param_2 = *param_2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

