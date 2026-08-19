// Function: FUN_1404c13ec
// Addr: 1404c13ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c13ec(uint *param_1,char *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  longlong in_RAX;
  char *pcVar9;
  byte bVar11;
  byte *pbVar12;
  undefined7 uVar13;
  char cVar14;
  undefined2 uVar15;
  undefined4 uVar16;
  uint *unaff_RSI;
  byte *pbVar10;
  
  uVar16 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar15 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar14 = (char)param_2;
  *param_1 = *param_1 & (uint)param_2;
  *(int *)(&stack0x00000000 + in_RAX) = *(int *)(&stack0x00000000 + in_RAX) + (int)unaff_RSI;
  uVar7 = (int)in_RAX + 0xa0000634;
  *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + (char)uVar7;
  puVar3 = unaff_RSI + 1;
  uVar8 = *unaff_RSI;
  pcVar9 = (char *)(ulonglong)uVar8;
  cVar5 = (char)uVar8;
  *pcVar9 = *pcVar9 + cVar5;
  pbVar12 = (byte *)((ulonglong)param_1 & 0xffffffffffffff49);
  bVar6 = (byte)(uVar8 >> 8);
  *pbVar12 = *pbVar12 + bVar6;
  *pcVar9 = *pcVar9 + cVar5;
  pcVar9[-0x52ffffb8] = pcVar9[-0x52ffffb8] + bVar6;
  *pcVar9 = *pcVar9 + cVar5;
  bVar11 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar6;
  puVar4 = (uint *)((longlong)pcVar9 * 2);
  uVar7 = *puVar4;
  uVar2 = *puVar4;
  *puVar4 = uVar2 + uVar8 + (uint)CARRY1(bVar11,bVar6);
  *(uint *)(pcVar9 + (longlong)&stack0x00000000) =
       *(int *)(pcVar9 + (longlong)&stack0x00000000) + (int)puVar3 +
       (uint)(CARRY4(uVar7,uVar8) || CARRY4(uVar2 + uVar8,(uint)CARRY1(bVar11,bVar6)));
  uVar8 = uVar8 + 0x634;
  pbVar10 = (byte *)(ulonglong)uVar8;
  *(char *)puVar3 = (char)*puVar3 + cVar14;
  bVar6 = (byte)uVar8;
  pbVar10[0x210049e1] = pbVar10[0x210049e1] + bVar6;
  *pbVar10 = *pbVar10 + bVar6;
  *pbVar10 = *pbVar10 + bVar6;
  *(char *)puVar3 = (char)*puVar3 + cVar14;
  pbVar1 = pbVar10 + 0x110049e1;
  bVar11 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar6;
  uVar13 = (undefined7)((ulonglong)pbVar12 >> 8);
  bVar11 = (char)pbVar12 + *pbVar10 + CARRY1(bVar11,bVar6);
  *param_2 = *param_2 + cVar14;
  cVar5 = (char)((ulonglong)param_2 >> 8) +
          *(char *)((ulonglong)CONCAT31((int3)(uVar8 >> 8),bVar6 | *pbVar10) +
                   CONCAT71(uVar13,bVar11));
  *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar5,cVar14))) =
       *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(cVar5,cVar14))) + cVar14;
  bVar11 = bVar11 ^ (byte)*puVar3;
  if (CONCAT71(uVar13,bVar11) == 1 || bVar11 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

