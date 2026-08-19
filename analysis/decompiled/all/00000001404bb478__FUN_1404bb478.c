// Function: FUN_1404bb478
// Addr: 1404bb478
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb478(char *param_1,longlong param_2)

{
  char in_AL;
  char cVar1;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BH;
  longlong unaff_RSI;
  char *unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & (uint)param_1;
  cVar1 = in_AL + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  param_1[param_2 + 2] = param_1[param_2 + 2] | in_AH;
  *(char *)(unaff_RSI + 0x21) = *(char *)(unaff_RSI + 0x21) + (char)param_2;
  *unaff_RDI = *unaff_RDI + unaff_BH;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1));
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1)))
       + cVar1;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1)))
       + cVar1;
  *(longlong *)(unaff_RSI + -8) = unaff_RSI;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

