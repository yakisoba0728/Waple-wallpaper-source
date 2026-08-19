// Function: FUN_1404b1408
// Addr: 1404b1408
// Size: 1 bytes


void FUN_1404b1408(char *param_1,byte param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint uVar2;
  uint *in_RAX;
  char *unaff_RSI;
  byte *pbVar3;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar2 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  uVar2 = (uint)in_RAX + 0x4b130800 + (uint)CARRY1((byte)uVar2,(byte)in_RAX);
  pbVar3 = (byte *)(ulonglong)uVar2;
  *param_1 = *param_1 + (char)(uVar2 >> 8);
  *pbVar3 = *pbVar3 + (char)uVar2;
  *param_4 = *param_4 + -8;
  *pbVar3 = *pbVar3 + (char)uVar2;
  bVar1 = *pbVar3;
  *pbVar3 = *pbVar3 + param_2;
  uVar2 = uVar2 + 0x49e56400 + (uint)CARRY1(bVar1,param_2);
  *param_1 = *param_1 + (char)(uVar2 >> 8);
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

