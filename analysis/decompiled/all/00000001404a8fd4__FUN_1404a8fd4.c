// Function: FUN_1404a8fd4
// Addr: 1404a8fd4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8fd4(longlong param_1)

{
  byte *pbVar1;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] ^ (byte)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RBX + 0x2c) = *(char *)(unaff_RBX + 0x2c) + in_AH;
  pbVar1 = (byte *)(unaff_RSI + 0x21004a);
  *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

