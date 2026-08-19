// Function: FUN_1404b7650
// Addr: 1404b7650
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b7684) overlaps instruction at (ram,0x0001404b7683)
    */
/* WARNING: Removing unreachable block (ram,0x0001404b76f7) */

void FUN_1404b7650(char *param_1,uint param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  undefined2 uVar8;
  uint uVar9;
  int *in_RAX;
  byte *pbVar10;
  ulonglong uVar11;
  undefined6 uVar18;
  uint *puVar12;
  uint *puVar13;
  byte bVar17;
  int *piVar14;
  byte bVar19;
  byte unaff_BL;
  uint unaff_EBP;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  byte in_CF;
  undefined1 auStack_8 [8];
  byte bVar15;
  char cVar16;
  
  bVar17 = (byte)((ulonglong)param_1 >> 8);
  bVar19 = (byte)param_1;
  uVar9 = (int)in_RAX + *in_RAX +
          (uint)(unaff_EBP < *(uint *)((longlong)in_RAX + -0x67edffee) ||
                unaff_EBP - *(uint *)((longlong)in_RAX + -0x67edffee) < (uint)in_CF);
  puVar12 = (uint *)((ulonglong)uVar9 + 0x74cc0014);
  *puVar12 = *puVar12 | (uint)param_1;
  uVar9 = uVar9 + 0xe28b1300;
  pbVar10 = (byte *)(ulonglong)uVar9;
  pbVar10[0x21004b75] = pbVar10[0x21004b75] + unaff_BL;
  *pbVar10 = *pbVar10 + bVar19;
  bVar6 = (byte)uVar9;
  *pbVar10 = *pbVar10 + bVar6;
  if ((char)*pbVar10 < '\0') {
    uVar11 = (ulonglong)CONCAT31((int3)(uVar9 >> 8),bVar6 + 0x8b);
    *param_4 = *param_4;
    *(char *)(uVar11 * 2) = *(char *)(uVar11 * 2) + bVar6 + 0x8b;
  }
  else {
    *pbVar10 = *pbVar10 + bVar6;
    register0x00000020 = (BADSPACEBASE *)auStack_8;
    *pbVar10 = *pbVar10 ^ bVar6;
    uVar8 = CONCAT11((char)(uVar9 >> 8) + (char)param_2,bVar6);
    uVar9 = CONCAT22((short)(uVar9 >> 0x10),uVar8);
    *(uint *)(ulonglong)uVar9 = *(uint *)(ulonglong)uVar9 ^ uVar9;
    uVar4 = in(uVar8);
    *unaff_RDI = uVar4;
    pcVar1 = (char *)(unaff_RSI * 2 + 0x21004b);
    *pcVar1 = *pcVar1 + bVar17;
    uVar11 = (ulonglong)(param_2 + 0xe2924000);
    unaff_RDI = unaff_RDI + 1;
    param_2 = uVar9;
  }
  uVar18 = (undefined6)(uVar11 >> 0x10);
  bVar6 = (byte)uVar11;
  cVar7 = (char)(uVar11 >> 8) * '\x02';
  pbVar10 = (byte *)CONCAT62(uVar18,CONCAT11(cVar7,bVar6));
  *pbVar10 = *pbVar10 ^ bVar6;
  bVar15 = cVar7 + (char)param_2;
  uVar8 = CONCAT11(bVar15,bVar6);
  puVar12 = (uint *)CONCAT62(uVar18,uVar8);
  *puVar12 = *puVar12 ^ (uint)puVar12;
  pcVar3 = (char *)(unaff_RDI + 1);
  uVar4 = in(uVar8);
  *unaff_RDI = uVar4;
  param_2 = param_2 + 0xe2924000;
  pcVar1 = (char *)(unaff_RSI * 2 + 0x21004b);
  *pcVar1 = *pcVar1 + bVar17;
  cVar7 = (char)param_2 + *(char *)(ulonglong)param_2;
  cVar16 = (char)(param_2 >> 8) + bVar6;
  uVar9 = CONCAT22((short)(param_2 >> 0x10),CONCAT11(cVar16,cVar7));
  puVar13 = (uint *)(ulonglong)uVar9;
  *puVar13 = *puVar13 ^ uVar9;
  uVar5 = *puVar13;
  *(byte *)puVar13 = (byte)*puVar13 + unaff_BL;
  if ((byte)*puVar13 != 0) {
    uVar4 = LocalDescriptorTableRegister();
    *(undefined4 *)((longlong)register0x00000020 + unaff_RSI) = uVar4;
    *(byte *)puVar13 = (byte)*puVar13 + cVar7 + CARRY1((byte)uVar5,unaff_BL);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + cVar16;
  *(byte *)puVar13 = (byte)*puVar13 + cVar7;
  pbVar10 = (byte *)(param_1 + 0x6d);
  bVar2 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar17;
  uVar9 = (uVar9 + 0xe2926e00) - (uint)CARRY1(bVar2,bVar17);
  pbVar10 = (byte *)(ulonglong)uVar9;
  *pbVar10 = *pbVar10 + unaff_BL;
  bVar17 = (byte)(uVar9 >> 8);
  if (*pbVar10 == 0) {
    *param_1 = *param_1 + bVar17;
    *pbVar10 = *pbVar10 + (char)uVar9;
    bVar17 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar15;
    uVar4 = in(uVar8);
    *(undefined4 *)pcVar3 = uVar4;
    uVar9 = (uVar9 + 0xe2929700) - (uint)CARRY1(bVar17,bVar15);
    pcVar1 = (char *)(unaff_RSI * 2 + 0x1001004b);
    *pcVar1 = *pcVar1 + bVar19;
    piVar14 = (int *)(ulonglong)uVar9;
    *(char *)((longlong)puVar12 * 2) = *(char *)((longlong)puVar12 * 2) + bVar15;
    *(byte *)piVar14 = (char)*piVar14 + bVar6;
    pbVar10 = (byte *)((longlong)piVar14 + unaff_RSI * 2);
    *pbVar10 = *pbVar10 >> (bVar19 & 7) | *pbVar10 << 8 - (bVar19 & 7);
    *(int *)(unaff_RSI + (longlong)piVar14) =
         *(int *)(unaff_RSI + (longlong)piVar14) + (uint)puVar12;
    pbVar10 = (byte *)(param_1 + (longlong)piVar14);
    bVar19 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar6;
    *piVar14 = *piVar14 + uVar9 + (uint)CARRY1(bVar19,bVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + (char)register0x00000020;
  *pbVar10 = *pbVar10 + (char)uVar9;
  pbVar10 = pbVar10 + 0x77;
  bVar15 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar17;
  uVar9 = (uVar9 + 0xe2885800) - (uint)CARRY1(bVar15,bVar17);
  pbVar10 = (byte *)(ulonglong)uVar9;
  bVar17 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar6;
  if (CARRY1(bVar17,bVar6) || *pbVar10 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)uVar9;
  *pcVar3 = *pcVar3 + bVar19;
  *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

