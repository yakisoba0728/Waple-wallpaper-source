// Function: FUN_1404aa314
// Addr: 1404aa314
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa314(ulonglong param_1,int param_2)

{
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  uint *unaff_RBX;
  int *unaff_RSI;
  byte *unaff_RDI;
  
  *(byte *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + in_AL;
  *unaff_RBX = *unaff_RBX & (uint)param_1 & 0xffffff49;
  *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + in_AH;
  *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + in_AH;
  *unaff_RSI = *unaff_RSI + param_2;
  cRam00000001522ab719 = cRam00000001522ab719 + (char)param_2;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0x1f) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0x1f) + (in_AL ^ 0x1f);
  *unaff_RBX = *unaff_RBX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

