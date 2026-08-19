// Function: FUN_1404c5f04
// Addr: 1404c5f04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c5f3c) overlaps instruction at (ram,0x0001404c5f37)
    */

void FUN_1404c5f04(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  uint *in_RAX;
  undefined7 uVar6;
  int *piVar4;
  char *pcVar5;
  byte bVar7;
  char cVar8;
  undefined6 uVar9;
  char unaff_BL;
  char unaff_BH;
  char *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  char acStackX_8 [32];
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar8 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar1 = *in_RAX;
  bVar7 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar7;
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  *unaff_RSI = *unaff_RSI + unaff_BH;
  cVar2 = ((bVar7 + 4) - CARRY1((byte)uVar1,bVar7)) + (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT71(uVar6,cVar2) = *(char *)CONCAT71(uVar6,cVar2) + cVar2;
  acStackX_8[unaff_RDI * 8] = acStackX_8[unaff_RDI * 8] + unaff_BL;
  cVar2 = (cVar2 + cVar8) * '\x02';
  out((short)param_2,(int)CONCAT71(uVar6,cVar2));
  *param_4 = *param_4 + cVar2;
  piVar4 = (int *)(CONCAT71(uVar6,cVar2) | 2);
  *(char *)(piVar4 + (longlong)unaff_RSI * 2) =
       (char)piVar4[(longlong)unaff_RSI * 2] + (char)param_1;
  bVar7 = (byte)param_2 | *(byte *)((longlong)piVar4 + 0x21);
  *piVar4 = *piVar4 - (int)param_1;
  *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
  uVar3 = in(6);
  *(byte *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) + bVar7;
  if (*(char *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) != '\0') {
    cRam00000001454c63a1 = cRam00000001454c63a1 + (char)param_1;
    pcVar5 = (char *)(CONCAT71(uVar6,uVar3) ^ 3);
    *pcVar5 = *pcVar5 + cVar8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

