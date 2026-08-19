// Function: FUN_1404d46d4
// Addr: 1404d46d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d46d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char in_AL;
  char cVar1;
  char in_AH;
  undefined6 in_register_00000002;
  byte *unaff_RSI;
  byte *unaff_RDI;
  longlong in_R10;
  char unaff_R12B;
  char in_CF;
  
  cVar1 = (in_AL + -1) - in_CF;
  cRam000000014a2d52cd = cRam000000014a2d52cd + param_4;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  *unaff_RSI = *unaff_RSI >> ((byte)param_1 & 0x1f);
  unaff_RSI[CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) * 2] =
       unaff_RSI[CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) * 2] + in_AH;
  *(char *)(in_R10 + 2) = *(char *)(in_R10 + 2) + unaff_R12B;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) + cVar1;
  cRam000000017a4d9440 = cRam000000017a4d9440 - (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

