// Function: FUN_1404c50b4
// Addr: 1404c50b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c50b4(longlong param_1,longlong param_2)

{
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined4 *unaff_RSI;
  char in_ZF;
  
  out(*unaff_RSI,(short)param_2);
  if (param_1 == 1 || in_ZF == '\0') {
    *(char *)(param_2 + -0x73ffd21f) = *(char *)(param_2 + -0x73ffd21f) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

