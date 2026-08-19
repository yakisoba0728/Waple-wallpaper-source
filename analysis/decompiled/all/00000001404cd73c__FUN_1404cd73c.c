// Function: FUN_1404cd73c
// Addr: 1404cd73c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd73c(char *param_1)

{
  char in_AL;
  
  *(uint *)(&stack0x00000001 + (longlong)param_1) =
       *(uint *)(&stack0x00000001 + (longlong)param_1) ^ 0x10d3479;
  *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

