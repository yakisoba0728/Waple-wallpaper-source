// Function: FUN_1404d4934
// Addr: 1404d4934
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4934(void)

{
  char in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte *unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *unaff_RSI = *unaff_RSI << 5 | *unaff_RSI >> 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

