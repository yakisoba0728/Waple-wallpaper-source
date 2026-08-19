// Function: FUN_14049e73c
// Addr: 14049e73c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049e742) overlaps instruction at (ram,0x00014049e741)
    */
/* WARNING: Removing unreachable block (ram,0x00014049e772) */
/* WARNING: Removing unreachable block (ram,0x00014049e742) */

void FUN_14049e73c(char param_1)

{
  byte *in_RAX;
  undefined1 (*unaff_RBX) [16];
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  undefined1 in_XMM1 [16];
  
                    /* WARNING: Bad instruction - Truncating control flow here */
  *unaff_RDI = *unaff_RDI + param_1;
  *(uint *)(in_RAX + in_FS_OFFSET) = *(uint *)(in_RAX + in_FS_OFFSET) | (uint)in_RAX;
  sysenter();
  *in_RAX = *in_RAX | (byte)in_RAX;
  rsqrtps(in_XMM1,*unaff_RBX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

