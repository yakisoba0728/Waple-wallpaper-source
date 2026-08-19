// Function: FUN_1404a67a0
// Addr: 1404a67a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a67a0(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte in_AH;
  longlong unaff_RBP;
  
  pbVar1 = (byte *)(unaff_RBP + 8 + param_2);
  *pbVar1 = *pbVar1 | in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

