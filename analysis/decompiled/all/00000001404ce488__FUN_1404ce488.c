// Function: FUN_1404ce488
// Addr: 1404ce488
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ce4d4) overlaps instruction at (ram,0x0001404ce4d3)
    */

void FUN_1404ce488(byte *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  int *in_RAX;
  int *piVar3;
  char cVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  char unaff_BL;
  char *unaff_RSI;
  char *unaff_RDI;
  char in_R10B;
  char unaff_R12B;
  char unaff_R13B;
  char acStack_10 [16];
  
  uVar11 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar10 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar9 = (undefined1)((ulonglong)param_2 >> 8);
  bVar8 = (byte)param_2;
  cVar4 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar4;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar8;
  *unaff_RDI = *unaff_RDI + cVar4 + CARRY1(bVar1,bVar8);
  *(byte *)in_RAX = (char)*in_RAX + bVar8;
  *param_2 = *param_2 + (int)param_2;
  bVar1 = *param_1;
  *param_1 = *param_1 + (char)param_1;
  pbVar6 = param_1 + -1;
  if (pbVar6 == (byte *)0x0 || *param_1 == 0) {
    if (!SCARRY1(bVar1,(char)param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(char *)in_RAX = (char)*in_RAX + cVar4;
    register0x00000020 = (BADSPACEBASE *)(acStack_10 + 8);
    uVar9 = 0x2b;
    in_RAX = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4 + unaff_BL);
    pbVar7 = (byte *)0x0;
    if (pbVar6 == (byte *)0x0) goto code_r0x0001404ce4f3;
    *(char *)in_RAX = (char)*in_RAX + (char)((ulonglong)pbVar6 >> 8);
  }
  *(char *)((longlong)in_RAX + -0x4a) = *(char *)((longlong)in_RAX + -0x4a) + bVar8;
  uVar2 = (int)in_RAX - *in_RAX;
  piVar3 = (int *)(ulonglong)uVar2;
  *(char *)piVar3 = (char)*piVar3 + unaff_R13B;
  uVar5 = (uint)pbVar6 ^ CONCAT22(uVar10,CONCAT11(uVar9,bVar8));
  cVar4 = (char)uVar5 + unaff_R12B;
  pbVar6 = (byte *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),cVar4);
  if (pbVar6 == (byte *)0x0) {
    halt_baddata();
  }
  *(char *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(uVar9,bVar8))) =
       *(char *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(uVar9,bVar8))) + cVar4;
  if ((uVar2 & 0x2e0204) == 0) {
    pbVar6 = (byte *)(ulonglong)
                     CONCAT22((short)(uVar5 >> 0x10),CONCAT11((char)(uVar5 >> 8) + *unaff_RSI,cVar4)
                             );
  }
  cVar4 = (char)uVar2;
  *(char *)piVar3 = (char)*piVar3 + cVar4;
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar8;
  *unaff_RDI = *unaff_RDI + cVar4 + CARRY1(bVar1,bVar8);
  *(byte *)piVar3 = (char)*piVar3 + bVar8;
  *(int *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(uVar9,bVar8))) =
       *(int *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(uVar9,bVar8))) +
       CONCAT22(uVar10,CONCAT11(uVar9,bVar8));
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + (char)pbVar6;
  pbVar7 = pbVar6 + -1;
  if (pbVar7 == (byte *)0x0 || *pbVar6 == 0) {
    if (!SCARRY1(bVar1,(char)pbVar6)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)((longlong)piVar3 + -0x4a) = *(char *)((longlong)piVar3 + -0x4a) + bVar8;
    piVar3 = (int *)((ulonglong)(uVar2 - *piVar3) | 0xe4);
  }
  else {
    *(char *)piVar3 = (char)*piVar3 + cVar4;
    *(int **)((longlong)register0x00000020 + -8) = piVar3;
    uVar9 = 0x2b;
    *(char *)((longlong)register0x00000020 + -8) =
         *(char *)((longlong)register0x00000020 + -8) + (char)pbVar7;
  }
  *(char *)piVar3 = (char)*piVar3 + unaff_R13B;
  uVar2 = (uint)pbVar7 ^ CONCAT22(uVar10,CONCAT11(uVar9,bVar8));
  cRam000000014a4d31ca = cRam000000014a4d31ca + in_R10B;
  pbVar7 = (byte *)(ulonglong)
                   CONCAT22((short)(uVar2 >> 0x10),
                            CONCAT11(*unaff_RSI + '\x04' + (char)piVar3,(char)uVar2));
  cVar4 = (char)piVar3 + *(char *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(uVar9,bVar8)));
  in_RAX = (int *)CONCAT71((int7)((ulonglong)piVar3 >> 8),cVar4);
  *(char *)in_RAX = (char)*in_RAX + cVar4;
code_r0x0001404ce4f3:
  bVar1 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar8;
  *unaff_RDI = *unaff_RDI + (char)in_RAX + CARRY1(bVar1,bVar8);
  *(byte *)in_RAX = (char)*in_RAX + bVar8;
  *(int *)((longlong)in_RAX * 2) =
       *(int *)((longlong)in_RAX * 2) + CONCAT22(uVar10,CONCAT11(uVar9,bVar8));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

