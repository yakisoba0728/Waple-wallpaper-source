// Function: FUN_1404a5b64
// Addr: 1404a5b64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5b64(ulonglong param_1,char *param_2)

{
  byte *pbVar1;
  
  *param_2 = *param_2 + (char)param_1;
  pbVar1 = (byte *)(param_1 & 0xffffffff);
  *pbVar1 = *pbVar1 | (byte)pbVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

