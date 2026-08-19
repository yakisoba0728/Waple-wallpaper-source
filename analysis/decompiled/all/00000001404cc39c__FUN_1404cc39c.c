// Function: FUN_1404cc39c
// Addr: 1404cc39c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404cc3a4) */

void FUN_1404cc39c(undefined8 param_1,longlong param_2)

{
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

