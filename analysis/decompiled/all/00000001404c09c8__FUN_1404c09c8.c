// Function: FUN_1404c09c8
// Addr: 1404c09c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c09c8(byte *param_1)

{
  byte in_AL;
  
  *param_1 = *param_1 ^ in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

