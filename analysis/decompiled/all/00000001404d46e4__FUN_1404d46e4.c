// Function: FUN_1404d46e4
// Addr: 1404d46e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d46e4(undefined8 param_1)

{
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  int unaff_ESI;
  byte *pbVar1;
  longlong in_R10;
  char unaff_R12B;
  
  pbVar1 = (byte *)(ulonglong)
                   (uint)(unaff_ESI + *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pbVar1 = *pbVar1 >> ((byte)param_1 & 0x1f);
  pbVar1[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) * 2] =
       pbVar1[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) * 2] + in_AH;
  *(char *)(in_R10 + 2) = *(char *)(in_R10 + 2) + unaff_R12B;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  cRam000000017a4d9440 = cRam000000017a4d9440 - (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

