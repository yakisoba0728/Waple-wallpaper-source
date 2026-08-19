// Function: FUN_1404d1ed0
// Addr: 1404d1ed0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1ed0(longlong param_1)

{
  uint *in_RAX;
  byte unaff_BL;
  int *unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(byte *)(param_1 + -0x66adffc7) = *(byte *)(param_1 + -0x66adffc7) ^ unaff_BL;
  *unaff_RDI = *unaff_RDI + ((int)(uint)in_RAX >> 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

