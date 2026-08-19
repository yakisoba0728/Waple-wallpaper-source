// Function: FUN_1404b7a28
// Addr: 1404b7a28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b79c5) overlaps instruction at (ram,0x0001404b79c4)
    */

void FUN_1404b7a28(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 uVar3;
  byte bVar4;
  byte bVar8;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  char cVar10;
  char *pcVar9;
  byte bVar11;
  byte bVar12;
  longlong unaff_RBX;
  longlong unaff_RDI;
  char in_ZF;
  
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  bVar11 = (byte)param_2;
  pcVar9 = (char *)(param_1 + -1);
  uVar3 = (undefined2)param_2;
  if (pcVar9 != (char *)0x0 && in_ZF == '\0') {
    if (pcVar9 != (char *)0x1 && in_ZF == '\0') {
      uVar5 = in(uVar3);
      *param_4 = *param_4;
      *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
      in(uVar3);
    }
    *param_4 = *param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = in(uVar3);
  *param_4 = *param_4;
  uVar5 = uVar5 + *(int *)((ulonglong)uVar5 * 2);
  uVar5 = (uVar5 + 0x62641154) - (uint)(0x7ffff7ab < uVar5);
  pcVar6 = (char *)(ulonglong)uVar5;
  cVar10 = (char)((ulonglong)pcVar9 >> 8);
  *pcVar6 = *pcVar6 + cVar10;
  if (-1 < *pcVar6) {
    *pcVar9 = *pcVar9 + (char)(uVar5 >> 8);
    bVar4 = (byte)uVar5;
    *pcVar6 = *pcVar6 + bVar4;
    pbVar1 = (byte *)(pcVar6 + -0x8ffe265);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar4;
    uVar5 = (uVar5 + 0xb487d800) - (uint)CARRY1(bVar2,bVar4);
    pbVar7 = (byte *)(ulonglong)uVar5;
    bVar8 = (byte)(uVar5 >> 8);
    *pcVar9 = *pcVar9 + bVar8;
    bVar4 = (byte)uVar5;
    *(char *)((longlong)pbVar7 * 2) = *(char *)((longlong)pbVar7 * 2) + bVar4;
    *(char *)((longlong)pcVar9 * 2) = *(char *)((longlong)pcVar9 * 2) + bVar12;
    pbVar1 = pbVar7 + (longlong)pcVar9;
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar11;
    *(char *)(unaff_RBX + -0x6408ffe3) =
         (*(char *)(unaff_RBX + -0x6408ffe3) + -0x1d) - CARRY1(bVar2,bVar11);
    *pbVar7 = *pbVar7 + cVar10;
    if (-1 < (char)*pbVar7) {
      *pcVar9 = *pcVar9 + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar7 = *pbVar7 | bVar4;
    pcVar9[unaff_RDI] = pcVar9[unaff_RDI] + bVar12;
    *pbVar7 = *pbVar7 + bVar11;
    pbVar1 = (byte *)((ulonglong)
                      (CONCAT22((short)(uVar5 >> 0x10),CONCAT11(bVar8 | bVar4 | 0xf0,bVar4)) | 0xf0)
                     + 7);
    *pbVar1 = *pbVar1 | bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

