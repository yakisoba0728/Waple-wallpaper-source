// Function: FUN_1404bdcb0
// Addr: 1404bdcb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdcb0(undefined1 *param_1)

{
  uint *in_RAX;
  longlong unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(undefined1 *)(unaff_RDI + 0x25) = 0;
  *param_1 = *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

