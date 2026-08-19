// Function: FUN_1404add1c
// Addr: 1404add1c
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404add99) overlaps instruction at (ram,0x0001404add98)
    */
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_1404add1c(char *param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  undefined2 uVar1;
  uint3 uVar2;
  char *pcVar3;
  char cVar4;
  byte bVar5;
  char cVar11;
  uint in_EAX;
  uint uVar6;
  uint uVar7;
  byte bVar12;
  byte *pbVar9;
  byte bVar13;
  uint *puVar10;
  byte bVar14;
  byte bVar16;
  byte *pbVar15;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  longlong in_FS_OFFSET;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [32];
  byte *pbVar8;
  
  bVar14 = (byte)param_1;
  uVar6 = in_EAX | 0xb600c70;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
  *param_2 = *param_2 & unaff_EBX;
  uVar7 = *(int *)(ulonglong)CONCAT22((short)(uVar6 >> 0x10),CONCAT11((char)param_2,(char)uVar6)) *
          0x126830;
  pbVar8 = (byte *)(ulonglong)uVar7;
  uVar6 = *param_2;
  cVar11 = (char)(uVar7 >> 8);
  *param_1 = *param_1 + cVar11;
  *pbVar8 = *pbVar8 + (char)uVar7;
  bVar5 = *pbVar8;
  bVar12 = (byte)(uVar6 * 0x4adc3c00 >> 8);
  *pbVar8 = *pbVar8 + bVar12;
  cVar4 = (char)uVar7 + *pbVar8 + CARRY1(bVar5,bVar12);
  *param_1 = *param_1 + (char)auStack_20;
  pcVar3 = (char *)((ulonglong)CONCAT31((int3)(uVar7 >> 8),cVar4) * 2);
  *pcVar3 = *pcVar3 + cVar4;
  uVar7 = *(int *)(ulonglong)CONCAT22((short)(uVar7 >> 0x10),CONCAT11(cVar11 * '\x02',cVar4)) *
          0x126830;
  uVar6 = *(int *)(ulonglong)(uVar6 * 0x4adc3c00) * 0x4adc3c00;
  pbVar15 = (byte *)(ulonglong)uVar6;
  bVar12 = (byte)(uVar7 >> 8);
  *param_1 = *param_1 + bVar12;
  *(byte *)((ulonglong)uVar7 * 2) = *(byte *)((ulonglong)uVar7 * 2) & bVar14;
  uVar1 = (undefined2)(uVar7 >> 0x10);
  bVar5 = (byte)uVar7;
  bVar16 = (byte)(uVar6 >> 8);
  bVar12 = bVar12 & bVar16;
  uVar6 = CONCAT22(uVar1,CONCAT11(bVar12,bVar5));
  *(byte *)(ulonglong)uVar6 = *(byte *)(ulonglong)uVar6 | bVar5;
  bVar5 = bVar5 + 0x1c;
  uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar5);
  *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 | uVar6;
  uVar6 = CONCAT22(uVar1,CONCAT11(bVar12,bVar5));
  uVar6 = CONCAT31((int3)(uVar6 >> 8),(bVar5 | *(byte *)(ulonglong)uVar6) - 0x3c);
  uVar6 = uVar6 | *(uint *)(ulonglong)uVar6 | 0x4001054;
  pbVar9 = (byte *)((ulonglong)uVar6 ^ 0xf);
  pbVar8 = pbVar9 + -0x57ffed89;
  bVar5 = *pbVar8;
  bVar13 = (byte)(uVar6 >> 8);
  *pbVar8 = *pbVar8 + bVar13;
  bVar12 = (byte)pbVar9;
  uVar2 = (uint3)(uVar6 >> 8);
  if (CARRY1(bVar5,bVar13) || *pbVar8 == 0) {
    pbVar9[-0x1c] = pbVar9[-0x1c] + bVar16;
    *param_4 = *param_4 + (char)auStack_30;
    *pbVar15 = *pbVar15 | bVar12;
    bVar5 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar14;
    *(uint *)(pbVar9 + in_FS_OFFSET) =
         *(int *)(pbVar9 + in_FS_OFFSET) + (int)pbVar9 + (uint)CARRY1(bVar5,bVar14);
    return CONCAT31(uVar2,bVar12 + *pbVar9);
  }
  if (-1 < (char)*pbVar8) {
    (&stack0x0021001a)[CONCAT44(unaff_0000001c,unaff_EBX) * 8] =
         (&stack0x0021001a)[CONCAT44(unaff_0000001c,unaff_EBX) * 8];
    *pbVar9 = *pbVar9 + bVar12;
    pbVar9 = (byte *)((ulonglong)uVar2 << 8);
  }
  cVar4 = in(0x49);
  puVar10 = (uint *)CONCAT71((int7)((ulonglong)pbVar9 >> 8),cVar4);
  *param_1 = *param_1 + cVar4;
  *puVar10 = *puVar10 | (uint)puVar10;
  *puVar10 = *puVar10 + unaff_EBX;
  *pbVar15 = *pbVar15 + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

