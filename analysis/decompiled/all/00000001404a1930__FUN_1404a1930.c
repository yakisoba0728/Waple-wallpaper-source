// Function: FUN_1404a1930
// Addr: 1404a1930
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1930(undefined8 param_1,undefined8 param_2,char *param_3)

{
  char in_AL;
  
  *param_3 = *param_3 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

