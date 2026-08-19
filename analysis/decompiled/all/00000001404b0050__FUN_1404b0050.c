// Function: FUN_1404b0050
// Addr: 1404b0050
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0050(uint param_1,uint *param_2)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  undefined1 in_AH;
  char cVar4;
  undefined6 in_register_00000002;
  char *pcVar5;
  byte bVar6;
  char unaff_BL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  bVar2 = bRam080014f8d30014f8;
  bVar6 = (byte)param_2;
  pcVar5 = (char *)(ulonglong)(param_1 | *param_2);
  puVar1 = (uint *)(unaff_RSI + CONCAT62(in_register_00000002,CONCAT11(in_AH,bRam080014f8d30014f8)))
  ;
  *puVar1 = *puVar1 & (uint)param_2;
  (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + bVar6;
  bVar2 = bVar2 | *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2));
  pcVar5[0x7e40400] = pcVar5[0x7e40400] + (char)((ulonglong)param_2 >> 8);
  cVar3 = bVar2 + bVar6 + CARRY1(bVar2,bVar6);
  cVar4 = (char)(CONCAT11(in_AH,cVar3) % (short)unaff_BL);
  cVar3 = (char)(CONCAT11(in_AH,cVar3) / (short)unaff_BL) +
          CARRY1(bVar2 + bVar6,CARRY1(bVar2,bVar6));
  *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) - cVar3;
  *pcVar5 = *pcVar5 + cVar4;
  bVar2 = cVar3 + 2;
  (&stack0x00000000)[(longlong)param_2 * 8] = (&stack0x00000000)[(longlong)param_2 * 8] + bVar2;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar4,bVar2)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(cVar4,bVar2)) | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

