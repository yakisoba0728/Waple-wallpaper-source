// Function: FUN_1404d0214
// Addr: 1404d0214
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0214(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  short in_AX;
  longlong unaff_RDI;
  
  pcVar1 = (char *)((ulonglong)((int)in_AX + 0x6885300) + unaff_RDI * 2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

