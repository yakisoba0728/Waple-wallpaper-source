// Function: FUN_1404d7aa4
// Addr: 1404d7aa4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7aa4(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_R12B;
  
  cVar2 = cRam0e00040e21004d79;
  *(byte *)(param_1 + 0x36) = *(byte *)(param_1 + 0x36) ^ (byte)param_2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + param_2 * 2);
  *pcVar1 = *pcVar1 + in_AH;
  *param_4 = *param_4 + unaff_R12B;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + cVar2;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) +
       (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + param_2 * 2);
  *pcVar1 = *pcVar1 + in_AH;
  *param_4 = *param_4 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

