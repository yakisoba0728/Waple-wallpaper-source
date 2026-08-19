// Function: FUN_1404a2e00
// Addr: 1404a2e00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2e00(undefined8 param_1)

{
  cRam00000001524b2e50 = cRam00000001524b2e50 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

