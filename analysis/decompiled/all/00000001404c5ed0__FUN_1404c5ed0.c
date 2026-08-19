// Function: FUN_1404c5ed0
// Addr: 1404c5ed0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c5f3c) overlaps instruction at (ram,0x0001404c5f37)
    */

void FUN_1404c5ed0(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined2 uVar1;
  uint uVar2;
  undefined3 uVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar9;
  int in_EAX;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  byte bVar10;
  char cVar11;
  undefined6 uVar12;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  char acStackX_18 [8];
  char acStackX_20 [8];
  
  uVar12 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar11 = (char)((ulonglong)param_2 >> 8);
  iVar6 = in_EAX + 0x1c000834;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  *param_1 = *param_1 + unaff_R12B;
  iVar6 = CONCAT31((int3)((uint)iVar6 >> 8),(char)iVar6 + (char)((uint)iVar6 >> 8)) + 0x13013e02;
  pcVar8 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -4);
  cVar4 = (char)iVar6;
  *pcVar8 = *pcVar8 + cVar4;
  uVar1 = (undefined2)((uint)iVar6 >> 0x10);
  cVar9 = (char)((uint)iVar6 >> 8) + unaff_BH;
  pcVar8 = (char *)(ulonglong)CONCAT22(uVar1,CONCAT11(cVar9,cVar4));
  *param_1 = *param_1 + unaff_R12B;
  *pcVar8 = *pcVar8 + cVar4;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  pcVar8 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -4);
  *pcVar8 = *pcVar8 + cVar4;
  cVar9 = cVar9 + unaff_BH;
  uVar2 = CONCAT22(uVar1,CONCAT11(cVar9,cVar4));
  *param_1 = *param_1 + unaff_R12B;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + cVar4;
  acStackX_18[unaff_RDI * 8] = acStackX_18[unaff_RDI * 8] + unaff_BL;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  uVar3 = (undefined3)(uVar2 >> 8);
  cVar4 = cVar4 + cVar9;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)(ulonglong)CONCAT31(uVar3,cVar4) = *(char *)(ulonglong)CONCAT31(uVar3,cVar4) + cVar4;
  acStackX_20[unaff_RDI * 8] = acStackX_20[unaff_RDI * 8] + unaff_BL;
  cVar4 = (cVar4 + cVar11) * '\x02';
  out((short)param_2,CONCAT31(uVar3,cVar4));
  *param_4 = *param_4 + cVar4;
  piVar7 = (int *)((ulonglong)CONCAT31(uVar3,cVar4) | 2);
  *(char *)(piVar7 + (longlong)unaff_RSI * 2) =
       (char)piVar7[(longlong)unaff_RSI * 2] + (char)param_1;
  bVar10 = (byte)param_2 | *(byte *)((longlong)piVar7 + 0x21);
  *piVar7 = *piVar7 - (int)param_1;
  *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
  uVar5 = in(6);
  *(byte *)CONCAT62(uVar12,CONCAT11(cVar11,bVar10)) =
       *(char *)CONCAT62(uVar12,CONCAT11(cVar11,bVar10)) + bVar10;
  if (*(char *)CONCAT62(uVar12,CONCAT11(cVar11,bVar10)) != '\0') {
    cRam00000001454c63a1 = cRam00000001454c63a1 + (char)param_1;
    pcVar8 = (char *)((ulonglong)CONCAT31(uVar3,uVar5) ^ 3);
    *pcVar8 = *pcVar8 + cVar11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

