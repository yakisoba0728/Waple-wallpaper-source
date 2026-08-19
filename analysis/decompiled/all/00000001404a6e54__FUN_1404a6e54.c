// Function: FUN_1404a6e54
// Addr: 1404a6e54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6e54(void)

{
  uint uVar1;
  uint *in_RAX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  uVar1 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar1;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX | uVar1;
  *in_RAX = *in_RAX | uVar1;
  *unaff_RDI = *unaff_RSI;
  func_0x00014a6b6eaf();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

