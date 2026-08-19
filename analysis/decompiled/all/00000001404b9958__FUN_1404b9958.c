// Function: FUN_1404b9958
// Addr: 1404b9958
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9958(longlong param_1)

{
  char in_CF;
  
  *(char *)(param_1 + 0x1f) = *(char *)(param_1 + 0x1f) - in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

