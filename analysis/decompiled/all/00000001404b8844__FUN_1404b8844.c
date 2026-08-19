// Function: FUN_1404b8844
// Addr: 1404b8844
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8844(longlong param_1,undefined8 param_2)

{
  char in_AH;
  
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + in_AH;
  *(char *)(param_1 + 0x1e50c000) =
       *(char *)(param_1 + 0x1e50c000) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

