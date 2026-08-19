// Function: FUN_1404b6e8c
// Addr: 1404b6e8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6e8c(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 in_RAX;
  char *pcVar6;
  uint *puVar7;
  uint uVar8;
  char cVar9;
  undefined7 uVar10;
  int *unaff_RDI;
  
  uVar10 = (undefined7)((ulonglong)param_2 >> 8);
  uVar8 = (uint)param_1;
  pcVar6 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + 'p');
  cVar9 = (char)param_2 + *pcVar6;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  uVar5 = (int)pcVar6 + 0x840a4002;
  pbVar1 = (byte *)((ulonglong)uVar5 + 6);
  bVar2 = *pbVar1;
  bVar3 = (byte)uVar5;
  *pbVar1 = *pbVar1 + bVar3;
  cVar4 = bVar3 - CARRY1(bVar2,bVar3);
  uVar5 = (uint)(short)CONCAT31((int3)(uVar5 >> 8),cVar4);
  puVar7 = (uint *)(ulonglong)uVar5;
  *(uint *)CONCAT71(uVar10,cVar9) = *(uint *)CONCAT71(uVar10,cVar9) ^ uVar8;
  *puVar7 = *puVar7 & uVar5;
  *(char *)puVar7 = (char)*puVar7 + cVar4;
  *(uint *)CONCAT71(uVar10,cVar9) = *(uint *)CONCAT71(uVar10,cVar9) ^ uVar8;
  *unaff_RDI = *unaff_RDI + uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

