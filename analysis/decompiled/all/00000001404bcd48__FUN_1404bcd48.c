// Function: FUN_1404bcd48
// Addr: 1404bcd48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bcd48(longlong param_1)

{
  int *piVar1;
  char *pcVar2;
  byte *pbVar3;
  byte bVar4;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  byte in_R10B;
  byte *unaff_R14;
  undefined1 auStack_4bd3 [19403];
  
  piVar1 = (int *)(unaff_RSI + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *piVar1 = *piVar1 + (int)auStack_4bd3;
  pcVar2 = (char *)(param_1 + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar2 = *pcVar2 + in_AH;
  bVar4 = *unaff_R14;
  *unaff_R14 = *unaff_R14 + in_R10B;
  pbVar3 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + unaff_RSI * 2);
  *pbVar3 = *pbVar3 << 1 | CARRY1(bVar4,in_R10B);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

