// Function: FUN_1404d7650
// Addr: 1404d7650
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7650(longlong param_1,undefined8 param_2)

{
  longlong unaff_RBX;
  
  *(char *)(param_1 + unaff_RBX) = *(char *)(param_1 + unaff_RBX) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

