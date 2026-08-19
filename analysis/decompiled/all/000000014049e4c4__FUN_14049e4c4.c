// Function: FUN_14049e4c4
// Addr: 14049e4c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e4c4(char *param_1,char *param_2)

{
  byte in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *param_2 = *param_2 + (char)param_1;
  if (param_1 == (char *)0x0) {
    *(uint *)(param_2 + 0xd) =
         *(int *)(param_2 + 0xd) + CONCAT22(in_register_00000002,CONCAT11(in_AH + in_AL,in_AL)) +
         (uint)CARRY1(in_AH,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + in_AL;
  in(0xc1);
  *(char *)(unaff_RBX + 0x1d00c264) = *(char *)(unaff_RBX + 0x1d00c264) + (char)unaff_RBX;
  *(char *)(unaff_RSI + 2) = *(char *)(unaff_RSI + 2) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

