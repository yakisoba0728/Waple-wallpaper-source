// Function: FUN_1404d35c4
// Addr: 1404d35c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d35c4(char *param_1)

{
  byte in_AL;
  
  *param_1 = *param_1 + (in_AL ^ 0x4d);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

