// Function: FUN_1404d6f4c
// Addr: 1404d6f4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6f4c(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char in_AL;
  byte bVar3;
  byte bVar4;
  char cVar5;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char in_CF;
  
  bVar3 = in_AL + 't' + in_CF;
  bVar4 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3));
  param_1[CONCAT71(unaff_00000019,unaff_BL)] = param_1[CONCAT71(unaff_00000019,unaff_BL)] + in_AH;
  bVar4 = bVar3 | bVar4 | 0x54;
  cVar5 = bVar4 + 0x34;
  bVar4 = cVar5 + *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)) + (0xcb < bVar4);
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) + 0x36);
  *pbVar1 = *pbVar1 ^ bVar4;
  pcVar2 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) + 0x36 +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) * 2);
  *pcVar2 = *pcVar2 + unaff_BL;
  pcVar2 = (char *)(unaff_RSI + 0x4d + unaff_RBP * 2);
  *pcVar2 = *pcVar2 + in_AH;
  *param_1 = *param_1 + in_AH;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) + bVar4;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) +
       (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

