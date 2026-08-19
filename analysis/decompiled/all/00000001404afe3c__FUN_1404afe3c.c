// Function: FUN_1404afe3c
// Addr: 1404afe3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404afe3c(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  byte bVar8;
  byte bVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined1 uVar12;
  undefined6 uVar13;
  byte bVar14;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined7 unaff_00000021;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char in_CF;
  uint uVar3;
  
  bVar14 = (byte)param_2;
  uVar13 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar12 = (undefined1)param_1;
  *unaff_RDI = *unaff_RSI;
  uVar10 = in((short)param_2);
  bVar8 = (char)uVar10 + in_CF;
  pcVar11 = (char *)(ulonglong)(CONCAT31((int3)((uint)uVar10 >> 8),bVar8) | 0xee);
  cVar5 = (char)((ulonglong)param_1 >> 8) - unaff_BH;
  *(char *)CONCAT62(uVar13,CONCAT11(cVar5,uVar12)) =
       *(char *)CONCAT62(uVar13,CONCAT11(cVar5,uVar12)) + unaff_SPL;
  *pcVar11 = *pcVar11 + (bVar8 | 0xee);
  pbVar1 = (byte *)(pcVar11 + -0x5bffeb13);
  bVar8 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar14;
  uVar10 = in((short)param_2);
  bVar9 = (char)uVar10 + CARRY1(bVar8,bVar14);
  uVar6 = CONCAT31((int3)((uint)uVar10 >> 8),bVar9);
  bVar8 = *(byte *)CONCAT62(uVar13,CONCAT11(cVar5,uVar12));
  *(byte *)CONCAT62(uVar13,CONCAT11(cVar5,uVar12)) =
       *(char *)CONCAT62(uVar13,CONCAT11(cVar5,uVar12)) + bVar9;
  puVar7 = (uint *)((ulonglong)uVar6 * 2);
  uVar4 = (uint)CARRY1(bVar8,bVar9);
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
    *(byte *)CONCAT62(uVar13,CONCAT11(cVar5,uVar12)) =
         *(byte *)CONCAT62(uVar13,CONCAT11(cVar5,uVar12)) ^ (byte)((uint)uVar10 >> 8);
    pcVar11 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + (longlong)(unaff_RSI + 1) * 8);
    *pcVar11 = *pcVar11 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in(7);
  cRam000000014d4b0e39 = cRam000000014d4b0e39 + bVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

