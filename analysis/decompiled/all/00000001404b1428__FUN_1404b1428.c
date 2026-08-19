// Function: FUN_1404b1428
// Addr: 1404b1428
// Size: 1 bytes


void FUN_1404b1428(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint *in_RAX;
  byte unaff_BH;
  char *unaff_RSI;
  longlong unaff_RDI;
  bool bVar5;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar3 = (byte)in_RAX;
  bVar5 = CARRY1((byte)*in_RAX,bVar3);
  *(byte *)in_RAX = (byte)*in_RAX + bVar3;
  pbVar1 = (byte *)(unaff_RDI + -0x40caffeb);
  bVar3 = *pbVar1;
  bVar2 = *pbVar1;
  *pbVar1 = bVar2 + unaff_BH + bVar5;
  uVar4 = (uint)in_RAX + 0x49e56400 +
          (uint)(CARRY1(bVar3,unaff_BH) || CARRY1(bVar2 + unaff_BH,bVar5));
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

