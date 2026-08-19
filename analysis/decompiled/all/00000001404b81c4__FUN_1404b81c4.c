// Function: FUN_1404b81c4
// Addr: 1404b81c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b81d7) overlaps instruction at (ram,0x0001404b81d5)
    */

void FUN_1404b81c4(char *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  byte *in_RAX;
  ulonglong uVar6;
  char *pcVar7;
  byte bVar8;
  char unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  uint *unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  byte in_CF;
  bool in_ZF;
  
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  if (in_ZF) {
    uVar5 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),0xdb) + -0x1dddf200) -
            (uint)(CARRY1((byte)in_RAX,*in_RAX) || CARRY1((byte)in_RAX + *in_RAX,in_CF));
    pcVar7 = (char *)((longlong)(ulonglong)uVar5 * 5 + 0x521004b);
    *pcVar7 = *pcVar7 + (char)param_2;
    cVar3 = in(0x1d);
    uVar5 = CONCAT31((int3)((uint)(CONCAT31((int3)(uVar5 >> 8),
                                            (char)uVar5 + *(char *)(ulonglong)uVar5) + 0x70000634)
                           >> 8),cVar3);
    *(char *)((ulonglong)uVar5 + 0x210049e1) = *(char *)((ulonglong)uVar5 + 0x210049e1) + cVar3;
  }
  else {
    uVar5 = ((int)in_RAX + -0x49e18000) - (uint)in_CF;
    *param_1 = *param_1 + (char)(uVar5 >> 8);
  }
  uVar5 = uVar5 & *unaff_RSI;
  uVar6 = (ulonglong)uVar5;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)(uVar5 >> 8);
  if (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) == '\0') {
    cRam00000001b44b8931 = cRam00000001b44b8931 + (byte)uVar5;
  }
  else {
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BL;
    *(byte *)(in_FS_OFFSET + uVar6) = *(byte *)(in_FS_OFFSET + uVar6) | (byte)uVar5;
    uVar6 = (ulonglong)(uVar5 + 0x74000754);
  }
  uVar4 = in(0x1d);
  pbVar1 = (byte *)(unaff_RDI + -0x1c);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BH;
  uVar5 = ((int)CONCAT71((int7)(uVar6 >> 8),uVar4) + -0x4b80e800) - (uint)CARRY1(bVar2,unaff_BH);
  *param_1 = *param_1 + (char)(uVar5 >> 8);
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
  pbVar1 = (byte *)(unaff_RDI + -0x1c);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BH;
  uVar5 = (uVar5 + 0xb47f1800) - (uint)CARRY1(bVar2,unaff_BH);
  pcVar7 = (char *)(ulonglong)uVar5;
  *param_1 = *param_1 + (char)(uVar5 >> 8);
  *pcVar7 = *pcVar7 + (char)uVar5;
  pbVar1 = (byte *)(pcVar7 + -0x1c);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar8;
  uVar5 = (uVar5 + 0xe21b8c00) - (uint)CARRY1(bVar2,bVar8);
  pcVar7 = (char *)(ulonglong)uVar5;
  cVar3 = (char)uVar5;
  pcVar7[0x210049e1] = pcVar7[0x210049e1] + cVar3;
  *param_2 = *param_2 + cVar3;
  *pcVar7 = *pcVar7 + cVar3;
  pbVar1 = (byte *)(((ulonglong)uVar5 ^ 6) - 0x1c);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar8;
  uVar5 = ((int)((ulonglong)uVar5 ^ 6) + -0x1de47400) - (uint)CARRY1(bVar2,bVar8);
  *(char *)((ulonglong)uVar5 + 0x10049e1) = *(char *)((ulonglong)uVar5 + 0x10049e1) + (char)uVar5;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & (uint)param_1;
  cVar3 = (char)(uVar5 >> 8);
  *param_1 = *param_1 + cVar3;
  *param_1 = *param_1 + cVar3;
  *param_1 = *param_1 + cVar3;
  *unaff_RSI = *unaff_RSI + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

