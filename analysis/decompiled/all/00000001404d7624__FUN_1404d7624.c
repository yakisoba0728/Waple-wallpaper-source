// Function: FUN_1404d7624
// Addr: 1404d7624
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7624(longlong param_1,undefined8 param_2)

{
  longlong unaff_RBX;
  
  *(byte *)(param_1 + unaff_RBX) = *(byte *)(param_1 + unaff_RBX) | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

