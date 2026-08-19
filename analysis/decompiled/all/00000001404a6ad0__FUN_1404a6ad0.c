// Function: FUN_1404a6ad0
// Addr: 1404a6ad0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6ad0(byte *param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  uint3 uVar3;
  undefined2 uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  byte *in_RAX;
  uint *puVar10;
  char cVar12;
  char *pcVar11;
  char cVar14;
  char cVar15;
  undefined6 uVar16;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  char cVar17;
  longlong unaff_RBP;
  char *unaff_RSI;
  bool bVar18;
  char acStack_8 [8];
  char *pcVar9;
  undefined6 uVar13;
  
  uVar16 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar14 = (char)param_2;
  uVar8 = (uint)in_RAX;
  *param_2 = *param_2 + uVar8;
  *(uint *)in_RAX = *(int *)in_RAX + uVar8;
  cVar15 = (char)((ulonglong)param_2 >> 8) + *in_RAX;
  bVar6 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar6;
  uRam00000001b44f6ae0 = uRam00000001b44f6ae0 & uVar8;
  bVar5 = bVar6 + *in_RAX;
  pcVar9 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5);
  pcVar1 = (char *)((longlong)param_1 * 2 + 0x9b42400);
  *pcVar1 = *pcVar1 + cVar15 + CARRY1(bVar6,*in_RAX);
  *pcVar9 = *pcVar9 + bVar5;
  acStack_8[0] = 'J';
  acStack_8[1] = '\0';
  acStack_8[2] = '\0';
  acStack_8[3] = '\0';
  acStack_8[4] = '\0';
  acStack_8[5] = '\0';
  acStack_8[6] = '\0';
  acStack_8[7] = '\0';
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *pcVar9 = *pcVar9 + bVar5;
  *pcVar9 = *pcVar9 + cVar14;
  puVar10 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(9,bVar5));
  acStack_8[(longlong)unaff_RSI * 4] = acStack_8[(longlong)unaff_RSI * 4] + '\t';
  *puVar10 = *puVar10 | (uint)puVar10;
  pcVar1 = (char *)(CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) + 0x4a);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  bVar6 = *param_1;
  *param_1 = *param_1 + bVar5;
  *unaff_RSI = (*unaff_RSI - bVar5) - CARRY1(bVar6,bVar5);
  *(char *)puVar10 = (char)*puVar10 + unaff_BL;
  bVar18 = CARRY4(uRam000000014c3a7807,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  uRam000000014c3a7807 = uRam000000014c3a7807 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))
  ;
  param_1 = param_1 + -1;
  if (param_1 == (byte *)0x0 || uRam000000014c3a7807 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar8 = ((uint)puVar10 - *puVar10) - (uint)bVar18 | 0x4001c74;
  pcVar1 = (char *)(((ulonglong)uVar8 ^ 0x23) - 0x13fff649);
  *pcVar1 = *pcVar1 + cVar15;
  pcVar1 = (char *)(CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) + unaff_RBP * 2);
  cVar12 = (char)((ulonglong)param_1 >> 8);
  *pcVar1 = *pcVar1 + cVar12;
  cVar17 = (char)acStack_8;
  *param_1 = *param_1 + cVar17;
  acStack_8[CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) * 8] =
       acStack_8[CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) * 8] +
       (char)((ulonglong)uVar8 ^ 0x23) + '\x02';
  bVar6 = in(CONCAT11(cVar15,cVar14));
  pcVar9 = (char *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),bVar6);
  uVar13 = (undefined6)((ulonglong)param_1 >> 0x10);
  pcVar11 = (char *)CONCAT62(uVar13,CONCAT11(cVar12 + '\t',(char)param_1));
  pcVar1 = (char *)(CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + '\t';
  *pcVar11 = *pcVar11 + cVar17;
  *pcVar9 = *pcVar9 + bVar6;
  uVar4 = (undefined2)(uVar8 >> 0x10);
  bVar5 = (char)(uVar8 >> 8) + cVar12 + '\t';
  cVar12 = cVar12 + '\x12';
  pcVar11 = (char *)CONCAT62(uVar13,CONCAT11(cVar12,(char)param_1));
  pcVar1 = (char *)(CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + '\t';
  *pcVar11 = *pcVar11 + cVar17;
  pcVar1 = (char *)((ulonglong)CONCAT22(uVar4,CONCAT11(bVar5,bVar6)) * 2);
  *pcVar1 = *pcVar1 + bVar6;
  uVar8 = CONCAT22(uVar4,CONCAT11(bVar5 + bVar6,bVar6));
  iVar2 = *(int *)(ulonglong)uVar8;
  acStack_8[CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(9,unaff_BL)))] =
       acStack_8[CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(9,unaff_BL)))] + cVar15;
  uVar3 = (uint3)((uVar8 - iVar2) - (uint)CARRY1(bVar5,bVar6) >> 8);
  puVar10 = (uint *)CONCAT71((uint7)uVar3,0xb7);
  *puVar10 = *puVar10 | (uint)puVar10;
  cVar7 = in(CONCAT11(cVar15,cVar14));
  pcVar9 = (char *)(ulonglong)CONCAT31(uVar3,cVar7);
  pcVar1 = (char *)(CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + cVar12;
  *pcVar11 = *pcVar11 + cVar17;
  *pcVar9 = *pcVar9 + cVar7;
  pcVar9[-0x13fff649] = pcVar9[-0x13fff649] + cVar15;
  pcVar1 = (char *)(CONCAT62(uVar16,CONCAT11(cVar15,cVar14)) + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + cVar12;
  *pcVar11 = *pcVar11 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

