// Function: FUN_1404cec60
// Addr: 1404cec60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cec60(longlong param_1)

{
  byte in_AL;
  
  *(byte *)(param_1 + 0x2919004a) = *(byte *)(param_1 + 0x2919004a) | in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

