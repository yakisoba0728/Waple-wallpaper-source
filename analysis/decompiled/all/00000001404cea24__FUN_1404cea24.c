// Function: FUN_1404cea24
// Addr: 1404cea24
// Size: 1 bytes


void FUN_1404cea24(longlong param_1,char param_2)

{
  char *pcVar1;
  uint *puVar2;
  char in_AL;
  char cVar3;
  byte in_AH;
  byte bVar4;
  undefined6 in_register_00000002;
  char cVar5;
  char cVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  char unaff_BL;
  uint unaff_EBP;
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  char unaff_R12B;
  
  uVar8 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar7 = (undefined2)((ulonglong)param_1 >> 0x10);
  cVar6 = (char)((ulonglong)param_1 >> 8);
  bVar4 = in_AH | *(byte *)(param_1 + CONCAT44(unaff_0000003c,unaff_EDI));
  cVar3 = in_AL + 'T';
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(bVar4,cVar3)) + -6);
  *pcVar1 = *pcVar1 + param_2;
  cVar5 = (char)param_1 - cVar6;
  *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar5))) =
       *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar5))) + unaff_R12B;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar4,cVar3)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar4,cVar3)) + cVar3;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(bVar4,cVar3)) + -6);
  *pcVar1 = *pcVar1 + (char)unaff_EDI;
  cVar5 = cVar5 - cVar6;
  *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar5))) =
       *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar5))) + unaff_R12B;
  puVar2 = (uint *)(CONCAT62(in_register_00000002,CONCAT11(bVar4,cVar3)) +
                   CONCAT62(in_register_00000002,CONCAT11(bVar4,cVar3)));
  *puVar2 = *puVar2 & CONCAT22(uVar7,CONCAT11(cVar6,cVar5));
  puVar2 = (uint *)(CONCAT62(in_register_00000002,CONCAT11(bVar4,cVar3)) + 0x1a);
  *puVar2 = *puVar2 & unaff_EBP;
  *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar5))) =
       *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(cVar6,cVar5))) + unaff_BL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

