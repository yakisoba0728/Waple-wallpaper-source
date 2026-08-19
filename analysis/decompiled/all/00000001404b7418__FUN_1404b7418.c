// Function: FUN_1404b7418
// Addr: 1404b7418
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b7460) overlaps instruction at (ram,0x0001404b745e)
    */

void FUN_1404b7418(longlong param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  char *in_RAX;
  longlong lVar8;
  byte bVar9;
  char cVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  undefined1 *unaff_RBX;
  undefined8 *puVar13;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  byte *unaff_RDI;
  byte in_CF;
  bool bVar14;
  undefined8 uStack_10;
  char *pcVar6;
  byte *pbVar7;
  
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  uVar12 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar11 = (undefined2)((ulonglong)param_1 >> 0x10);
  cVar10 = (char)((ulonglong)param_1 >> 8);
  bVar9 = (byte)param_1;
  if (param_1 == 0) {
    uRam0000000000000000 = 0;
    lVar8 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + *in_RAX);
    puVar1 = (uint *)(lVar8 + 0x47180021);
    *puVar1 = *puVar1 | (uint)unaff_RBP;
    pbVar7 = (byte *)(ulonglong)((int)lVar8 + 0xe2b8df00);
  }
  else {
    uVar5 = ((int)in_RAX + -0x1d46f100) - (uint)in_CF;
    pcVar6 = (char *)(ulonglong)uVar5;
    unaff_RBX[unaff_RSI * 2] = unaff_RBX[unaff_RSI * 2] + cVar10;
    *param_4 = *param_4;
    *(byte *)param_2 = (byte)*param_2 | (byte)uVar5;
    *pcVar6 = *pcVar6 + bVar9;
    if (-1 < *pcVar6) {
      bVar14 = CARRY1(bVar9,bVar4);
      bVar9 = bVar9 + bVar4;
      uVar5 = (uVar5 + 0xe2b8f900) - (uint)bVar14;
      bVar3 = (byte)uVar5;
      *(char *)((ulonglong)uVar5 + 0x73) = *(char *)((ulonglong)uVar5 + 0x73) + bVar3;
      *param_4 = *param_4;
      *param_2 = *param_2 | uVar5;
      *(byte *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9))) =
           *(char *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9))) + bVar9;
      *unaff_RBX = (char)(uVar5 >> 8);
      bVar4 = *unaff_RDI;
      *unaff_RDI = *unaff_RDI + bVar3;
      uVar5 = (uVar5 + 0xe2b8f100) - (uint)CARRY1(bVar4,bVar3);
      pcVar6 = (char *)(ulonglong)uVar5;
      unaff_RBX[unaff_RSI * 2 + 0x4b] = unaff_RBX[unaff_RSI * 2 + 0x4b] + (char)param_2;
      *(char *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9))) =
           *(char *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9))) + (char)(uVar5 >> 8);
      *param_2 = *param_2 | uVar5;
    }
    *(byte *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9))) =
         *(char *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9))) + bVar9;
    bVar4 = (byte)pcVar6 & *(byte *)(ulonglong)(uint)(int)(short)pcVar6;
    pbVar7 = (byte *)(ulonglong)CONCAT31((int3)(char)((ulonglong)pcVar6 >> 8),bVar4);
    unaff_RBX = (undefined1 *)((ulonglong)unaff_RBX & 0xffffffff);
    if (bVar4 != 0) {
      unaff_RBX = (undefined1 *)(ulonglong)uRam000000015d928c5b;
    }
  }
  pbVar7[0x73] = pbVar7[0x73] + cVar10;
  *param_4 = *param_4;
  *param_2 = *param_2 | (uint)pbVar7;
  *(byte *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9))) =
       *(char *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9))) + bVar9;
  bVar4 = *pbVar7;
  *pbVar7 = *pbVar7 + (byte)unaff_RBX;
  uVar5 = ((uint)pbVar7 + 0xe2b8df00) - (uint)CARRY1(bVar4,(byte)unaff_RBX);
  unaff_RBX[unaff_RSI * 2 + 0x4b] =
       unaff_RBX[unaff_RSI * 2 + 0x4b] + (char)((ulonglong)unaff_RBX >> 8);
  *(char *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9))) =
       *(char *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9))) + (char)(uVar5 >> 8);
  *param_2 = *param_2 | uVar5;
  bVar4 = *(byte *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9)));
  *(byte *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9))) =
       *(char *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9))) + bVar9;
  iVar2 = -(uint)CARRY1(bVar4,bVar9);
  uVar5 = iVar2 + 0x29d9d620;
  pcVar6 = (char *)((ulonglong)uVar5 + 0x21004b73);
  *pcVar6 = *pcVar6 + (char)param_2;
  *param_2 = *param_2 | uVar5;
  bVar4 = *(byte *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9)));
  *(byte *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9))) =
       *(char *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9))) + bVar9;
  puVar13 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar10 = '\t';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar13 = puVar13 + -1;
    *puVar13 = *unaff_RBP;
    cVar10 = cVar10 + -1;
  } while ('\0' < cVar10);
  unaff_RBX[unaff_RSI * 2 + 0x921004b] =
       unaff_RBX[unaff_RSI * 2 + 0x921004b] +
       (char)((iVar2 + 0xc92a320) - (uint)CARRY1(bVar4,bVar9) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

