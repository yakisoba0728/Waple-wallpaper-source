// Function: FUN_1404b356c
// Addr: 1404b356c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b356c(char param_1)

{
  uint *in_RAX;
  longlong unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  in(0x17);
  *(char *)(unaff_RDI + -0x1b) = *(char *)(unaff_RDI + -0x1b) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

