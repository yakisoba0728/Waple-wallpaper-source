// Function: FUN_1404cc754
// Addr: 1404cc754
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc754(int *param_1)

{
  int unaff_EBX;
  byte in_CF;
  
  *param_1 = (*param_1 - unaff_EBX) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

