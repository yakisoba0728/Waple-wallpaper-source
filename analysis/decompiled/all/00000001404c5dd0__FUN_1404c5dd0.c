// Function: FUN_1404c5dd0
// Addr: 1404c5dd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5dd0(longlong param_1,undefined8 param_2)

{
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

