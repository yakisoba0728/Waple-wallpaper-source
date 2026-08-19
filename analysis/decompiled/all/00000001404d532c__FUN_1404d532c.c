// Function: FUN_1404d532c
// Addr: 1404d532c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d532c(uint param_1,longlong param_2)

{
  longlong in_RAX;
  
  *(uint *)(&stack0x00000000 + in_RAX) = *(uint *)(&stack0x00000000 + in_RAX) & param_1;
  (&stack0x00000000)[param_2 * 8] = (&stack0x00000000)[param_2 * 8] + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

