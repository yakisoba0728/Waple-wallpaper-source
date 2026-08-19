// Function: FUN_1404a1f1c
// Addr: 1404a1f1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1f1c(undefined8 param_1,longlong param_2)

{
  undefined8 in_RAX;
  
  *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | (byte)((ulonglong)in_RAX >> 8);
  *(char *)(ulonglong)uRam0021004a1e280004 =
       *(char *)(ulonglong)uRam0021004a1e280004 + (char)uRam0021004a1e280004;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

