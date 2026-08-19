// Function: FUN_1404bb56c
// Addr: 1404bb56c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bb64a) overlaps instruction at (ram,0x0001404bb647)
    */

void FUN_1404bb56c(char *param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined8 in_RAX;
  undefined6 uVar8;
  uint *puVar6;
  char cVar9;
  byte unaff_BL;
  undefined7 unaff_00000019;
  uint *unaff_RSI;
  byte *unaff_RDI;
  bool bVar10;
  char *pcVar7;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  uVar8 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar3 = (char)in_RAX;
  *param_1 = *param_1 + 'K';
  pcVar7 = (char *)(CONCAT62(uVar8,CONCAT11(0x4b,cVar3)) * 2);
  *pcVar7 = *pcVar7 + cVar3;
  puVar6 = (uint *)CONCAT62(uVar8,CONCAT11(cVar9 + 'K',cVar3));
  uVar5 = (uint)puVar6;
  *puVar6 = *puVar6 | uVar5;
  pcVar7 = (char *)((longlong)puVar6 + (longlong)param_1);
  cVar4 = *pcVar7;
  *pcVar7 = *pcVar7 + (char)param_2;
  if (!SCARRY1(cVar4,(char)param_2)) {
    *puVar6 = *puVar6 & uVar5;
    return;
  }
  *puVar6 = *puVar6 & uVar5;
  uVar2 = *puVar6;
  *(char *)puVar6 = (char)*puVar6 + cVar3;
  if (SCARRY1((char)uVar2,cVar3)) {
    puVar6 = (uint *)0x9ebd2703;
  }
  else {
    *puVar6 = *puVar6 & uVar5;
    if (*puVar6 == 0) {
      *puVar6 = *puVar6 & uVar5;
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cRam00000001674bbbe5 = cRam00000001674bbbe5 + cVar9;
    *(char *)unaff_RSI = cVar3;
  }
  bVar10 = CARRY1(*(byte *)CONCAT71(unaff_00000019,unaff_BL),unaff_BL);
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  if (-1 < *(char *)CONCAT71(unaff_00000019,unaff_BL)) {
    bVar10 = CARRY1(*unaff_RDI,(byte)param_1);
    *unaff_RDI = *unaff_RDI + (byte)param_1;
  }
  cVar4 = (char)puVar6 + (char)*puVar6 + bVar10 + '0';
  pcVar7 = (char *)CONCAT71((int7)((ulonglong)puVar6 >> 8),cVar4);
  *pcVar7 = *pcVar7 + cVar4;
  *unaff_RSI = *unaff_RSI & (uint)pcVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

