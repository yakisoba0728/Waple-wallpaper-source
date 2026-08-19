// Function: FUN_1404c7368
// Addr: 1404c7368
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7368(undefined8 param_1,longlong param_2)

{
  char in_AH;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char in_CF;
  
  *(char *)(param_2 + unaff_RBP) = *(char *)(param_2 + unaff_RBP) + in_AH + in_CF;
  *(byte *)(unaff_RBX + unaff_RBP) = *(byte *)(unaff_RBX + unaff_RBP) | (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

