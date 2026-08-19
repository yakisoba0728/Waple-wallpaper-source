// Function: FUN_1404a7d44
// Addr: 1404a7d44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7d44(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar1 = (char *)(unaff_RSI + 0x3c000ab0);
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + in_AH;
  if (SCARRY1(cVar2,in_AH) == *pcVar1 < '\0') {
    *param_1 = *param_1 + in_AH;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,10))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,10))) +
         '\n';
    pcVar1 = (char *)(CONCAT44(in_register_00000004,
                               CONCAT22(in_register_00000002,CONCAT11(in_AH,10))) + -0x51);
    *pcVar1 = *pcVar1 + in_AH;
    (&stack0x00000000)[unaff_RDI * 2] =
         (&stack0x00000000)[unaff_RDI * 2] + (char)((ulonglong)param_1 >> 8);
    *param_1 = *param_1;
    *param_2 = *param_2 + (char)param_1;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,10))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,10))) +
         '\n';
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

