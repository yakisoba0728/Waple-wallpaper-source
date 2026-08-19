// Function: FUN_1404c02ac
// Addr: 1404c02ac
// Size: 1 bytes


void FUN_1404c02ac(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  char in_AH;
  char cVar3;
  undefined6 in_register_00000002;
  char *unaff_RSI;
  char *unaff_RDI;
  
  cVar3 = in_AH + (char)((ulonglong)param_2 >> 8);
  bVar2 = in_AL | *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar3,in_AL));
  *unaff_RDI = *unaff_RDI << 1;
  *param_1 = *param_1 + cVar3;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar3,bVar2)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar3,bVar2)) &
       (byte)((ulonglong)param_1 >> 8);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(cVar3,bVar2)) + 0x21004c01);
  *pcVar1 = *pcVar1 + (char)param_1;
  *unaff_RSI = *unaff_RSI + bVar2;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar3,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar3,bVar2)) + bVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

