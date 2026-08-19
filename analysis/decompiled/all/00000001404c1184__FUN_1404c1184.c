// Function: FUN_1404c1184
// Addr: 1404c1184
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c11b7) overlaps instruction at (ram,0x0001404c11b6)
    */

void FUN_1404c1184(byte *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  undefined3 uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined8 in_RAX;
  byte *pbVar8;
  longlong lVar11;
  byte bVar12;
  longlong unaff_RBX;
  int unaff_EBP;
  byte *unaff_RSI;
  char *pcVar9;
  uint *puVar10;
  
  bVar12 = (byte)param_2;
  pbVar8 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) +
                                     (char)((ulonglong)param_2 >> 8),(byte)in_RAX));
  bVar5 = (byte)in_RAX | *pbVar8;
  pcVar9 = (char *)CONCAT71((int7)((ulonglong)pbVar8 >> 8),bVar5);
  param_1[unaff_RBX] = param_1[unaff_RBX] + bVar12;
  *pcVar9 = *pcVar9 + (char)param_1;
  pcVar9[(longlong)(param_2 + 0x4c)] =
       pcVar9[(longlong)(param_2 + 0x4c)] + (char)((ulonglong)param_1 >> 8);
  bVar6 = *param_1;
  *param_1 = *param_1 + bVar5;
  lVar11 = CONCAT71((int7)((ulonglong)param_1 >> 8),(char)param_1 + *pcVar9 + CARRY1(bVar6,bVar5));
  *param_2 = *param_2 + bVar12;
  uVar7 = (uint)pcVar9 | 0xc341200;
  puVar10 = (uint *)(ulonglong)uVar7;
  bVar6 = *param_2;
  bVar1 = *param_2;
  *param_2 = *param_2 + bVar12;
  if ((CARRY1(bVar6,bVar12)) || (lVar11 = lVar11 + -1, lVar11 != 0 && *param_2 != 0)) {
    *unaff_RSI = *unaff_RSI >> 1;
    *(byte *)puVar10 = (byte)*puVar10 + (char)lVar11;
  }
  else if (!SCARRY1(bVar1,bVar12)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)puVar10 = (byte)*puVar10 + (char)lVar11;
  uVar4 = *puVar10;
  *(byte *)puVar10 = (byte)*puVar10 + bVar5;
  *(uint *)param_2 = (*(int *)param_2 - unaff_EBP) - (uint)CARRY1((byte)uVar4,bVar5);
  uVar7 = uVar7 | *puVar10;
  bVar6 = (char)uVar7 - 0x34;
  uVar3 = (undefined3)(uVar7 >> 8);
  bVar6 = bVar6 & *(byte *)(ulonglong)CONCAT31(uVar3,bVar6);
  cVar2 = bVar6 - 1;
  pcVar9 = (char *)(ulonglong)CONCAT31(uVar3,cVar2);
  *pcVar9 = (*pcVar9 - cVar2) - (bVar6 == 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

