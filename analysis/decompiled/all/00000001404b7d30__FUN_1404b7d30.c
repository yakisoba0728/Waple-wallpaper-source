// Function: FUN_1404b7d30
// Addr: 1404b7d30
// Size: 1 bytes


void FUN_1404b7d30(undefined8 param_1,char param_2)

{
  byte bVar1;
  uint uVar2;
  uint *in_RAX;
  byte *pbVar3;
  char *pcVar4;
  byte bVar5;
  char in_CF;
  
  bVar5 = param_2 + (char)((ulonglong)in_RAX >> 8) + in_CF;
  uVar2 = (uint)in_RAX | *in_RAX;
  uVar2 = (uVar2 + 0xc5ddfa64) - (uint)(0xeffff59b < uVar2);
  pbVar3 = (byte *)(ulonglong)uVar2;
  *pbVar3 = *pbVar3 + (char)uVar2;
  bVar1 = *pbVar3;
  *pbVar3 = *pbVar3 + bVar5;
  uVar2 = (uVar2 + 0xb5ddf000) - (uint)CARRY1(bVar1,bVar5);
  pcVar4 = (char *)(ulonglong)uVar2;
  *pcVar4 = *pcVar4 + '\x1d';
  *pcVar4 = *pcVar4 + (char)uVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

