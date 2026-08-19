// Function: FUN_1404b5ed8
// Addr: 1404b5ed8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5ed8(char *param_1)

{
  char in_AL;
  
  *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

