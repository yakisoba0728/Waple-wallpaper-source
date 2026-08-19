// Function: FUN_1404d7a28
// Addr: 1404d7a28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7a28(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char in_AL;
  byte bVar2;
  byte bVar3;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar4;
  undefined1 uVar5;
  undefined6 uVar6;
  char unaff_BL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char in_CF;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar5 = (undefined1)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(unaff_RDI + 0x379ca500 + unaff_RSI);
  *pcVar1 = *pcVar1 + unaff_BL + in_CF;
  bVar2 = in_AL + unaff_BL;
  if (-1 < (char)bVar2) {
    *param_1 = *param_1 + in_AH;
    *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + bVar2;
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar4 = (char)param_2 + *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2));
  *param_1 = *param_1 + in_AH;
  *(byte *)CONCAT62(uVar6,CONCAT11(uVar5,cVar4)) =
       *(byte *)CONCAT62(uVar6,CONCAT11(uVar5,cVar4)) | bVar2;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + (char)param_1;
  bVar3 = bVar2 ^ 0x14;
  pcVar1 = (char *)((CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) ^ 0x14) - 0x4dffc84b);
  *pcVar1 = *pcVar1 + bVar3;
  pcVar1 = (char *)((CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) ^ 0x14) + 0x21004d79);
  *pcVar1 = *pcVar1 + in_AH;
  *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) ^ 0x14) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) ^ 0x14) + bVar3;
  pcVar1 = (char *)((CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) ^ 0x14) - 0x4dffc84b);
  *pcVar1 = *pcVar1 + bVar3;
  pcVar1 = (char *)((CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) ^ 0x14) + 0x21004d79);
  *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

