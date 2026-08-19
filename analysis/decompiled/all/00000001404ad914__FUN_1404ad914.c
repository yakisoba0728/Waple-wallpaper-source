// Function: FUN_1404ad914
// Addr: 1404ad914
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ad95a) overlaps instruction at (ram,0x0001404ad959)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ad95a) */

void FUN_1404ad914(int *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar3;
  undefined3 uVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  uint *in_RAX;
  undefined7 uVar12;
  uint *puVar10;
  byte bVar13;
  uint uVar14;
  byte *pbVar15;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *unaff_RSI;
  byte bVar2;
  char *pcVar9;
  byte *pbVar11;
  
  bVar13 = (byte)((ulonglong)param_1 >> 8);
  out(*unaff_RSI,(short)param_2);
  uVar14 = (uint)param_2 & *param_2;
  *(byte *)in_RAX = (byte)*in_RAX + unaff_BL;
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar8 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  uVar12 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar6 = *(char *)CONCAT71(uVar12,0x22) + '\"' + CARRY1((byte)uVar8,(byte)in_RAX);
  pcVar9 = (char *)CONCAT71(uVar12,cVar6);
  out(unaff_RSI[1],(short)uVar14);
  uVar14 = uVar14 & *(uint *)(ulonglong)uVar14;
  *pcVar9 = *pcVar9 + unaff_BL;
  *(int *)(ulonglong)uVar14 = *(int *)(ulonglong)uVar14 + (int)param_1;
  cVar5 = cRam5c00122899001227;
  bVar3 = *(byte *)(param_1 + 0x19c8280);
  uVar4 = (undefined3)((uint)((int)CONCAT71(uVar12,cVar6) + -0x1bfafffe) >> 8);
  uVar8 = CONCAT31(uVar4,cRam5c00122899001227);
  puVar10 = (uint *)(ulonglong)uVar8;
  *puVar10 = *puVar10 & uVar8;
  *(char *)puVar10 = (char)*puVar10 + cVar5;
  uVar8 = CONCAT31(uVar4,cRam5c00122899001227);
  *param_1 = *param_1 + (int)param_1;
  uVar8 = uVar8 + *(int *)(ulonglong)uVar8;
  uVar14 = CONCAT22((short)(uVar14 >> 0x10),CONCAT11((byte)(uVar14 >> 8) | bVar3,(char)uVar14)) |
           uVar8;
  pbVar15 = (byte *)(ulonglong)uVar14;
  *(char *)param_1 = (char)*param_1 + (char)(uVar8 + 0x600470 >> 8);
  uVar8 = uVar8 + 0x34650472;
  bVar3 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar13;
  uVar4 = (undefined3)(uVar8 >> 8);
  bVar7 = (char)uVar8 + *(char *)(ulonglong)uVar8 + CARRY1(bVar3,bVar13);
  pbVar11 = (byte *)(ulonglong)CONCAT31(uVar4,bVar7);
  pbVar15 = (byte *)(ulonglong)CONCAT31((int3)(uVar14 >> 8),(char)uVar14 - *pbVar15);
  pbVar11[CONCAT71(unaff_00000019,unaff_BL) * 8 + 0x21004a] =
       pbVar11[CONCAT71(unaff_00000019,unaff_BL) * 8 + 0x21004a] + (char)param_1;
  bVar3 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar7;
  bVar1 = *pbVar15;
  bVar2 = *pbVar15;
  *pbVar15 = bVar2 + bVar13 + CARRY1(bVar3,bVar7);
  pcVar9 = (char *)((ulonglong)
                    CONCAT31(uVar4,bVar7 + *pbVar11 +
                                   (CARRY1(bVar1,bVar13) ||
                                   CARRY1(bVar2 + bVar13,CARRY1(bVar3,bVar7)))) + 0x1301004a +
                   CONCAT71(unaff_00000019,unaff_BL) * 8);
  *pcVar9 = *pcVar9 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

