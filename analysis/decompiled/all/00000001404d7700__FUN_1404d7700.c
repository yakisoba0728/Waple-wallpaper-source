// Function: FUN_1404d7700
// Addr: 1404d7700
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7700(undefined8 param_1,char param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  
  pbVar2 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                   CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *pbVar2 = *pbVar2 | in_AH;
  pcVar1 = (char *)((CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | 0x37) + 0x21004d64);
  *pcVar1 = *pcVar1 + unaff_BH + (char)((ulonglong)param_1 >> 8);
  *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | 0x37) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | 0x37) + (in_AL | 0x37);
  pcVar1 = (char *)((CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | 0x37) + 0xc);
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

