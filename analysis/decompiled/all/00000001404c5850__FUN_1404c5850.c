// Function: FUN_1404c5850
// Addr: 1404c5850
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5850(undefined8 param_1,longlong param_2)

{
  char in_CF;
  
  *(char *)(param_2 + 0x14) = (*(char *)(param_2 + 0x14) - (char)param_2) - in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

