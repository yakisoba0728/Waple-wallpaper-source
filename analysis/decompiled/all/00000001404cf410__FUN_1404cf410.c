// Function: FUN_1404cf410
// Addr: 1404cf410
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf410(longlong param_1,undefined8 param_2)

{
  longlong unaff_RBP;
  bool in_ZF;
  
  if (!in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + param_1) = *(char *)(unaff_RBP + param_1) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

