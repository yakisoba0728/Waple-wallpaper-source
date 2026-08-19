// Function: FUN_1404b3c7c
// Addr: 1404b3c7c
// Size: 1 bytes


void FUN_1404b3c7c(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  short sVar2;
  byte in_AL;
  byte bVar3;
  char cVar4;
  undefined6 in_register_00000002;
  char cVar5;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_GS_OFFSET;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  sVar2 = (ushort)in_AL * (ushort)*(byte *)(unaff_RBP + 0x18);
  bVar3 = (byte)sVar2;
  cVar4 = (char)((ushort)sVar2 >> 8);
  pcVar1 = (char *)(unaff_RBX + 0x4b + unaff_RDI);
  *pcVar1 = *pcVar1 + cVar5;
  *param_1 = *param_1 + cVar4;
  *(byte *)CONCAT62(in_register_00000002,sVar2) =
       *(char *)CONCAT62(in_register_00000002,sVar2) + bVar3;
  pcVar1 = (char *)(unaff_GS_OFFSET + CONCAT62(in_register_00000002,CONCAT11(cVar4,bVar3 * '\x02')))
  ;
  *pcVar1 = (*pcVar1 + bVar3 * -2) - CARRY1(bVar3,bVar3);
  sVar2 = (ushort)(byte)(bVar3 * '\x02') * (ushort)*(byte *)(unaff_RBP + 0x18);
  pcVar1 = (char *)(unaff_RBX + 0x4b + unaff_RDI);
  *pcVar1 = *pcVar1 + cVar5;
  *param_1 = *param_1 + (char)((ushort)sVar2 >> 8);
  *unaff_RSI = *unaff_RSI + (char)sVar2;
  *(char *)CONCAT62(in_register_00000002,sVar2) =
       *(char *)CONCAT62(in_register_00000002,sVar2) + (char)sVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

