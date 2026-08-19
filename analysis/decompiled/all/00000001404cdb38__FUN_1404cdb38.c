// Function: FUN_1404cdb38
// Addr: 1404cdb38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdb38(char *param_1)

{
  char in_AL;
  char in_CF;
  
  *param_1 = (*param_1 - in_AL) - in_CF;
  *param_1 = *param_1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

