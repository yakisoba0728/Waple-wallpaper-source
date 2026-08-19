// Function: FUN_1404b90dc
// Addr: 1404b90dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b90dc(longlong param_1,longlong param_2)

{
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + (char)((ulonglong)param_2 >> 8);
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

