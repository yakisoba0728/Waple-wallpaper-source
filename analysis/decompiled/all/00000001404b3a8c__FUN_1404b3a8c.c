// Function: FUN_1404b3a8c
// Addr: 1404b3a8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b3b03) overlaps instruction at (ram,0x0001404b3b02)
    */

void FUN_1404b3a8c(char *param_1,uint *param_2,char param_3,byte *param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined8 in_RAX;
  byte *pbVar9;
  int *piVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined6 uVar14;
  byte unaff_BL;
  char unaff_BH;
  longlong unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  longlong in_FS_OFFSET;
  bool bVar15;
  undefined1 auStack_8 [8];
  char *pcVar8;
  
  uVar14 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar13 = (byte)((ulonglong)param_2 >> 8);
  bVar12 = (byte)param_2;
  bVar11 = (byte)param_1;
  uVar7 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((char)((ulonglong)in_RAX >> 8) + bVar12,(char)in_RAX)) + 0xc740000;
  pcVar8 = (char *)(ulonglong)uVar7;
  *pcVar8 = *pcVar8 + (char)uVar7;
  uVar2 = *(undefined4 *)(pcVar8 + in_FS_OFFSET);
  pbVar9 = (byte *)((longlong)param_2 + (longlong)param_1);
  bVar5 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar12;
  pbVar9 = (byte *)CONCAT71((uint7)(uint3)((uint3)(uVar7 >> 8) | (uint3)((uint)uVar2 >> 8)),0x46);
  bVar4 = *pbVar9;
  bVar6 = *pbVar9;
  *pbVar9 = (bVar6 + 0xba) - CARRY1(bVar5,bVar12);
  uVar7 = in((short)param_2);
  pcVar8 = (char *)(ulonglong)uVar7;
  *pcVar8 = (*pcVar8 - param_3) - (bVar4 < 0x46 || (byte)(bVar6 + 0xba) < CARRY1(bVar5,bVar12));
  *param_4 = *param_4;
  bVar4 = (byte)uVar7;
  *pcVar8 = *pcVar8 + bVar4;
  pbVar9 = (byte *)(pcVar8 + -0x12ffe7ba);
  bVar5 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar13;
  *pcVar8 = (*pcVar8 - param_3) - CARRY1(bVar5,bVar13);
  bVar5 = *param_4;
  *param_4 = *param_4 + bVar4;
  uVar3 = (undefined3)(uVar7 >> 8);
  bVar5 = (bVar4 - 10) - CARRY1(bVar5,bVar4);
  pbVar9 = (byte *)(ulonglong)CONCAT31(uVar3,bVar5);
  pbVar9[(longlong)unaff_RDI * 2] = pbVar9[(longlong)unaff_RDI * 2] + unaff_BL;
  uVar7 = CONCAT31(uVar3,bVar5 + *pbVar9 + 'h' + CARRY1(bVar5,*pbVar9));
  uVar7 = uVar7 + *(int *)(ulonglong)uVar7;
  *unaff_RDI = *unaff_RDI + bVar11;
  pbVar9 = (byte *)((ulonglong)uVar7 ^ 10);
  bVar5 = *unaff_RDI;
  bVar4 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar11;
  if (CARRY1(bVar5,bVar11)) {
    sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar15 = false;
  if (SCARRY1(bVar4,bVar11)) {
    bVar5 = (byte)pbVar9;
    *pbVar9 = *pbVar9 | bVar5;
    bVar15 = 0x97 < bVar5;
    pbVar9 = (byte *)(ulonglong)CONCAT31((int3)(uVar7 >> 8),bVar5 + 0x68);
  }
  piVar10 = (int *)CONCAT71((int7)((ulonglong)pbVar9 >> 8),(char)pbVar9 + '\b' + bVar15);
  pcVar8 = (char *)((longlong)piVar10 + unaff_RBP * 2);
  *pcVar8 = *pcVar8 + bVar12;
  uVar7 = (int)piVar10 + *piVar10;
  *unaff_RDI = *unaff_RDI + bVar11;
  pbVar9 = (byte *)((ulonglong)uVar7 ^ 10);
  bVar4 = *unaff_RDI;
  bVar5 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar11;
  bVar6 = (byte)pbVar9;
  if (CARRY1(bVar4,bVar11)) {
    *pbVar9 = (*pbVar9 - bVar6) - 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar15 = false;
  if (!SCARRY1(bVar5,bVar11)) {
    *(byte *)param_2 = (byte)*param_2 | bVar6;
    *pbVar9 = *pbVar9 + bVar11;
    if (*pbVar9 != 0) {
      pbVar1 = pbVar9 + 0x7001850;
      bVar5 = *pbVar1;
      bVar4 = (byte)(uVar7 >> 8);
      *pbVar1 = *pbVar1 + bVar4;
      *pbVar9 = (*pbVar9 - bVar6) - CARRY1(bVar5,bVar4);
      *param_4 = *param_4 + (char)auStack_8;
      *(byte *)CONCAT62(uVar14,CONCAT11(bVar13,unaff_BH)) =
           *(byte *)CONCAT62(uVar14,CONCAT11(bVar13,unaff_BH)) | bVar6;
      bVar5 = *pbVar9;
      *pbVar9 = *pbVar9 + bVar11;
      *pbVar9 = (*pbVar9 - bVar6) - CARRY1(bVar5,bVar11);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar15 = CARRY1(*unaff_RSI,bVar12);
    *unaff_RSI = *unaff_RSI + bVar12;
    register0x00000020 = (BADSPACEBASE *)auStack_8;
  }
  bVar4 = *pbVar9;
  bVar5 = *pbVar9;
  *pbVar9 = (bVar5 - bVar6) - bVar15;
  bVar5 = bVar6 + 0x3a + (bVar4 < bVar6 || (byte)(bVar5 - bVar6) < bVar15);
  uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
  pbVar9 = (byte *)(ulonglong)uVar7;
  *param_4 = *param_4 + (char)register0x00000020;
  *(byte *)param_2 = (byte)*param_2 | bVar5;
  *pbVar9 = *pbVar9 + bVar11;
  if (-1 < (char)*pbVar9) {
    bVar4 = *unaff_RSI;
    *unaff_RSI = *unaff_RSI + bVar12;
    *(char **)((longlong)register0x00000020 + -8) = param_1;
    *pbVar9 = (*pbVar9 - bVar5) - CARRY1(bVar4,bVar12);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)param_2 = (byte)*param_2 - unaff_BH;
  *param_4 = *param_4 + (char)register0x00000020;
  *param_2 = *param_2 | uVar7;
  *param_1 = *param_1 + bVar11;
  *pbVar9 = bVar11;
  bVar4 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + unaff_BL;
  *(char **)((longlong)register0x00000020 + -8) = param_1;
  bVar6 = *pbVar9;
  bVar11 = *pbVar9;
  *pbVar9 = (bVar11 - bVar5) - CARRY1(bVar4,unaff_BL);
  *pbVar9 = (*pbVar9 - bVar5) - (bVar6 < bVar5 || (byte)(bVar11 - bVar5) < CARRY1(bVar4,unaff_BL));
  *param_4 = *param_4 + (char)(undefined1 *)((longlong)register0x00000020 + -8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

