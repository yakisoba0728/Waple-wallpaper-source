// Function: FUN_1404d656c
// Addr: 1404d656c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d656c(undefined8 param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint *in_RAX;
  undefined7 uVar7;
  byte bVar8;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  uint *unaff_RSI;
  bool in_CF;
  bool bVar9;
  bool bVar10;
  bool in_ZF;
  byte *pbVar5;
  int *piVar6;
  
  bVar2 = (byte)in_RAX;
  if (in_CF || in_ZF) {
    bVar8 = (byte)((uint)param_2 >> 8);
    bVar9 = CARRY1(bVar2,bVar8);
    uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
    bVar2 = bVar2 + bVar8;
    in_RAX = (uint *)CONCAT71(uVar7,bVar2);
    if (-1 < (char)bVar2) {
      uVar4 = *in_RAX;
      *(byte *)in_RAX = (byte)*in_RAX + bVar2;
      if (!CARRY1((byte)uVar4,bVar2) && (byte)*in_RAX != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (-1 < (char)(bVar2 + bVar8)) {
        uVar4 = (int)CONCAT71(uVar7,bVar2 + bVar8) + 0x12010b00;
        pbVar5 = (byte *)(ulonglong)uVar4;
        bVar2 = (byte)uVar4;
        pbVar5[(longlong)unaff_RSI * 2] = pbVar5[(longlong)unaff_RSI * 2] + bVar2;
        iVar1 = *(int *)(pbVar5 + 2);
        *pbVar5 = *pbVar5 ^ bVar2;
        *pbVar5 = *pbVar5 + (char)(uVar4 >> 8);
        *(byte *)unaff_RSI = (byte)*unaff_RSI >> 1;
        *pbVar5 = *pbVar5 + (char)((uint)(param_2 + iVar1) >> 8);
        *pbVar5 = *pbVar5 + bVar2;
        *unaff_RSI = *unaff_RSI & unaff_EBP;
        *pbVar5 = *pbVar5 | bVar2;
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(byte *)in_RAX = (byte)*in_RAX + bVar2 + in_CF;
    bVar9 = false;
  }
  uVar4 = *in_RAX + (uint)in_RAX;
  bVar10 = CARRY4(*in_RAX,(uint)in_RAX) || CARRY4(uVar4,(uint)bVar9);
  *in_RAX = uVar4 + bVar9;
  bVar2 = (byte)in_RAX - 0x3c;
  cVar3 = bVar2 + bVar10;
  piVar6 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
  *piVar6 = (*piVar6 - (int)piVar6) - (uint)(0x3b < (byte)in_RAX || CARRY1(bVar2,bVar10));
  pbVar5 = (byte *)((longlong)piVar6 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *pbVar5 = *pbVar5 | (byte)((ulonglong)in_RAX >> 8);
  *(char *)(piVar6 + 0x8401359) = (char)piVar6[0x8401359] + unaff_BH + (char)param_2;
  *(char *)piVar6 = (char)*piVar6 + cVar3;
  *(char *)((longlong)piVar6 + 0x13) = *(char *)((longlong)piVar6 + 0x13) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

