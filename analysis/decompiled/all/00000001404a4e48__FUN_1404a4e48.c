// Function: FUN_1404a4e48
// Addr: 1404a4e48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4e48(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX + -0x21) = *(char *)(unaff_RBX + -0x21) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

