// Function: FUN_1404a0bc8
// Addr: 1404a0bc8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0bc8(char *param_1)

{
  char cVar1;
  uint *in_RAX;
  char *unaff_RBX;
  longlong unaff_RSI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar1 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar1;
  *(char *)(unaff_RSI + -0x79d0fffd) = *(char *)(unaff_RSI + -0x79d0fffd) + cVar1;
  *param_1 = *param_1 + cVar1 + (char)*in_RAX;
  *unaff_RBX = *unaff_RBX + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

