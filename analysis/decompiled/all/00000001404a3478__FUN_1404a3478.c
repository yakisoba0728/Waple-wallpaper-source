// Function: FUN_1404a3478
// Addr: 1404a3478
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3478(undefined8 param_1,longlong param_2)

{
  char in_AL;
  char cVar1;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_GS_OFFSET;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  cVar1 = in_AL + *(char *)(unaff_GS_OFFSET + unaff_RSI);
  *(char *)(param_2 + 0x4c000602) = *(char *)(param_2 + 0x4c000602) + cVar1;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1)))
       + cVar1;
  *(char *)(unaff_RBP + 2) = *(char *)(unaff_RBP + 2) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

