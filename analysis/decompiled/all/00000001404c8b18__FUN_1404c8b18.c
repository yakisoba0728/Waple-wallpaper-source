// Function: FUN_1404c8b18
// Addr: 1404c8b18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8b18(byte param_1,longlong param_2)

{
  byte bVar1;
  byte in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBP;
  
  *(byte *)(param_2 + 0x21004c) = *(byte *)(param_2 + 0x21004c) & param_1;
  bVar1 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *(char *)(unaff_RBP + -0x59c0ffcf) =
       *(char *)(unaff_RBP + -0x59c0ffcf) + in_AH + CARRY1(bVar1,in_AL);
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       ^ CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)(param_2 + 0x2319004c) = *(byte *)(param_2 + 0x2319004c) & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

