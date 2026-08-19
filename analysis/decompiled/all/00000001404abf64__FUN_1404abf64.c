// Function: FUN_1404abf64
// Addr: 1404abf64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abf64(char *param_1,longlong param_2)

{
  uint uVar1;
  char *pcVar2;
  longlong unaff_RBX;
  
  param_1[unaff_RBX] = param_1[unaff_RBX] + (char)((ulonglong)param_2 >> 8);
  param_1[param_2] = param_1[param_2] + (char)param_2;
  uVar1 = uRambe64000fa177000f;
  pcVar2 = (char *)(ulonglong)uRambe64000fa177000f;
  *param_1 = *param_1 + -8;
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[-0x5f] = pcVar2[-0x5f] + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

