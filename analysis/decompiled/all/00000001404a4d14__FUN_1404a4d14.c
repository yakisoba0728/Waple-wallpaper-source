// Function: FUN_1404a4d14
// Addr: 1404a4d14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4d14(undefined8 param_1)

{
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX * 9) = *(char *)(unaff_RBX * 9) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

