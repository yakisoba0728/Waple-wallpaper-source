// Function: FUN_1404bc7b0
// Addr: 1404bc7b0
// Size: 1 bytes


void FUN_1404bc7b0(byte param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar3;
  char cVar4;
  uint uVar5;
  longlong unaff_RSI;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  bVar2 = in_AL | *(byte *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  bVar2 = bVar2 & *(byte *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(0xf4,bVar2)));
  uVar5 = (int)&stack0x00000000 << (param_1 & 0x1f);
  bVar2 = bVar2 & *(byte *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(0xf4,bVar2)));
  bVar3 = cVar4 << 1 | cVar4 < '\0';
  cVar4 = (char)uVar5;
  *param_4 = *param_4 + cVar4;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0xf4,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0xf4,bVar2))) +
       bVar2;
  pcVar1 = (char *)(((ulonglong)uVar5 - 0xb2cffde) + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + bVar3;
  bVar2 = bVar2 & *(byte *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(0xf4,bVar2)));
  *param_4 = *param_4 + cVar4;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0xf4,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0xf4,bVar2))) +
       bVar2;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0xf4,bVar2))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0xf4,bVar2))) +
       (bVar3 << 1 | (char)bVar3 < '\0');
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

