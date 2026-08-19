// Function: FUN_1404bc7c0
// Addr: 1404bc7c0
// Size: 1 bytes


void FUN_1404bc7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  undefined7 in_register_00000001;
  byte bVar3;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  char cVar4;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  bVar3 = cVar4 << 1 | cVar4 < '\0';
  *param_4 = *param_4 + unaff_SPL;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + -0xb2cffde + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + bVar3;
  bVar2 = in_AL & *(byte *)CONCAT71(in_register_00000001,in_AL);
  *param_4 = *param_4 + unaff_SPL;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + bVar2;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + (bVar3 << 1 | (char)bVar3 < '\0');
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

