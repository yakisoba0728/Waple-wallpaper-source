// Function: FUN_1404b42ac
// Addr: 1404b42ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b42ac(char *param_1)

{
  char in_AL;
  
  param_1[0x4b] = in_AL;
  *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

