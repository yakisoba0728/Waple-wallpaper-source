// Function: FUN_1404d45a0
// Addr: 1404d45a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d460f) overlaps instruction at (ram,0x0001404d460d)
    */

void FUN_1404d45a0(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  undefined1 uVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  byte bVar7;
  char *in_RAX;
  char *pcVar6;
  char cVar8;
  longlong lVar9;
  byte *pbVar10;
  byte bVar11;
  char cVar12;
  undefined6 uVar13;
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
  char *pcVar5;
  
  uVar13 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar12 = (char)((ulonglong)param_2 >> 8);
  bVar11 = (byte)((ulonglong)param_1 >> 8);
  in_RAX[-0x570effc2] = in_RAX[-0x570effc2] | bVar11;
  pcVar6 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + 0x521004d + (longlong)in_RAX * 2);
  *pcVar6 = *pcVar6 + bVar11;
  uVar4 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + *in_RAX) + 0xf10005d4;
  pcVar5 = (char *)(ulonglong)uVar4;
  bVar7 = (byte)(uVar4 >> 8);
  *param_2 = *param_2 + bVar7;
  *param_4 = *param_4 + unaff_R12B;
  cVar3 = (char)uVar4;
  *pcVar5 = *pcVar5 + cVar3;
  cVar8 = (char)param_1 + cVar12;
  *param_2 = *param_2 + bVar7;
  *param_4 = *param_4 + unaff_R12B;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar8;
  cVar8 = cVar8 + cVar12;
  lVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),cVar8);
  pcVar6 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + 0x21004d + (longlong)pcVar5 * 2);
  *pcVar6 = *pcVar6 + bVar11;
  *pcVar5 = *pcVar5 + cVar3;
  uVar2 = (uint3)(uVar4 >> 8);
  pcVar6 = (char *)CONCAT71((uint7)uVar2,0xa7);
  *pcVar6 = *pcVar6 + cVar8;
  pcVar6[0x1004b25] = pcVar6[0x1004b25] + cVar8;
  uVar1 = *(undefined1 *)((longlong)pcVar6 * 2);
  bVar11 = (byte)param_2 | param_2[6];
  pbVar10 = (byte *)(lVar9 + -1);
  if (pbVar10 == (byte *)0x0 || bVar11 == 0) {
    *(char *)CONCAT62(uVar13,CONCAT11(cVar12,bVar11)) =
         *(char *)CONCAT62(uVar13,CONCAT11(cVar12,bVar11)) << 1 |
         *(char *)CONCAT62(uVar13,CONCAT11(cVar12,bVar11)) < '\0';
    *pbVar10 = *pbVar10 ^ bVar7;
  }
  uVar4 = (CONCAT31(uVar2,uVar1) | 0xa7) - *unaff_RSI;
  pcVar6 = (char *)(ulonglong)uVar4;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BL;
  if (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) != '\0') {
    *(char *)unaff_RSI = (char)*unaff_RSI + (char)pbVar10;
    uVar4 = uVar4 | *(uint *)(pcVar6 + in_FS_OFFSET);
    cRam45200040a2500040 = (char)uVar4 + 'T';
    *param_4 = *param_4 + unaff_R12B;
    uVar4 = uVar4 + 0x4a75a56;
    pcVar6 = (char *)(CONCAT71(unaff_00000039,unaff_DIL) + -0x5e);
    *pcVar6 = *pcVar6 + unaff_BH;
    pcVar6 = (char *)((longlong)(ulonglong)uVar4 * 2 + 0x521004d);
    *pcVar6 = *pcVar6 + unaff_BPL;
    uVar4 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + *(char *)(ulonglong)uVar4) + 0x7f0004f4;
    pcVar5 = (char *)(ulonglong)uVar4;
    cVar3 = (char)uVar4;
    cRam45480040a3410040 = cVar3;
    *param_4 = *param_4 + unaff_R12B;
    *pcVar5 = *pcVar5 + cVar3;
    pcVar6 = (char *)(CONCAT71(unaff_00000039,unaff_DIL) + -0x5e);
    *pcVar6 = *pcVar6 + unaff_BH;
    pcVar6 = (char *)(lVar9 + -0x5e);
    *pcVar6 = *pcVar6 + cVar3;
    pcVar5[0x45] = pcVar5[0x45] + (char)pbVar10;
    *param_4 = *param_4 + unaff_R12B;
    *pcVar5 = *pcVar5 + cVar3;
    pcVar5[-0x5e] = pcVar5[-0x5e] + bVar11;
    pcVar6 = (char *)(CONCAT71(unaff_00000039,unaff_DIL) + -0x5e);
    *pcVar6 = *pcVar6 + unaff_DIL;
    pcVar6 = (char *)((longlong)pcVar5 * 2 + 0x21004d);
    *pcVar6 = *pcVar6 + unaff_BPL;
    *pcVar5 = *pcVar5 + cVar3;
    pcVar6 = (char *)(CONCAT62(uVar13,CONCAT11(cVar12,bVar11)) + -0x5dafffc0);
    *pcVar6 = *pcVar6 + (char)(uVar4 >> 8);
    *pcVar5 = *pcVar5 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar6[-0x5e] = pcVar6[-0x5e] + bVar11;
  *pcVar6 = *pcVar6 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

