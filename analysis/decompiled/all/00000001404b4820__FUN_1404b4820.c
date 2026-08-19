// Function: FUN_1404b4820
// Addr: 1404b4820
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4820(char *param_1,int *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong in_RAX;
  uint *puVar14;
  byte bVar15;
  byte bVar16;
  byte unaff_BL;
  char unaff_BH;
  byte bVar17;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte *unaff_RDI;
  byte bVar4;
  byte *pbVar12;
  int *piVar13;
  
  bVar16 = (byte)param_2;
  bVar17 = unaff_BH - *(char *)(in_RAX + 7);
  bVar7 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar16;
  uVar9 = (int)in_RAX + 0x14341300 + (uint)CARRY1(bVar7,bVar16);
  pbVar12 = (byte *)(ulonglong)uVar9;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(bVar17,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(bVar17,unaff_BL)) + bVar16;
  *param_2 = *param_2 + (uint)param_2;
  bVar15 = (byte)param_1;
  pbVar12[unaff_RSI * 2] = pbVar12[unaff_RSI * 2] + bVar15;
  bVar6 = (byte)uVar9;
  *pbVar12 = *pbVar12 + bVar6;
  *(uint *)(unaff_RBP + 0xe) = *(uint *)(unaff_RBP + 0xe) & (uint)param_2;
  pbVar1 = (byte *)(unaff_RBP + -0x38);
  bVar7 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar16;
  bVar3 = *pbVar12;
  bVar4 = *pbVar12;
  *pbVar12 = bVar4 + bVar6 + CARRY1(bVar7,bVar16);
  uVar9 = (uint)(CARRY1(bVar3,bVar6) || CARRY1(bVar4 + bVar6,CARRY1(bVar7,bVar16)));
  uVar10 = uRam98220012a82b0011 + 0xa82b0011 + uVar9;
  puVar14 = (uint *)((ulonglong)uVar10 + 0x78100014);
  uVar11 = (uint)(0x57d4ffee < uRam98220012a82b0011 ||
                 CARRY4(uRam98220012a82b0011 + 0xa82b0011,uVar9));
  uVar9 = *puVar14;
  uVar5 = *puVar14 - (uint)param_1;
  *puVar14 = uVar5 - uVar11;
  uVar11 = uVar10 + 0x16680800 + (uint)(uVar9 < (uint)param_1 || uVar5 < uVar11);
  pcVar2 = (char *)((ulonglong)uVar11 + 0x280019db);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_2 >> 8);
  pcVar2 = (char *)(unaff_RSI + CONCAT62(unaff_0000001a,CONCAT11(bVar17,unaff_BL)) * 4);
  *pcVar2 = *pcVar2 + bVar16;
  *param_1 = *param_1 + -8;
  pcVar2 = (char *)((ulonglong)uVar11 * 2);
  bVar7 = (byte)uVar11;
  *pcVar2 = *pcVar2 + bVar7;
  cVar8 = bVar7 + bVar15;
  uVar9 = CONCAT31((int3)(uVar11 >> 8),cVar8);
  piVar13 = (int *)(ulonglong)uVar9;
  *(char *)piVar13 = (char)*piVar13 + cVar8 + CARRY1(bVar7,bVar15);
  pbVar1 = (byte *)((longlong)piVar13 + -0x244fffef);
  bVar7 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar17;
  *piVar13 = (*piVar13 - uVar9) - (uint)CARRY1(bVar7,bVar17);
  bVar7 = (byte)(uVar11 >> 8);
  uVar10 = CONCAT22((short)(uVar11 >> 0x10),CONCAT11(bVar7 - unaff_BL,cVar8));
  puVar14 = (uint *)(ulonglong)uVar10;
  uVar5 = (uint)(bVar7 < unaff_BL);
  uVar9 = *puVar14;
  uVar11 = *puVar14;
  *puVar14 = (uVar11 - uVar10) - uVar5;
  *param_1 = *param_1 + cVar8 + -0x62 + (uVar9 < uVar10 || uVar11 - uVar10 < uVar5);
  *param_1 = *param_1 + bVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

