// Function: FUN_14049f58c
// Addr: 14049f58c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f58c(void)

{
  uint in_EAX;
  uint uVar1;
  longlong unaff_RBX;
  char unaff_SPL;
  char *in_R9;
  
  uVar1 = in_EAX & *(uint *)(unaff_RBX + -0xb6fffff);
  *in_R9 = *in_R9 + unaff_SPL;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

