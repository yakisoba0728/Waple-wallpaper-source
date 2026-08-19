// Function: FUN_1404add28
// Addr: 1404add28
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404add99) overlaps instruction at (ram,0x0001404add98)
    */
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_1404add28(char *param_1,int *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  undefined2 uVar2;
  uint3 uVar3;
  char *pcVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  char cVar11;
  undefined8 in_RAX;
  byte bVar12;
  byte *pbVar9;
  byte bVar13;
  uint *puVar10;
  byte bVar14;
  uint uVar15;
  byte bVar17;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  longlong in_FS_OFFSET;
  char in_CF;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [24];
  byte *pbVar8;
  byte *pbVar16;
  
  bVar14 = (byte)param_1;
  uVar7 = *(int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                           CONCAT11(-in_CF | (byte)param_2,(char)in_RAX)) * 0x126830;
  pbVar8 = (byte *)(ulonglong)uVar7;
  iVar1 = *param_2;
  cVar11 = (char)(uVar7 >> 8);
  *param_1 = *param_1 + cVar11;
  *pbVar8 = *pbVar8 + (char)uVar7;
  bVar6 = *pbVar8;
  bVar12 = (byte)((uint)(iVar1 * 0x4adc3c00) >> 8);
  *pbVar8 = *pbVar8 + bVar12;
  cVar5 = (char)uVar7 + *pbVar8 + CARRY1(bVar6,bVar12);
  *param_1 = *param_1 + (char)auStack_18;
  pcVar4 = (char *)((ulonglong)CONCAT31((int3)(uVar7 >> 8),cVar5) * 2);
  *pcVar4 = *pcVar4 + cVar5;
  uVar7 = *(int *)(ulonglong)CONCAT22((short)(uVar7 >> 0x10),CONCAT11(cVar11 * '\x02',cVar5)) *
          0x126830;
  uVar15 = *(int *)(ulonglong)(uint)(iVar1 * 0x4adc3c00) * 0x4adc3c00;
  pbVar16 = (byte *)(ulonglong)uVar15;
  bVar12 = (byte)(uVar7 >> 8);
  *param_1 = *param_1 + bVar12;
  *(byte *)((ulonglong)uVar7 * 2) = *(byte *)((ulonglong)uVar7 * 2) & bVar14;
  uVar2 = (undefined2)(uVar7 >> 0x10);
  bVar6 = (byte)uVar7;
  bVar17 = (byte)(uVar15 >> 8);
  bVar12 = bVar12 & bVar17;
  uVar7 = CONCAT22(uVar2,CONCAT11(bVar12,bVar6));
  *(byte *)(ulonglong)uVar7 = *(byte *)(ulonglong)uVar7 | bVar6;
  bVar6 = bVar6 + 0x1c;
  uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar6);
  *(uint *)(ulonglong)uVar7 = *(uint *)(ulonglong)uVar7 | uVar7;
  uVar7 = CONCAT22(uVar2,CONCAT11(bVar12,bVar6));
  uVar7 = CONCAT31((int3)(uVar7 >> 8),(bVar6 | *(byte *)(ulonglong)uVar7) - 0x3c);
  uVar7 = uVar7 | *(uint *)(ulonglong)uVar7 | 0x4001054;
  pbVar9 = (byte *)((ulonglong)uVar7 ^ 0xf);
  pbVar8 = pbVar9 + -0x57ffed89;
  bVar6 = *pbVar8;
  bVar13 = (byte)(uVar7 >> 8);
  *pbVar8 = *pbVar8 + bVar13;
  bVar12 = (byte)pbVar9;
  uVar3 = (uint3)(uVar7 >> 8);
  if (CARRY1(bVar6,bVar13) || *pbVar8 == 0) {
    pbVar9[-0x1c] = pbVar9[-0x1c] + bVar17;
    *param_4 = *param_4 + (char)auStack_28;
    *pbVar16 = *pbVar16 | bVar12;
    bVar6 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar14;
    *(uint *)(pbVar9 + in_FS_OFFSET) =
         *(int *)(pbVar9 + in_FS_OFFSET) + (int)pbVar9 + (uint)CARRY1(bVar6,bVar14);
    return CONCAT31(uVar3,bVar12 + *pbVar9);
  }
  if (-1 < (char)*pbVar8) {
    (&stack0x00210022)[CONCAT44(unaff_0000001c,unaff_EBX) * 8] =
         (&stack0x00210022)[CONCAT44(unaff_0000001c,unaff_EBX) * 8];
    *pbVar9 = *pbVar9 + bVar12;
    pbVar9 = (byte *)((ulonglong)uVar3 << 8);
  }
  cVar5 = in(0x49);
  puVar10 = (uint *)CONCAT71((int7)((ulonglong)pbVar9 >> 8),cVar5);
  *param_1 = *param_1 + cVar5;
  *puVar10 = *puVar10 | (uint)puVar10;
  *puVar10 = *puVar10 + unaff_EBX;
  *pbVar16 = *pbVar16 + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

