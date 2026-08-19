// Function: FUN_1404b81a0
// Addr: 1404b81a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b81d7) overlaps instruction at (ram,0x0001404b81d5)
    */

void FUN_1404b81a0(char *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  uint *in_RAX;
  byte *pbVar5;
  ulonglong uVar6;
  char *pcVar7;
  byte bVar10;
  char unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  uint *unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  byte bVar8;
  undefined6 uVar9;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar1 = (byte)in_RAX;
  uVar9 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar8 = (char)((ulonglong)in_RAX >> 8) + bVar10;
  pbVar5 = (byte *)CONCAT62(uVar9,CONCAT11(bVar8,bVar1));
  *pbVar5 = *pbVar5 | bVar1;
  pbVar5 = (byte *)CONCAT62(uVar9,CONCAT11(bVar8 + bVar1,bVar1));
  uVar4 = ((int)CONCAT71((int7)((ulonglong)pbVar5 >> 8),0xdb) + -0x1dddf200) -
          (uint)(CARRY1(bVar1,*pbVar5) || CARRY1(bVar1 + *pbVar5,CARRY1(bVar8,bVar1)));
  pcVar7 = (char *)((longlong)(ulonglong)uVar4 * 5 + 0x521004b);
  *pcVar7 = *pcVar7 + (char)param_2;
  cVar2 = in(0x1d);
  uVar4 = CONCAT31((int3)((uint)(CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + *(char *)(ulonglong)uVar4
                                         ) + 0x70000634) >> 8),cVar2);
  pcVar7 = (char *)((ulonglong)uVar4 + 0x210049e1);
  *pcVar7 = *pcVar7 + cVar2;
  uVar4 = uVar4 & *unaff_RSI;
  uVar6 = (ulonglong)uVar4;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)(uVar4 >> 8);
  if (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) == '\0') {
    cRam00000001b44b8931 = cRam00000001b44b8931 + (byte)uVar4;
  }
  else {
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BL;
    *(byte *)(in_FS_OFFSET + uVar6) = *(byte *)(in_FS_OFFSET + uVar6) | (byte)uVar4;
    uVar6 = (ulonglong)(uVar4 + 0x74000754);
  }
  uVar3 = in(0x1d);
  pbVar5 = (byte *)(unaff_RDI + -0x1c);
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + unaff_BH;
  uVar4 = ((int)CONCAT71((int7)(uVar6 >> 8),uVar3) + -0x4b80e800) - (uint)CARRY1(bVar1,unaff_BH);
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  pbVar5 = (byte *)(unaff_RDI + -0x1c);
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + unaff_BH;
  uVar4 = (uVar4 + 0xb47f1800) - (uint)CARRY1(bVar1,unaff_BH);
  pcVar7 = (char *)(ulonglong)uVar4;
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *pcVar7 = *pcVar7 + (char)uVar4;
  pbVar5 = (byte *)(pcVar7 + -0x1c);
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar10;
  uVar4 = (uVar4 + 0xe21b8c00) - (uint)CARRY1(bVar1,bVar10);
  pcVar7 = (char *)(ulonglong)uVar4;
  cVar2 = (char)uVar4;
  pcVar7[0x210049e1] = pcVar7[0x210049e1] + cVar2;
  *param_2 = *param_2 + cVar2;
  *pcVar7 = *pcVar7 + cVar2;
  pbVar5 = (byte *)(((ulonglong)uVar4 ^ 6) - 0x1c);
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar10;
  uVar4 = ((int)((ulonglong)uVar4 ^ 6) + -0x1de47400) - (uint)CARRY1(bVar1,bVar10);
  *(char *)((ulonglong)uVar4 + 0x10049e1) = *(char *)((ulonglong)uVar4 + 0x10049e1) + (char)uVar4;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & (uint)param_1;
  cVar2 = (char)(uVar4 >> 8);
  *param_1 = *param_1 + cVar2;
  *param_1 = *param_1 + cVar2;
  *param_1 = *param_1 + cVar2;
  *unaff_RSI = *unaff_RSI + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

