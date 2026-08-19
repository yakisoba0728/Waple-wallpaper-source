// Function: FUN_1404a3940
// Addr: 1404a3940
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3940(undefined8 param_1,int param_2)

{
  longlong unaff_RBP;
  int *unaff_RDI;
  bool in_CF;
  
  if (!in_CF) {
    *(char *)(unaff_RBP + 0x20000673) =
         *(char *)(unaff_RBP + 0x20000673) + (char)((uint)param_2 >> 8);
  }
  *unaff_RDI = *unaff_RDI + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

