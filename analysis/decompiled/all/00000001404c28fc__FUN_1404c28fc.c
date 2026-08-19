// Function: FUN_1404c28fc
// Addr: 1404c28fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c28fc(char *param_1,int *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char in_AL;
  char cVar4;
  byte bVar5;
  byte in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  char unaff_SPL;
  longlong unaff_RSI;
  
  cVar4 = in_AL - *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) + cVar4;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) + in_AH;
  cVar4 = cVar4 - *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4));
  bVar5 = cVar4 - *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4));
  bVar3 = *param_4;
  *param_4 = *param_4 + (byte)param_2;
  *param_1 = (*param_1 - (char)param_1) - CARRY1(bVar3,(byte)param_2);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) + unaff_BL;
  *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) ^ 0x19) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) ^ 0x19) + unaff_BL;
  *param_2 = *param_2 + (int)param_2;
  pcVar2 = (char *)((CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) ^ 0x19) + unaff_RSI * 8);
  *pcVar2 = *pcVar2 + (char)param_1;
  pbVar1 = (byte *)((CONCAT62(in_register_00000002,CONCAT11(in_AH | bVar5 ^ 0x19,bVar5)) ^ 0x19) + 7
                   );
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

