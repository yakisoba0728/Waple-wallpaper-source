// Function: FUN_1404ac920
// Addr: 1404ac920
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ac93d) overlaps instruction at (ram,0x0001404ac93b)
    */

void FUN_1404ac920(char *param_1,char *param_2)

{
  undefined3 uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint in_EAX;
  uint uVar5;
  uint *puVar6;
  byte *pbVar7;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  char cVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  uint *puVar15;
  char unaff_BL;
  byte unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  undefined1 *unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_SS;
  char cVar16;
  undefined1 auStack_5a [74];
  undefined1 *puStack_10;
  byte *pbVar8;
  
  uVar14 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar13 = (undefined2)((ulonglong)param_1 >> 0x10);
  cVar12 = (char)((ulonglong)param_1 >> 8);
  bVar11 = (byte)param_1;
  uVar5 = ((in_EAX & 0x1f0003e8) - (uint)param_1) + 0x6b80d00;
  puVar6 = (uint *)(ulonglong)uVar5;
  *(byte *)puVar6 = (char)*puVar6 + bVar11;
  bVar4 = (byte)param_2;
  if ((char)*puVar6 < '\0') {
    *(undefined2 *)puVar6 = in_SS;
    *(char *)puVar6 = (char)*puVar6 + (char)((ulonglong)param_2 >> 8);
    puStack_10 = &stack0xfffffffffffffff8;
    unaff_RBP = &stack0xfffffffffffffff8;
    register0x00000020 = (BADSPACEBASE *)auStack_5a;
  }
  else {
    pcVar9 = (char *)((longlong)puVar6 + (longlong)unaff_RBP * 2);
    *pcVar9 = *pcVar9 + (char)uVar5;
    uVar5 = uVar5 | *puVar6;
    pcVar9 = (char *)(ulonglong)uVar5;
    *(undefined2 *)pcVar9 = in_SS;
    pbVar8 = (byte *)(unaff_RDI + -0x74);
    bVar2 = *pbVar8;
    *pbVar8 = *pbVar8 + bVar4;
    *pcVar9 = *pcVar9 + (byte)uVar5 + CARRY1(bVar2,bVar4);
    puVar6 = (uint *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),(byte)uVar5 ^ bVar11);
    *param_1 = *param_1;
  }
  bVar2 = (byte)puVar6;
  *unaff_RSI = *unaff_RSI - bVar2;
  *(char *)puVar6 = (char)*puVar6 + cVar12;
  *param_2 = *param_2 + bVar4;
  pbVar7 = (byte *)(ulonglong)(uint)(int)(short)puVar6;
  *pbVar7 = *pbVar7 | bVar2;
  *(uint *)(pbVar7 + -0x73a8fff7) = *(uint *)(pbVar7 + -0x73a8fff7) | (uint)param_1;
  *pbVar7 = *pbVar7 + bVar2;
  pbVar7[-0x38] = pbVar7[-0x38] + bVar11;
  *param_1 = *param_1 + (char)register0x00000020;
  *pbVar7 = *pbVar7 + bVar2;
  pbVar8 = (byte *)(unaff_RDI + -0x74);
  bVar4 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar2;
  *pbVar7 = *pbVar7 + bVar2 + CARRY1(bVar4,bVar2);
  puVar15 = (uint *)(ulonglong)(uint)(int)(short)puVar6;
  pbVar7[-0x38] = pbVar7[-0x38] + bVar11;
  *param_1 = *param_1 + (char)register0x00000020;
  *unaff_RSI = *unaff_RSI + bVar2;
  *pbVar7 = *pbVar7 + bVar2;
  cVar16 = (char)((ulonglong)puVar6 >> 8);
  uVar5 = CONCAT31((int3)cVar16,bVar2 + *pbVar7 + cVar12);
  uVar5 = uVar5 + *(int *)(ulonglong)uVar5;
  pcVar9 = (char *)(ulonglong)uVar5;
  pbVar8 = (byte *)(pcVar9 + -0x73c1fffa);
  bVar4 = *pbVar8;
  *pbVar8 = *pbVar8 + unaff_BH;
  cVar3 = (char)uVar5;
  *pcVar9 = *pcVar9 + cVar3 + CARRY1(bVar4,unaff_BH);
  *(longlong *)((longlong)register0x00000020 + -8) = unaff_RDI;
  *(undefined2 *)pcVar9 = in_SS;
  *pcVar9 = *pcVar9 + cVar16;
  *(undefined1 **)((longlong)register0x00000020 + -0x10) = unaff_RBP;
  *(undefined1 **)((longlong)register0x00000020 + -0x18) =
       (undefined1 *)((longlong)register0x00000020 + -0x10);
  *(char *)((longlong)pcVar9 * 2) = *(char *)((longlong)pcVar9 * 2) + cVar3;
  uVar1 = (undefined3)(uVar5 >> 8);
  uVar5 = CONCAT31(uVar1,cVar3 + unaff_BH + *(char *)(ulonglong)CONCAT31(uVar1,cVar3 + unaff_BH) +
                         cVar12);
  uVar5 = uVar5 + *(int *)(ulonglong)uVar5;
  pcVar9 = (char *)(ulonglong)uVar5;
  *(undefined2 *)pcVar9 = in_SS;
  pbVar8 = (byte *)(unaff_RDI + -0x74);
  bVar4 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar2;
  *pcVar9 = *pcVar9 + (byte)uVar5 + CARRY1(bVar4,bVar2);
  bVar4 = (byte)uVar5 ^ bVar11;
  pbVar8 = (byte *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),bVar4);
  *param_1 = *param_1 + (char)(undefined1 *)((longlong)register0x00000020 + -0x62);
  *(byte *)puVar15 = (char)*puVar15 + bVar4;
  cVar16 = CARRY1(*pbVar8,bVar4);
  *pbVar8 = *pbVar8 + bVar4;
  *(undefined **)((longlong)register0x00000020 + -0x6a) = &UNK_1404ac9ae;
  pcVar9 = (char *)func_0xcc88c9b1();
  bVar2 = (byte)pcVar9;
  *pcVar9 = *pcVar9 + bVar2 + cVar16;
  *(longlong *)((longlong)register0x00000020 + -0x6a) = unaff_RDI;
  *(undefined2 *)pcVar9 = in_SS;
  *pcVar9 = *pcVar9 + (char)((ulonglong)puVar15 >> 8);
  *(undefined1 **)((longlong)register0x00000020 + -0x72) =
       (undefined1 *)((longlong)register0x00000020 + -0x10);
  *(undefined1 **)((longlong)register0x00000020 + -0x7a) =
       (undefined1 *)((longlong)register0x00000020 + -0x72);
  *pcVar9 = *pcVar9 + bVar2;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  *(undefined2 *)pcVar9 = in_SS;
  pbVar8 = (byte *)(unaff_RDI + -0x74);
  bVar4 = *pbVar8;
  *pbVar8 = *pbVar8 + (byte)puVar15;
  *pcVar9 = *pcVar9 + bVar2 + CARRY1(bVar4,(byte)puVar15);
  pcVar10 = (char *)CONCAT71((int7)((ulonglong)pcVar9 >> 8),bVar2 ^ bVar11);
  *(char *)CONCAT44(uVar14,CONCAT22(uVar13,CONCAT11(cVar12,bVar11))) =
       *(char *)CONCAT44(uVar14,CONCAT22(uVar13,CONCAT11(cVar12,bVar11))) +
       (char)(undefined1 *)((longlong)register0x00000020 + -0xc4);
  *pcVar10 = *pcVar10 + (bVar2 ^ bVar11);
  cVar16 = (char)((ulonglong)pcVar9 >> 8);
  *pcVar10 = *pcVar10 + cVar16;
  *(undefined2 *)pcVar10 = in_SS;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  *(undefined2 *)pcVar10 = in_SS;
  *pcVar10 = *pcVar10 + cVar16;
  *(undefined1 **)((longlong)register0x00000020 + -0xcc) =
       (undefined1 *)((longlong)register0x00000020 + -0x72);
  *(undefined1 **)((longlong)register0x00000020 + -0xd4) =
       (undefined1 *)((longlong)register0x00000020 + -0xcc);
  *puVar15 = *puVar15 & CONCAT22(uVar13,CONCAT11(cVar12,bVar11));
  *(char *)CONCAT44(uVar14,CONCAT22(uVar13,CONCAT11(cVar12,bVar11))) =
       *(char *)CONCAT44(uVar14,CONCAT22(uVar13,CONCAT11(cVar12,bVar11))) + cVar16;
  *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(char *)puVar15 = (char)*puVar15 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

