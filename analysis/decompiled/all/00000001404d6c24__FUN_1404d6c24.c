// Function: FUN_1404d6c24
// Addr: 1404d6c24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6c24(undefined8 param_1)

{
  byte *pbVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  int unaff_ESI;
  undefined4 unaff_00000034;
  
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + unaff_ESI;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 7);
  *pbVar1 = *pbVar1 ^ (byte)((ulonglong)param_1 >> 8);
  (&stack0x00000000)[CONCAT44(unaff_00000034,unaff_ESI)] =
       (&stack0x00000000)[CONCAT44(unaff_00000034,unaff_ESI)] + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

