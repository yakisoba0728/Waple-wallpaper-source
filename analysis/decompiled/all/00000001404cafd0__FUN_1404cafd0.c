// Function: FUN_1404cafd0
// Addr: 1404cafd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cafd0(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x33) = *(undefined1 *)(param_2 + 0x33);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

