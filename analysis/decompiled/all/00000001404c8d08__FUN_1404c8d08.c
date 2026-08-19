// Function: FUN_1404c8d08
// Addr: 1404c8d08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8d08(longlong param_1)

{
  char in_CF;
  
  (&stack0x040d2100)[param_1 * 2] = (&stack0x040d2100)[param_1 * 2] + (char)param_1 + in_CF;
  cRam00000001484c9b89 = cRam00000001484c9b89 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

