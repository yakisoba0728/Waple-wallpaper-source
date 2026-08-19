// Function: FUN_1404b7604
// Addr: 1404b7604
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b7684) overlaps instruction at (ram,0x0001404b7683)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b76f7) */

void FUN_1404b7604(char *param_1,uint param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 uVar5;
  byte bVar6;
  char cVar7;
  undefined2 uVar8;
  int in_EAX;
  uint uVar9;
  ulonglong uVar12;
  undefined6 uVar19;
  uint *puVar13;
  uint *puVar14;
  byte bVar18;
  int *piVar15;
  byte bVar20;
  byte unaff_BL;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  undefined1 auStack_8 [8];
  byte *pbVar10;
  char *pcVar11;
  byte bVar16;
  char cVar17;
  
  bVar18 = (byte)((ulonglong)param_1 >> 8);
  bVar20 = (byte)param_1;
  bVar16 = (byte)(param_2 >> 8);
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] | bVar16;
  pbVar10 = (byte *)(param_1 + 0x6d);
  bVar6 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar18;
  uVar9 = (in_EAX + -0x1d6d9200) - (uint)CARRY1(bVar6,bVar18);
  pbVar10 = (byte *)(ulonglong)uVar9;
  bVar6 = *pbVar10;
  *pbVar10 = *pbVar10 + unaff_BL;
  if (*pbVar10 == 0) {
    *param_1 = *param_1 + (char)(uVar9 >> 8);
    pbVar10 = (byte *)(((ulonglong)uVar9 ^ 10) + (longlong)unaff_RDI * 2);
    bVar6 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar16;
    uVar9 = (int)((ulonglong)uVar9 ^ 10) + 0x16682400 + (uint)CARRY1(bVar6,bVar16);
    *(char *)(ulonglong)uVar9 = *(char *)(ulonglong)uVar9 + unaff_BL;
    uVar5 = in(0x30);
    pcVar11 = (char *)(ulonglong)CONCAT31((int3)(uVar9 >> 8),uVar5);
    *pcVar11 = *pcVar11 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar9 = (uVar9 + 0xe28b1300) - (uint)CARRY1(bVar6,unaff_BL);
  pbVar10 = (byte *)(ulonglong)uVar9;
  pbVar10[0x21004b75] = pbVar10[0x21004b75] + unaff_BL;
  *pbVar10 = *pbVar10 + bVar20;
  bVar6 = (byte)uVar9;
  *pbVar10 = *pbVar10 + bVar6;
  if ((char)*pbVar10 < '\0') {
    uVar12 = (ulonglong)CONCAT31((int3)(uVar9 >> 8),bVar6 + 0x8b);
    *param_4 = *param_4;
    *(char *)(uVar12 * 2) = *(char *)(uVar12 * 2) + bVar6 + 0x8b;
  }
  else {
    *pbVar10 = *pbVar10 + bVar6;
    register0x00000020 = (BADSPACEBASE *)auStack_8;
    *pbVar10 = *pbVar10 ^ bVar6;
    uVar8 = CONCAT11((char)(uVar9 >> 8) + (char)param_2,bVar6);
    uVar9 = CONCAT22((short)(uVar9 >> 0x10),uVar8);
    *(uint *)(ulonglong)uVar9 = *(uint *)(ulonglong)uVar9 ^ uVar9;
    uVar3 = in(uVar8);
    *unaff_RDI = uVar3;
    pcVar11 = (char *)(unaff_RSI * 2 + 0x21004b);
    *pcVar11 = *pcVar11 + bVar18;
    uVar12 = (ulonglong)(param_2 + 0xe2924000);
    unaff_RDI = unaff_RDI + 1;
    param_2 = uVar9;
  }
  uVar19 = (undefined6)(uVar12 >> 0x10);
  bVar6 = (byte)uVar12;
  cVar7 = (char)(uVar12 >> 8) * '\x02';
  pbVar10 = (byte *)CONCAT62(uVar19,CONCAT11(cVar7,bVar6));
  *pbVar10 = *pbVar10 ^ bVar6;
  bVar16 = cVar7 + (char)param_2;
  uVar8 = CONCAT11(bVar16,bVar6);
  puVar13 = (uint *)CONCAT62(uVar19,uVar8);
  *puVar13 = *puVar13 ^ (uint)puVar13;
  pcVar2 = (char *)(unaff_RDI + 1);
  uVar3 = in(uVar8);
  *unaff_RDI = uVar3;
  param_2 = param_2 + 0xe2924000;
  pcVar11 = (char *)(unaff_RSI * 2 + 0x21004b);
  *pcVar11 = *pcVar11 + bVar18;
  cVar7 = (char)param_2 + *(char *)(ulonglong)param_2;
  cVar17 = (char)(param_2 >> 8) + bVar6;
  uVar9 = CONCAT22((short)(param_2 >> 0x10),CONCAT11(cVar17,cVar7));
  puVar14 = (uint *)(ulonglong)uVar9;
  *puVar14 = *puVar14 ^ uVar9;
  uVar4 = *puVar14;
  *(byte *)puVar14 = (byte)*puVar14 + unaff_BL;
  if ((byte)*puVar14 != 0) {
    uVar3 = LocalDescriptorTableRegister();
    *(undefined4 *)((longlong)register0x00000020 + unaff_RSI) = uVar3;
    *(byte *)puVar14 = (byte)*puVar14 + cVar7 + CARRY1((byte)uVar4,unaff_BL);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + cVar17;
  *(byte *)puVar14 = (byte)*puVar14 + cVar7;
  pbVar10 = (byte *)(param_1 + 0x6d);
  bVar1 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar18;
  uVar9 = (uVar9 + 0xe2926e00) - (uint)CARRY1(bVar1,bVar18);
  pbVar10 = (byte *)(ulonglong)uVar9;
  *pbVar10 = *pbVar10 + unaff_BL;
  bVar18 = (byte)(uVar9 >> 8);
  if (*pbVar10 == 0) {
    *param_1 = *param_1 + bVar18;
    *pbVar10 = *pbVar10 + (char)uVar9;
    bVar18 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar16;
    uVar3 = in(uVar8);
    *(undefined4 *)pcVar2 = uVar3;
    uVar9 = (uVar9 + 0xe2929700) - (uint)CARRY1(bVar18,bVar16);
    pcVar11 = (char *)(unaff_RSI * 2 + 0x1001004b);
    *pcVar11 = *pcVar11 + bVar20;
    piVar15 = (int *)(ulonglong)uVar9;
    *(char *)((longlong)puVar13 * 2) = *(char *)((longlong)puVar13 * 2) + bVar16;
    *(byte *)piVar15 = (char)*piVar15 + bVar6;
    pbVar10 = (byte *)((longlong)piVar15 + unaff_RSI * 2);
    *pbVar10 = *pbVar10 >> (bVar20 & 7) | *pbVar10 << 8 - (bVar20 & 7);
    *(int *)(unaff_RSI + (longlong)piVar15) =
         *(int *)(unaff_RSI + (longlong)piVar15) + (uint)puVar13;
    pbVar10 = (byte *)(param_1 + (longlong)piVar15);
    bVar20 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar6;
    *piVar15 = *piVar15 + uVar9 + (uint)CARRY1(bVar20,bVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + (char)register0x00000020;
  *pbVar10 = *pbVar10 + (char)uVar9;
  pbVar10 = pbVar10 + 0x77;
  bVar16 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar18;
  uVar9 = (uVar9 + 0xe2885800) - (uint)CARRY1(bVar16,bVar18);
  pbVar10 = (byte *)(ulonglong)uVar9;
  bVar18 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar6;
  if (CARRY1(bVar18,bVar6) || *pbVar10 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)uVar9;
  *pcVar2 = *pcVar2 + bVar20;
  *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

