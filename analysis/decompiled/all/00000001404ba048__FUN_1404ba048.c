// Function: FUN_1404ba048
// Addr: 1404ba048
// Size: 1 bytes


void FUN_1404ba048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined8 in_RAX;
  undefined6 uVar7;
  char *pcVar4;
  int *piVar5;
  char unaff_BL;
  char unaff_BH;
  char *unaff_RSI;
  short *unaff_RDI;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  char cVar6;
  
  uVar7 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar2 = (char)in_RAX;
  *unaff_RDI = (short)ROUND(in_ST0);
  *unaff_RDI = (short)ROUND(in_ST1);
  cVar6 = ((char)((ulonglong)in_RAX >> 8) + (char)((ulonglong)param_2 >> 8)) * '\x02' + unaff_BL;
  pcVar4 = (char *)CONCAT62(uVar7,CONCAT11(cVar6,cVar2));
  *param_4 = *param_4;
  *pcVar4 = *pcVar4 + cVar2;
  *unaff_RDI = (short)ROUND(in_ST2);
  *unaff_RDI = (short)ROUND(in_ST3);
  cVar6 = cVar6 * '\x02' + unaff_BL;
  pcVar4 = (char *)CONCAT62(uVar7,CONCAT11(cVar6,cVar2));
  *param_4 = *param_4;
  *pcVar4 = *pcVar4 + cVar2;
  pcVar4[-0x3effe021] = pcVar4[-0x3effe021] + (char)param_2;
  *unaff_RDI = (short)ROUND(in_ST4);
  pcVar4 = (char *)CONCAT62(uVar7,CONCAT11(cVar6 + cVar2,cVar2));
  *param_4 = *param_4;
  *unaff_RSI = *unaff_RSI + (char)param_2;
  *pcVar4 = *pcVar4 + cVar2;
  uVar1 = (int)pcVar4 + 0xe117ffff;
  piVar5 = (int *)(ulonglong)uVar1;
  *piVar5 = *piVar5 + uVar1;
  *piVar5 = *piVar5 + uVar1;
  bVar3 = *(byte *)CONCAT71((int7)((ulonglong)param_1 >> 8),(char)param_1 + cVar2) & 0x21;
  pcVar4 = (char *)(CONCAT71(0xa80001,bVar3) + -0x77fffedd);
  *pcVar4 = *pcVar4 + unaff_BL;
  piVar5 = (int *)(CONCAT71(0xa80001,bVar3) & 0xffffffffffffff01);
  *(char *)((longlong)piVar5 + 0x25) = *(char *)((longlong)piVar5 + 0x25) + unaff_BH;
  *piVar5 = *piVar5 + (int)piVar5;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

