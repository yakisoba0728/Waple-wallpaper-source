// Function: FUN_1404aa67c
// Addr: 1404aa67c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa67c(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  cVar2 = in_AL + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  pcVar1 = (char *)(unaff_RSI +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))));
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar2))) + -0x49fff1bf);
  *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

