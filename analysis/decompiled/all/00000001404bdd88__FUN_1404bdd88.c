// Function: FUN_1404bdd88
// Addr: 1404bdd88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bdde8) overlaps instruction at (ram,0x0001404bdde3)
    */

void FUN_1404bdd88(uint *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  uint3 uVar2;
  uint3 uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  byte bVar13;
  uint *in_RAX;
  char *pcVar10;
  ulonglong uVar11;
  char *pcVar12;
  byte bVar14;
  char unaff_BL;
  byte unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  ulonglong uVar15;
  uint unaff_EBP;
  uint *puVar16;
  longlong unaff_RDI;
  longlong lVar8;
  uint *puVar9;
  
  bVar14 = (byte)((ulonglong)param_2 >> 8);
  uVar15 = (ulonglong)(uint)((int)&stack0x00000000 + *(int *)((longlong)in_RAX + 2));
  *(uint **)(uVar15 - 8) = in_RAX;
  *in_RAX = *in_RAX & (uint)param_1;
  cVar4 = (char)in_RAX + (char)*in_RAX;
  lVar8 = CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4);
  *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | bVar14;
  pcVar10 = (char *)(lVar8 + 0x78);
  *pcVar10 = *pcVar10 + cVar4;
  uVar6 = (uint)lVar8 & 0x25789500;
  pcVar10 = (char *)((ulonglong)uVar6 + 0x21004bdc);
  *pcVar10 = *pcVar10 + bVar14;
  *(undefined1 *)((ulonglong)uVar6 * 2) = 0;
  uVar2 = (uint3)(uVar6 >> 8);
  pbVar1 = (byte *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                   param_2);
  *pbVar1 = *pbVar1 | bVar14;
  cVar4 = cRam21004bdcbc002578;
  puVar9 = (uint *)(ulonglong)unaff_EBP;
  puVar16 = (uint *)((ulonglong)uVar2 * 0x100);
  uVar3 = (uint3)(unaff_EBP >> 8);
  if ((char)*pbVar1 < '\0') {
    pcVar10 = (char *)(ulonglong)CONCAT31(uVar3,cRam21004bdcbc002578);
    *pcVar10 = *pcVar10 + cRam21004bdcbc002578;
    pcVar10[0x78] = pcVar10[0x78] + cVar4;
    uVar6 = (uVar3 & 0x257895) << 8;
    *(char *)((ulonglong)uVar6 + 0x1004bdc) = *(char *)((ulonglong)uVar6 + 0x1004bdc) + bVar14;
code_r0x0001404bdded:
    uVar11 = (ulonglong)
             (uVar6 | *(uint *)CONCAT44(unaff_0000001c,
                                        CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))));
    *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         (char)param_1;
    *(int *)(uVar11 * 2) =
         *(int *)(uVar11 * 2) + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  }
  else {
    bVar13 = (byte)(unaff_EBP >> 8);
    *(byte *)(puVar9 + -0x10fff6a2) = (char)puVar9[-0x10fff6a2] + bVar13;
    *puVar9 = *puVar9 & unaff_EBP;
    cVar4 = (char)unaff_EBP + (char)*puVar9;
    bVar5 = cVar4 + CARRY1(bVar13,bVar13);
    uVar7 = CONCAT31((int3)(CONCAT22((short)(unaff_EBP >> 0x10),CONCAT11(bVar13 * '\x02',cVar4)) >>
                           8),bVar5);
    puVar9 = (uint *)(ulonglong)uVar7;
    if ((char)bVar5 < '\0') {
      uVar6 = (uint)CONCAT71((uint7)uVar2,0xdc);
      *param_4 = *param_4 + -0x24;
      goto code_r0x0001404bdded;
    }
    *(char *)(puVar16 + -0x10fff6a2) = (char)puVar16[-0x10fff6a2] + (char)(uVar6 >> 8);
    *puVar16 = *puVar16 & (uint)uVar2 << 8;
    *(char *)puVar16 = (char)*puVar16;
    if ((char)*puVar16 < '\0') goto code_r0x0001404bddf8;
    *(byte *)(puVar9 + -0x10fff6a2) = (byte)puVar9[-0x10fff6a2] + bVar13 * '\x02';
    *puVar9 = *puVar9 & uVar7;
    uVar6 = *puVar9;
    *(byte *)puVar9 = (byte)*puVar9 + bVar5;
    if ((char)(byte)*puVar9 < '\0') {
      cVar4 = unaff_BL + *(byte *)((longlong)puVar9 + -0x77f2fff6) + CARRY1((byte)uVar6,bVar5);
      uVar7 = uVar7 | *puVar9;
      pbVar1 = (byte *)((ulonglong)uVar7 + 0xc);
      *pbVar1 = *pbVar1 | unaff_BH;
      pcVar10 = (char *)((ulonglong)uVar7 + (ulonglong)uVar2 * 0x200);
      *pcVar10 = *pcVar10 + (char)uVar7;
      pcVar12 = (char *)(ulonglong)(uVar7 | 0x257d7000);
      pcVar10 = (char *)((longlong)puVar16 + unaff_RDI * 2 + -0x22e3ffdb);
      *pcVar10 = *pcVar10 + (char)param_1;
      *param_4 = *param_4 + (char)(uVar15 - 8);
      *pcVar12 = *pcVar12 + (char)uVar7;
      pcVar12[0x7d] = pcVar12[0x7d] + bVar14;
      pcVar10 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,cVar4)))
                         * 8 + 0xb01004b);
      *pcVar10 = *pcVar10 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(puVar16 + -0x13fff6a2) = (char)puVar16[-0x13fff6a2] + (char)param_2;
    *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         (uint)param_1;
    uVar11 = (ulonglong)(uVar7 + *puVar9 | *param_1);
  }
  cVar4 = (char)uVar11 + '0';
  pcVar10 = (char *)CONCAT71((int7)(uVar11 >> 8),cVar4);
  *pcVar10 = *pcVar10 + cVar4;
code_r0x0001404bddf8:
  *param_1 = *param_1 & (uint)(uVar15 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

