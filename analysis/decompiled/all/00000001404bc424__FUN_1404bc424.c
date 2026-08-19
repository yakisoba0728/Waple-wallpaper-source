// Function: FUN_1404bc424
// Addr: 1404bc424
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc424(int *param_1,int param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  char in_AL;
  byte bVar3;
  char cVar4;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_SPL;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & (uint)param_1;
  bVar3 = in_AL + *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) + 0x10);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_1 >> 8);
  *(char *)(unaff_RSI + 0x1e0022a5) = *(char *)(unaff_RSI + 0x1e0022a5) + in_AH;
  bVar3 = bVar3 & *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3));
  *param_4 = *param_4 + unaff_SPL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) + bVar3;
  *(char *)(unaff_RSI + 0x1e0022a9) = *(char *)(unaff_RSI + 0x1e0022a9) + in_AH;
  bVar3 = bVar3 & *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3));
  *param_4 = *param_4 + unaff_SPL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) + bVar3;
  pcVar2 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) + -0x59ffdd5b);
  *pcVar2 = *pcVar2 + bVar3;
  *(undefined4 *)(unaff_RDI + 8) = *(undefined4 *)(unaff_RSI + 8);
  bVar3 = bVar3 & *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3));
  *param_4 = *param_4 + (bVar3 | 0xc3);
  pcVar2 = (char *)((CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) | 0xc3) + unaff_RBP * 2);
  *pcVar2 = *pcVar2 + (char)param_1;
  cVar4 = (bVar3 | 0xc3) + *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3)) | 0xc3) +
          'b';
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) + cVar4;
  *param_1 = *param_1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

