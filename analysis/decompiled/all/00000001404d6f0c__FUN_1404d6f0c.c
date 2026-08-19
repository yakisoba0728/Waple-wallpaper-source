// Function: FUN_1404d6f0c
// Addr: 1404d6f0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6f0c(undefined8 param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  undefined1 *unaff_RSI;
  byte *unaff_RDI;
  char unaff_R12B;
  
  cRam00000001a04d7a4d = cRam00000001a04d7a4d + in_AL;
  *unaff_RDI = *unaff_RDI | (byte)((ushort)param_2 >> 8);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x28003708);
  *pcVar1 = *pcVar1 + (char)param_2;
  out(*unaff_RSI,param_2);
  *param_4 = *param_4 + unaff_R12B;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 8);
  *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

