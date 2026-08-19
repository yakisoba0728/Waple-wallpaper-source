// Function: FUN_1404a8eb8
// Addr: 1404a8eb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8eb8(byte *param_1)

{
  byte in_AH;
  
  *param_1 = *param_1 ^ in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

