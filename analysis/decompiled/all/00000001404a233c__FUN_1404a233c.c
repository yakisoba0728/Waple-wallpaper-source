// Function: FUN_1404a233c
// Addr: 1404a233c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a233c(char *param_1,int *param_2)

{
  char in_AL;
  char in_AH;
  char cVar1;
  char in_CF;
  
  cVar1 = (char)((ulonglong)param_1 >> 8);
  *(char *)param_2 = (char)*param_2 + in_AH + in_CF;
  *param_1 = *param_1 + in_AL;
  *param_2 = *param_2 - (int)param_1;
  *param_1 = *param_1 + cVar1;
  *param_1 = *param_1 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

