// Function: FUN_1404a547c
// Addr: 1404a547c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a547c(byte *param_1,byte *param_2)

{
  char in_AL;
  byte bVar1;
  char in_AH;
  undefined6 in_register_00000002;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  
  bVar1 = in_AL + 0x54U | *param_1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) + (char)unaff_EBX;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) | bVar1;
  *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) =
       *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) - unaff_EBX;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) | bVar1;
  *(char *)(CONCAT44(unaff_0000001c,unaff_EBX) + 0x4a) = (char)param_2;
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 | bVar1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

