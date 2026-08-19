// Function: FUN_1404c9f78
// Addr: 1404c9f78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9f78(longlong param_1,byte *param_2,char param_3)

{
  int *piVar1;
  char *pcVar2;
  byte in_AL;
  char cVar3;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RSI;
  
  piVar1 = (int *)(unaff_RSI + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *piVar1 = *piVar1 + (int)param_2;
  pcVar2 = (char *)(param_1 + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar2 = *pcVar2 + (char)param_2;
  cRam0000000143aca3f5 = cRam0000000143aca3f5 + param_3;
  *param_2 = *param_2 ^ in_AL;
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & (uint)param_1;
  cVar3 = in_AL + *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  pcVar2 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) + -0x57ffcd74);
  *pcVar2 = *pcVar2 + param_3;
  pcVar2 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar3)) + 0x21004c9e);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

