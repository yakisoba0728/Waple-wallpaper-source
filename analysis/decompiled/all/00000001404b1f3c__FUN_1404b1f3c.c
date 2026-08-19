// Function: FUN_1404b1f3c
// Addr: 1404b1f3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1f3c(longlong param_1,undefined8 param_2)

{
  *(char *)(param_1 + 0x1652b000) =
       *(char *)(param_1 + 0x1652b000) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

