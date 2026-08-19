// Function: FUN_1404a303c
// Addr: 1404a303c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a303c(longlong param_1,undefined8 param_2)

{
  longlong unaff_RBX;
  char in_CF;
  
  *(char *)(unaff_RBX + param_1) =
       *(char *)(unaff_RBX + param_1) + (char)((ulonglong)param_2 >> 8) + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

