// Function: FUN_1404bda74
// Addr: 1404bda74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bda74(char *param_1,char param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  int *unaff_RDI;
  bool bVar7;
  byte bVar3;
  
  verw();
  bVar7 = 0xee < bRam00000000a8180011;
  lVar5 = CONCAT71(0xa81800,bRam00000000a8180011 + 0x11);
  pbVar1 = (byte *)(lVar5 + 0x78080013);
  bVar2 = *pbVar1;
  bVar3 = *pbVar1;
  *pbVar1 = bVar3 + unaff_BL + bVar7;
  uVar4 = (int)lVar5 + 0x16680400 + (uint)(CARRY1(bVar2,unaff_BL) || CARRY1(bVar3 + unaff_BL,bVar7))
          >> 8 & 0x2554c8;
  puVar6 = (undefined1 *)(ulonglong)(uVar4 << 8);
  param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8 + 0x4b] =
       param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8 + 0x4b] + unaff_BH;
  *param_1 = *param_1 + (char)uVar4;
  *puVar6 = *puVar6;
  param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8 + 0x4b] =
       param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8 + 0x4b] + unaff_BH;
  *param_1 = *param_1;
  *unaff_RSI = *unaff_RSI + param_2;
  *unaff_RDI = *unaff_RDI + (int)&stack0xfffffffffffffff8;
  *(char *)unaff_RDI = (char)*unaff_RDI + (char)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

