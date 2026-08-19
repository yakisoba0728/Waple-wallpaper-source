// Function: FUN_1404bf898
// Addr: 1404bf898
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf898(longlong param_1,longlong param_2)

{
  *(char *)(param_1 + 0x276be000) =
       *(char *)(param_1 + 0x276be000) + (char)((ulonglong)param_2 >> 8);
  *(char *)(param_2 + 0x6c) = *(char *)(param_2 + 0x6c) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

