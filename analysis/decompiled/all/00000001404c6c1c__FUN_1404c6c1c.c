// Function: FUN_1404c6c1c
// Addr: 1404c6c1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6c1c(longlong param_1,longlong param_2)

{
  *(byte *)(param_1 + param_2) = *(byte *)(param_1 + param_2) | (byte)param_2;
  *(undefined1 *)(param_1 + 0x2f) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

