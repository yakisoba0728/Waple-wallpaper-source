// Function: FUN_1404c3c6c
// Addr: 1404c3c6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3c6c(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *(char *)(unaff_RSI + param_2) = *(char *)(unaff_RSI + param_2) + (char)param_2;
  *(char *)(unaff_RDI + unaff_RBX) =
       *(char *)(unaff_RDI + unaff_RBX) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

