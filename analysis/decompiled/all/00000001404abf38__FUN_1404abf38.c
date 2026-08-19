// Function: FUN_1404abf38
// Addr: 1404abf38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abf38(longlong param_1)

{
  uint in_EAX;
  undefined1 *unaff_RBX;
  uint *unaff_RDI;
  
  if (param_1 + -1 == 0 || (in_EAX | 0x7f00932) == 0) {
    *unaff_RBX = *unaff_RBX;
  }
  *unaff_RDI = *unaff_RDI & (uint)(param_1 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

