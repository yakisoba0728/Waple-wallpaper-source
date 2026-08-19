// Function: FUN_1404a7c3c
// Addr: 1404a7c3c
// Size: 1 bytes


void FUN_1404a7c3c(char *param_1)

{
  byte *pbVar1;
  byte in_AL;
  byte bVar2;
  undefined6 in_register_00000002;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  
  bVar2 = in_AL | *(byte *)CONCAT62(in_register_00000002,CONCAT11(0x98,in_AL));
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4a);
  *pbVar1 = *pbVar1 ^ unaff_BH;
  *param_1 = *param_1 + -0x68;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(0x98,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(0x98,bVar2)) + bVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

