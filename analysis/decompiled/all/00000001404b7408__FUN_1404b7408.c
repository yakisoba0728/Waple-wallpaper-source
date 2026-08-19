// Function: FUN_1404b7408
// Addr: 1404b7408
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b7450) overlaps instruction at (ram,0x0001404b744f)
    */

void FUN_1404b7408(char *param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  longlong in_RAX;
  char *pcVar5;
  byte bVar7;
  char cVar8;
  undefined6 uVar9;
  undefined1 *unaff_RBX;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  byte *unaff_RDI;
  byte in_CF;
  bool bVar12;
  undefined1 auStack_8 [8];
  byte *pbVar6;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  uVar9 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar8 = (char)((ulonglong)param_1 >> 8);
  bVar7 = (byte)param_1;
  if (param_1 == (char *)0x0) {
    *(uint *)(in_RAX + 0x470f0022) = *(uint *)(in_RAX + 0x470f0022) | (uint)unaff_RBX;
    pbVar6 = (byte *)(ulonglong)((int)in_RAX + 0xe2b8e800);
  }
  else {
    uVar4 = ((int)in_RAX + -0x4b731800) - (uint)in_CF;
    pbVar6 = (byte *)(ulonglong)uVar4;
    *param_1 = *param_1 + (char)(uVar4 >> 8);
    *(byte *)param_2 = (byte)*param_2 | (byte)uVar4;
    bVar2 = *pbVar6;
    *pbVar6 = *pbVar6 + bVar7;
    puVar10 = auStack_8;
    uVar4 = (uVar4 + 0xe2b90f00) - (uint)CARRY1(bVar2,bVar7);
    pcVar5 = (char *)(ulonglong)uVar4;
    unaff_RBX[unaff_RSI * 2] = unaff_RBX[unaff_RSI * 2] + cVar8;
    *param_4 = *param_4 + (char)auStack_8;
    *(byte *)param_2 = (byte)*param_2 | (byte)uVar4;
    *pcVar5 = *pcVar5 + bVar7;
    if (-1 < *pcVar5) {
      bVar12 = CARRY1(bVar7,bVar3);
      bVar7 = bVar7 + bVar3;
      uVar4 = (uVar4 + 0xe2b8f900) - (uint)bVar12;
      bVar2 = (byte)uVar4;
      *(char *)((ulonglong)uVar4 + 0x73) = *(char *)((ulonglong)uVar4 + 0x73) + bVar2;
      *param_4 = *param_4 + (char)auStack_8;
      *param_2 = *param_2 | uVar4;
      *(byte *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) =
           *(char *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) + bVar7;
      *unaff_RBX = (char)(uVar4 >> 8);
      bVar3 = *unaff_RDI;
      *unaff_RDI = *unaff_RDI + bVar2;
      uVar4 = (uVar4 + 0xe2b8f100) - (uint)CARRY1(bVar3,bVar2);
      pcVar5 = (char *)(ulonglong)uVar4;
      unaff_RBX[unaff_RSI * 2 + 0x4b] = unaff_RBX[unaff_RSI * 2 + 0x4b] + (char)param_2;
      *(char *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) =
           *(char *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) + (char)(uVar4 >> 8);
      *param_2 = *param_2 | uVar4;
    }
    *(byte *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) =
         *(char *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) + bVar7;
    bVar3 = (byte)pcVar5 & *(byte *)(ulonglong)(uint)(int)(short)pcVar5;
    pbVar6 = (byte *)(ulonglong)CONCAT31((int3)(char)((ulonglong)pcVar5 >> 8),bVar3);
    unaff_RBX = (undefined1 *)((ulonglong)unaff_RBX & 0xffffffff);
    register0x00000020 = (BADSPACEBASE *)auStack_8;
    if (bVar3 != 0) {
      unaff_RBX = (undefined1 *)(ulonglong)uRam000000015d928c5b;
      register0x00000020 = (BADSPACEBASE *)puVar10;
    }
  }
  pbVar6[0x73] = pbVar6[0x73] + cVar8;
  *param_4 = *param_4 + (char)register0x00000020;
  *param_2 = *param_2 | (uint)pbVar6;
  *(byte *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) + bVar7;
  bVar3 = *pbVar6;
  *pbVar6 = *pbVar6 + (byte)unaff_RBX;
  uVar4 = ((uint)pbVar6 + 0xe2b8df00) - (uint)CARRY1(bVar3,(byte)unaff_RBX);
  unaff_RBX[unaff_RSI * 2 + 0x4b] =
       unaff_RBX[unaff_RSI * 2 + 0x4b] + (char)((ulonglong)unaff_RBX >> 8);
  *(char *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) + (char)(uVar4 >> 8);
  *param_2 = *param_2 | uVar4;
  bVar3 = *(byte *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7));
  *(byte *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) + bVar7;
  iVar1 = -(uint)CARRY1(bVar3,bVar7);
  uVar4 = iVar1 + 0x29d9d620;
  pcVar5 = (char *)((ulonglong)uVar4 + 0x21004b73);
  *pcVar5 = *pcVar5 + (char)param_2;
  *param_2 = *param_2 | uVar4;
  bVar3 = *(byte *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7));
  *(byte *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) + bVar7;
  puVar11 = (undefined8 *)((longlong)register0x00000020 + -8);
  *(undefined8 **)((longlong)register0x00000020 + -8) = unaff_RBP;
  cVar8 = '\t';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar11 = puVar11 + -1;
    *puVar11 = *unaff_RBP;
    cVar8 = cVar8 + -1;
  } while ('\0' < cVar8);
  *(undefined1 **)((longlong)register0x00000020 + -0x58) =
       (undefined1 *)((longlong)register0x00000020 + -8);
  unaff_RBX[unaff_RSI * 2 + 0x921004b] =
       unaff_RBX[unaff_RSI * 2 + 0x921004b] +
       (char)((iVar1 + 0xc92a320) - (uint)CARRY1(bVar3,bVar7) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

