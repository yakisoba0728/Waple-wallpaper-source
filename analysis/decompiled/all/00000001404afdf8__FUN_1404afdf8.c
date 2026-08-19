// Function: FUN_1404afdf8
// Addr: 1404afdf8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404afdf8(char *param_1,undefined8 param_2)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar5;
  undefined3 uVar6;
  uint uVar7;
  uint *puVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  byte bVar16;
  uint in_EAX;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined1 uVar17;
  char cVar18;
  undefined6 uVar19;
  byte bVar20;
  undefined1 uVar21;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  uint uVar4;
  char *pcVar15;
  
  uVar21 = (undefined1)((ulonglong)param_2 >> 8);
  uVar19 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar17 = SUB81(param_1,0);
  uVar12 = in((short)param_2);
  *unaff_RDI = *unaff_RSI;
  uVar13 = in((short)param_2);
  uVar6 = (undefined3)((uint)uVar13 >> 8);
  bVar9 = (char)uVar13 + CARRY1((byte)uVar12,0x6ffff4cb < in_EAX);
  *param_1 = *param_1 + unaff_SPL;
  bVar20 = (byte)param_2 | (byte)((uint)uVar13 >> 8);
  iVar14 = CONCAT31(uVar6,bVar9 | *(byte *)((ulonglong)CONCAT31(uVar6,bVar9) * 2)) + 0xc540500;
  pbVar2 = (byte *)(unaff_RBP * 9 + -0x11f3ffec);
  bVar9 = *pbVar2;
  bVar16 = (byte)((uint)iVar14 >> 8);
  *pbVar2 = *pbVar2 + bVar16;
  uVar6 = (undefined3)((uint)iVar14 >> 8);
  bVar10 = (byte)iVar14 + CARRY1(bVar9,bVar16);
  pcVar15 = (char *)(ulonglong)CONCAT31(uVar6,bVar10);
  cVar18 = ((char)((ulonglong)param_1 >> 8) - unaff_BH) - CARRY1((byte)iVar14,CARRY1(bVar9,bVar16));
  *(char *)CONCAT62(uVar19,CONCAT11(cVar18,uVar17)) =
       *(char *)CONCAT62(uVar19,CONCAT11(cVar18,uVar17)) + unaff_SPL;
  *pcVar15 = *pcVar15 + bVar10;
  pbVar2 = (byte *)(unaff_RBP * 9 + -0x11f3ffec);
  bVar9 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar16;
  cVar11 = bVar10 + CARRY1(bVar9,bVar16);
  cVar18 = (cVar18 - unaff_BH) - CARRY1(bVar10,CARRY1(bVar9,bVar16));
  *(char *)CONCAT62(uVar19,CONCAT11(cVar18,uVar17)) =
       *(char *)CONCAT62(uVar19,CONCAT11(cVar18,uVar17)) + unaff_SPL;
  pcVar15 = (char *)((ulonglong)CONCAT31(uVar6,cVar11) * 2);
  *pcVar15 = *pcVar15 + cVar11;
  iVar14 = CONCAT22((short)((uint)iVar14 >> 0x10),CONCAT11(bVar16 + bVar20,cVar11)) + 0xc540000;
  pbVar2 = (byte *)(unaff_RBP * 9 + -0x11f3ffec);
  bVar9 = *pbVar2;
  bVar10 = (byte)((uint)iVar14 >> 8);
  *pbVar2 = *pbVar2 + bVar10;
  cVar11 = (byte)iVar14 + CARRY1(bVar9,bVar10);
  pcVar15 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar14 >> 8),cVar11);
  cVar18 = (cVar18 - unaff_BH) - CARRY1((byte)iVar14,CARRY1(bVar9,bVar10));
  *(char *)CONCAT62(uVar19,CONCAT11(cVar18,uVar17)) =
       *(char *)CONCAT62(uVar19,CONCAT11(cVar18,uVar17)) + unaff_SPL;
  *pcVar15 = *pcVar15 + cVar11;
  pbVar2 = (byte *)(pcVar15 + -0x5bffeb13);
  bVar9 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar20;
  uVar12 = in(CONCAT11(uVar21,bVar20));
  bVar10 = (char)uVar12 + CARRY1(bVar9,bVar20);
  uVar7 = CONCAT31((int3)((uint)uVar12 >> 8),bVar10);
  bVar9 = *(byte *)CONCAT62(uVar19,CONCAT11(cVar18,uVar17));
  *(byte *)CONCAT62(uVar19,CONCAT11(cVar18,uVar17)) =
       *(char *)CONCAT62(uVar19,CONCAT11(cVar18,uVar17)) + bVar10;
  puVar8 = (uint *)((ulonglong)uVar7 * 2);
  uVar5 = (uint)CARRY1(bVar9,bVar10);
  uVar3 = *puVar8;
  uVar4 = *puVar8;
  *puVar8 = uVar4 + uVar7 + uVar5;
  piVar1 = (int *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(uVar21,bVar20)) + 0xd);
  *piVar1 = *piVar1 + (int)(unaff_RSI + 1) +
            (uint)(CARRY4(uVar3,uVar7) || CARRY4(uVar4 + uVar7,uVar5));
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) >> 1 |
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) << 7;
  if (((*(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & 0x40) != 0) ==
      *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) < '\0') {
    *(byte *)CONCAT62(uVar19,CONCAT11(cVar18,uVar17)) =
         *(byte *)CONCAT62(uVar19,CONCAT11(cVar18,uVar17)) ^ (byte)((uint)uVar12 >> 8);
    pcVar15 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + (longlong)(unaff_RSI + 1) * 8);
    *pcVar15 = *pcVar15 + cVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in(7);
  cRam000000014d4b0e39 = cRam000000014d4b0e39 + bVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

