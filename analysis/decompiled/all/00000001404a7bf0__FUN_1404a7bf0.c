// Function: FUN_1404a7bf0
// Addr: 1404a7bf0
// Size: 1 bytes


void FUN_1404a7bf0(byte *param_1,longlong param_2)

{
  byte bVar1;
  char cVar7;
  uint uVar2;
  uint uVar3;
  byte bVar6;
  undefined8 in_RAX;
  char *pcVar5;
  char cVar8;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  char *unaff_RSI;
  uint unaff_EDI;
  byte *pbVar4;
  
  pbVar4 = param_1 + param_2;
  bVar1 = *pbVar4;
  bVar6 = (byte)((ulonglong)in_RAX >> 8);
  *pbVar4 = *pbVar4 + bVar6;
  *(char *)(unaff_RBP + -0x6a76fff6) =
       *(char *)(unaff_RBP + -0x6a76fff6) + '\n' + CARRY1(bVar1,bVar6);
  bVar1 = (byte)in_RAX;
  cVar7 = bVar6 + (char)param_1;
  if ((POPCOUNT(cVar7) & 1U) != 0) {
    bVar6 = *param_1;
    *param_1 = *param_1 + bVar1;
    uVar2 = (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar7,bVar1));
    uVar3 = uVar2 + 0xd2150002;
    uVar3 = (uVar3 + CARRY1(bVar6,bVar1)) * 2 +
            (uint)(0x2deafffd < uVar2 || CARRY4(uVar3,(uint)CARRY1(bVar6,bVar1)));
    pbVar4 = (byte *)(ulonglong)uVar3;
    *(uint *)(pbVar4 + 0xe) = *(uint *)(pbVar4 + 0xe) & unaff_EDI;
    pbVar4[-0x2c] = pbVar4[-0x2c] + unaff_BH;
    bVar1 = (byte)uVar3 | *pbVar4;
    pbVar4 = (byte *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar1);
    cVar7 = (char)(uVar3 >> 8);
    cVar8 = (char)((ulonglong)param_2 >> 8) - cVar7;
    *pbVar4 = *pbVar4 | bVar1;
    uVar3 = CONCAT22((short)(uVar3 >> 0x10),CONCAT11(cVar7,bVar1));
    *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 | uVar3;
    uVar3 = uVar3 + 0xe9fff48c;
    *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + cVar8;
    bVar1 = (byte)uVar3 | *(byte *)(ulonglong)(uint)(int)(short)uVar3;
    uVar3 = CONCAT22((char)(uVar3 >> 8) >> 7,CONCAT11(0x98,bVar1));
    bVar1 = bVar1 | *(byte *)(ulonglong)uVar3;
    uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar1);
    pcVar5 = (char *)(ulonglong)uVar3;
    pbVar4 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4a);
    *pbVar4 = *pbVar4 ^ unaff_BH;
    *param_1 = *param_1 + 0x98;
    *pcVar5 = *pcVar5 + bVar1;
    *pcVar5 = *pcVar5 + cVar8;
    bVar1 = bVar1 | *(byte *)(ulonglong)(uint)(int)(short)uVar3;
    uVar3 = CONCAT22(0xff,CONCAT11(0x98,bVar1));
    bVar1 = bVar1 | *(byte *)(ulonglong)uVar3;
    pcVar5 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar1);
    pbVar4 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4a);
    *pbVar4 = *pbVar4 ^ unaff_BH;
    *param_1 = *param_1 + 0x98;
    *unaff_RSI = *unaff_RSI + (char)param_1;
    *pcVar5 = *pcVar5 + bVar1;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

