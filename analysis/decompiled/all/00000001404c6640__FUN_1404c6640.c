// Function: FUN_1404c6640
// Addr: 1404c6640
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6640(char param_1)

{
  uint *in_RAX;
  longlong unaff_RBX;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)(unaff_RBX + 0x56) = *(char *)(unaff_RBX + 0x56) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

