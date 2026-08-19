// Function: FUN_1404a5b74
// Addr: 1404a5b74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5b74(ulonglong param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_1 & 0xffffffff);
  *pbVar1 = *pbVar1 | (byte)pbVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

