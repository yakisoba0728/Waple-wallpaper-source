// Function: FUN_1404d3ec8
// Addr: 1404d3ec8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3ec8(int param_1)

{
  int *unaff_RBX;
  byte in_CF;
  
  *unaff_RBX = (*unaff_RBX - param_1) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

