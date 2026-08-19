// Function: FUN_1404cdd28
// Addr: 1404cdd28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdd28(char *param_1,byte *param_2)

{
  char in_AL;
  byte unaff_BL;
  
  *param_2 = *param_2 ^ unaff_BL;
  *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

