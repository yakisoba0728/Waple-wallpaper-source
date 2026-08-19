// Function: FUN_1404b47e8
// Addr: 1404b47e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b4807) overlaps instruction at (ram,0x0001404b4806)
    */

void FUN_1404b47e8(byte *param_1,int *param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  byte *pbVar13;
  undefined7 uVar15;
  uint *puVar14;
  char cVar16;
  byte unaff_BL;
  char unaff_BH;
  byte bVar17;
  undefined6 unaff_0000001a;
  undefined8 *puVar18;
  undefined8 *unaff_RBP;
  char *unaff_RSI;
  byte *unaff_RDI;
  byte bStack_48;
  undefined1 auStack_2b [19];
  undefined8 uStack_18;
  
  cVar16 = (char)((ulonglong)param_1 >> 8);
  bVar5 = (byte)param_1;
  puVar18 = (undefined8 *)&stack0xfffffffffffffff0;
  cVar8 = '\x01';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar18 = puVar18 + -1;
    *puVar18 = *unaff_RBP;
    cVar8 = cVar8 + -1;
  } while ('\0' < cVar8);
  pbVar13 = (byte *)0xaed03304;
  *unaff_RSI = *unaff_RSI + cVar16;
  *unaff_RDI = 4;
  *param_1 = *param_1 + cVar16;
  bVar7 = (byte)param_2;
  if ((char)*param_1 < '\0') {
    *param_1 = *param_1 + 4;
    if ((char)*param_1 < '\0') {
      bVar17 = unaff_BH - cRam00000000aed0330b;
      bVar2 = *unaff_RDI;
      *unaff_RDI = *unaff_RDI + bVar7;
      uVar9 = CARRY1(bVar2,bVar7) + 0xc3044604;
      pbVar13 = (byte *)(ulonglong)uVar9;
      *(byte *)CONCAT62(unaff_0000001a,CONCAT11(bVar17,unaff_BL)) =
           *(char *)CONCAT62(unaff_0000001a,CONCAT11(bVar17,unaff_BL)) + bVar7;
      *param_2 = *param_2 + (int)param_2;
      pbVar13[(longlong)unaff_RSI * 2] = pbVar13[(longlong)unaff_RSI * 2] + bVar5;
      bVar6 = (byte)uVar9;
      *pbVar13 = *pbVar13 + bVar6;
      bVar2 = *pbVar13;
      bVar3 = *pbVar13;
      *pbVar13 = bVar3 + bVar6 + CARRY1(bStack_48,bVar7);
      uVar9 = (uint)(CARRY1(bVar2,bVar6) || CARRY1(bVar3 + bVar6,CARRY1(bStack_48,bVar7)));
      uVar10 = uRam98220012a82b0011 + 0xa82b0011 + uVar9;
      puVar14 = (uint *)((ulonglong)uVar10 + 0x78100014);
      uVar11 = (uint)(0x57d4ffee < uRam98220012a82b0011 ||
                     CARRY4(uRam98220012a82b0011 + 0xa82b0011,uVar9));
      uVar9 = *puVar14;
      uVar4 = *puVar14 - (uint)param_1;
      *puVar14 = uVar4 - uVar11;
      uVar11 = uVar10 + 0x16680800 + (uint)(uVar9 < (uint)param_1 || uVar4 < uVar11);
      pcVar1 = (char *)((ulonglong)uVar11 + 0x280019db);
      *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
      unaff_RSI[CONCAT62(unaff_0000001a,CONCAT11(bVar17,unaff_BL)) * 4] =
           unaff_RSI[CONCAT62(unaff_0000001a,CONCAT11(bVar17,unaff_BL)) * 4] + bVar7;
      *param_1 = *param_1 + (char)auStack_2b;
      pcVar1 = (char *)((ulonglong)uVar11 * 2);
      bVar7 = (byte)uVar11;
      *pcVar1 = *pcVar1 + bVar7;
      cVar8 = bVar7 + bVar5;
      uVar9 = CONCAT31((int3)(uVar11 >> 8),cVar8);
      piVar12 = (int *)(ulonglong)uVar9;
      *(char *)piVar12 = (char)*piVar12 + cVar8 + CARRY1(bVar7,bVar5);
      pbVar13 = (byte *)((longlong)piVar12 + -0x244fffef);
      bVar5 = *pbVar13;
      *pbVar13 = *pbVar13 + bVar17;
      *piVar12 = (*piVar12 - uVar9) - (uint)CARRY1(bVar5,bVar17);
      bVar5 = (byte)(uVar11 >> 8);
      uVar10 = CONCAT22((short)(uVar11 >> 0x10),CONCAT11(bVar5 - unaff_BL,cVar8));
      puVar14 = (uint *)(ulonglong)uVar10;
      uVar4 = (uint)(bVar5 < unaff_BL);
      uVar9 = *puVar14;
      uVar11 = *puVar14;
      *puVar14 = (uVar11 - uVar10) - uVar4;
      *param_1 = *param_1 + cVar8 + -0x62 + (uVar9 < uVar10 || uVar11 - uVar10 < uVar4);
      *param_1 = *param_1 + bVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    bVar5 = *param_1;
    *param_1 = *param_1 + 0x33;
    pbVar13 = (byte *)(ulonglong)((0xcc < bVar5) + 0xc4483404);
  }
  pbVar13[-0x38] = pbVar13[-0x38] + unaff_BH;
  uVar15 = (undefined7)((ulonglong)pbVar13 >> 8);
  bVar5 = (byte)pbVar13 + *pbVar13;
  if (CARRY1((byte)pbVar13,*pbVar13)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar12 = (int *)CONCAT71(uVar15,bVar5 | *(byte *)CONCAT71(uVar15,bVar5));
  *piVar12 = (*piVar12 - (int)piVar12) - (uint)CARRY1(bVar7,bVar7);
  *piVar12 = *piVar12 - (int)piVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

