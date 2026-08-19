// Function: FUN_1404bfa20
// Addr: 1404bfa20
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bfa20(longlong param_1)

{
  int in_EAX;
  uint uVar1;
  int unaff_EBX;
  char *unaff_RSI;
  byte in_CF;
  
  uVar1 = (in_EAX + -0xe005001) - (uint)in_CF;
  if (param_1 + -1 != 0 && uVar1 != 0) {
    *unaff_RSI = *unaff_RSI + (char)(param_1 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SBORROW4(in_EAX,0xe005001) == SBORROW4(in_EAX + -0xe005001,(uint)in_CF)) {
    *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
    iRam000000014168fa3a = iRam000000014168fa3a + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

