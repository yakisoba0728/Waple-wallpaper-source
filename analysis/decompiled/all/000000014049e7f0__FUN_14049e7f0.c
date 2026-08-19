// Function: FUN_14049e7f0
// Addr: 14049e7f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e7f0(void)

{
  uint in_EAX;
  uint uVar1;
  char unaff_SPL;
  char *in_R9;
  bool in_OF;
  
  if (!in_OF) {
    *in_R9 = *in_R9 + unaff_SPL;
    uVar1 = in_EAX | 0x640d0004;
    *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

