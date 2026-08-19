// Function: FUN_1404a75a8
// Addr: 1404a75a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a75a8(char *param_1,char param_2)

{
  byte in_AL;
  byte bVar1;
  char in_AH;
  undefined6 in_register_00000002;
  uint *unaff_RSI;
  
  *(char *)unaff_RSI = (char)*unaff_RSI + (char)param_1;
  bVar1 = in_AL | *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *unaff_RSI = *unaff_RSI ^ (uint)param_1;
  if (bVar1 != 0 || *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) != '\0') {
    *param_1 = *param_1 + in_AH;
    (&stack0x00000000)[(longlong)((longlong)unaff_RSI + 1) * 2] =
         (&stack0x00000000)[(longlong)((longlong)unaff_RSI + 1) * 2] + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

