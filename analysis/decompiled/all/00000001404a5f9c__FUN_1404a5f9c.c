// Function: FUN_1404a5f9c
// Addr: 1404a5f9c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5f9c(int param_1,longlong param_2)

{
  int *piVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RSI;
  
  piVar1 = (int *)(unaff_RSI + CONCAT71(in_register_00000001,in_AL));
  *piVar1 = *piVar1 + param_1;
  *(char *)(param_2 + unaff_RSI) = *(char *)(param_2 + unaff_RSI) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

