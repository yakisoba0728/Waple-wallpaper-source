// Function: FUN_1404c1160
// Addr: 1404c1160
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c11b7) overlaps instruction at (ram,0x0001404c11b6)
    */

void FUN_1404c1160(byte *param_1,byte *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  char cVar11;
  int in_EAX;
  uint uVar7;
  uint *puVar10;
  char cVar12;
  char cVar14;
  longlong lVar13;
  byte bVar15;
  byte unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_EBP;
  byte *unaff_RSI;
  undefined1 *unaff_RDI;
  byte *pbVar8;
  char *pcVar9;
  
  bVar15 = (byte)param_2;
  uVar7 = in_EAX + 0x50000b54;
  pbVar8 = (byte *)(ulonglong)uVar7;
  cVar12 = (char)param_1;
  *pbVar8 = *pbVar8 + cVar12;
  cVar14 = (char)((ulonglong)param_1 >> 8);
  pbVar8[(longlong)(param_2 + 0x4c)] = pbVar8[(longlong)(param_2 + 0x4c)] + cVar14;
  cVar11 = (char)(uVar7 >> 8);
  *param_1 = *param_1 + cVar11;
  bVar5 = (byte)uVar7;
  *pbVar8 = *pbVar8 + bVar5;
  pbVar8[-0x22] = pbVar8[-0x22] + bVar15;
  *pbVar8 = *pbVar8 - bVar5;
  bVar6 = *pbVar8;
  *pbVar8 = *pbVar8 - bVar5;
  uVar2 = in((short)param_2);
  *unaff_RDI = uVar2;
  pcVar9 = (char *)((longlong)pbVar8 * 2 + 0x21);
  *pcVar9 = *pcVar9 + cVar12 + (bVar6 < bVar5);
  *(char *)((longlong)pbVar8 * 2) = *(char *)((longlong)pbVar8 * 2) + bVar5;
  uVar7 = CONCAT22((short)(uVar7 >> 0x10),CONCAT11(cVar11 + (char)((ulonglong)param_2 >> 8),bVar5));
  bVar5 = bVar5 | *(byte *)(ulonglong)uVar7;
  uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
  pcVar9 = (char *)(ulonglong)uVar7;
  param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH | unaff_BL,unaff_BL))] =
       param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH | unaff_BL,unaff_BL))] + bVar15;
  *pcVar9 = *pcVar9 + cVar12;
  pcVar9[(longlong)(param_2 + 0x4c)] = pcVar9[(longlong)(param_2 + 0x4c)] + cVar14;
  bVar6 = *param_1;
  *param_1 = *param_1 + bVar5;
  lVar13 = CONCAT71((int7)((ulonglong)param_1 >> 8),cVar12 + *pcVar9 + CARRY1(bVar6,bVar5));
  *param_2 = *param_2 + bVar15;
  uVar7 = uVar7 | 0xc341200;
  puVar10 = (uint *)(ulonglong)uVar7;
  bVar6 = *param_2;
  bVar1 = *param_2;
  *param_2 = *param_2 + bVar15;
  if ((CARRY1(bVar6,bVar15)) || (lVar13 = lVar13 + -1, lVar13 != 0 && *param_2 != 0)) {
    *unaff_RSI = *unaff_RSI >> 1;
    *(byte *)puVar10 = (byte)*puVar10 + (char)lVar13;
  }
  else if (!SCARRY1(bVar1,bVar15)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)puVar10 = (byte)*puVar10 + (char)lVar13;
  uVar4 = *puVar10;
  *(byte *)puVar10 = (byte)*puVar10 + bVar5;
  *(uint *)param_2 = (*(int *)param_2 - unaff_EBP) - (uint)CARRY1((byte)uVar4,bVar5);
  uVar7 = uVar7 | *puVar10;
  bVar6 = (char)uVar7 - 0x34;
  uVar3 = (undefined3)(uVar7 >> 8);
  bVar6 = bVar6 & *(byte *)(ulonglong)CONCAT31(uVar3,bVar6);
  cVar11 = bVar6 - 1;
  pcVar9 = (char *)(ulonglong)CONCAT31(uVar3,cVar11);
  *pcVar9 = (*pcVar9 - cVar11) - (bVar6 == 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

