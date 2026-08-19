// Function: FUN_1404a488c
// Addr: 1404a488c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a488c(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char in_AH;
  char cVar2;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + cVar2;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + param_1);
  *pcVar1 = *pcVar1 + in_AH;
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + (char)param_2;
  *(char *)(param_1 + 0x79e8000) = *(char *)(param_1 + 0x79e8000) + cVar2;
  *(char *)(unaff_RBP + 0x2800079e) = *(char *)(unaff_RBP + 0x2800079e) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

