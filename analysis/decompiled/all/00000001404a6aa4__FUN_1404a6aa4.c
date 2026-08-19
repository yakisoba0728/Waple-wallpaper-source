// Function: FUN_1404a6aa4
// Addr: 1404a6aa4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a6acf) overlaps instruction at (ram,0x0001404a6ace)
    */

void FUN_1404a6aa4(int *param_1,int *param_2)

{
  undefined3 uVar1;
  uint3 uVar2;
  undefined2 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *in_RAX;
  char *pcVar11;
  uint *puVar12;
  char cVar17;
  byte *pbVar14;
  char *pcVar15;
  char *pcVar16;
  char cVar19;
  char cVar20;
  undefined6 uVar21;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  char cVar22;
  longlong unaff_RBP;
  char *unaff_RSI;
  bool bVar23;
  bool in_SF;
  undefined8 uStack_8;
  byte *pbVar10;
  char *pcVar13;
  undefined6 uVar18;
  
  uVar21 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar19 = (char)param_2;
  if (in_SF) {
    register0x00000020 = (BADSPACEBASE *)&uStack_8;
    uStack_8 = 0xffffffff82040003;
  }
  else {
    pcVar15 = (char *)((longlong)in_RAX + unaff_RBP * 2);
    *pcVar15 = *pcVar15 + unaff_BL;
    iVar7 = (int)in_RAX + *in_RAX;
    in_RAX = (int *)(ulonglong)CONCAT31((int3)((uint)iVar7 >> 8),(char)iVar7 + -0x7e);
  }
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *param_1 = *param_1 + (int)param_1;
  uVar8 = (int)in_RAX + 0x5e20900;
  if (!SCARRY4((int)in_RAX,0x5e20900)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar4 = (byte)uVar8;
  *(byte *)(ulonglong)uVar8 = *(byte *)(ulonglong)uVar8 ^ bVar4;
  *(byte *)param_1 = (char)*param_1 + bVar4;
  uVar1 = (undefined3)(uVar8 >> 8);
  bVar4 = bVar4 | bRam00000001470c74c7;
  pbVar10 = (byte *)(ulonglong)CONCAT31(uVar1,bVar4);
  pbVar14 = (byte *)((longlong)param_1 + -1);
  if (pbVar14 == (byte *)0x0 || bVar4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar10 = *pbVar10 ^ bVar4;
  *pbVar14 = *pbVar14 + bVar4;
  bVar4 = bVar4 + *pbVar14;
  uVar9 = CONCAT31(uVar1,bVar4);
  *(byte *)param_2 = (char)*param_2 + bVar4;
  *(byte *)(ulonglong)uVar9 = *(byte *)(ulonglong)uVar9 ^ bVar4;
  *pbVar14 = *pbVar14 + (char)(uVar8 >> 8);
  uVar9 = uVar9 + 0x74050002;
  pbVar10 = (byte *)(ulonglong)uVar9;
  bVar4 = (byte)uVar9;
  *pbVar10 = *pbVar10 + bVar4;
  *param_2 = *param_2 + uVar9;
  *(uint *)pbVar10 = *(int *)pbVar10 + uVar9;
  cVar20 = (char)((ulonglong)param_2 >> 8) + *pbVar10;
  *pbVar10 = *pbVar10 + bVar4;
  uRam00000001b44f6ae0 = uRam00000001b44f6ae0 & uVar9;
  bVar5 = bVar4 + *pbVar10;
  pcVar15 = (char *)(ulonglong)CONCAT31((int3)(uVar9 >> 8),bVar5);
  ((char *)((longlong)param_1 + 0x9b423ff))[(longlong)pbVar14] =
       ((char *)((longlong)param_1 + 0x9b423ff))[(longlong)pbVar14] + cVar20 +
       CARRY1(bVar4,*pbVar10);
  *pcVar15 = *pcVar15 + bVar5;
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0x4a;
  *pbVar14 = *pbVar14 + (char)(uVar9 >> 8);
  *pcVar15 = *pcVar15 + bVar5;
  *pcVar15 = *pcVar15 + cVar19;
  uVar8 = CONCAT22((short)(uVar9 >> 0x10),CONCAT11(9,bVar5));
  puVar12 = (uint *)(ulonglong)uVar8;
  *(char *)((longlong)register0x00000020 + (longlong)unaff_RSI * 4 + -8) =
       *(char *)((longlong)register0x00000020 + (longlong)unaff_RSI * 4 + -8) + '\t';
  *puVar12 = *puVar12 | uVar8;
  pcVar15 = (char *)(CONCAT62(uVar21,CONCAT11(cVar20,cVar19)) + 0x4a);
  *pcVar15 = *pcVar15 + (char)((ulonglong)pbVar14 >> 8);
  bVar4 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar5;
  *unaff_RSI = (*unaff_RSI - bVar5) - CARRY1(bVar4,bVar5);
  *(char *)puVar12 = (char)*puVar12 + unaff_BL;
  bVar23 = CARRY4(uRam000000014c3a7807,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  uRam000000014c3a7807 = uRam000000014c3a7807 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))
  ;
  pcVar15 = (char *)((longlong)param_1 + -2);
  if (pcVar15 != (char *)0x0 && uRam000000014c3a7807 != 0) {
    uVar8 = (uVar8 - *puVar12) - (uint)bVar23 | 0x4001c74;
    pcVar13 = (char *)(((ulonglong)uVar8 ^ 0x23) - 0x13fff649);
    *pcVar13 = *pcVar13 + cVar20;
    pcVar13 = (char *)(CONCAT62(uVar21,CONCAT11(cVar20,cVar19)) + unaff_RBP * 2);
    cVar17 = (char)((ulonglong)pcVar15 >> 8);
    *pcVar13 = *pcVar13 + cVar17;
    cVar22 = (char)(undefined1 *)((longlong)register0x00000020 + -8);
    *pcVar15 = *pcVar15 + cVar22;
    *(char *)((longlong)register0x00000020 + CONCAT62(uVar21,CONCAT11(cVar20,cVar19)) * 8 + -8) =
         *(char *)((longlong)register0x00000020 + CONCAT62(uVar21,CONCAT11(cVar20,cVar19)) * 8 + -8)
         + (char)((ulonglong)uVar8 ^ 0x23) + '\x02';
    bVar4 = in(CONCAT11(cVar20,cVar19));
    pcVar11 = (char *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),bVar4);
    uVar18 = (undefined6)((ulonglong)pcVar15 >> 0x10);
    pcVar16 = (char *)CONCAT62(uVar18,CONCAT11(cVar17 + '\t',(char)pcVar15));
    pcVar13 = (char *)(CONCAT62(uVar21,CONCAT11(cVar20,cVar19)) + unaff_RBP * 2);
    *pcVar13 = *pcVar13 + '\t';
    *pcVar16 = *pcVar16 + cVar22;
    *pcVar11 = *pcVar11 + bVar4;
    uVar3 = (undefined2)(uVar8 >> 0x10);
    bVar5 = (char)(uVar8 >> 8) + cVar17 + '\t';
    cVar17 = cVar17 + '\x12';
    pcVar11 = (char *)CONCAT62(uVar18,CONCAT11(cVar17,(char)pcVar15));
    pcVar15 = (char *)(CONCAT62(uVar21,CONCAT11(cVar20,cVar19)) + unaff_RBP * 2);
    *pcVar15 = *pcVar15 + '\t';
    *pcVar11 = *pcVar11 + cVar22;
    pcVar15 = (char *)((ulonglong)CONCAT22(uVar3,CONCAT11(bVar5,bVar4)) * 2);
    *pcVar15 = *pcVar15 + bVar4;
    uVar8 = CONCAT22(uVar3,CONCAT11(bVar5 + bVar4,bVar4));
    iVar7 = *(int *)(ulonglong)uVar8;
    *(char *)((longlong)register0x00000020 +
             CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(9,unaff_BL))) + -8) =
         *(char *)((longlong)register0x00000020 +
                  CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(9,unaff_BL))) + -8) +
         cVar20;
    uVar2 = (uint3)((uVar8 - iVar7) - (uint)CARRY1(bVar5,bVar4) >> 8);
    puVar12 = (uint *)CONCAT71((uint7)uVar2,0xb7);
    *puVar12 = *puVar12 | (uint)puVar12;
    cVar6 = in(CONCAT11(cVar20,cVar19));
    pcVar13 = (char *)(ulonglong)CONCAT31(uVar2,cVar6);
    pcVar15 = (char *)(CONCAT62(uVar21,CONCAT11(cVar20,cVar19)) + unaff_RBP * 2);
    *pcVar15 = *pcVar15 + cVar17;
    *pcVar11 = *pcVar11 + cVar22;
    *pcVar13 = *pcVar13 + cVar6;
    pcVar13[-0x13fff649] = pcVar13[-0x13fff649] + cVar20;
    pcVar15 = (char *)(CONCAT62(uVar21,CONCAT11(cVar20,cVar19)) + unaff_RBP * 2);
    *pcVar15 = *pcVar15 + cVar17;
    *pcVar11 = *pcVar11 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

