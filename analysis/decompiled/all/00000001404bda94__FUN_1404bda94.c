// Function: FUN_1404bda94
// Addr: 1404bda94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bda97) overlaps instruction at (ram,0x0001404bda94)
    */

void FUN_1404bda94(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  byte *in_RAX;
  byte bVar5;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *puVar6;
  undefined1 *puVar7;
  char *unaff_RSI;
  int *unaff_RDI;
  bool bVar8;
  char in_SF;
  char in_OF;
  undefined1 auStack_257c [24];
  undefined1 auStack_2564 [8];
  undefined1 auStack_255c [9556];
  
  puVar7 = &stack0xfffffffffffffff8;
  puVar6 = auStack_255c;
  if (in_OF != in_SF) {
    *in_RAX = *in_RAX + (char)((ulonglong)param_2 >> 8);
    bVar2 = *in_RAX;
    bVar5 = (byte)((ulonglong)param_1 >> 8);
    *in_RAX = *in_RAX + bVar5;
    puVar7 = auStack_2564;
    bVar8 = 0xee < bRam00000000a8180011 || CARRY1(bRam00000000a8180011 + 0x11,CARRY1(bVar2,bVar5));
    lVar4 = CONCAT71(0xa81800,bRam00000000a8180011 + 0x11 + CARRY1(bVar2,bVar5));
    pbVar1 = (byte *)(lVar4 + 0x78080013);
    bVar2 = *pbVar1;
    bVar5 = *pbVar1;
    *pbVar1 = bVar5 + unaff_BL + bVar8;
    puVar6 = auStack_257c;
    uVar3 = (int)lVar4 + 0x16680400 +
            (uint)(CARRY1(bVar2,unaff_BL) || CARRY1(bVar5 + unaff_BL,bVar8)) >> 8 & 0x2554c8;
    in_RAX = (byte *)(ulonglong)(uVar3 << 8);
    param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8 + 0x4b] =
         param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8 + 0x4b] + unaff_BH;
    *param_1 = *param_1 + (char)uVar3;
  }
  *param_4 = *param_4 + (char)puVar6;
  *in_RAX = *in_RAX + (char)in_RAX;
  *(ulonglong *)(puVar6 + -8) = CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8 + 0x4b] =
       param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8 + 0x4b] + unaff_BH;
  *param_1 = *param_1;
  puVar7[-0x7afff208] = puVar7[-0x7afff208] + (char)unaff_RSI;
  *unaff_RSI = *unaff_RSI + (char)param_2;
  *unaff_RDI = *unaff_RDI + (int)puVar7;
  *(char *)unaff_RDI = (char)*unaff_RDI + (char)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

