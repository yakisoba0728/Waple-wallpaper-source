// Function: FUN_1404a0d40
// Addr: 1404a0d40
// Size: 1 bytes


void FUN_1404a0d40(char *param_1)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar3;
  char cVar4;
  undefined6 uVar5;
  char unaff_BL;
  char unaff_SPL;
  longlong unaff_RBP;
  char *unaff_RSI;
  
  uVar5 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar3 = (char)param_1;
  bVar2 = in_AL ^ 0xc;
  *param_1 = *param_1 + unaff_SPL;
  *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0xc) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0xc) + bVar2;
  cVar4 = (char)((ulonglong)param_1 >> 8) + bVar2;
  *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0xc) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0xc) + unaff_BL;
  *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar3)) =
       *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar3)) + in_AH;
  *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0xc | 0x4a) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0xc | 0x4a) + (bVar2 | 0x4a)
  ;
  pcVar1 = (char *)((CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0xc | 0x4a) - 0x3afffc72
                   );
  *pcVar1 = *pcVar1 + in_AH;
  *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + in_AH;
  *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar3)) =
       *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar3)) + in_AH;
  *unaff_RSI = *unaff_RSI + cVar3;
  *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0xc | 0x4a) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0xc | 0x4a) + (bVar2 | 0x4a)
  ;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

