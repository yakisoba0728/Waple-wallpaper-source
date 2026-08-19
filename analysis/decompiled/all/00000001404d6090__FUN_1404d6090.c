// Function: FUN_1404d6090
// Addr: 1404d6090
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6090(void)

{
  int in_EAX;
  uint uVar1;
  char unaff_SPL;
  char *in_R9;
  
  uVar1 = in_EAX + 0x50003791;
  *in_R9 = *in_R9 + unaff_SPL;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

