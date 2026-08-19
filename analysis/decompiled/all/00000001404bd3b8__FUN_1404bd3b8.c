// Function: FUN_1404bd3b8
// Addr: 1404bd3b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bd3d2) overlaps instruction at (ram,0x0001404bd3d0)
    */

void FUN_1404bd3b8(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *in_RAX;
  longlong lVar3;
  uint *puVar5;
  char *pcVar6;
  byte bVar9;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  undefined8 *puVar10;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  undefined8 uStack_10;
  byte *pbVar4;
  char cVar7;
  undefined6 uVar8;
  
  bVar9 = (byte)param_1;
  *in_RAX = *in_RAX & CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  lVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | (byte)*in_RAX);
  pcVar6 = (char *)(lVar3 + -0x67edfffc);
  *pcVar6 = *pcVar6 - (char)((ulonglong)param_1 >> 8);
  uVar2 = (int)lVar3 + 0x6880d00;
  pbVar4 = (byte *)(ulonglong)uVar2;
  *pbVar4 = *pbVar4 + bVar9;
  if ((char)*pbVar4 < '\0') {
    pbVar4 = (byte *)(ulonglong)(uVar2 & 0x2521ab00);
  }
  bVar1 = (byte)pbVar4;
  pbVar4[(longlong)unaff_RBP * 2] = pbVar4[(longlong)unaff_RBP * 2] + bVar1;
  *pbVar4 = *pbVar4 | bVar1;
  uRam00000001656d7ed7 = uRam00000001656d7ed7 & (uint)&stack0x00000000;
  uVar8 = (undefined6)((ulonglong)pbVar4 >> 0x10);
  cVar7 = (char)((ulonglong)pbVar4 >> 8) + bVar1;
  puVar5 = (uint *)CONCAT62(uVar8,CONCAT11(cVar7,bVar1));
  *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) >>
       (bVar9 & 7) |
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) <<
       8 - (bVar9 & 7);
  *puVar5 = *puVar5 & (uint)puVar5;
  *(byte *)puVar5 = (char)*puVar5 + bVar1;
  uRam00000001656d7ee7 = uRam00000001656d7ee7 & (uint)&stack0x00000000;
  pcVar6 = (char *)CONCAT62(uVar8,CONCAT11(cVar7 + bVar1,bVar1));
  *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) >>
       (bVar9 & 7) |
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) <<
       8 - (bVar9 & 7);
  *(int *)(unaff_RSI + 0xd) = *(int *)(unaff_RSI + 0xd) + (int)param_1;
  *(char *)(unaff_RSI + -0x18) = *(char *)(unaff_RSI + -0x18) + bVar9;
  *pcVar6 = *pcVar6 + bVar1;
  bVar1 = *param_1;
  *param_1 = *param_1 + unaff_BH;
  puVar10 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar7 = '\x0e';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar10 = puVar10 + -1;
    *puVar10 = *unaff_RBP;
    cVar7 = cVar7 + -1;
  } while ('\0' < cVar7);
  pcVar6 = (char *)CONCAT71(0x340f00,CARRY1(bVar1,unaff_BH) + '\x03');
  GlobalDescriptorTableRegister(*param_2);
  *pcVar6 = *pcVar6 + bVar9;
  *param_1 = *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

