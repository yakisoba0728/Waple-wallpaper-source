// Function: FUN_1404abc34
// Addr: 1404abc34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abc34(char param_1)

{
  uint *in_RAX;
  longlong unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(char *)(unaff_RDI + -0x70d4fff1) = *(char *)(unaff_RDI + -0x70d4fff1) + param_1;
  verw();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

