// Function: FUN_1404a5144
// Addr: 1404a5144
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5144(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  char in_AL;
  byte bVar3;
  byte in_AH;
  undefined6 in_register_00000002;
  char cVar4;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) - in_AL;
  bVar2 = *param_1;
  *param_1 = *param_1 + in_AH;
  bVar3 = in_AL + '\x06' + CARRY1(bVar2,in_AH);
  (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + (char)param_2;
  bVar2 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3));
  param_1[0x7e40400] = param_1[0x7e40400] + cVar4;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3 | bVar2)) + -0xe);
  *pcVar1 = *pcVar1 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

