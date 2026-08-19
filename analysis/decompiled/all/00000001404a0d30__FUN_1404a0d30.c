// Function: FUN_1404a0d30
// Addr: 1404a0d30
// Size: 1 bytes


void FUN_1404a0d30(char *param_1,undefined8 param_2)

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
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  char *unaff_RSI;
  char *unaff_RDI;
  undefined8 unaff_retaddr;
  char acStackX_8 [32];
  
  uVar5 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar3 = (char)param_1;
  bVar2 = in_AL ^ 0xc;
  *param_1 = *param_1;
  *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0xc) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0xc) + bVar2;
  *unaff_RDI = *unaff_RDI + cVar3;
  *(undefined8 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH + in_AH,unaff_BL)) = unaff_retaddr;
  acStackX_8[(longlong)param_1] = acStackX_8[(longlong)param_1] + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + (char)acStackX_8;
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

