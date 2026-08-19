// Function: FUN_1404ba5e0
// Addr: 1404ba5e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba5e0(void)

{
  char cVar1;
  uint *in_RAX;
  undefined8 *unaff_RBP;
  
  *in_RAX = *in_RAX | (uint)in_RAX;
  func_0x0001189ea5f4();
  cVar1 = '\x02';
  do {
    unaff_RBP = unaff_RBP + -1;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *(undefined8 *)register0x00000020 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

