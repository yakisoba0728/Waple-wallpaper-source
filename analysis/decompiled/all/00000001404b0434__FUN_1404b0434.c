// Function: FUN_1404b0434
// Addr: 1404b0434
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0434(char *param_1)

{
  int in_EAX;
  uint uVar1;
  char *unaff_RDI;
  byte in_CF;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    uVar1 = in_EAX + 0x4b033c00 + (uint)in_CF;
    *param_1 = *param_1 + (char)(uVar1 >> 8);
    *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
    *unaff_RDI = *unaff_RDI + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

