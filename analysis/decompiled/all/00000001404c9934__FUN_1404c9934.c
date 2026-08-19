// Function: FUN_1404c9934
// Addr: 1404c9934
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9934(int *param_1,longlong param_2)

{
  undefined3 uVar1;
  char cVar2;
  short sVar3;
  int in_EAX;
  int iVar4;
  uint uVar5;
  char cVar9;
  char *pcVar7;
  undefined1 uVar10;
  byte bVar11;
  undefined6 uVar12;
  char unaff_BL;
  char unaff_BH;
  char cVar13;
  undefined6 unaff_0000001a;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  int *unaff_RDI;
  char in_R11B;
  char unaff_R12B;
  char *pcVar6;
  int *piVar8;
  
  uVar12 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar10 = (undefined1)param_2;
  bVar11 = (byte)((ulonglong)param_2 >> 8) | *(byte *)(param_2 + (longlong)param_1);
  iVar4 = in_EAX + -0x18fff7cc;
  *(uint *)CONCAT62(uVar12,CONCAT11(bVar11,uVar10)) =
       *(uint *)CONCAT62(uVar12,CONCAT11(bVar11,uVar10)) & unaff_ESI;
  uVar1 = (undefined3)((uint)iVar4 >> 8);
  cVar2 = (char)iVar4 + unaff_BH;
  pcVar6 = (char *)(ulonglong)CONCAT31(uVar1,cVar2);
  *(uint *)CONCAT62(uVar12,CONCAT11(bVar11,uVar10)) =
       *(uint *)CONCAT62(uVar12,CONCAT11(bVar11,uVar10)) & unaff_ESI;
  pcVar6[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4 + 0x4c] =
       pcVar6[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4 + 0x4c] + (char)param_1;
  cVar9 = (char)((uint)iVar4 >> 8);
  *(char *)param_1 = (char)*param_1 + cVar9;
  *pcVar6 = *pcVar6 + cVar2;
  cVar13 = unaff_BH + cVar9;
  *(uint *)CONCAT62(uVar12,CONCAT11(bVar11,uVar10)) =
       *(uint *)CONCAT62(uVar12,CONCAT11(bVar11,uVar10)) & unaff_ESI;
  cVar2 = cVar2 + cVar13;
  uVar5 = CONCAT31(uVar1,cVar2);
  pcVar7 = (char *)(ulonglong)uVar5;
  *(uint *)CONCAT62(uVar12,CONCAT11(bVar11,uVar10)) =
       *(uint *)CONCAT62(uVar12,CONCAT11(bVar11,uVar10)) & unaff_ESI;
  pcVar7[CONCAT62(unaff_0000001a,CONCAT11(cVar13,unaff_BL)) * 4 + 0x4c] =
       pcVar7[CONCAT62(unaff_0000001a,CONCAT11(cVar13,unaff_BL)) * 4 + 0x4c] + (char)param_1;
  *(char *)param_1 = (char)*param_1 + cVar9;
  *pcVar7 = *pcVar7 + cVar2;
  pcVar6 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x18ffcddf);
  *pcVar6 = *pcVar6 + cVar13;
  *(uint *)CONCAT62(uVar12,CONCAT11(bVar11,uVar10)) =
       *(uint *)CONCAT62(uVar12,CONCAT11(bVar11,uVar10)) & unaff_ESI;
  *pcVar7 = *pcVar7 + bVar11;
  sVar3 = (short)uVar5;
  pcVar6 = (char *)(ulonglong)(uint)(int)sVar3;
  *(char *)param_1 = (char)*param_1 + unaff_R12B;
  *pcVar6 = *pcVar6 + cVar2;
  pcVar6[-0x41ffcddf] = pcVar6[-0x41ffcddf] + bVar11;
  *(uint *)CONCAT62(uVar12,CONCAT11(bVar11,uVar10)) =
       *(uint *)CONCAT62(uVar12,CONCAT11(bVar11,uVar10)) & unaff_ESI;
  *pcVar6 = *pcVar6 + (char)((ulonglong)param_1 >> 8);
  uVar5 = (uint)sVar3;
  piVar8 = (int *)(ulonglong)uVar5;
  *(char *)param_1 = (char)*param_1 + in_R11B;
  *unaff_RDI = *unaff_RDI - uVar5;
  *(char *)piVar8 = (char)*piVar8 + unaff_BL;
  *piVar8 = *piVar8 + uVar5;
  *param_1 = *param_1 + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

