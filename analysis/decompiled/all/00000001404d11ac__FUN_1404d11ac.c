// Function: FUN_1404d11ac
// Addr: 1404d11ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d11ac(ulonglong param_1,byte *param_2)

{
  char *pcVar1;
  short sVar2;
  char in_AL;
  char cVar3;
  byte bVar4;
  undefined1 in_AH;
  char cVar5;
  undefined6 in_register_00000002;
  char cVar6;
  longlong unaff_RSI;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(unaff_RSI + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar1 = *pcVar1 + cVar6;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x62ffc30a);
  *pcVar1 = *pcVar1 + in_AL;
  sVar2 = (short)*(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                          CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  cVar3 = (char)(CONCAT11(in_AH,in_AL) / sVar2);
  cVar5 = (char)(CONCAT11(in_AH,in_AL) % sVar2);
  *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + cVar5;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar5,cVar3)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar5,cVar3)) + cVar3;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(cVar5,cVar3)) + -0x62ffc30a);
  *pcVar1 = *pcVar1 + cVar3;
  sVar2 = (short)*(char *)(CONCAT62(in_register_00000002,CONCAT11(cVar5,cVar3)) +
                          CONCAT62(in_register_00000002,CONCAT11(cVar5,cVar3)));
  bVar4 = (byte)(CONCAT11(cVar5,cVar3) / sVar2);
  cVar3 = (char)(CONCAT11(cVar5,cVar3) % sVar2);
  *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + cVar3;
  *param_2 = *param_2 | bVar4;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar3,bVar4)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar3,bVar4)) + ((byte)param_1 & 0x49);
  pcVar1 = (char *)((CONCAT62(in_register_00000002,CONCAT11(cVar3,bVar4)) ^ 0x12) - 0x1f);
  *pcVar1 = *pcVar1 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

