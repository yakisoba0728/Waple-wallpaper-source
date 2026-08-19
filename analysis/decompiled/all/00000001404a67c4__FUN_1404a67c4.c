// Function: FUN_1404a67c4
// Addr: 1404a67c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a67c4(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char in_AH;
  longlong unaff_RBP;
  char acStackX_8 [32];
  
  acStackX_8[param_2] = acStackX_8[param_2] + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(unaff_RBP + 8 + param_2);
  *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

