// Function: FUN_1404c95d0
// Addr: 1404c95d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c95d0(longlong param_1,longlong param_2)

{
  char in_AH;
  char cVar1;
  longlong unaff_RBX;
  
  cVar1 = (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RBX + param_2) = *(char *)(unaff_RBX + param_2) + cVar1;
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + in_AH;
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

