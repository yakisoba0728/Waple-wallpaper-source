// Function: FUN_1404cfd34
// Addr: 1404cfd34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfd34(void)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  pcVar1 = (char *)(unaff_RSI +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,
                                     CONCAT11(in_AH,in_AL + *(char *)CONCAT44(in_register_00000004,
                                                                              CONCAT22(
                                                  in_register_00000002,CONCAT11(in_AH,in_AL)))))));
  *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

