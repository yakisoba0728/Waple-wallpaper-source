// Function: FUN_1404b8e88
// Addr: 1404b8e88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8e88(char param_1,longlong param_2,longlong param_3)

{
  uint *in_RAX;
  undefined1 unaff_R12B;
  
  *(char *)(param_2 + -0x68) = *(char *)(param_2 + -0x68) + param_1;
  *(undefined1 *)(param_3 + (ulonglong)((uint)in_RAX & *in_RAX)) = unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

