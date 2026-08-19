// Function: FUN_1404a6338
// Addr: 1404a6338
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6338(byte *param_1,ulonglong param_2)

{
  uint *in_RAX;
  char unaff_BH;
  char unaff_SPL;
  bool in_PF;
  
  if (!in_PF) {
    *in_RAX = *in_RAX | (uint)in_RAX;
    *param_1 = *param_1 ^ (byte)param_1;
    *(char *)(param_2 & 0xffffffff) = *(char *)(param_2 & 0xffffffff) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + unaff_SPL;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

