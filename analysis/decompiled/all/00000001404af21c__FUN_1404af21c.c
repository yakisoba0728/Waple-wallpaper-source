// Function: FUN_1404af21c
// Addr: 1404af21c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af21c(char *param_1,longlong param_2)

{
  uint *in_RAX;
  byte unaff_BH;
  longlong unaff_RBP;
  char *unaff_retaddr;
  char cStackX_8;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  param_1[unaff_RBP] = param_1[unaff_RBP] + (char)((ulonglong)in_RAX >> 8);
  *(byte *)(param_2 + -0x4596ffed) = *(byte *)(param_2 + -0x4596ffed) & unaff_BH;
  LOCK();
  *param_1 = *param_1 + '\b';
  UNLOCK();
  *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
  *unaff_retaddr = *unaff_retaddr + (char)((ulonglong)unaff_retaddr >> 8);
  LOCK();
  *param_1 = *param_1 + cStackX_8;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

