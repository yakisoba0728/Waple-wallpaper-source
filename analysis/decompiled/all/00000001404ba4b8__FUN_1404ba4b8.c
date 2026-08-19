// Function: FUN_1404ba4b8
// Addr: 1404ba4b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba4b8(char param_1)

{
  char *pcVar1;
  byte in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + -0x53ffdf49) = *(char *)(unaff_RSI + -0x53ffdf49) + in_AL;
  uRamb72000000021004b = CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & in_AL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + 0x21004ba3);
  *pcVar1 = *pcVar1 + in_AH;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *pcVar1 = *pcVar1 + param_1;
  in(0x48);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

