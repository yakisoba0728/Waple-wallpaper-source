// Function: FUN_1404ca430
// Addr: 1404ca430
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca430(char *param_1,char param_2)

{
  byte in_AL;
  byte bVar1;
  char in_AH;
  undefined6 in_register_00000002;
  uint unaff_EBX;
  char unaff_R12B;
  
  bVar1 = in_AL ^ *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) ^ 0xa3) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) ^ 0xa3) + (bVar1 ^ 0xa3);
  *(char *)((ulonglong)unaff_EBX * 9) = *(char *)((ulonglong)unaff_EBX * 9) + in_AH;
  bVar1 = bVar1 ^ 0xa3 ^ *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) ^ 0xa3);
  bVar1 = bVar1 ^ *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1));
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) ^ 0xa3) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) ^ 0xa3) + (bVar1 ^ 0xa3);
  *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) ^ 0xa3) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) ^ 0xa3) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

