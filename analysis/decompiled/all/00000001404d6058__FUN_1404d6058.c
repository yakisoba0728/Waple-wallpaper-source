// Function: FUN_1404d6058
// Addr: 1404d6058
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6058(undefined8 param_1,longlong param_2)

{
  longlong in_RAX;
  
  *(char *)(in_RAX + param_2) = *(char *)(in_RAX + param_2) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

