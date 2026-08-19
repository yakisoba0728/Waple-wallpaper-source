// Function: FUN_1404c0f00
// Addr: 1404c0f00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0f00(undefined8 param_1,char *param_2)

{
  char in_AL;
  
  *param_2 = *param_2 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

