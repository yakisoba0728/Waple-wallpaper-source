// Function: FUN_1404b3ab4
// Addr: 1404b3ab4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b3b03) overlaps instruction at (ram,0x0001404b3b02)
    */

void FUN_1404b3ab4(char *param_1,uint *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  undefined8 in_RAX;
  undefined7 uVar9;
  int *piVar8;
  byte bVar10;
  byte bVar11;
  undefined7 uVar12;
  byte unaff_BL;
  char unaff_BH;
  longlong unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  bool bVar13;
  undefined1 auStack_8 [8];
  byte *pbVar7;
  
  uVar12 = (undefined7)((ulonglong)param_2 >> 8);
  bVar11 = (byte)param_2;
  bVar10 = (byte)param_1;
  bVar4 = *param_4;
  bVar3 = (byte)in_RAX;
  *param_4 = *param_4 + bVar3;
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar4 = (bVar3 - 10) - CARRY1(bVar4,bVar3);
  pbVar7 = (byte *)CONCAT71(uVar9,bVar4);
  pbVar7[(longlong)unaff_RDI * 2] = pbVar7[(longlong)unaff_RDI * 2] + unaff_BL;
  piVar8 = (int *)CONCAT71(uVar9,bVar4 + *pbVar7 + 'h' + CARRY1(bVar4,*pbVar7));
  uVar6 = (int)piVar8 + *piVar8;
  *unaff_RDI = *unaff_RDI + bVar10;
  pbVar7 = (byte *)((ulonglong)uVar6 ^ 10);
  bVar4 = *unaff_RDI;
  bVar3 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar10;
  if (CARRY1(bVar4,bVar10)) {
    sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar13 = false;
  if (SCARRY1(bVar3,bVar10)) {
    bVar4 = (byte)pbVar7;
    *pbVar7 = *pbVar7 | bVar4;
    bVar13 = 0x97 < bVar4;
    pbVar7 = (byte *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),bVar4 + 0x68);
  }
  piVar8 = (int *)CONCAT71((int7)((ulonglong)pbVar7 >> 8),(char)pbVar7 + '\b' + bVar13);
  pcVar2 = (char *)((longlong)piVar8 + unaff_RBP * 2);
  *pcVar2 = *pcVar2 + bVar11;
  uVar6 = (int)piVar8 + *piVar8;
  *unaff_RDI = *unaff_RDI + bVar10;
  pbVar7 = (byte *)((ulonglong)uVar6 ^ 10);
  bVar3 = *unaff_RDI;
  bVar4 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar10;
  bVar5 = (byte)pbVar7;
  if (CARRY1(bVar3,bVar10)) {
    *pbVar7 = (*pbVar7 - bVar5) - 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar13 = false;
  if (!SCARRY1(bVar4,bVar10)) {
    *(byte *)param_2 = (byte)*param_2 | bVar5;
    *pbVar7 = *pbVar7 + bVar10;
    if (*pbVar7 != 0) {
      pbVar1 = pbVar7 + 0x7001850;
      bVar4 = *pbVar1;
      bVar3 = (byte)(uVar6 >> 8);
      *pbVar1 = *pbVar1 + bVar3;
      *pbVar7 = (*pbVar7 - bVar5) - CARRY1(bVar4,bVar3);
      *param_4 = *param_4 + (char)auStack_8;
      *(byte *)CONCAT71(uVar12,unaff_BH) = *(byte *)CONCAT71(uVar12,unaff_BH) | bVar5;
      bVar4 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar10;
      *pbVar7 = (*pbVar7 - bVar5) - CARRY1(bVar4,bVar10);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar13 = CARRY1(*unaff_RSI,bVar11);
    *unaff_RSI = *unaff_RSI + bVar11;
    register0x00000020 = (BADSPACEBASE *)auStack_8;
  }
  bVar3 = *pbVar7;
  bVar4 = *pbVar7;
  *pbVar7 = (bVar4 - bVar5) - bVar13;
  bVar4 = bVar5 + 0x3a + (bVar3 < bVar5 || (byte)(bVar4 - bVar5) < bVar13);
  uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar4);
  pbVar7 = (byte *)(ulonglong)uVar6;
  *param_4 = *param_4 + (char)register0x00000020;
  *(byte *)param_2 = (byte)*param_2 | bVar4;
  *pbVar7 = *pbVar7 + bVar10;
  if (-1 < (char)*pbVar7) {
    bVar3 = *unaff_RSI;
    *unaff_RSI = *unaff_RSI + bVar11;
    *(char **)((longlong)register0x00000020 + -8) = param_1;
    *pbVar7 = (*pbVar7 - bVar4) - CARRY1(bVar3,bVar11);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)param_2 = (byte)*param_2 - unaff_BH;
  *param_4 = *param_4 + (char)register0x00000020;
  *param_2 = *param_2 | uVar6;
  *param_1 = *param_1 + bVar10;
  *pbVar7 = bVar10;
  bVar3 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + unaff_BL;
  *(char **)((longlong)register0x00000020 + -8) = param_1;
  bVar10 = *pbVar7;
  bVar11 = *pbVar7;
  *pbVar7 = (bVar11 - bVar4) - CARRY1(bVar3,unaff_BL);
  *pbVar7 = (*pbVar7 - bVar4) - (bVar10 < bVar4 || (byte)(bVar11 - bVar4) < CARRY1(bVar3,unaff_BL));
  *param_4 = *param_4 + (char)(undefined1 *)((longlong)register0x00000020 + -8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

