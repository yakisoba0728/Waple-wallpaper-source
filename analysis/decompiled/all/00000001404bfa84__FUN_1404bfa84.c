// Function: FUN_1404bfa84
// Addr: 1404bfa84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bfa84(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RSI;
  
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & param_2;
  cVar3 = in_AH * '\x02';
  pbVar2 = (byte *)(unaff_RSI + CONCAT62(in_register_00000002,CONCAT11(cVar3,in_AL)) * 2);
  *pbVar2 = *pbVar2 | (byte)(param_2 >> 8);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(cVar3,in_AL)) + -0x5e);
  *pcVar1 = *pcVar1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

