// Function: FUN_1404b8168
// Addr: 1404b8168
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b81d7) overlaps instruction at (ram,0x0001404b81d5)
    */

void FUN_1404b8168(char *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar9;
  uint in_EAX;
  uint uVar5;
  ulonglong uVar7;
  char *pcVar8;
  char cVar10;
  byte bVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  char unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  uint *unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  byte *pbVar6;
  
  uVar13 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar12 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar10 = (char)param_2;
  uVar5 = in_EAX | 0x7e00982;
  pbVar6 = (byte *)(ulonglong)uVar5;
  bRam0000000143ab85e3 = bRam0000000143ab85e3 << 1 | (char)bRam0000000143ab85e3 < '\0';
  bVar11 = (char)((ulonglong)param_2 >> 8) + *pbVar6;
  bVar2 = (byte)uVar5;
  *pbVar6 = *pbVar6 + bVar2;
  uRam0000000134588182 = uRam0000000134588182 & (uint)param_1;
  *pbVar6 = *pbVar6 | bVar2;
  uVar5 = CONCAT22((short)(uVar5 >> 0x10),CONCAT11((byte)(uVar5 >> 8) | bVar2,bVar2));
  uVar5 = ((int)CONCAT71((uint7)(uint3)(uVar5 >> 8),0xdb) + -0x1dddf200) -
          (uint)CARRY1(bVar2,*(byte *)(ulonglong)uVar5);
  pbVar6 = (byte *)(ulonglong)uVar5;
  pcVar8 = (char *)((longlong)pbVar6 * 5 + 0x21004b);
  *pcVar8 = *pcVar8 + cVar10;
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + (byte)uVar5;
  uVar5 = ((int)CONCAT71((uint7)(uint3)(uVar5 >> 8),0xdb) + -0x1dddf200) -
          (uint)CARRY1(bVar2,(byte)uVar5);
  pcVar8 = (char *)((ulonglong)uVar5 * 5 + 0x21004b);
  *pcVar8 = *pcVar8 + cVar10;
  uVar1 = (undefined2)(uVar5 >> 0x10);
  bVar2 = (byte)uVar5;
  bVar9 = (char)(uVar5 >> 8) + bVar11;
  pbVar6 = (byte *)(ulonglong)CONCAT22(uVar1,CONCAT11(bVar9,bVar2));
  *pbVar6 = *pbVar6 | bVar2;
  uVar5 = CONCAT22(uVar1,CONCAT11(bVar9 + bVar2,bVar2));
  uVar5 = ((int)CONCAT71((uint7)(uint3)(uVar5 >> 8),0xdb) + -0x1dddf200) -
          (uint)(CARRY1(bVar2,*(byte *)(ulonglong)uVar5) ||
                CARRY1(bVar2 + *(byte *)(ulonglong)uVar5,CARRY1(bVar9,bVar2)));
  pcVar8 = (char *)((longlong)(ulonglong)uVar5 * 5 + 0x521004b);
  *pcVar8 = *pcVar8 + cVar10;
  cVar3 = in(0x1d);
  uVar5 = CONCAT31((int3)((uint)(CONCAT31((int3)(uVar5 >> 8),(char)uVar5 + *(char *)(ulonglong)uVar5
                                         ) + 0x70000634) >> 8),cVar3);
  pcVar8 = (char *)((ulonglong)uVar5 + 0x210049e1);
  *pcVar8 = *pcVar8 + cVar3;
  uVar5 = uVar5 & *unaff_RSI;
  uVar7 = (ulonglong)uVar5;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)(uVar5 >> 8);
  if (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) == '\0') {
    cRam00000001b44b8931 = cRam00000001b44b8931 + (byte)uVar5;
  }
  else {
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BL;
    *(byte *)(in_FS_OFFSET + uVar7) = *(byte *)(in_FS_OFFSET + uVar7) | (byte)uVar5;
    uVar7 = (ulonglong)(uVar5 + 0x74000754);
  }
  uVar4 = in(0x1d);
  pbVar6 = (byte *)(unaff_RDI + -0x1c);
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + unaff_BH;
  uVar5 = ((int)CONCAT71((int7)(uVar7 >> 8),uVar4) + -0x4b80e800) - (uint)CARRY1(bVar2,unaff_BH);
  *param_1 = *param_1 + (char)(uVar5 >> 8);
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
  pbVar6 = (byte *)(unaff_RDI + -0x1c);
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + unaff_BH;
  uVar5 = (uVar5 + 0xb47f1800) - (uint)CARRY1(bVar2,unaff_BH);
  pcVar8 = (char *)(ulonglong)uVar5;
  *param_1 = *param_1 + (char)(uVar5 >> 8);
  *pcVar8 = *pcVar8 + (char)uVar5;
  pbVar6 = (byte *)(pcVar8 + -0x1c);
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar11;
  uVar5 = (uVar5 + 0xe21b8c00) - (uint)CARRY1(bVar2,bVar11);
  pcVar8 = (char *)(ulonglong)uVar5;
  cVar3 = (char)uVar5;
  pcVar8[0x210049e1] = pcVar8[0x210049e1] + cVar3;
  *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,cVar10))) =
       *(char *)CONCAT44(uVar13,CONCAT22(uVar12,CONCAT11(bVar11,cVar10))) + cVar3;
  *pcVar8 = *pcVar8 + cVar3;
  pbVar6 = (byte *)(((ulonglong)uVar5 ^ 6) - 0x1c);
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar11;
  uVar5 = ((int)((ulonglong)uVar5 ^ 6) + -0x1de47400) - (uint)CARRY1(bVar2,bVar11);
  *(char *)((ulonglong)uVar5 + 0x10049e1) = *(char *)((ulonglong)uVar5 + 0x10049e1) + (char)uVar5;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & (uint)param_1;
  cVar3 = (char)(uVar5 >> 8);
  *param_1 = *param_1 + cVar3;
  *param_1 = *param_1 + cVar3;
  *param_1 = *param_1 + cVar3;
  *unaff_RSI = *unaff_RSI + CONCAT22(uVar12,CONCAT11(bVar11,cVar10));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

