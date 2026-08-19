// Function: FUN_1404b8490
// Addr: 1404b8490
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8490(longlong param_1,char *param_2)

{
  char in_AH;
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + (char)((ulonglong)param_2 >> 8);
  param_2[param_1] = param_2[param_1] + (char)param_2;
  *param_2 = *param_2 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

