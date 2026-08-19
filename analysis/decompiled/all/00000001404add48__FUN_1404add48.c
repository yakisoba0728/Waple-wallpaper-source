// Function: FUN_1404add48
// Addr: 1404add48
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404add99) overlaps instruction at (ram,0x0001404add98)
    */
/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_1404add48(char *param_1,int *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined2 uVar3;
  uint3 uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  byte bVar10;
  byte bVar11;
  longlong in_RAX;
  byte *pbVar8;
  byte bVar12;
  byte bVar14;
  byte *pbVar13;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  longlong in_FS_OFFSET;
  undefined1 auStack_10 [16];
  uint *puVar9;
  
  bVar12 = (byte)param_1;
  *param_1 = *param_1;
  *(char *)(in_RAX * 2) = *(char *)(in_RAX * 2) + (char)in_RAX;
  uVar7 = *(int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                           CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02' + (char)param_2,
                                    (char)in_RAX)) * 0x126830;
  iVar2 = *param_2;
  pbVar13 = (byte *)(ulonglong)(uint)(iVar2 * 0x4adc3c00);
  bVar10 = (byte)(uVar7 >> 8);
  *param_1 = *param_1 + bVar10;
  *(byte *)((ulonglong)uVar7 * 2) = *(byte *)((ulonglong)uVar7 * 2) & bVar12;
  uVar3 = (undefined2)(uVar7 >> 0x10);
  bVar5 = (byte)uVar7;
  bVar14 = (byte)((uint)(iVar2 * 0x4adc3c00) >> 8);
  bVar10 = bVar10 & bVar14;
  uVar7 = CONCAT22(uVar3,CONCAT11(bVar10,bVar5));
  *(byte *)(ulonglong)uVar7 = *(byte *)(ulonglong)uVar7 | bVar5;
  bVar5 = bVar5 + 0x1c;
  uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
  *(uint *)(ulonglong)uVar7 = *(uint *)(ulonglong)uVar7 | uVar7;
  uVar7 = CONCAT22(uVar3,CONCAT11(bVar10,bVar5));
  uVar7 = CONCAT31((int3)(uVar7 >> 8),(bVar5 | *(byte *)(ulonglong)uVar7) - 0x3c);
  uVar7 = uVar7 | *(uint *)(ulonglong)uVar7 | 0x4001054;
  pbVar8 = (byte *)((ulonglong)uVar7 ^ 0xf);
  pbVar1 = pbVar8 + -0x57ffed89;
  bVar5 = *pbVar1;
  bVar11 = (byte)(uVar7 >> 8);
  *pbVar1 = *pbVar1 + bVar11;
  bVar10 = (byte)pbVar8;
  uVar4 = (uint3)(uVar7 >> 8);
  if (CARRY1(bVar5,bVar11) || *pbVar1 == 0) {
    pbVar8[-0x1c] = pbVar8[-0x1c] + bVar14;
    *param_4 = *param_4 + (char)auStack_10;
    *pbVar13 = *pbVar13 | bVar10;
    bVar5 = *pbVar8;
    *pbVar8 = *pbVar8 + bVar12;
    *(uint *)(pbVar8 + in_FS_OFFSET) =
         *(int *)(pbVar8 + in_FS_OFFSET) + (int)pbVar8 + (uint)CARRY1(bVar5,bVar12);
    return CONCAT31(uVar4,bVar10 + *pbVar8);
  }
  if (-1 < (char)*pbVar1) {
    (&stack0x0021003a)[CONCAT44(unaff_0000001c,unaff_EBX) * 8] =
         (&stack0x0021003a)[CONCAT44(unaff_0000001c,unaff_EBX) * 8];
    *pbVar8 = *pbVar8 + bVar10;
    pbVar8 = (byte *)((ulonglong)uVar4 << 8);
  }
  cVar6 = in(0x49);
  puVar9 = (uint *)CONCAT71((int7)((ulonglong)pbVar8 >> 8),cVar6);
  *param_1 = *param_1 + cVar6;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 + unaff_EBX;
  *pbVar13 = *pbVar13 + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

