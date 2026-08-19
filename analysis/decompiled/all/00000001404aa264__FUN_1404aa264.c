// Function: FUN_1404aa264
// Addr: 1404aa264
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa264(undefined8 param_1,longlong param_2)

{
  char in_CF;
  
  *(char *)(param_2 + 0xc) = *(char *)(param_2 + 0xc) + (char)((ulonglong)param_2 >> 8) + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

