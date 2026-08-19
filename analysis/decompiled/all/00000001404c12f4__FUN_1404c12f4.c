// Function: FUN_1404c12f4
// Addr: 1404c12f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c12f4(undefined8 param_1,char *param_2)

{
  char in_AL;
  
  *param_2 = *param_2 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

