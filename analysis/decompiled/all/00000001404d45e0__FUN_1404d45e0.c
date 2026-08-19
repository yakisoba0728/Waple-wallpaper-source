// Function: FUN_1404d45e0
// Addr: 1404d45e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d460f) overlaps instruction at (ram,0x0001404d460d)
    */

void FUN_1404d45e0(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  uint *in_RAX;
  char *pcVar4;
  char *pcVar5;
  byte *pbVar7;
  byte bVar8;
  undefined7 uVar9;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  char unaff_BPL;
  int *unaff_RSI;
  char unaff_DIL;
  undefined7 unaff_00000039;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  undefined7 uVar6;
  
  uVar9 = (undefined7)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar4 = (char *)CONCAT71(uVar6,0xa7);
  *pcVar4 = *pcVar4 + (char)param_1;
  pcVar4[0x1004b25] = pcVar4[0x1004b25] + (char)param_1;
  uVar1 = *(undefined1 *)((longlong)pcVar4 * 2);
  bVar8 = (byte)param_2 | *(byte *)(param_2 + 6);
  pbVar7 = (byte *)(param_1 + -1);
  if (pbVar7 == (byte *)0x0 || bVar8 == 0) {
    *(char *)CONCAT71(uVar9,bVar8) =
         *(char *)CONCAT71(uVar9,bVar8) << 1 | *(char *)CONCAT71(uVar9,bVar8) < '\0';
    *pbVar7 = *pbVar7 ^ (byte)((ulonglong)in_RAX >> 8);
  }
  uVar3 = ((uint)CONCAT71(uVar6,uVar1) | 0xa7) - *unaff_RSI;
  pcVar4 = (char *)(ulonglong)uVar3;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BL;
  if (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) != '\0') {
    *(char *)unaff_RSI = (char)*unaff_RSI + (char)pbVar7;
    uVar3 = uVar3 | *(uint *)(pcVar4 + in_FS_OFFSET);
    cRam45200040a2500040 = (char)uVar3 + 'T';
    *param_4 = *param_4 + unaff_R12B;
    uVar3 = uVar3 + 0x4a75a56;
    pcVar4 = (char *)(CONCAT71(unaff_00000039,unaff_DIL) + -0x5e);
    *pcVar4 = *pcVar4 + unaff_BH;
    pcVar4 = (char *)((longlong)(ulonglong)uVar3 * 2 + 0x521004d);
    *pcVar4 = *pcVar4 + unaff_BPL;
    uVar3 = CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + *(char *)(ulonglong)uVar3) + 0x7f0004f4;
    pcVar5 = (char *)(ulonglong)uVar3;
    cVar2 = (char)uVar3;
    cRam45480040a3410040 = cVar2;
    *param_4 = *param_4 + unaff_R12B;
    *pcVar5 = *pcVar5 + cVar2;
    pcVar4 = (char *)(CONCAT71(unaff_00000039,unaff_DIL) + -0x5e);
    *pcVar4 = *pcVar4 + unaff_BH;
    *(char *)(param_1 + -0x5e) = *(char *)(param_1 + -0x5e) + cVar2;
    pcVar5[0x45] = pcVar5[0x45] + (char)pbVar7;
    *param_4 = *param_4 + unaff_R12B;
    *pcVar5 = *pcVar5 + cVar2;
    pcVar5[-0x5e] = pcVar5[-0x5e] + bVar8;
    pcVar4 = (char *)(CONCAT71(unaff_00000039,unaff_DIL) + -0x5e);
    *pcVar4 = *pcVar4 + unaff_DIL;
    pcVar4 = (char *)((longlong)pcVar5 * 2 + 0x21004d);
    *pcVar4 = *pcVar4 + unaff_BPL;
    *pcVar5 = *pcVar5 + cVar2;
    pcVar4 = (char *)(CONCAT71(uVar9,bVar8) + -0x5dafffc0);
    *pcVar4 = *pcVar4 + (char)(uVar3 >> 8);
    *pcVar5 = *pcVar5 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar4[-0x5e] = pcVar4[-0x5e] + bVar8;
  *pcVar4 = *pcVar4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

