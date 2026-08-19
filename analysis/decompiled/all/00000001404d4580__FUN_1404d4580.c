// Function: FUN_1404d4580
// Addr: 1404d4580
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d460f) overlaps instruction at (ram,0x0001404d460d)
    */

void FUN_1404d4580(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  undefined1 uVar1;
  uint3 uVar2;
  char cVar3;
  byte bVar8;
  int in_EAX;
  uint uVar4;
  ulonglong uVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar9;
  longlong lVar10;
  byte *pbVar11;
  byte bVar12;
  char cVar13;
  undefined6 uVar14;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined7 unaff_00000021;
  char unaff_BPL;
  int *unaff_RSI;
  char unaff_DIL;
  undefined7 unaff_00000039;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  
  uVar14 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar13 = (char)((ulonglong)param_2 >> 8);
  uVar5 = (ulonglong)(in_EAX + 0x5000b54) ^ 10;
  *(char *)(uVar5 + 0x8003ea7) = *(char *)(uVar5 + 0x8003ea7) + cVar13;
  *(char *)(uVar5 + 0x21004b25) = *(char *)(uVar5 + 0x21004b25) + (char)param_1;
  uVar4 = (int)uVar5 + 0xc4050002;
  pcVar6 = (char *)(ulonglong)uVar4;
  bVar12 = (byte)((ulonglong)param_1 >> 8);
  pcVar6[-0x570effc2] = pcVar6[-0x570effc2] | bVar12;
  pcVar7 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + 0x521004d + (longlong)pcVar6 * 2);
  *pcVar7 = *pcVar7 + bVar12;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + *pcVar6) + 0xf10005d4;
  pcVar6 = (char *)(ulonglong)uVar4;
  bVar8 = (byte)(uVar4 >> 8);
  *param_2 = *param_2 + bVar8;
  *param_4 = *param_4 + unaff_R12B;
  cVar3 = (char)uVar4;
  *pcVar6 = *pcVar6 + cVar3;
  cVar9 = (char)param_1 + cVar13;
  *param_2 = *param_2 + bVar8;
  *param_4 = *param_4 + unaff_R12B;
  *pcVar6 = *pcVar6 + cVar3;
  *pcVar6 = *pcVar6 + cVar9;
  cVar9 = cVar9 + cVar13;
  lVar10 = CONCAT71((int7)((ulonglong)param_1 >> 8),cVar9);
  pcVar7 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + 0x21004d + (longlong)pcVar6 * 2);
  *pcVar7 = *pcVar7 + bVar12;
  *pcVar6 = *pcVar6 + cVar3;
  uVar2 = (uint3)(uVar4 >> 8);
  pcVar7 = (char *)CONCAT71((uint7)uVar2,0xa7);
  *pcVar7 = *pcVar7 + cVar9;
  pcVar7[0x1004b25] = pcVar7[0x1004b25] + cVar9;
  uVar1 = *(undefined1 *)((longlong)pcVar7 * 2);
  bVar12 = (byte)param_2 | param_2[6];
  pbVar11 = (byte *)(lVar10 + -1);
  if (pbVar11 == (byte *)0x0 || bVar12 == 0) {
    *(char *)CONCAT62(uVar14,CONCAT11(cVar13,bVar12)) =
         *(char *)CONCAT62(uVar14,CONCAT11(cVar13,bVar12)) << 1 |
         *(char *)CONCAT62(uVar14,CONCAT11(cVar13,bVar12)) < '\0';
    *pbVar11 = *pbVar11 ^ bVar8;
  }
  uVar4 = (CONCAT31(uVar2,uVar1) | 0xa7) - *unaff_RSI;
  pcVar7 = (char *)(ulonglong)uVar4;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BL;
  if (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) != '\0') {
    *(char *)unaff_RSI = (char)*unaff_RSI + (char)pbVar11;
    uVar4 = uVar4 | *(uint *)(pcVar7 + in_FS_OFFSET);
    cRam45200040a2500040 = (char)uVar4 + 'T';
    *param_4 = *param_4 + unaff_R12B;
    uVar4 = uVar4 + 0x4a75a56;
    pcVar7 = (char *)(CONCAT71(unaff_00000039,unaff_DIL) + -0x5e);
    *pcVar7 = *pcVar7 + unaff_BH;
    pcVar7 = (char *)((longlong)(ulonglong)uVar4 * 2 + 0x521004d);
    *pcVar7 = *pcVar7 + unaff_BPL;
    uVar4 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + *(char *)(ulonglong)uVar4) + 0x7f0004f4;
    pcVar6 = (char *)(ulonglong)uVar4;
    cVar3 = (char)uVar4;
    cRam45480040a3410040 = cVar3;
    *param_4 = *param_4 + unaff_R12B;
    *pcVar6 = *pcVar6 + cVar3;
    pcVar7 = (char *)(CONCAT71(unaff_00000039,unaff_DIL) + -0x5e);
    *pcVar7 = *pcVar7 + unaff_BH;
    pcVar7 = (char *)(lVar10 + -0x5e);
    *pcVar7 = *pcVar7 + cVar3;
    pcVar6[0x45] = pcVar6[0x45] + (char)pbVar11;
    *param_4 = *param_4 + unaff_R12B;
    *pcVar6 = *pcVar6 + cVar3;
    pcVar6[-0x5e] = pcVar6[-0x5e] + bVar12;
    pcVar7 = (char *)(CONCAT71(unaff_00000039,unaff_DIL) + -0x5e);
    *pcVar7 = *pcVar7 + unaff_DIL;
    pcVar7 = (char *)((longlong)pcVar6 * 2 + 0x21004d);
    *pcVar7 = *pcVar7 + unaff_BPL;
    *pcVar6 = *pcVar6 + cVar3;
    pcVar7 = (char *)(CONCAT62(uVar14,CONCAT11(cVar13,bVar12)) + -0x5dafffc0);
    *pcVar7 = *pcVar7 + (char)(uVar4 >> 8);
    *pcVar6 = *pcVar6 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar7[-0x5e] = pcVar7[-0x5e] + bVar12;
  *pcVar7 = *pcVar7 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

