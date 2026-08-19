// Function: FUN_1404d4520
// Addr: 1404d4520
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d460f) overlaps instruction at (ram,0x0001404d460d)
    */

void FUN_1404d4520(int *param_1,char *param_2,char param_3,char *param_4)

{
  uint3 uVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar10;
  int in_EAX;
  uint uVar4;
  uint uVar5;
  ulonglong uVar7;
  char *pcVar8;
  char *pcVar9;
  char cVar11;
  byte bVar14;
  longlong lVar12;
  byte *pbVar13;
  byte bVar15;
  char cVar16;
  undefined6 uVar17;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_BPL;
  int *unaff_RSI;
  char unaff_DIL;
  undefined7 unaff_00000039;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  byte in_CF;
  undefined1 auStack_8 [8];
  byte *pbVar6;
  
  uVar17 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar16 = (char)((ulonglong)param_2 >> 8);
  bVar15 = (byte)param_2;
  *param_1 = *param_1 + (int)param_1 + (uint)in_CF;
  uVar4 = in_EAX + 0x5420900;
  pbVar13 = (byte *)(ulonglong)uVar4;
  if (!SCARRY4(in_EAX,0x5420900)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar13 = *pbVar13 ^ (byte)uVar4;
  pbVar13[-0x4a] = pbVar13[-0x4a] + bVar15;
  uVar5 = uVar4 - *(int *)pbVar13;
  pbVar6 = (byte *)(ulonglong)uVar5;
  if (SBORROW4(uVar4,*(int *)pbVar13)) {
    cRam00000001764d9261 = cRam00000001764d9261 + param_3;
    *pbVar6 = *pbVar6 | bVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar6 = *pbVar6 + (char)(uVar5 >> 8);
  uVar2 = in(4);
  cRam00000001454d50dd = cRam00000001454d50dd + bVar15;
  uVar7 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),uVar2) ^ 10;
  *(char *)(uVar7 + 0x8003ea7) = *(char *)(uVar7 + 0x8003ea7) + cVar16;
  *(char *)(uVar7 + 0x21004b25) = *(char *)(uVar7 + 0x21004b25) + (char)param_1;
  uVar4 = (int)uVar7 + 0xc4050002;
  pcVar8 = (char *)(ulonglong)uVar4;
  bVar14 = (byte)((ulonglong)param_1 >> 8);
  pcVar8[-0x570effc2] = pcVar8[-0x570effc2] | bVar14;
  (&stack0x05210045)[(longlong)pcVar8 * 2] = (&stack0x05210045)[(longlong)pcVar8 * 2] + bVar14;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + *pcVar8) + 0xf10005d4;
  pcVar8 = (char *)(ulonglong)uVar4;
  bVar10 = (byte)(uVar4 >> 8);
  *param_2 = *param_2 + bVar10;
  *param_4 = *param_4 + unaff_R12B;
  cVar3 = (char)uVar4;
  *pcVar8 = *pcVar8 + cVar3;
  cVar11 = (char)param_1 + cVar16;
  *param_2 = *param_2 + bVar10;
  *param_4 = *param_4 + unaff_R12B;
  *pcVar8 = *pcVar8 + cVar3;
  *pcVar8 = *pcVar8 + cVar11;
  cVar11 = cVar11 + cVar16;
  lVar12 = CONCAT71((int7)((ulonglong)param_1 >> 8),cVar11);
  (&stack0x00210045)[(longlong)pcVar8 * 2] = (&stack0x00210045)[(longlong)pcVar8 * 2] + bVar14;
  *pcVar8 = *pcVar8 + cVar3;
  uVar1 = (uint3)(uVar4 >> 8);
  pcVar8 = (char *)CONCAT71((uint7)uVar1,0xa7);
  *pcVar8 = *pcVar8 + cVar11;
  pcVar8[0x1004b25] = pcVar8[0x1004b25] + cVar11;
  uVar2 = *(undefined1 *)((longlong)pcVar8 * 2);
  bVar15 = bVar15 | param_2[6];
  pbVar13 = (byte *)(lVar12 + -1);
  if (pbVar13 == (byte *)0x0 || bVar15 == 0) {
    *(char *)CONCAT62(uVar17,CONCAT11(cVar16,bVar15)) =
         *(char *)CONCAT62(uVar17,CONCAT11(cVar16,bVar15)) << 1 |
         *(char *)CONCAT62(uVar17,CONCAT11(cVar16,bVar15)) < '\0';
    *pbVar13 = *pbVar13 ^ bVar10;
  }
  uVar4 = (CONCAT31(uVar1,uVar2) | 0xa7) - *unaff_RSI;
  pcVar8 = (char *)(ulonglong)uVar4;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BL;
  if (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) != '\0') {
    *(char *)unaff_RSI = (char)*unaff_RSI + (char)pbVar13;
    uVar4 = uVar4 | *(uint *)(pcVar8 + in_FS_OFFSET);
    cRam45200040a2500040 = (char)uVar4 + 'T';
    *param_4 = *param_4 + unaff_R12B;
    uVar4 = uVar4 + 0x4a75a56;
    pcVar8 = (char *)(CONCAT71(unaff_00000039,unaff_DIL) + -0x5e);
    *pcVar8 = *pcVar8 + unaff_BH;
    pcVar8 = (char *)((longlong)(ulonglong)uVar4 * 2 + 0x521004d);
    *pcVar8 = *pcVar8 + unaff_BPL;
    uVar4 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + *(char *)(ulonglong)uVar4) + 0x7f0004f4;
    pcVar9 = (char *)(ulonglong)uVar4;
    cVar3 = (char)uVar4;
    cRam45480040a3410040 = cVar3;
    *param_4 = *param_4 + unaff_R12B;
    *pcVar9 = *pcVar9 + cVar3;
    pcVar8 = (char *)(CONCAT71(unaff_00000039,unaff_DIL) + -0x5e);
    *pcVar8 = *pcVar8 + unaff_BH;
    pcVar8 = (char *)(lVar12 + -0x5e);
    *pcVar8 = *pcVar8 + cVar3;
    pcVar9[0x45] = pcVar9[0x45] + (char)pbVar13;
    *param_4 = *param_4 + unaff_R12B;
    *pcVar9 = *pcVar9 + cVar3;
    pcVar9[-0x5e] = pcVar9[-0x5e] + bVar15;
    pcVar8 = (char *)(CONCAT71(unaff_00000039,unaff_DIL) + -0x5e);
    *pcVar8 = *pcVar8 + unaff_DIL;
    pcVar8 = (char *)((longlong)pcVar9 * 2 + 0x21004d);
    *pcVar8 = *pcVar8 + unaff_BPL;
    *pcVar9 = *pcVar9 + cVar3;
    pcVar8 = (char *)(CONCAT62(uVar17,CONCAT11(cVar16,bVar15)) + -0x5dafffc0);
    *pcVar8 = *pcVar8 + (char)(uVar4 >> 8);
    *pcVar9 = *pcVar9 + (char)auStack_8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar8[-0x5e] = pcVar8[-0x5e] + bVar15;
  *pcVar8 = *pcVar8 + (char)auStack_8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

