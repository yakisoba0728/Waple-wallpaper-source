// Function: FUN_1404af230
// Addr: 1404af230
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af230(char *param_1,longlong param_2)

{
  uint *in_RAX;
  byte unaff_BH;
  char unaff_retaddr;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(byte *)(param_2 + -0x4596ffed) = *(byte *)(param_2 + -0x4596ffed) & unaff_BH;
  LOCK();
  *param_1 = *param_1 + unaff_retaddr;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

