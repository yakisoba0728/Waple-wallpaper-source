// Function: FUN_1404ad924
// Addr: 1404ad924
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ad95a) overlaps instruction at (ram,0x0001404ad959)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ad95a) */

void FUN_1404ad924(int *param_1,uint *param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar4;
  undefined3 uVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  char *in_RAX;
  uint *puVar9;
  byte bVar11;
  uint uVar12;
  byte *pbVar13;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *unaff_RSI;
  byte bVar3;
  byte *pbVar10;
  
  bVar11 = (byte)((ulonglong)param_1 >> 8);
  out(*unaff_RSI,(short)param_2);
  uVar12 = (uint)param_2 & *param_2;
  *in_RAX = *in_RAX + unaff_BL;
  *(int *)(ulonglong)uVar12 = *(int *)(ulonglong)uVar12 + (int)param_1;
  cVar6 = cRam5c00122899001227;
  bVar4 = *(byte *)(param_1 + 0x19c8280);
  uVar5 = (undefined3)((uint)((int)in_RAX + -0x1bfafffe) >> 8);
  uVar8 = CONCAT31(uVar5,cRam5c00122899001227);
  puVar9 = (uint *)(ulonglong)uVar8;
  *puVar9 = *puVar9 & uVar8;
  *(char *)puVar9 = (char)*puVar9 + cVar6;
  uVar8 = CONCAT31(uVar5,cRam5c00122899001227);
  *param_1 = *param_1 + (int)param_1;
  uVar8 = uVar8 + *(int *)(ulonglong)uVar8;
  uVar12 = CONCAT22((short)(uVar12 >> 0x10),CONCAT11((byte)(uVar12 >> 8) | bVar4,(char)uVar12)) |
           uVar8;
  pbVar13 = (byte *)(ulonglong)uVar12;
  *(char *)param_1 = (char)*param_1 + (char)(uVar8 + 0x600470 >> 8);
  uVar8 = uVar8 + 0x34650472;
  bVar4 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar11;
  uVar5 = (undefined3)(uVar8 >> 8);
  bVar7 = (char)uVar8 + *(char *)(ulonglong)uVar8 + CARRY1(bVar4,bVar11);
  pbVar10 = (byte *)(ulonglong)CONCAT31(uVar5,bVar7);
  pbVar13 = (byte *)(ulonglong)CONCAT31((int3)(uVar12 >> 8),(char)uVar12 - *pbVar13);
  pbVar10[CONCAT71(unaff_00000019,unaff_BL) * 8 + 0x21004a] =
       pbVar10[CONCAT71(unaff_00000019,unaff_BL) * 8 + 0x21004a] + (char)param_1;
  bVar4 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar7;
  bVar2 = *pbVar13;
  bVar3 = *pbVar13;
  *pbVar13 = bVar3 + bVar11 + CARRY1(bVar4,bVar7);
  pcVar1 = (char *)((ulonglong)
                    CONCAT31(uVar5,bVar7 + *pbVar10 +
                                   (CARRY1(bVar2,bVar11) ||
                                   CARRY1(bVar3 + bVar11,CARRY1(bVar4,bVar7)))) + 0x1301004a +
                   CONCAT71(unaff_00000019,unaff_BL) * 8);
  *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

