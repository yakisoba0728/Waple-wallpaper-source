// Function: FUN_1404a6ba4
// Addr: 1404a6ba4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6ba4(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char *pcVar2;
  char unaff_BH;
  char unaff_SPL;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char in_ZF;
  
  pcVar2 = (char *)(param_1 + -1);
  if (pcVar2 == (char *)0x0 || in_ZF != '\0') {
    *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) | CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
    *(char *)(unaff_RSI + 0x6aa40009) = *(char *)(unaff_RSI + 0x6aa40009) + unaff_BH;
    *pcVar2 = *pcVar2 + unaff_SPL;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + (char)pcVar2;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AL;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *pcVar2 = *pcVar2 + in_AH;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x13fff649);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)pcVar2 >> 8);
  *pcVar2 = *pcVar2 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

