// Function: FUN_1404b2560
// Addr: 1404b2560
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2560(longlong param_1,undefined8 param_2)

{
  *(char *)(param_1 + 0x16f3d000) =
       *(char *)(param_1 + 0x16f3d000) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

