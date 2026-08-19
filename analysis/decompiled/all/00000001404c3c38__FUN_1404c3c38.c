// Function: FUN_1404c3c38
// Addr: 1404c3c38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3c38(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBP;
  
  *(byte *)(unaff_RBP + param_2) = *(byte *)(unaff_RBP + param_2) | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

