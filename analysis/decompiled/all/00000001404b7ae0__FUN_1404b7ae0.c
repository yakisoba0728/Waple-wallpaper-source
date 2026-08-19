// Function: FUN_1404b7ae0
// Addr: 1404b7ae0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b7b56) overlaps instruction at (ram,0x0001404b7b54)
    */

void FUN_1404b7ae0(char *param_1,char *param_2)

{
  char *pcVar1;
  undefined3 uVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  char cVar11;
  undefined8 in_RAX;
  byte *pbVar10;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_SF;
  char *pcVar9;
  
  uVar4 = in((short)param_2);
  pcVar9 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4);
  if (in_SF) {
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
    uVar7 = (int)pcVar9 + 0xc4050002;
    uVar8 = uVar7 | 0x1da37b00;
    pcVar9 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x1da3);
    *pcVar9 = *pcVar9 + (char)param_2;
    bVar6 = (byte)(uVar8 >> 8);
    if ((POPCOUNT(*pcVar9) & 1U) == 0) {
      *(byte *)(unaff_RBP + -0x5aa4ffe3) = *(byte *)(unaff_RBP + -0x5aa4ffe3) & bVar6;
      *param_1 = *param_1 + (char)(uVar8 + 0xb5e27400 >> 8);
      pbVar10 = (byte *)(ulonglong)(uVar8 + 0xe9e77402);
      bVar6 = (byte)(uVar8 + 0xe9e77402);
      *pbVar10 = *pbVar10 | bVar6;
      param_1[-0x553affe3] = '\0';
      *pbVar10 = *pbVar10 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = *param_1 + bVar6;
    *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + (char)uVar7;
    pbVar10 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x5d);
    bVar6 = *pbVar10;
    *pbVar10 = *pbVar10 + unaff_BH;
    uVar7 = (uVar8 + 0xe25c6d00) - (uint)CARRY1(bVar6,unaff_BH);
    pcVar9 = (char *)(ulonglong)uVar7;
    cVar5 = (char)uVar7;
    *pcVar9 = *pcVar9 + cVar5;
    uVar2 = (undefined3)(uVar7 >> 8);
    if ((POPCOUNT(*pcVar9) & 1U) == 0) {
      iVar3 = CONCAT31(uVar2,cVar5 + *pcVar9);
      *param_1 = *param_1 + (char)((uint)(iVar3 + 0x74a00834) >> 8);
      uVar7 = iVar3 + 0x68a50836;
      *(uint *)(ulonglong)uVar7 = *(uint *)(ulonglong)uVar7 | uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar11 = (char)(uVar7 >> 8);
    *param_1 = *param_1 + cVar11;
    *pcVar9 = *pcVar9 + cVar5;
    pcVar9[0x7b001d9f] = pcVar9[0x7b001d9f] + cVar11;
    uVar8 = CONCAT31(uVar2,cVar5 + *pcVar9);
    uRam0521004b79ec001d = uVar7;
    *unaff_RDI = *unaff_RSI;
    pcVar9 = (char *)(ulonglong)((uVar8 + 0x25ab1c4) - (uint)(0xdffff33b < uVar8));
    pcVar1 = (char *)(unaff_RBP + 0x21004a + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *pcVar1 = *pcVar1 + (char)param_1;
  }
  *pcVar9 = *pcVar9 + (char)pcVar9;
  *(byte *)(unaff_RBP + -0x5aa4ffe3) =
       *(byte *)(unaff_RBP + -0x5aa4ffe3) & (byte)((ulonglong)pcVar9 >> 8);
  uVar7 = (int)pcVar9 + 0xb5e27400;
  *param_1 = *param_1 + (char)(uVar7 >> 8);
  *param_2 = *param_2 + (char)uVar7;
  *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + (char)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

