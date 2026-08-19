// Function: FUN_1404c1170
// Addr: 1404c1170
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c11b7) overlaps instruction at (ram,0x0001404c11b6)
    */

void FUN_1404c1170(byte *param_1,byte *param_2)

{
  byte bVar1;
  undefined3 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  char cVar10;
  uint *in_RAX;
  byte *pbVar7;
  char cVar11;
  char cVar13;
  longlong lVar12;
  byte bVar14;
  longlong unaff_RBX;
  int unaff_EBP;
  byte *unaff_RSI;
  char *pcVar8;
  uint *puVar9;
  
  bVar14 = (byte)param_2;
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar4 = (byte)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + bVar4;
  cVar11 = (char)param_1;
  *(char *)in_RAX = (char)*in_RAX + cVar11;
  cVar13 = (char)((ulonglong)param_1 >> 8);
  *(byte *)((longlong)in_RAX + (longlong)(param_2 + 0x4c)) =
       *(byte *)((longlong)in_RAX + (longlong)(param_2 + 0x4c)) + cVar13;
  cVar10 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar10;
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + bVar4;
  pbVar7 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11(cVar10 + (char)((ulonglong)param_2 >> 8),bVar4));
  bVar4 = bVar4 | *pbVar7;
  pcVar8 = (char *)CONCAT71((int7)((ulonglong)pbVar7 >> 8),bVar4);
  param_1[unaff_RBX] = param_1[unaff_RBX] + bVar14;
  *pcVar8 = *pcVar8 + cVar11;
  pcVar8[(longlong)(param_2 + 0x4c)] = pcVar8[(longlong)(param_2 + 0x4c)] + cVar13;
  bVar5 = *param_1;
  *param_1 = *param_1 + bVar4;
  lVar12 = CONCAT71((int7)((ulonglong)param_1 >> 8),cVar11 + *pcVar8 + CARRY1(bVar5,bVar4));
  *param_2 = *param_2 + bVar14;
  uVar6 = (uint)pcVar8 | 0xc341200;
  puVar9 = (uint *)(ulonglong)uVar6;
  bVar5 = *param_2;
  bVar1 = *param_2;
  *param_2 = *param_2 + bVar14;
  if ((CARRY1(bVar5,bVar14)) || (lVar12 = lVar12 + -1, lVar12 != 0 && *param_2 != 0)) {
    *unaff_RSI = *unaff_RSI >> 1;
    *(byte *)puVar9 = (byte)*puVar9 + (char)lVar12;
  }
  else if (!SCARRY1(bVar1,bVar14)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)puVar9 = (byte)*puVar9 + (char)lVar12;
  uVar3 = *puVar9;
  *(byte *)puVar9 = (byte)*puVar9 + bVar4;
  *(uint *)param_2 = (*(int *)param_2 - unaff_EBP) - (uint)CARRY1((byte)uVar3,bVar4);
  uVar6 = uVar6 | *puVar9;
  bVar5 = (char)uVar6 - 0x34;
  uVar2 = (undefined3)(uVar6 >> 8);
  bVar5 = bVar5 & *(byte *)(ulonglong)CONCAT31(uVar2,bVar5);
  cVar10 = bVar5 - 1;
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar2,cVar10);
  *pcVar8 = (*pcVar8 - cVar10) - (bVar5 == 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

