// Function: FUN_1404b4830
// Addr: 1404b4830
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4830(uint *param_1,uint param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  uint in_EAX;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  uint *puVar14;
  byte bVar15;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte in_CF;
  byte bVar4;
  int *piVar13;
  
  uVar9 = in_EAX + *param_1 + (uint)in_CF;
  pbVar12 = (byte *)((ulonglong)
                     CONCAT31((int3)(uVar9 >> 8),
                              (char)uVar9 + *(char *)(ulonglong)uVar9 +
                              (CARRY4(in_EAX,*param_1) || CARRY4(in_EAX + *param_1,(uint)in_CF))) |
                    0x70);
  bVar6 = (byte)pbVar12;
  *pbVar12 = *pbVar12 + bVar6;
  *(uint *)(unaff_RBP + 0xe) = *(uint *)(unaff_RBP + 0xe) & param_2;
  pbVar1 = (byte *)(unaff_RBP + -0x38);
  bVar7 = *pbVar1;
  bVar15 = (byte)param_2;
  *pbVar1 = *pbVar1 + bVar15;
  bVar3 = *pbVar12;
  bVar4 = *pbVar12;
  *pbVar12 = bVar4 + bVar6 + CARRY1(bVar7,bVar15);
  uVar9 = (uint)(CARRY1(bVar3,bVar6) || CARRY1(bVar4 + bVar6,CARRY1(bVar7,bVar15)));
  uVar10 = uRam98220012a82b0011 + 0xa82b0011 + uVar9;
  puVar14 = (uint *)((ulonglong)uVar10 + 0x78100014);
  uVar11 = (uint)(0x57d4ffee < uRam98220012a82b0011 ||
                 CARRY4(uRam98220012a82b0011 + 0xa82b0011,uVar9));
  uVar9 = *puVar14;
  uVar5 = *puVar14 - (uint)param_1;
  *puVar14 = uVar5 - uVar11;
  uVar11 = uVar10 + 0x16680800 + (uint)(uVar9 < (uint)param_1 || uVar5 < uVar11);
  pcVar2 = (char *)((ulonglong)uVar11 + 0x280019db);
  *pcVar2 = *pcVar2 + (char)(param_2 >> 8);
  pcVar2 = (char *)(unaff_RSI + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
  *pcVar2 = *pcVar2 + bVar15;
  *(char *)param_1 = (char)*param_1 + unaff_SPL;
  pcVar2 = (char *)((ulonglong)uVar11 * 2);
  bVar7 = (byte)uVar11;
  *pcVar2 = *pcVar2 + bVar7;
  cVar8 = bVar7 + (byte)param_1;
  uVar9 = CONCAT31((int3)(uVar11 >> 8),cVar8);
  piVar13 = (int *)(ulonglong)uVar9;
  *(char *)piVar13 = (char)*piVar13 + cVar8 + CARRY1(bVar7,(byte)param_1);
  pbVar1 = (byte *)((longlong)piVar13 + -0x244fffef);
  bVar7 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BH;
  *piVar13 = (*piVar13 - uVar9) - (uint)CARRY1(bVar7,unaff_BH);
  bVar7 = (byte)(uVar11 >> 8);
  uVar10 = CONCAT22((short)(uVar11 >> 0x10),CONCAT11(bVar7 - unaff_BL,cVar8));
  puVar14 = (uint *)(ulonglong)uVar10;
  uVar5 = (uint)(bVar7 < unaff_BL);
  uVar9 = *puVar14;
  uVar11 = *puVar14;
  *puVar14 = (uVar11 - uVar10) - uVar5;
  *(char *)param_1 = (char)*param_1 + cVar8 + -0x62 + (uVar9 < uVar10 || uVar11 - uVar10 < uVar5);
  *(byte *)param_1 = (char)*param_1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

