// Function: FUN_1404a35c4
// Addr: 1404a35c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a35c4(undefined8 param_1,char *param_2)

{
  char unaff_BL;
  char in_CF;
  
  *param_2 = *param_2 + unaff_BL + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

