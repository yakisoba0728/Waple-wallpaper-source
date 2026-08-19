// Function: FUN_1404c3570
// Addr: 1404c3570
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3570(longlong param_1,longlong param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + (char)param_2;
  *(char *)(unaff_RSI + param_2) = *(char *)(unaff_RSI + param_2) + (char)((ulonglong)param_2 >> 8);
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

