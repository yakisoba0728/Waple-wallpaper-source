// Function: FUN_1404ac960
// Addr: 1404ac960
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac960(char *param_1,char *param_2)

{
  undefined3 uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint *in_RAX;
  int *piVar5;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  char cVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  byte bVar13;
  char cVar14;
  undefined6 uVar15;
  char unaff_BL;
  byte unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  char *unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_SS;
  char cVar16;
  undefined1 auStack_126 [90];
  undefined1 auStack_c4 [74];
  undefined1 *puStack_7a;
  undefined1 *puStack_72;
  byte *pbVar6;
  
  uVar15 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar14 = (char)((ulonglong)param_2 >> 8);
  bVar13 = (byte)param_2;
  uVar12 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar11 = (undefined2)((ulonglong)param_1 >> 0x10);
  cVar10 = (char)((ulonglong)param_1 >> 8);
  bVar9 = (byte)param_1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar16 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar16;
  *(undefined2 *)in_RAX = in_SS;
  pbVar6 = (byte *)(unaff_RDI + -0x73);
  bVar2 = *pbVar6;
  bVar3 = (byte)((ulonglong)in_RAX >> 8);
  *pbVar6 = *pbVar6 + bVar3;
  *(char *)in_RAX = (char)*in_RAX + cVar16 + CARRY1(bVar2,bVar3);
  puStack_72 = &stack0xfffffffffffffff0;
  *unaff_RSI = *unaff_RSI + cVar16;
  *(char *)in_RAX = (char)*in_RAX + cVar16;
  piVar5 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar16 + (char)*in_RAX + cVar10);
  uVar4 = (int)piVar5 + *piVar5;
  pcVar7 = (char *)(ulonglong)uVar4;
  pbVar6 = (byte *)(pcVar7 + -0x73c1fffa);
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + unaff_BH;
  cVar16 = (char)uVar4;
  *pcVar7 = *pcVar7 + cVar16 + CARRY1(bVar2,unaff_BH);
  *(undefined2 *)pcVar7 = in_SS;
  *pcVar7 = *pcVar7 + cVar14;
  puStack_7a = (undefined1 *)&puStack_72;
  *(char *)((longlong)pcVar7 * 2) = *(char *)((longlong)pcVar7 * 2) + cVar16;
  uVar1 = (undefined3)(uVar4 >> 8);
  uVar4 = CONCAT31(uVar1,cVar16 + unaff_BH + *(char *)(ulonglong)CONCAT31(uVar1,cVar16 + unaff_BH) +
                         cVar10);
  uVar4 = uVar4 + *(int *)(ulonglong)uVar4;
  pcVar7 = (char *)(ulonglong)uVar4;
  *(undefined2 *)pcVar7 = in_SS;
  pbVar6 = (byte *)(unaff_RDI + -0x74);
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar13;
  *pcVar7 = *pcVar7 + (byte)uVar4 + CARRY1(bVar2,bVar13);
  bVar2 = (byte)uVar4 ^ bVar9;
  pbVar6 = (byte *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar2);
  *param_1 = *param_1 + (char)auStack_c4;
  *param_2 = *param_2 + bVar2;
  cVar16 = CARRY1(*pbVar6,bVar2);
  *pbVar6 = *pbVar6 + bVar2;
  pcVar7 = (char *)func_0xcc88c9b1();
  bVar3 = (byte)pcVar7;
  *pcVar7 = *pcVar7 + bVar3 + cVar16;
  *(undefined2 *)pcVar7 = in_SS;
  *pcVar7 = *pcVar7 + cVar14;
  *pcVar7 = *pcVar7 + bVar3;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  *(undefined2 *)pcVar7 = in_SS;
  pbVar6 = (byte *)(unaff_RDI + -0x74);
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar13;
  *pcVar7 = *pcVar7 + bVar3 + CARRY1(bVar2,bVar13);
  pcVar8 = (char *)CONCAT71((int7)((ulonglong)pcVar7 >> 8),bVar3 ^ bVar9);
  *(char *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9))) =
       *(char *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9))) + (char)auStack_126;
  *pcVar8 = *pcVar8 + (bVar3 ^ bVar9);
  cVar16 = (char)((ulonglong)pcVar7 >> 8);
  *pcVar8 = *pcVar8 + cVar16;
  *(undefined2 *)pcVar8 = in_SS;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  *(undefined2 *)pcVar8 = in_SS;
  *pcVar8 = *pcVar8 + cVar16;
  *(uint *)CONCAT62(uVar15,CONCAT11(cVar14,bVar13)) =
       *(uint *)CONCAT62(uVar15,CONCAT11(cVar14,bVar13)) & CONCAT22(uVar11,CONCAT11(cVar10,bVar9));
  *(char *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9))) =
       *(char *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9))) + cVar16;
  *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(char *)CONCAT62(uVar15,CONCAT11(cVar14,bVar13)) =
       *(char *)CONCAT62(uVar15,CONCAT11(cVar14,bVar13)) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

