// Function: FUN_1404a3fcc
// Addr: 1404a3fcc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3fcc(undefined8 param_1,undefined8 param_2,char *param_3)

{
  *param_3 = *param_3 + (char)param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

