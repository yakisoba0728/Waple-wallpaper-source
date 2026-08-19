// Function: FUN_1404afe14
// Addr: 1404afe14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404afe14(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar4;
  undefined3 uVar5;
  uint uVar6;
  uint *puVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  byte bVar11;
  byte bVar15;
  undefined4 uVar12;
  int iVar13;
  char *pcVar14;
  undefined1 uVar16;
  char cVar17;
  undefined6 uVar18;
  byte bVar19;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char in_CF;
  uint uVar3;
  
  bVar19 = (byte)param_2;
  uVar18 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar16 = (undefined1)param_1;
  *unaff_RDI = *unaff_RSI;
  uVar12 = in((short)param_2);
  uVar5 = (undefined3)((uint)uVar12 >> 8);
  bVar8 = (char)uVar12 + in_CF;
  bVar11 = bVar8 | 0xee;
  pcVar14 = (char *)(ulonglong)(CONCAT31(uVar5,bVar8) | 0xee);
  cVar10 = (char)((ulonglong)param_1 >> 8) - unaff_BH;
  *(char *)CONCAT62(uVar18,CONCAT11(cVar10,uVar16)) =
       *(char *)CONCAT62(uVar18,CONCAT11(cVar10,uVar16)) + unaff_SPL;
  *pcVar14 = *pcVar14 + bVar11;
  pbVar1 = (byte *)(unaff_RBP * 9 + -0x11f3ffec);
  bVar8 = *pbVar1;
  bVar15 = (byte)((uint)uVar12 >> 8);
  *pbVar1 = *pbVar1 + bVar15;
  cVar9 = bVar11 + CARRY1(bVar8,bVar15);
  cVar17 = (cVar10 - unaff_BH) - CARRY1(bVar11,CARRY1(bVar8,bVar15));
  *(char *)CONCAT62(uVar18,CONCAT11(cVar17,uVar16)) =
       *(char *)CONCAT62(uVar18,CONCAT11(cVar17,uVar16)) + unaff_SPL;
  pcVar14 = (char *)((ulonglong)CONCAT31(uVar5,cVar9) * 2);
  *pcVar14 = *pcVar14 + cVar9;
  iVar13 = CONCAT22((short)((uint)uVar12 >> 0x10),CONCAT11(bVar15 + bVar19,cVar9)) + 0xc540000;
  pbVar1 = (byte *)(unaff_RBP * 9 + -0x11f3ffec);
  bVar8 = *pbVar1;
  bVar11 = (byte)((uint)iVar13 >> 8);
  *pbVar1 = *pbVar1 + bVar11;
  cVar10 = (byte)iVar13 + CARRY1(bVar8,bVar11);
  pcVar14 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar13 >> 8),cVar10);
  cVar9 = (cVar17 - unaff_BH) - CARRY1((byte)iVar13,CARRY1(bVar8,bVar11));
  *(char *)CONCAT62(uVar18,CONCAT11(cVar9,uVar16)) =
       *(char *)CONCAT62(uVar18,CONCAT11(cVar9,uVar16)) + unaff_SPL;
  *pcVar14 = *pcVar14 + cVar10;
  pbVar1 = (byte *)(pcVar14 + -0x5bffeb13);
  bVar8 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar19;
  uVar12 = in((short)param_2);
  bVar11 = (char)uVar12 + CARRY1(bVar8,bVar19);
  uVar6 = CONCAT31((int3)((uint)uVar12 >> 8),bVar11);
  bVar8 = *(byte *)CONCAT62(uVar18,CONCAT11(cVar9,uVar16));
  *(byte *)CONCAT62(uVar18,CONCAT11(cVar9,uVar16)) =
       *(char *)CONCAT62(uVar18,CONCAT11(cVar9,uVar16)) + bVar11;
  puVar7 = (uint *)((ulonglong)uVar6 * 2);
  uVar4 = (uint)CARRY1(bVar8,bVar11);
  uVar2 = *puVar7;
  uVar3 = *puVar7;
  *puVar7 = uVar3 + uVar6 + uVar4;
  *(int *)(param_2 + 0xd) =
       *(int *)(param_2 + 0xd) + (int)(unaff_RSI + 1) +
       (uint)(CARRY4(uVar2,uVar6) || CARRY4(uVar3 + uVar6,uVar4));
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) >> 1 |
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) << 7;
  if (((*(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & 0x40) != 0) ==
      *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) < '\0') {
    *(byte *)CONCAT62(uVar18,CONCAT11(cVar9,uVar16)) =
         *(byte *)CONCAT62(uVar18,CONCAT11(cVar9,uVar16)) ^ (byte)((uint)uVar12 >> 8);
    pcVar14 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + (longlong)(unaff_RSI + 1) * 8);
    *pcVar14 = *pcVar14 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in(7);
  cRam000000014d4b0e39 = cRam000000014d4b0e39 + bVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

