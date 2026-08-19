// Function: FUN_1404b3684
// Addr: 1404b3684
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3684(byte *param_1)

{
  byte in_AL;
  
  *param_1 = *param_1 & in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

