// Function: FUN_1404b480c
// Addr: 1404b480c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b4807) overlaps instruction at (ram,0x0001404b4806)
    */

void FUN_1404b480c(byte *param_1,int *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  byte *in_RAX;
  uint *puVar17;
  char cVar19;
  byte bVar20;
  byte bVar23;
  int iVar21;
  char *unaff_RBX;
  longlong unaff_RBP;
  char *unaff_RSI;
  byte *unaff_RDI;
  bool in_SF;
  byte bVar5;
  byte *pbVar16;
  byte bVar18;
  char *pcVar22;
  
  cVar11 = (char)((ulonglong)param_1 >> 8);
  bVar18 = (byte)param_1;
  bVar10 = (byte)param_2;
  if (in_SF) {
    cVar3 = *param_4;
    cVar7 = (char)in_RAX;
    *param_4 = *param_4 + cVar7;
    cVar19 = (char)((ulonglong)param_2 >> 8);
    if (*param_4 == '\0' || SCARRY1(cVar3,cVar7) != *param_4 < '\0') {
      *unaff_RBX = *unaff_RBX + cVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_RSI[-8] = unaff_RSI[-8] + (char)((ulonglong)unaff_RBX >> 8);
    *in_RAX = *in_RAX + cVar7;
    if (-1 < (char)*in_RAX) goto code_r0x0001404b47ca;
    *(int *)in_RAX = *(int *)in_RAX + (int)in_RAX;
    iVar21 = (int)in_RAX * 2;
    *(byte *)(param_2 + -0xe) = (char)param_2[-0xe] + bVar10;
    in_RAX = (byte *)0xaed03304;
    *unaff_RSI = *unaff_RSI + cVar11;
    *unaff_RDI = 4;
    *param_1 = *param_1 + cVar11;
    cVar11 = (char)((uint)iVar21 >> 8);
    if ((char)*param_1 < '\0') {
      *param_1 = *param_1 + 4;
      if ((char)*param_1 < '\0') {
        bVar20 = (byte)iVar21;
        bVar23 = cVar11 - cRam00000000aed0330b;
        pcVar22 = (char *)(ulonglong)CONCAT22((short)((uint)iVar21 >> 0x10),CONCAT11(bVar23,bVar20))
        ;
        bVar8 = *unaff_RDI;
        *unaff_RDI = *unaff_RDI + bVar10;
        uVar12 = CARRY1(bVar8,bVar10) + 0xc3044604;
        pbVar16 = (byte *)(ulonglong)uVar12;
        *pcVar22 = *pcVar22 + bVar10;
        *param_2 = *param_2 + (uint)param_2;
        pbVar16[(longlong)unaff_RSI * 2] = pbVar16[(longlong)unaff_RSI * 2] + bVar18;
        bVar9 = (byte)uVar12;
        *pbVar16 = *pbVar16 + bVar9;
        *(uint *)(unaff_RBP + 0xe) = *(uint *)(unaff_RBP + 0xe) & (uint)param_2;
        pbVar1 = (byte *)(unaff_RBP + -0x38);
        bVar8 = *pbVar1;
        *pbVar1 = *pbVar1 + bVar10;
        bVar4 = *pbVar16;
        bVar5 = *pbVar16;
        *pbVar16 = bVar5 + bVar9 + CARRY1(bVar8,bVar10);
        uVar12 = (uint)(CARRY1(bVar4,bVar9) || CARRY1(bVar5 + bVar9,CARRY1(bVar8,bVar10)));
        uVar13 = uRam98220012a82b0011 + 0xa82b0011 + uVar12;
        puVar17 = (uint *)((ulonglong)uVar13 + 0x78100014);
        uVar14 = (uint)(0x57d4ffee < uRam98220012a82b0011 ||
                       CARRY4(uRam98220012a82b0011 + 0xa82b0011,uVar12));
        uVar12 = *puVar17;
        uVar6 = *puVar17 - (uint)param_1;
        *puVar17 = uVar6 - uVar14;
        uVar14 = uVar13 + 0x16680800 + (uint)(uVar12 < (uint)param_1 || uVar6 < uVar14);
        pcVar2 = (char *)((ulonglong)uVar14 + 0x280019db);
        *pcVar2 = *pcVar2 + cVar19;
        unaff_RSI[(longlong)pcVar22 * 4] = unaff_RSI[(longlong)pcVar22 * 4] + bVar10;
        *param_1 = *param_1 - 8;
        pcVar2 = (char *)((ulonglong)uVar14 * 2);
        bVar10 = (byte)uVar14;
        *pcVar2 = *pcVar2 + bVar10;
        cVar11 = bVar10 + bVar18;
        uVar12 = CONCAT31((int3)(uVar14 >> 8),cVar11);
        piVar15 = (int *)(ulonglong)uVar12;
        *(char *)piVar15 = (char)*piVar15 + cVar11 + CARRY1(bVar10,bVar18);
        pbVar1 = (byte *)((longlong)piVar15 + -0x244fffef);
        bVar18 = *pbVar1;
        *pbVar1 = *pbVar1 + bVar23;
        *piVar15 = (*piVar15 - uVar12) - (uint)CARRY1(bVar18,bVar23);
        bVar18 = (byte)(uVar14 >> 8);
        uVar13 = CONCAT22((short)(uVar14 >> 0x10),CONCAT11(bVar18 - bVar20,cVar11));
        puVar17 = (uint *)(ulonglong)uVar13;
        uVar6 = (uint)(bVar18 < bVar20);
        uVar12 = *puVar17;
        uVar14 = *puVar17;
        *puVar17 = (uVar14 - uVar13) - uVar6;
        *param_1 = *param_1 + cVar11 + -0x62 + (uVar12 < uVar13 || uVar14 - uVar13 < uVar6);
        *param_1 = *param_1 + bVar23;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      bVar18 = *param_1;
      *param_1 = *param_1 + 0x33;
      in_RAX = (byte *)(ulonglong)((0xcc < bVar18) + 0xc4483404);
    }
    in_RAX[-0x38] = in_RAX[-0x38] + cVar11;
  }
  bVar18 = *in_RAX;
  bVar8 = (byte)in_RAX;
  in_RAX = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar8 + *in_RAX);
  if (CARRY1(bVar8,bVar18)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x0001404b47ca:
  piVar15 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | *in_RAX);
  *piVar15 = (*piVar15 - (int)piVar15) - (uint)CARRY1(bVar10,bVar10);
  *piVar15 = *piVar15 - (int)piVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

