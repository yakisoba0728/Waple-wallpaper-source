// Function: FUN_1404d4730
// Addr: 1404d4730
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4730(undefined8 param_1,longlong param_2)

{
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar1;
  byte *unaff_RSI;
  
  cVar1 = (char)((ulonglong)param_1 >> 8);
  *unaff_RSI = *unaff_RSI >> ((byte)param_1 & 0x1f);
  unaff_RSI[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) * 2 + 0x4d] =
       unaff_RSI[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) * 2 + 0x4d] + cVar1;
  *(char *)(param_2 + 2) = *(char *)(param_2 + 2) + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  cRam00000001b54d9488 = cRam00000001b54d9488 - cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

