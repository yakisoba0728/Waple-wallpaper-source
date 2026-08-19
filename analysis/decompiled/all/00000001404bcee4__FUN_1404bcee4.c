// Function: FUN_1404bcee4
// Addr: 1404bcee4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bcee4(longlong param_1)

{
  uint in_EAX;
  
  while (param_1 = param_1 + -1, param_1 != 0) {
    in_EAX = in_EAX & 0xffffff00 | 0xb740000;
    *(undefined1 *)(ulonglong)in_EAX = *(undefined1 *)(ulonglong)in_EAX;
    *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

