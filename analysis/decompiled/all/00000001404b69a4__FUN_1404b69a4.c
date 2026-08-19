// Function: FUN_1404b69a4
// Addr: 1404b69a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b69a4(undefined8 param_1,int *param_2)

{
  *param_2 = *param_2 + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

