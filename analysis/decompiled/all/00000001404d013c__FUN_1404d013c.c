// Function: FUN_1404d013c
// Addr: 1404d013c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d013c(undefined8 param_1,longlong param_2)

{
  char in_AL;
  
  *(char *)(param_2 + 0x6004d00) = *(char *)(param_2 + 0x6004d00) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

