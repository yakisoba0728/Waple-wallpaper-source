// Function: FUN_1404a4730
// Addr: 1404a4730
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4730(longlong param_1,undefined8 param_2)

{
  *(char *)(param_1 + 0x78d1000) = *(char *)(param_1 + 0x78d1000) + (char)((ulonglong)param_2 >> 8);
  cRam00000000e44a4eca = cRam00000000e44a4eca + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

