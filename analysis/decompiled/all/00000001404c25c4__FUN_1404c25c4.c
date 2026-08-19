// Function: FUN_1404c25c4
// Addr: 1404c25c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c25c4(longlong param_1,int *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  byte bVar3;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  char in_CF;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  pcVar2 = (char *)(param_1 + CONCAT71(unaff_00000019,unaff_BL));
  *pcVar2 = (*pcVar2 - bVar3) - in_CF;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + unaff_BL;
  *param_2 = *param_2 + (int)param_2;
  pcVar2 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + unaff_RSI * 8);
  *pcVar2 = *pcVar2 + (char)param_1;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH | in_AL,in_AL)) + 7);
  *pbVar1 = *pbVar1 | bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

