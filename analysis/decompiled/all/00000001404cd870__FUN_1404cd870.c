// Function: FUN_1404cd870
// Addr: 1404cd870
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd870(longlong param_1,longlong param_2)

{
  char *pcVar1;
  byte in_AL;
  char cVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBP;
  
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + in_AH;
  pcVar1 = (char *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 0xe4) +
                   param_1);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 0xe4) + 6);
  *pcVar1 = *pcVar1 + (in_AL | 0xe4);
  *(char *)(unaff_RBP + 6) = *(char *)(unaff_RBP + 6) + (char)((ulonglong)param_1 >> 8);
  cVar2 = (in_AL | 0xe4) + (char)param_2;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2)))
       + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

