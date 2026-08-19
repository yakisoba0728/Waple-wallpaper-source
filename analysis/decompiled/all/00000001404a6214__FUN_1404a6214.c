// Function: FUN_1404a6214
// Addr: 1404a6214
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6214(void)

{
  uint *puVar1;
  char in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_SPL;
  uint *unaff_RSI;
  char *in_R9;
  
  *(byte *)unaff_RSI = (byte)*unaff_RSI & in_AH;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *unaff_RSI = *unaff_RSI & 0xe6340009;
  *in_R9 = *in_R9 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AH;
  puVar1 = (uint *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *puVar1 = *puVar1 | CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *unaff_RSI = *unaff_RSI & 0xe6340009;
  *in_R9 = *in_R9 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

