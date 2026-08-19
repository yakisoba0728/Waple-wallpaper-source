// Function: FUN_1404b5940
// Addr: 1404b5940
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b595e) overlaps instruction at (ram,0x0001404b595d)
    */

void FUN_1404b5940(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  byte bVar9;
  char *in_RAX;
  uint *puVar8;
  byte bVar10;
  byte *pbVar11;
  char unaff_BL;
  undefined6 unaff_0000001a;
  undefined8 *puVar12;
  undefined8 *unaff_RBP;
  longlong unaff_RSI;
  byte *unaff_RDI;
  bool bVar13;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  undefined1 in_MM1_Ba;
  undefined1 in_MM1_Bb;
  undefined1 in_MM1_Bc;
  undefined1 in_MM1_Bd;
  undefined1 in_MM1_Be;
  undefined1 in_MM1_Bf;
  undefined1 in_MM1_Bg;
  undefined1 in_MM1_Bh;
  undefined1 auStack_43 [11];
  undefined1 *puStack_38;
  undefined8 uStack_10;
  uint *puVar7;
  
  *(undefined2 *)(unaff_RDI + 0x5850001a) = in_FPUControlWord;
  *(undefined2 *)(unaff_RDI + 0x5850001e) = in_FPUStatusWord;
  *(undefined2 *)(unaff_RDI + 0x58500022) = in_FPUTagWord;
  *(undefined8 *)(unaff_RDI + 0x5850002e) = in_FPUDataPointer;
  *(undefined8 *)(unaff_RDI + 0x58500026) = in_FPUInstructionPointer;
  *(undefined2 *)(unaff_RDI + 0x5850002c) = in_FPULastInstructionOpcode;
  *param_4 = *param_4;
  cVar5 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar5;
  cVar2 = cVar5 * '\x02';
  puVar8 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  bVar10 = (char)param_1 + unaff_BL;
  *(byte *)(puVar8 + 0x16) = (byte)puVar8[0x16] + (char)param_2;
  *param_4 = *param_4 + cVar2;
  *unaff_RDI = *unaff_RDI + cVar5 * -2;
  *(byte *)puVar8 = (byte)*puVar8 + (char)((ulonglong)param_1 >> 8);
  if ((char)(byte)*puVar8 < '\0') {
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(0x1a,unaff_BL)) + 0x7b0008f8);
    *pcVar1 = *pcVar1 + cVar2;
    func_0x000118a45983();
    puVar12 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar2 = '\x05';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar12 = puVar12 + -1;
      *puVar12 = *unaff_RBP;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    puStack_38 = &stack0xfffffffffffffff8;
    register0x00000020 = (BADSPACEBASE *)auStack_43;
    puVar8 = (uint *)0xa839000c;
  }
  else {
    *param_2 = *param_2 + unaff_BL;
    *puVar8 = *puVar8 + (int)unaff_RBP;
    bVar13 = CARRY1(*unaff_RDI,bVar10);
    *unaff_RDI = *unaff_RDI + bVar10;
    bVar6 = *unaff_RDI;
    pbVar11 = (byte *)(CONCAT71((int7)((ulonglong)param_1 >> 8),bVar10) + -1);
    if (pbVar11 == (byte *)0x0 || *unaff_RDI == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    while ((POPCOUNT(bVar6) & 1U) != 0) {
      uVar4 = *puVar8;
      bVar6 = (byte)puVar8;
      bVar10 = (byte)*puVar8 + bVar6;
      *(byte *)puVar8 = bVar10 + bVar13;
      bVar6 = (bVar6 - *pbVar11) - (CARRY1((byte)uVar4,bVar6) || CARRY1(bVar10,bVar13));
      puVar7 = (uint *)CONCAT71((int7)((ulonglong)puVar8 >> 8),bVar6);
      *(byte *)puVar7 = (byte)*puVar7 - bVar6;
      in_MM1_Ba = pavgb(in_MM1_Ba,(char)uRam00000001409b65cb);
      in_MM1_Bb = pavgb(in_MM1_Bb,(char)((ulonglong)uRam00000001409b65cb >> 8));
      in_MM1_Bc = pavgb(in_MM1_Bc,(char)((ulonglong)uRam00000001409b65cb >> 0x10));
      in_MM1_Bd = pavgb(in_MM1_Bd,(char)((ulonglong)uRam00000001409b65cb >> 0x18));
      in_MM1_Be = pavgb(in_MM1_Be,(char)((ulonglong)uRam00000001409b65cb >> 0x20));
      in_MM1_Bf = pavgb(in_MM1_Bf,(char)((ulonglong)uRam00000001409b65cb >> 0x28));
      in_MM1_Bg = pavgb(in_MM1_Bg,(char)((ulonglong)uRam00000001409b65cb >> 0x30));
      in_MM1_Bh = pavgb(in_MM1_Bh,(char)((ulonglong)uRam00000001409b65cb >> 0x38));
      bVar10 = *pbVar11;
      bVar9 = (byte)((ulonglong)puVar8 >> 8);
      *pbVar11 = *pbVar11 + bVar9;
      *(int *)((longlong)puVar7 * 2) =
           (*(int *)((longlong)puVar7 * 2) + 0x7d) - (uint)CARRY1(bVar10,bVar9);
      bVar13 = false;
      *(byte *)puVar7 = (byte)*puVar7 | bVar6;
      puVar8 = puVar7;
      bVar6 = (byte)*puVar7;
    }
  }
  *puVar8 = *puVar8 | (uint)puVar8;
  lVar3 = *(longlong *)register0x00000020;
  *(char *)(unaff_RSI + -0x38) = *(char *)(unaff_RSI + -0x38) + (char)lVar3;
  pcVar1 = (char *)(lVar3 * 4 + 0xaeb9310c);
  *pcVar1 = *pcVar1 + (char)((ulonglong)lVar3 >> 8);
  TaskRegister(*(undefined2 *)unaff_RDI);
  *(undefined8 *)register0x00000020 = 0xfffffffff41a0011;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

