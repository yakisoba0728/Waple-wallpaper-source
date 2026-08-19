// Function: FUN_1404d4718
// Addr: 1404d4718
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4718(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char *pcVar1;
  char cVar2;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar3;
  int unaff_EBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  byte in_CF;
  
  cVar3 = (char)((ulonglong)param_1 >> 8);
  iRam0000000141694728 = (iRam0000000141694728 - unaff_EBP) - (uint)in_CF;
  cRam000000014a2d5315 = cRam000000014a2d5315 + param_4;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  cVar2 = *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x40);
  *unaff_RSI = *unaff_RSI >> ((byte)param_1 & 0x1f);
  unaff_RSI[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) * 2 + 0x4d] =
       unaff_RSI[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) * 2 + 0x4d] + cVar3;
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)param_2 >> 8),(char)param_2 + cVar2) + 2);
  *pcVar1 = *pcVar1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  cRam00000001b54d9488 = cRam00000001b54d9488 - cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

