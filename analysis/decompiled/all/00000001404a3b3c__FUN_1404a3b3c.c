// Function: FUN_1404a3b3c
// Addr: 1404a3b3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3b3c(char *param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char in_AL;
  char cVar3;
  char in_AH;
  undefined6 in_register_00000002;
  byte unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & (uint)param_1;
  cVar3 = in_AL + *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  pbVar2 = (byte *)(CONCAT71(unaff_00000019,unaff_BL) + param_2);
  *pbVar2 = *pbVar2 | (byte)((ulonglong)param_2 >> 8);
  pbVar2 = (byte *)(unaff_RSI + 0x69c3400 + CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)));
  *pbVar2 = *pbVar2 & unaff_BL;
  pcVar1 = (char *)(param_2 + 0x4a + unaff_RDI);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) + cVar3;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

