// Function: FUN_1404ac988
// Addr: 1404ac988
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac988(undefined1 *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 in_RAX;
  undefined7 uVar8;
  int *piVar4;
  byte *pbVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar9;
  char cVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  byte bVar13;
  char cVar14;
  undefined6 uVar15;
  char unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  char *unaff_RSI;
  longlong unaff_RDI;
  undefined2 in_SS;
  char cVar16;
  
  uVar15 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar14 = (char)((ulonglong)param_2 >> 8);
  bVar13 = (byte)param_2;
  uVar12 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar11 = (undefined2)((ulonglong)param_1 >> 0x10);
  cVar10 = (char)((ulonglong)param_1 >> 8);
  bVar9 = (byte)param_1;
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar1 = (byte)in_RAX ^ bVar9;
  *param_1 = *param_1;
  pcVar6 = (char *)(CONCAT71(uVar8,bVar1) * 2);
  *pcVar6 = *pcVar6 + bVar1;
  piVar4 = (int *)CONCAT71(uVar8,bVar1 + unaff_BH + *(char *)CONCAT71(uVar8,bVar1 + unaff_BH) +
                                 cVar10);
  uVar3 = (int)piVar4 + *piVar4;
  pcVar6 = (char *)(ulonglong)uVar3;
  *(undefined2 *)pcVar6 = in_SS;
  pbVar5 = (byte *)(unaff_RDI + -0x74);
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar13;
  *pcVar6 = *pcVar6 + (byte)uVar3 + CARRY1(bVar1,bVar13);
  bVar1 = (byte)uVar3 ^ bVar9;
  pbVar5 = (byte *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar1);
  *param_1 = *param_1;
  *param_2 = *param_2 + bVar1;
  cVar16 = CARRY1(*pbVar5,bVar1);
  *pbVar5 = *pbVar5 + bVar1;
  pcVar6 = (char *)func_0xcc88c9b1();
  bVar2 = (byte)pcVar6;
  *pcVar6 = *pcVar6 + bVar2 + cVar16;
  *(undefined2 *)pcVar6 = in_SS;
  *pcVar6 = *pcVar6 + cVar14;
  *pcVar6 = *pcVar6 + bVar2;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  *(undefined2 *)pcVar6 = in_SS;
  pbVar5 = (byte *)(unaff_RDI + -0x74);
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar13;
  *pcVar6 = *pcVar6 + bVar2 + CARRY1(bVar1,bVar13);
  pcVar7 = (char *)CONCAT71((int7)((ulonglong)pcVar6 >> 8),bVar2 ^ bVar9);
  *(char *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9))) =
       *(char *)CONCAT44(uVar12,CONCAT22(uVar11,CONCAT11(cVar10,bVar9))) + -0x62;
  *pcVar7 = *pcVar7 + (bVar2 ^ bVar9);
  cVar16 = (char)((ulonglong)pcVar6 >> 8);
  *pcVar7 = *pcVar7 + cVar16;
  *(undefined2 *)pcVar7 = in_SS;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  *(undefined2 *)pcVar7 = in_SS;
  *pcVar7 = *pcVar7 + cVar16;
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

