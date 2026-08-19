// Function: FUN_1404b97d0
// Addr: 1404b97d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b97d0(undefined8 param_1,char *param_2)

{
  *param_2 = *param_2 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

