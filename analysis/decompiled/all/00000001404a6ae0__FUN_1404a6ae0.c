// Function: FUN_1404a6ae0
// Addr: 1404a6ae0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6ae0(byte *param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  uint3 uVar3;
  undefined2 uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  byte bVar10;
  char *in_RAX;
  uint *puVar9;
  char cVar12;
  char *pcVar11;
  char cVar14;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  char cVar15;
  longlong unaff_RBP;
  char *unaff_RSI;
  char in_CF;
  bool bVar16;
  char acStack_8 [8];
  char *pcVar8;
  undefined6 uVar13;
  
  cVar14 = (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)((longlong)param_1 * 2 + 0x9b42400);
  *pcVar1 = *pcVar1 + cVar14 + in_CF;
  bVar10 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar10;
  acStack_8[0] = 'J';
  acStack_8[1] = '\0';
  acStack_8[2] = '\0';
  acStack_8[3] = '\0';
  acStack_8[4] = '\0';
  acStack_8[5] = '\0';
  acStack_8[6] = '\0';
  acStack_8[7] = '\0';
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + bVar10;
  *in_RAX = *in_RAX + (char)param_2;
  puVar9 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(9,bVar10));
  acStack_8[(longlong)unaff_RSI * 4] = acStack_8[(longlong)unaff_RSI * 4] + '\t';
  *puVar9 = *puVar9 | (uint)puVar9;
  *(char *)(param_2 + 0x4a) = *(char *)(param_2 + 0x4a) + (char)((ulonglong)param_1 >> 8);
  bVar5 = *param_1;
  *param_1 = *param_1 + bVar10;
  *unaff_RSI = (*unaff_RSI - bVar10) - CARRY1(bVar5,bVar10);
  *(char *)puVar9 = (char)*puVar9 + unaff_BL;
  bVar16 = CARRY4(uRam000000014c3a7807,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  uRam000000014c3a7807 = uRam000000014c3a7807 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))
  ;
  param_1 = param_1 + -1;
  if (param_1 == (byte *)0x0 || uRam000000014c3a7807 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = ((uint)puVar9 - *puVar9) - (uint)bVar16 | 0x4001c74;
  pcVar1 = (char *)(((ulonglong)uVar7 ^ 0x23) - 0x13fff649);
  *pcVar1 = *pcVar1 + cVar14;
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  cVar12 = (char)((ulonglong)param_1 >> 8);
  *pcVar1 = *pcVar1 + cVar12;
  cVar15 = (char)acStack_8;
  *param_1 = *param_1 + cVar15;
  acStack_8[param_2 * 8] = acStack_8[param_2 * 8] + (char)((ulonglong)uVar7 ^ 0x23) + '\x02';
  bVar5 = in((short)param_2);
  pcVar8 = (char *)(ulonglong)CONCAT31((int3)(uVar7 >> 8),bVar5);
  uVar13 = (undefined6)((ulonglong)param_1 >> 0x10);
  pcVar11 = (char *)CONCAT62(uVar13,CONCAT11(cVar12 + '\t',(char)param_1));
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + '\t';
  *pcVar11 = *pcVar11 + cVar15;
  *pcVar8 = *pcVar8 + bVar5;
  uVar4 = (undefined2)(uVar7 >> 0x10);
  bVar10 = (char)(uVar7 >> 8) + cVar12 + '\t';
  cVar12 = cVar12 + '\x12';
  pcVar11 = (char *)CONCAT62(uVar13,CONCAT11(cVar12,(char)param_1));
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + '\t';
  *pcVar11 = *pcVar11 + cVar15;
  pcVar1 = (char *)((ulonglong)CONCAT22(uVar4,CONCAT11(bVar10,bVar5)) * 2);
  *pcVar1 = *pcVar1 + bVar5;
  uVar7 = CONCAT22(uVar4,CONCAT11(bVar10 + bVar5,bVar5));
  iVar2 = *(int *)(ulonglong)uVar7;
  acStack_8[CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(9,unaff_BL)))] =
       acStack_8[CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(9,unaff_BL)))] + cVar14;
  uVar3 = (uint3)((uVar7 - iVar2) - (uint)CARRY1(bVar10,bVar5) >> 8);
  puVar9 = (uint *)CONCAT71((uint7)uVar3,0xb7);
  *puVar9 = *puVar9 | (uint)puVar9;
  cVar6 = in((short)param_2);
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar3,cVar6);
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + cVar12;
  *pcVar11 = *pcVar11 + cVar15;
  *pcVar8 = *pcVar8 + cVar6;
  pcVar8[-0x13fff649] = pcVar8[-0x13fff649] + cVar14;
  pcVar1 = (char *)(param_2 + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + cVar12;
  *pcVar11 = *pcVar11 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

