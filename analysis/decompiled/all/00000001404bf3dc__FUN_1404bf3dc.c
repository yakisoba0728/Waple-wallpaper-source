// Function: FUN_1404bf3dc
// Addr: 1404bf3dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf3dc(longlong param_1,longlong param_2)

{
  undefined4 *unaff_RSI;
  
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)param_2;
  *unaff_RSI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

