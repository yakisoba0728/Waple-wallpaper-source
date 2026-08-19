// Function: FUN_1404b3c00
// Addr: 1404b3c00
// Size: 1 bytes


void FUN_1404b3c00(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong unaff_retaddr;
  char cStackX_8;
  
  *(byte *)(unaff_RSI + unaff_RBP) =
       *(byte *)(unaff_RSI + unaff_RBP) | (byte)((ulonglong)param_2 >> 8);
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x59);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AH;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       (*(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) - in_AL) - CARRY1(bVar2,in_AH)
  ;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       (*(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) - in_AL) -
       ((unaff_retaddr & 1) != 0);
  *param_4 = *param_4 + '\x10';
  *param_2 = *param_2 + cStackX_8;
  *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | 0x3b) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | 0x3b) + (in_AL | 0x3b);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

