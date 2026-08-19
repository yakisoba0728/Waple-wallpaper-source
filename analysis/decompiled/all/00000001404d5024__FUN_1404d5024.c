// Function: FUN_1404d5024
// Addr: 1404d5024
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5024(undefined8 param_1,longlong param_2)

{
  longlong unaff_RBX;
  
  *(byte *)(param_2 + unaff_RBX) = *(byte *)(param_2 + unaff_RBX) | (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

