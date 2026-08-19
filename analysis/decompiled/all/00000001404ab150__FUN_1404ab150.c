// Function: FUN_1404ab150
// Addr: 1404ab150
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab150(undefined8 param_1,longlong param_2)

{
  *(byte *)(param_2 + -0x4d80fff2) =
       *(byte *)(param_2 + -0x4d80fff2) & (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

