// Function: FUN_1404d1d0c
// Addr: 1404d1d0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1d0c(longlong param_1)

{
  longlong in_RAX;
  
  *(byte *)(param_1 + -0x4e60ffcb) = *(byte *)(param_1 + -0x4e60ffcb) ^ 0x35;
  *(char *)(in_RAX + 0x210049ed) = *(char *)(in_RAX + 0x210049ed) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

