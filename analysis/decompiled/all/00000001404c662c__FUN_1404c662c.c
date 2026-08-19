// Function: FUN_1404c662c
// Addr: 1404c662c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c662c(longlong param_1,int param_2)

{
  longlong unaff_RBX;
  byte in_CF;
  
  *(int *)(unaff_RBX + param_1) = *(int *)(unaff_RBX + param_1) + param_2 + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

