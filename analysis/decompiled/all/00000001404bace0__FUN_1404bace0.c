// Function: FUN_1404bace0
// Addr: 1404bace0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bace0(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined3 uVar5;
  char cVar6;
  char cVar8;
  undefined8 in_RAX;
  undefined7 uVar9;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  uint *unaff_RDI;
  uint *puVar7;
  
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar6 = in(0xab);
  puVar7 = (uint *)CONCAT71(uVar9,cVar6);
  *param_4 = *param_4;
  *(char *)puVar7 = (char)*puVar7 + cVar6;
  cVar8 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar8;
  uVar2 = *(undefined4 *)param_1;
  param_1[3] = param_1[3] + unaff_BL;
  *puVar7 = *puVar7 & (uint)puVar7;
  cVar6 = in(0xab);
  *param_4 = *param_4 + (char)uVar2;
  *(char *)CONCAT71(uVar9,cVar6) = *(char *)CONCAT71(uVar9,cVar6) + cVar6;
  *(char *)unaff_RDI = (char)*unaff_RDI + (char)param_1;
  uVar3 = *(undefined4 *)param_1;
  *param_1 = *param_1 + cVar8;
  uVar4 = *(undefined4 *)param_1;
  cVar6 = cVar6 + (char)param_2;
  puVar7 = (uint *)CONCAT71(uVar9,cVar6);
  *unaff_RDI = (uint)puVar7;
  *param_4 = *param_4 + (char)uVar2 + (char)uVar3 + (char)uVar4;
  *(char *)puVar7 = (char)*puVar7 + cVar6;
  *(char *)(param_2 + 2) = *(char *)(param_2 + 2) + unaff_BH;
  *puVar7 = *puVar7 & (uint)puVar7;
  uVar5 = SegmentLimit(*(undefined4 *)param_1);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x21004b + unaff_RBP * 4)
  ;
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *(char *)puVar7 = (char)*puVar7 + cVar6;
  *(uint **)((ulonglong)(ushort)uVar5 - 8) = puVar7;
  puVar7 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar8 + *param_1,cVar6));
  *(char *)(param_2 + 2) = *(char *)(param_2 + 2) + unaff_BH;
  *puVar7 = *puVar7 & (uint)puVar7;
  *param_4 = *param_4 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

