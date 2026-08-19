// Function: FUN_1404c8f40
// Addr: 1404c8f40
// Size: 1 bytes


void FUN_1404c8f40(byte *param_1,byte param_2)

{
  byte bVar1;
  byte in_AL;
  char cVar2;
  byte in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  char *unaff_RSI;
  
  cVar2 = (in_AL & param_2) * '\x02';
  cVar2 = cVar2 + *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2));
  bVar1 = *param_1;
  *param_1 = *param_1 + in_AH;
  *unaff_RSI = (*unaff_RSI - cVar2) - CARRY1(bVar1,in_AH);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + unaff_BL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

