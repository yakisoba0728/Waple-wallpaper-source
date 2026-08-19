// Function: FUN_1404ace44
// Addr: 1404ace44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ace44(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  char cVar5;
  undefined7 uVar6;
  char cVar7;
  char unaff_BH;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  uVar6 = (undefined7)((ulonglong)param_1 >> 8);
  cVar5 = (char)param_1;
  pcVar2 = (code *)swi(0x4a);
  pcVar4 = (char *)(*pcVar2)();
  *(char *)CONCAT71(uVar6,cVar5) = *(char *)CONCAT71(uVar6,cVar5) + (char)((ulonglong)pcVar4 >> 8);
  cVar3 = (char)pcVar4;
  *pcVar4 = *pcVar4 + cVar3;
  pcVar1 = (char *)(CONCAT71(uVar6,cVar5) + -0x2affef02);
  *pcVar1 = *pcVar1 + unaff_BH;
  *pcVar4 = *pcVar4 + '\x01';
  pcVar4[-0x33] = pcVar4[-0x33] + cVar5;
  *(char *)CONCAT71(uVar6,cVar5) = *(char *)CONCAT71(uVar6,cVar5) + '\b';
  *pcVar4 = *pcVar4 + cVar3;
  pcVar1 = (char *)(CONCAT71(uVar6,cVar5) + -0x46ffef02);
  *pcVar1 = *pcVar1 + cVar5;
  *pcVar4 = *pcVar4 + '\x01';
  pcVar1 = (char *)(CONCAT71(uVar6,cVar5) * 8 + 0x21004a);
  *pcVar1 = *pcVar1 + cVar7;
  *pcVar4 = *pcVar4 + cVar3;
  *pcVar4 = *pcVar4 + '\x01';
  pcVar1 = (char *)(CONCAT71(uVar6,cVar5) + 0x280010fe);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar2 = (code *)swi(0x4a);
  cVar3 = (*pcVar2)();
  *(char *)CONCAT71(uVar6,cVar5) = *(char *)CONCAT71(uVar6,cVar5) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

