// Function: FUN_1404a07dc
// Addr: 1404a07dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a07dc(undefined8 param_1,longlong param_2)

{
  longlong in_RAX;
  
  *(byte *)(param_2 + 3) = ~*(byte *)(param_2 + 3);
  *(char *)(in_RAX + 0x21004a06) = *(char *)(in_RAX + 0x21004a06) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

