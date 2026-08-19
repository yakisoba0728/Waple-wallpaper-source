// Function: FUN_1404b4320
// Addr: 1404b4320
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4320(char *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  byte in_CF;
  
  out((short)param_2,in_AL);
  bVar1 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar2 = *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) - in_AL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) = bVar2 - in_CF;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0xee)) =
       (*(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0xee)) + '\x12') -
       (bVar1 < in_AL || bVar2 < in_CF);
  param_2[0x4b] = param_2[0x4b] ^ 0xee;
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 | 0xee;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0xee)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0xee)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

