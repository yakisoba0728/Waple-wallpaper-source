// Function: FUN_1404bacc4
// Addr: 1404bacc4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bacc4(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined3 uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  char cVar11;
  undefined8 in_RAX;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char cVar12;
  longlong unaff_RBP;
  int *unaff_RDI;
  uint *puVar10;
  
  uVar5 = SegmentLimit(*(undefined4 *)param_1);
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  cVar12 = (char)uVar5 + (char)*(undefined4 *)param_1;
  puVar2 = (uint *)(unaff_RDI + 1);
  iVar8 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + (char)param_2);
  *unaff_RDI = iVar8;
  *param_4 = *param_4 + cVar12;
  uVar9 = iVar8 + 0x64050002;
  verr();
  cVar12 = cVar12 + (char)*(undefined4 *)param_1;
  param_1[3] = param_1[3] + unaff_BL;
  *(uint *)(ulonglong)uVar9 = *(uint *)(ulonglong)uVar9 & uVar9;
  uVar5 = (undefined3)(uVar9 >> 8);
  cVar7 = in(0xab);
  puVar10 = (uint *)(ulonglong)CONCAT31(uVar5,cVar7);
  *param_4 = *param_4 + cVar12;
  *(char *)puVar10 = (char)*puVar10 + cVar7;
  cVar11 = (char)(uVar9 >> 8);
  *param_1 = *param_1 + cVar11;
  cVar12 = cVar12 + (char)*(undefined4 *)param_1;
  param_1[3] = param_1[3] + unaff_BL;
  *puVar10 = *puVar10 & CONCAT31(uVar5,cVar7);
  cVar7 = in(0xab);
  *param_4 = *param_4 + cVar12;
  *(char *)(ulonglong)CONCAT31(uVar5,cVar7) = *(char *)(ulonglong)CONCAT31(uVar5,cVar7) + cVar7;
  *(char *)puVar2 = (char)*puVar2 + (char)param_1;
  uVar3 = *(undefined4 *)param_1;
  *param_1 = *param_1 + cVar11;
  uVar4 = *(undefined4 *)param_1;
  cVar7 = cVar7 + (char)param_2;
  uVar6 = CONCAT31(uVar5,cVar7);
  puVar10 = (uint *)(ulonglong)uVar6;
  *puVar2 = uVar6;
  *param_4 = *param_4 + cVar12 + (char)uVar3 + (char)uVar4;
  *(char *)puVar10 = (char)*puVar10 + cVar7;
  *(char *)(param_2 + 2) = *(char *)(param_2 + 2) + unaff_BH;
  *puVar10 = *puVar10 & uVar6;
  uVar5 = SegmentLimit(*(undefined4 *)param_1);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x21004b + unaff_RBP * 4)
  ;
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *(char *)puVar10 = (char)*puVar10 + cVar7;
  *(uint **)((ulonglong)(ushort)uVar5 - 8) = puVar10;
  uVar6 = CONCAT22((short)(uVar9 >> 0x10),CONCAT11(cVar11 + *param_1,cVar7));
  *(char *)(param_2 + 2) = *(char *)(param_2 + 2) + unaff_BH;
  *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 & uVar6;
  *param_4 = *param_4 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

