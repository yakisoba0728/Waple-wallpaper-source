// Function: FUN_1404d0c70
// Addr: 1404d0c70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0c70(byte *param_1)

{
  byte in_AH;
  
  *param_1 = *param_1 ^ in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

