// Function: FUN_1404cfe44
// Addr: 1404cfe44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfe44(char *param_1,undefined8 param_2)

{
  *param_1 = *param_1 - (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

