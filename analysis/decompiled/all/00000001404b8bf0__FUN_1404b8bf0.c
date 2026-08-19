// Function: FUN_1404b8bf0
// Addr: 1404b8bf0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8bf0(undefined8 param_1,longlong param_2)

{
  *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

