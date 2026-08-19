// Function: FUN_1404a6a94
// Addr: 1404a6a94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a6acf) overlaps instruction at (ram,0x0001404a6ace)
    */

void FUN_1404a6a94(int *param_1,uint param_2)

{
  undefined2 uVar1;
  undefined3 uVar2;
  uint3 uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *in_RAX;
  int *piVar10;
  char *pcVar12;
  uint *puVar13;
  char *pcVar14;
  char cVar18;
  byte *pbVar15;
  char *pcVar16;
  char *pcVar17;
  undefined2 uVar20;
  int *piVar21;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  char cVar24;
  longlong unaff_RBP;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  bool bVar25;
  char acStack_8 [8];
  byte *pbVar11;
  undefined6 uVar19;
  ulonglong uVar22;
  char cVar23;
  
  param_2 = param_2 | unaff_ESI;
  uVar1 = (undefined2)(param_2 >> 0x10);
  cVar18 = (char)param_2;
  cVar23 = (char)(param_2 >> 8) + *in_RAX;
  piVar21 = (int *)(ulonglong)CONCAT22(uVar1,CONCAT11(cVar23,cVar18));
  piVar10 = (int *)(CONCAT44(unaff_00000034,unaff_ESI) + 9);
  *piVar10 = *piVar10 + (int)param_1;
  pcVar16 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + -0x68);
  *pcVar16 = *pcVar16 + (char)param_1;
  bVar5 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar5;
  piVar10 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                            (bVar5 + *in_RAX + -0x68) - CARRY1(bVar5,*in_RAX));
  iVar7 = (int)piVar10 + *piVar10;
  cVar4 = (char)iVar7 + -0x7e;
  uVar9 = CONCAT31((int3)((uint)iVar7 >> 8),cVar4);
  *(char *)(ulonglong)uVar9 = *(char *)(ulonglong)uVar9 + cVar4;
  *param_1 = *param_1 + (int)param_1;
  uVar8 = uVar9 + 0x5e20900;
  if (!SCARRY4(uVar9,0x5e20900)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar5 = (byte)uVar8;
  *(byte *)(ulonglong)uVar8 = *(byte *)(ulonglong)uVar8 ^ bVar5;
  *(byte *)param_1 = (char)*param_1 + bVar5;
  uVar2 = (undefined3)(uVar8 >> 8);
  bVar5 = bVar5 | bRam00000001470c74c7;
  pbVar11 = (byte *)(ulonglong)CONCAT31(uVar2,bVar5);
  pbVar15 = (byte *)((longlong)param_1 + -1);
  if (pbVar15 == (byte *)0x0 || bVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar11 = *pbVar11 ^ bVar5;
  *pbVar15 = *pbVar15 + bVar5;
  bVar5 = bVar5 + *pbVar15;
  uVar9 = CONCAT31(uVar2,bVar5);
  *(byte *)piVar21 = (char)*piVar21 + bVar5;
  *(byte *)(ulonglong)uVar9 = *(byte *)(ulonglong)uVar9 ^ bVar5;
  *pbVar15 = *pbVar15 + (char)(uVar8 >> 8);
  uVar9 = uVar9 + 0x74050002;
  pbVar11 = (byte *)(ulonglong)uVar9;
  bVar5 = (byte)uVar9;
  *pbVar11 = *pbVar11 + bVar5;
  *piVar21 = *piVar21 + uVar9;
  *(uint *)pbVar11 = *(int *)pbVar11 + uVar9;
  cVar23 = cVar23 + *pbVar11;
  uVar20 = CONCAT11(cVar23,cVar18);
  uVar22 = (ulonglong)CONCAT22(uVar1,uVar20);
  *pbVar11 = *pbVar11 + bVar5;
  uRam00000001b44f6ae0 = uRam00000001b44f6ae0 & uVar9;
  bVar6 = bVar5 + *pbVar11;
  pcVar16 = (char *)(ulonglong)CONCAT31((int3)(uVar9 >> 8),bVar6);
  ((char *)((longlong)param_1 + 0x9b423ff))[(longlong)pbVar15] =
       ((char *)((longlong)param_1 + 0x9b423ff))[(longlong)pbVar15] + cVar23 +
       CARRY1(bVar5,*pbVar11);
  *pcVar16 = *pcVar16 + bVar6;
  acStack_8[0] = 'J';
  acStack_8[1] = '\0';
  acStack_8[2] = '\0';
  acStack_8[3] = '\0';
  acStack_8[4] = '\0';
  acStack_8[5] = '\0';
  acStack_8[6] = '\0';
  acStack_8[7] = '\0';
  *pbVar15 = *pbVar15 + (char)(uVar9 >> 8);
  *pcVar16 = *pcVar16 + bVar6;
  *pcVar16 = *pcVar16 + cVar18;
  uVar9 = CONCAT22((short)(uVar9 >> 0x10),CONCAT11(9,bVar6));
  puVar13 = (uint *)(ulonglong)uVar9;
  acStack_8[CONCAT44(unaff_00000034,unaff_ESI) * 4] =
       acStack_8[CONCAT44(unaff_00000034,unaff_ESI) * 4] + '\t';
  *puVar13 = *puVar13 | uVar9;
  *(char *)(uVar22 + 0x4a) = *(char *)(uVar22 + 0x4a) + (char)((ulonglong)pbVar15 >> 8);
  bVar5 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar6;
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
       (*(char *)CONCAT44(unaff_00000034,unaff_ESI) - bVar6) - CARRY1(bVar5,bVar6);
  *(char *)puVar13 = (char)*puVar13 + unaff_BL;
  bVar25 = CARRY4(uRam000000014c3a7807,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  uRam000000014c3a7807 = uRam000000014c3a7807 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))
  ;
  pcVar16 = (char *)((longlong)param_1 + -2);
  if (pcVar16 != (char *)0x0 && uRam000000014c3a7807 != 0) {
    uVar9 = (uVar9 - *puVar13) - (uint)bVar25 | 0x4001c74;
    pcVar14 = (char *)(((ulonglong)uVar9 ^ 0x23) - 0x13fff649);
    *pcVar14 = *pcVar14 + cVar23;
    pcVar14 = (char *)(uVar22 + unaff_RBP * 2);
    cVar18 = (char)((ulonglong)pcVar16 >> 8);
    *pcVar14 = *pcVar14 + cVar18;
    cVar24 = (char)acStack_8;
    *pcVar16 = *pcVar16 + cVar24;
    acStack_8[uVar22 * 8] = acStack_8[uVar22 * 8] + (char)((ulonglong)uVar9 ^ 0x23) + '\x02';
    bVar5 = in(uVar20);
    pcVar12 = (char *)(ulonglong)CONCAT31((int3)(uVar9 >> 8),bVar5);
    uVar19 = (undefined6)((ulonglong)pcVar16 >> 0x10);
    pcVar17 = (char *)CONCAT62(uVar19,CONCAT11(cVar18 + '\t',(char)pcVar16));
    pcVar14 = (char *)(uVar22 + unaff_RBP * 2);
    *pcVar14 = *pcVar14 + '\t';
    *pcVar17 = *pcVar17 + cVar24;
    *pcVar12 = *pcVar12 + bVar5;
    uVar1 = (undefined2)(uVar9 >> 0x10);
    bVar6 = (char)(uVar9 >> 8) + cVar18 + '\t';
    cVar18 = cVar18 + '\x12';
    pcVar12 = (char *)CONCAT62(uVar19,CONCAT11(cVar18,(char)pcVar16));
    pcVar16 = (char *)(uVar22 + unaff_RBP * 2);
    *pcVar16 = *pcVar16 + '\t';
    *pcVar12 = *pcVar12 + cVar24;
    pcVar16 = (char *)((ulonglong)CONCAT22(uVar1,CONCAT11(bVar6,bVar5)) * 2);
    *pcVar16 = *pcVar16 + bVar5;
    uVar9 = CONCAT22(uVar1,CONCAT11(bVar6 + bVar5,bVar5));
    iVar7 = *(int *)(ulonglong)uVar9;
    acStack_8[CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(9,unaff_BL)))] =
         acStack_8[CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(9,unaff_BL)))] + cVar23;
    uVar3 = (uint3)((uVar9 - iVar7) - (uint)CARRY1(bVar6,bVar5) >> 8);
    puVar13 = (uint *)CONCAT71((uint7)uVar3,0xb7);
    *puVar13 = *puVar13 | (uint)puVar13;
    cVar4 = in(uVar20);
    pcVar14 = (char *)(ulonglong)CONCAT31(uVar3,cVar4);
    pcVar16 = (char *)(uVar22 + unaff_RBP * 2);
    *pcVar16 = *pcVar16 + cVar18;
    *pcVar12 = *pcVar12 + cVar24;
    *pcVar14 = *pcVar14 + cVar4;
    pcVar14[-0x13fff649] = pcVar14[-0x13fff649] + cVar23;
    pcVar16 = (char *)(uVar22 + unaff_RBP * 2);
    *pcVar16 = *pcVar16 + cVar18;
    *pcVar12 = *pcVar12 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

