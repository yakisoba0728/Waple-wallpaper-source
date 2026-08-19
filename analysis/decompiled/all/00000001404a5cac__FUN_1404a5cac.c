// Function: FUN_1404a5cac
// Addr: 1404a5cac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5cac(char *param_1)

{
  byte bVar1;
  char in_AL;
  char in_AH;
  char cVar2;
  undefined6 in_register_00000002;
  byte *unaff_RSI;
  
  param_1[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x8ad3c00] =
       (byte)param_1[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x8ad3c00] >> 1;
  cVar2 = in_AH + in_AL;
  *param_1 = *param_1 + '\b';
  *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar2,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar2,in_AL)) + in_AL;
  bVar1 = *unaff_RSI;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar2,bVar1)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar2,bVar1)) | bVar1;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar2,bVar1)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar2,bVar1)) | bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

