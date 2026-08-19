// Function: FUN_1404ce1a0
// Addr: 1404ce1a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce1a0(longlong param_1,longlong param_2)

{
  char in_AL;
  
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + in_AL;
  *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_1 + 0x39);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

