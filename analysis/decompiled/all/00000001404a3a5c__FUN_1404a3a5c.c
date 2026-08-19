// Function: FUN_1404a3a5c
// Addr: 1404a3a5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3a5c(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined8 in_RAX;
  longlong unaff_RDI;
  
  pbVar1 = (byte *)(unaff_RDI + -0x6ff6fffa);
  *pbVar1 = *pbVar1 >> 6 | *pbVar1 << 2;
  param_1[unaff_RDI + 0x4a] = param_1[unaff_RDI + 0x4a] + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

