// Function: FUN_1404c7268
// Addr: 1404c7268
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7268(char *param_1,char param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RSI;
  char *unaff_RDI;
  char unaff_R12B;
  bool in_ZF;
  
  if (!in_ZF) {
    *param_1 = *param_1 + unaff_R12B;
    *(char *)CONCAT71(in_register_00000001,in_AL) =
         *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
    *(char *)(unaff_RSI + -3) = *(char *)(unaff_RSI + -3) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

