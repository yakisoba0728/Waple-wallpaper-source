// Function: FUN_1404c5ebc
// Addr: 1404c5ebc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c5f3c) overlaps instruction at (ram,0x0001404c5f37)
    */

void FUN_1404c5ebc(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined2 uVar1;
  undefined3 uVar2;
  char cVar3;
  undefined1 uVar4;
  char cVar9;
  int in_EAX;
  uint uVar5;
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
  acStackX_20[unaff_RDI * 8 + -0x20] = acStackX_20[unaff_RDI * 8 + -0x20] + unaff_BL;
  iVar6 = CONCAT31((int3)((uint)(in_EAX + -0xffff6ac) >> 8),(char)(in_EAX + -0xffff6ac) * '\x02');
  out((short)param_2,iVar6);
  *param_4 = *param_4;
  uVar5 = iVar6 + 0x34050002;
  *(byte *)(ulonglong)uVar5 = *(byte *)(ulonglong)uVar5 | (byte)uVar5;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  *param_1 = *param_1 + unaff_R12B;
  iVar6 = CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 + 4 + (char)(uVar5 >> 8)) + 0x13013e02;
  pcVar8 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -4);
  cVar3 = (char)iVar6;
  *pcVar8 = *pcVar8 + cVar3;
  uVar1 = (undefined2)((uint)iVar6 >> 0x10);
  cVar9 = (char)((uint)iVar6 >> 8) + unaff_BH;
  pcVar8 = (char *)(ulonglong)CONCAT22(uVar1,CONCAT11(cVar9,cVar3));
  *param_1 = *param_1 + unaff_R12B;
  *pcVar8 = *pcVar8 + cVar3;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  pcVar8 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -4);
  *pcVar8 = *pcVar8 + cVar3;
  cVar9 = cVar9 + unaff_BH;
  uVar5 = CONCAT22(uVar1,CONCAT11(cVar9,cVar3));
  *param_1 = *param_1 + unaff_R12B;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + cVar3;
  acStackX_18[unaff_RDI * 8] = acStackX_18[unaff_RDI * 8] + unaff_BL;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  uVar2 = (undefined3)(uVar5 >> 8);
  cVar3 = cVar3 + cVar9;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)(ulonglong)CONCAT31(uVar2,cVar3) = *(char *)(ulonglong)CONCAT31(uVar2,cVar3) + cVar3;
  acStackX_20[unaff_RDI * 8] = acStackX_20[unaff_RDI * 8] + unaff_BL;
  cVar3 = (cVar3 + cVar11) * '\x02';
  out((short)param_2,CONCAT31(uVar2,cVar3));
  *param_4 = *param_4 + cVar3;
  piVar7 = (int *)((ulonglong)CONCAT31(uVar2,cVar3) | 2);
  *(char *)(piVar7 + (longlong)unaff_RSI * 2) =
       (char)piVar7[(longlong)unaff_RSI * 2] + (char)param_1;
  bVar10 = (byte)param_2 | *(byte *)((longlong)piVar7 + 0x21);
  *piVar7 = *piVar7 - (int)param_1;
  *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
  uVar4 = in(6);
  *(byte *)CONCAT62(uVar12,CONCAT11(cVar11,bVar10)) =
       *(char *)CONCAT62(uVar12,CONCAT11(cVar11,bVar10)) + bVar10;
  if (*(char *)CONCAT62(uVar12,CONCAT11(cVar11,bVar10)) != '\0') {
    cRam00000001454c63a1 = cRam00000001454c63a1 + (char)param_1;
    pcVar8 = (char *)((ulonglong)CONCAT31(uVar2,uVar4) ^ 3);
    *pcVar8 = *pcVar8 + cVar11;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

