// Function: FUN_1404ad904
// Addr: 1404ad904
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ad95a) overlaps instruction at (ram,0x0001404ad959)
    */
/* WARNING: Removing unreachable block (ram,0x0001404ad95a) */

void FUN_1404ad904(int *param_1,uint *param_2)

{
  byte bVar1;
  uint3 uVar3;
  undefined3 uVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  int in_EAX;
  uint uVar9;
  uint uVar10;
  uint *puVar12;
  byte bVar14;
  uint uVar15;
  byte *pbVar16;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined1 *unaff_RSI;
  byte in_CF;
  byte bVar2;
  char *pcVar11;
  byte *pbVar13;
  
  bVar14 = (byte)((ulonglong)param_1 >> 8);
  uVar9 = (in_EAX + -0x14000498) - (uint)in_CF;
  puVar12 = (uint *)(ulonglong)uVar9;
  bVar6 = (byte)uVar9;
  bRam0000000147b2de0f = bVar6;
  *(byte *)((longlong)puVar12 + 0x6e001222) =
       *(byte *)((longlong)puVar12 + 0x6e001222) + (char)((ulonglong)param_2 >> 8);
  uVar15 = (uint)param_2 & *param_2;
  *(byte *)puVar12 = (byte)*puVar12 + unaff_BL;
  *puVar12 = *puVar12 & uVar9;
  uVar10 = *puVar12;
  *(byte *)puVar12 = (byte)*puVar12 + bVar6;
  uVar3 = (uint3)(uVar9 >> 8);
  cVar7 = *(char *)CONCAT71((uint7)uVar3,0x22) + '\"' + CARRY1((byte)uVar10,bVar6);
  pcVar11 = (char *)(ulonglong)CONCAT31(uVar3,cVar7);
  out(*unaff_RSI,(short)uVar15);
  uVar15 = uVar15 & *(uint *)(ulonglong)uVar15;
  *pcVar11 = *pcVar11 + unaff_BL;
  *(int *)(ulonglong)uVar15 = *(int *)(ulonglong)uVar15 + (int)param_1;
  cVar5 = cRam5c00122899001227;
  bVar6 = *(byte *)(param_1 + 0x19c8280);
  uVar4 = (undefined3)((uint)(CONCAT31(uVar3,cVar7) + -0x1bfafffe) >> 8);
  uVar10 = CONCAT31(uVar4,cRam5c00122899001227);
  puVar12 = (uint *)(ulonglong)uVar10;
  *puVar12 = *puVar12 & uVar10;
  *(char *)puVar12 = (char)*puVar12 + cVar5;
  uVar10 = CONCAT31(uVar4,cRam5c00122899001227);
  *param_1 = *param_1 + (int)param_1;
  uVar10 = uVar10 + *(int *)(ulonglong)uVar10;
  uVar9 = CONCAT22((short)(uVar15 >> 0x10),CONCAT11((byte)(uVar15 >> 8) | bVar6,(char)uVar15)) |
          uVar10;
  pbVar16 = (byte *)(ulonglong)uVar9;
  *(char *)param_1 = (char)*param_1 + (char)(uVar10 + 0x600470 >> 8);
  uVar10 = uVar10 + 0x34650472;
  bVar6 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar14;
  uVar4 = (undefined3)(uVar10 >> 8);
  bVar8 = (char)uVar10 + *(char *)(ulonglong)uVar10 + CARRY1(bVar6,bVar14);
  pbVar13 = (byte *)(ulonglong)CONCAT31(uVar4,bVar8);
  pbVar16 = (byte *)(ulonglong)CONCAT31((int3)(uVar9 >> 8),(char)uVar9 - *pbVar16);
  pbVar13[CONCAT71(unaff_00000019,unaff_BL) * 8 + 0x21004a] =
       pbVar13[CONCAT71(unaff_00000019,unaff_BL) * 8 + 0x21004a] + (char)param_1;
  bVar6 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar8;
  bVar1 = *pbVar16;
  bVar2 = *pbVar16;
  *pbVar16 = bVar2 + bVar14 + CARRY1(bVar6,bVar8);
  pcVar11 = (char *)((ulonglong)
                     CONCAT31(uVar4,bVar8 + *pbVar13 +
                                    (CARRY1(bVar1,bVar14) ||
                                    CARRY1(bVar2 + bVar14,CARRY1(bVar6,bVar8)))) + 0x1301004a +
                    CONCAT71(unaff_00000019,unaff_BL) * 8);
  *pcVar11 = *pcVar11 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

