// Function: FUN_1404bab04
// Addr: 1404bab04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bab04(void)

{
  int in_EAX;
  uint uVar1;
  char unaff_SPL;
  char *in_R9;
  
  uVar1 = in_EAX + 0x57000e54;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 & (byte)uVar1;
  *in_R9 = *in_R9 + unaff_SPL;
  uVar1 = in_EAX + 0xbb050e56;
  verw();
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 & (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

