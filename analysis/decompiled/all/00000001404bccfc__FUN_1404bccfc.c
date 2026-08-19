// Function: FUN_1404bccfc
// Addr: 1404bccfc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bccfc(undefined8 param_1,int *param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined3 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  char cVar8;
  char cVar9;
  char unaff_BL;
  char unaff_BH;
  
  cVar9 = (char)((ulonglong)param_1 >> 8);
  cVar8 = (char)param_1;
  pcVar2 = (code *)swi(0xfc);
  puVar7 = (uint *)(*pcVar2)();
  uVar5 = (uint)puVar7 & *puVar7;
  *(uint *)(ulonglong)uVar5 = *(uint *)(ulonglong)uVar5 & uVar5;
  uVar3 = (undefined3)(uVar5 >> 8);
  cVar4 = (char)uVar5 + unaff_BH;
  *param_2 = *param_2 + CONCAT31(uVar3,cVar4);
  iVar6 = CONCAT31(uVar3,cVar4 + cVar9 + (char)*param_2 + unaff_BL) + *param_2;
  pcVar1 = (char *)((ulonglong)CONCAT31((int3)((uint)iVar6 >> 8),(char)iVar6 + cVar8 + '\x02') -
                   0x57fffdfb);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

