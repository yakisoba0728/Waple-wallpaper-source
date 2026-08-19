// Function: FUN_1404bcce8
// Addr: 1404bcce8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bcce8(undefined8 param_1,int *param_2)

{
  char *pcVar1;
  undefined3 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint *in_RAX;
  char unaff_BL;
  char unaff_BH;
  uint *puVar6;
  
  uVar4 = (uint)in_RAX & *in_RAX;
  puVar6 = (uint *)(ulonglong)uVar4;
  *puVar6 = *puVar6 & uVar4;
  *(char *)puVar6 = (char)*puVar6 + (char)uVar4;
  uVar4 = uVar4 & *puVar6;
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 & uVar4;
  uVar2 = (undefined3)(uVar4 >> 8);
  cVar3 = (char)uVar4 + unaff_BH;
  *param_2 = *param_2 + CONCAT31(uVar2,cVar3);
  iVar5 = CONCAT31(uVar2,cVar3 + (char)((ulonglong)param_1 >> 8) + (char)param_1 * '\x02' +
                         (char)*param_2 + (unaff_BL >> 6)) + *param_2;
  pcVar1 = (char *)((ulonglong)
                    CONCAT31((int3)((uint)iVar5 >> 8),(char)iVar5 + (char)param_1 + '\x02') -
                   0x57fffdfb);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

