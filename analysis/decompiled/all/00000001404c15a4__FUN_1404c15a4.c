// Function: FUN_1404c15a4
// Addr: 1404c15a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c15a4(char *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  byte bVar5;
  undefined8 in_RAX;
  undefined6 uVar8;
  undefined7 uVar7;
  char cVar9;
  char cVar10;
  undefined6 uVar11;
  byte unaff_BL;
  byte unaff_BH;
  byte unaff_BPL;
  uint *unaff_RSI;
  byte unaff_R12B;
  char *pcVar3;
  char *pcVar4;
  byte bVar6;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar10 = (char)param_2;
  cVar9 = (char)((ulonglong)param_1 >> 8);
  bVar6 = (byte)((ulonglong)in_RAX >> 8);
  uVar8 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar5 = bVar6 + unaff_BL;
  uVar7 = (undefined7)(CONCAT62(uVar8,CONCAT11(bVar5,(char)in_RAX)) >> 8);
  cVar1 = (char)in_RAX + 'L' + CARRY1(bVar6,unaff_BL);
  pcVar3 = (char *)CONCAT71(uVar7,cVar1);
  *pcVar3 = *pcVar3 + cVar9;
  *unaff_RSI = *unaff_RSI ^ (uint)param_1;
  cVar1 = cVar1 + 'L' + CARRY1(unaff_BPL,unaff_R12B);
  pcVar3 = (char *)(CONCAT62(uVar11,CONCAT11(0x2b,cVar10)) + (longlong)param_1 * 8);
  *pcVar3 = *pcVar3 + cVar1;
  *(byte *)unaff_RSI = (char)*unaff_RSI + unaff_BL;
  cVar1 = cVar1 + *(char *)CONCAT71(uVar7,cVar1);
  *param_1 = *param_1 + cVar10;
  cVar2 = cVar1 + '\x01';
  pcVar4 = (char *)CONCAT71(uVar7,cVar2);
  pcVar3 = (char *)(CONCAT62(uVar11,CONCAT11(0x2b,cVar10)) + (longlong)pcVar4 * 2);
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  pcVar3 = (char *)CONCAT71((int7)(CONCAT62(uVar8,CONCAT11(bVar5 + unaff_BH,cVar2)) >> 8),
                            cVar1 + 'M' + CARRY1(bVar5,unaff_BH));
  *pcVar3 = *pcVar3 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

