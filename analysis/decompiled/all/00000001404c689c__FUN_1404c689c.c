// Function: FUN_1404c689c
// Addr: 1404c689c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c689c(undefined8 param_1)

{
  char *pcVar1;
  longlong unaff_RBP;
  byte *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI ^ (byte)((ulonglong)param_1 >> 8);
  pcVar1 = (char *)(((ulonglong)&stack0x00000000 & 0xffffffff) + 0x5210049 + unaff_RBP * 8);
  *pcVar1 = *pcVar1 + (char)(((ulonglong)&stack0x00000000 & 0xffffffff) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

