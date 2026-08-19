// Function: FUN_1404d6590
// Addr: 1404d6590
// Size: 1 bytes


void FUN_1404d6590(undefined8 param_1,int param_2)

{
  int iVar1;
  char in_AL;
  byte bVar2;
  char in_AH;
  undefined6 in_register_00000002;
  uint unaff_EBP;
  uint *unaff_RSI;
  
  bVar2 = in_AL + 0x70;
  iVar1 = *(int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + 2);
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) ^ bVar2;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + in_AH;
  *(byte *)unaff_RSI = (byte)*unaff_RSI >> 1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) +
       (char)((uint)(param_2 + iVar1) >> 8);
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + bVar2;
  *unaff_RSI = *unaff_RSI & unaff_EBP;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) | bVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

