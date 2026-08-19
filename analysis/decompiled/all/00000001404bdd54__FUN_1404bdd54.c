// Function: FUN_1404bdd54
// Addr: 1404bdd54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bdde8) overlaps instruction at (ram,0x0001404bdde3)
    */

void FUN_1404bdd54(uint *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  uint3 uVar2;
  uint3 uVar3;
  uint3 uVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  byte bVar15;
  uint *in_RAX;
  undefined8 uVar9;
  uint *puVar10;
  char *pcVar11;
  ulonglong uVar12;
  char *pcVar13;
  byte bVar16;
  char unaff_BL;
  byte unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  uint unaff_EBP;
  uint *puVar17;
  longlong unaff_RDI;
  float10 in_ST0;
  undefined1 auStack_8 [8];
  char cVar14;
  
  bVar16 = (byte)((ulonglong)param_2 >> 8);
  bVar7 = (byte)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar6 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar6;
  *(byte *)(unaff_RDI + 0x25) = *(byte *)(unaff_RDI + 0x25) & bVar7;
  cVar14 = (char)((ulonglong)in_RAX >> 8);
  uVar9 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar14 + bVar7,cVar6));
  if (!SCARRY1(cVar14,bVar7)) {
    puVar10 = (uint *)CONCAT71((int7)((ulonglong)uVar9 >> 8),cVar6 + bVar16);
    *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         (int)in_ST0;
    *puVar10 = *puVar10 & (uint)puVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar8 = ((uint)uVar9 | 0xd2) + 0x26003f0;
  puVar10 = (uint *)(ulonglong)uVar8;
  *puVar10 = *puVar10 & (uint)param_1;
  uVar2 = (uint3)(uVar8 >> 8);
  cVar6 = (char)uVar8 + (char)*puVar10;
  *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | bVar16;
  pcVar11 = (char *)((ulonglong)CONCAT31(uVar2,cVar6) + 0x78);
  *pcVar11 = *pcVar11 + cVar6;
  uVar3 = uVar2 & 0x257895;
  pcVar11 = (char *)((ulonglong)uVar3 * 0x100 + 0x21004bdc);
  *pcVar11 = *pcVar11 + bVar16;
  *(undefined1 *)((ulonglong)uVar3 << 9) = 0;
  uVar2 = uVar2 & 0x257895;
  pbVar1 = (byte *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                   param_2);
  *pbVar1 = *pbVar1 | bVar16;
  cVar6 = cRam21004bdcbc002578;
  puVar10 = (uint *)(ulonglong)unaff_EBP;
  puVar17 = (uint *)((ulonglong)uVar2 * 0x100);
  uVar4 = (uint3)(unaff_EBP >> 8);
  if ((char)*pbVar1 < '\0') {
    pcVar11 = (char *)(ulonglong)CONCAT31(uVar4,cRam21004bdcbc002578);
    *pcVar11 = *pcVar11 + cRam21004bdcbc002578;
    pcVar11[0x78] = pcVar11[0x78] + cVar6;
    uVar8 = (uVar4 & 0x257895) << 8;
    *(char *)((ulonglong)uVar8 + 0x1004bdc) = *(char *)((ulonglong)uVar8 + 0x1004bdc) + bVar16;
code_r0x0001404bdded:
    uVar12 = (ulonglong)
             (uVar8 | *(uint *)CONCAT44(unaff_0000001c,
                                        CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))));
    *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         (char)param_1;
    *(int *)(uVar12 * 2) =
         *(int *)(uVar12 * 2) + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  }
  else {
    bVar15 = (byte)(unaff_EBP >> 8);
    *(byte *)(puVar10 + -0x10fff6a2) = (char)puVar10[-0x10fff6a2] + bVar15;
    *puVar10 = *puVar10 & unaff_EBP;
    cVar6 = (char)unaff_EBP + (char)*puVar10;
    bVar7 = cVar6 + CARRY1(bVar15,bVar15);
    uVar8 = CONCAT31((int3)(CONCAT22((short)(unaff_EBP >> 0x10),CONCAT11(bVar15 * '\x02',cVar6)) >>
                           8),bVar7);
    puVar10 = (uint *)(ulonglong)uVar8;
    if ((char)bVar7 < '\0') {
      uVar8 = (uint)CONCAT71((uint7)uVar3,0xdc);
      *param_4 = *param_4 + -0x24;
      goto code_r0x0001404bdded;
    }
    *(char *)(puVar17 + -0x10fff6a2) = (char)puVar17[-0x10fff6a2] + (char)uVar3;
    *puVar17 = *puVar17 & (uint)uVar2 << 8;
    *(char *)puVar17 = (char)*puVar17;
    if ((char)*puVar17 < '\0') goto code_r0x0001404bddf8;
    *(byte *)(puVar10 + -0x10fff6a2) = (byte)puVar10[-0x10fff6a2] + bVar15 * '\x02';
    *puVar10 = *puVar10 & uVar8;
    uVar5 = *puVar10;
    *(byte *)puVar10 = (byte)*puVar10 + bVar7;
    if ((char)(byte)*puVar10 < '\0') {
      cVar6 = unaff_BL + *(byte *)((longlong)puVar10 + -0x77f2fff6) + CARRY1((byte)uVar5,bVar7);
      uVar8 = uVar8 | *puVar10;
      pbVar1 = (byte *)((ulonglong)uVar8 + 0xc);
      *pbVar1 = *pbVar1 | unaff_BH;
      pcVar11 = (char *)((ulonglong)uVar8 + (ulonglong)uVar2 * 0x200);
      *pcVar11 = *pcVar11 + (char)uVar8;
      pcVar13 = (char *)(ulonglong)(uVar8 | 0x257d7000);
      pcVar11 = (char *)((longlong)puVar17 + unaff_RDI * 2 + -0x22e3ffdb);
      *pcVar11 = *pcVar11 + (char)param_1;
      *param_4 = *param_4 + (char)auStack_8;
      *pcVar13 = *pcVar13 + (char)uVar8;
      pcVar13[0x7d] = pcVar13[0x7d] + bVar16;
      pcVar11 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,cVar6)))
                         * 8 + 0xb01004b);
      *pcVar11 = *pcVar11 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(puVar17 + -0x13fff6a2) = (char)puVar17[-0x13fff6a2] + (char)param_2;
    *(uint *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
         (uint)param_1;
    uVar12 = (ulonglong)(uVar8 + *puVar10 | *param_1);
  }
  cVar6 = (char)uVar12 + '0';
  pcVar11 = (char *)CONCAT71((int7)(uVar12 >> 8),cVar6);
  *pcVar11 = *pcVar11 + cVar6;
code_r0x0001404bddf8:
  *param_1 = *param_1 & (uint)auStack_8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

