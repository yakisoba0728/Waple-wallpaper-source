// Function: FUN_1404c4d80
// Addr: 1404c4d80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4d80(byte *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined3 uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int unaff_EBX;
  uint unaff_ESP;
  undefined4 unaff_00000024;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  bool bVar12;
  bool bVar13;
  byte *pbVar10;
  char *pcVar11;
  
  *(int *)param_1 = *(int *)param_1 + unaff_EBX;
  puVar1 = (uint *)(param_1 + unaff_RDI);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - unaff_ESI;
  puVar1 = (uint *)(param_1 + CONCAT44(unaff_00000034,unaff_ESI));
  uVar3 = *puVar1;
  uVar8 = *puVar1;
  *puVar1 = (uVar8 - unaff_ESP) - (uint)(uVar2 < unaff_ESI);
  puVar1 = (uint *)(param_1 + unaff_RBP);
  uVar8 = (uint)(uVar3 < unaff_ESP || uVar8 - unaff_ESP < (uint)(uVar2 < unaff_ESI));
  uVar2 = *puVar1;
  uVar3 = *puVar1;
  *puVar1 = (uVar3 - param_2) - uVar8;
  *(uint *)(param_1 + CONCAT44(unaff_00000024,unaff_ESP)) =
       (*(int *)(param_1 + CONCAT44(unaff_00000024,unaff_ESP)) - unaff_ESI) -
       (uint)(uVar2 < param_2 || uVar3 - param_2 < uVar8);
  bVar6 = *param_1;
  bVar5 = (byte)unaff_EBX;
  *param_1 = *param_1 + bVar5;
  uVar8 = param_2 + 0xc1c01e0 + (uint)CARRY1(bVar6,bVar5);
  bVar6 = *(byte *)CONCAT44(unaff_00000024,unaff_ESP);
  *(byte *)CONCAT44(unaff_00000024,unaff_ESP) = *(char *)CONCAT44(unaff_00000024,unaff_ESP) + bVar5;
  uVar2 = (uint)CARRY1(bVar6,bVar5);
  uVar3 = uVar8 + *(uint *)(ulonglong)uVar8;
  bVar12 = CARRY4(uVar8,*(uint *)(ulonglong)uVar8) || CARRY4(uVar3,uVar2);
  iVar9 = uVar3 + uVar2;
  bVar6 = (byte)iVar9;
  bVar5 = bVar6 + 0xac;
  bVar13 = bVar6 < 0x54 || bVar5 < bVar12;
  uVar4 = (undefined3)((uint)iVar9 >> 8);
  bVar5 = bVar5 - bVar12;
  pbVar10 = (byte *)(ulonglong)CONCAT31(uVar4,bVar5);
  bVar6 = bVar5 + *pbVar10;
  bVar12 = CARRY1(bVar5,*pbVar10) || CARRY1(bVar6,bVar13);
  bVar6 = bVar6 + bVar13;
  bVar5 = bVar6 - 0x34;
  cVar7 = bVar5 - bVar12;
  pcVar11 = (char *)(ulonglong)CONCAT31(uVar4,cVar7);
  *pcVar11 = *pcVar11 + cVar7 + (bVar6 < 0x34 || bVar5 < bVar12);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

