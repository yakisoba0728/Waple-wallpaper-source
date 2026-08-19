// Function: FUN_1404b0a7c
// Addr: 1404b0a7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0a7c(longlong param_1,longlong param_2)

{
  char in_AH;
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX + param_2) = *(char *)(unaff_RBX + param_2) + (char)((ulonglong)param_2 >> 8);
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + in_AH;
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

