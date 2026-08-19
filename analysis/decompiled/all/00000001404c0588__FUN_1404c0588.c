// Function: FUN_1404c0588
// Addr: 1404c0588
// Size: 1 bytes


void FUN_1404c0588(undefined8 param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int *in_RAX;
  char *pcVar4;
  
  pbVar1 = (byte *)((longlong)in_RAX + 0x78000012);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)param_1;
  uVar3 = (int)in_RAX + *in_RAX + (uint)CARRY1(bVar2,(byte)param_1);
  pcVar4 = (char *)(ulonglong)uVar3;
  pcVar4[0x14] = pcVar4[0x14] + (char)((ulonglong)param_1 >> 8);
  *pcVar4 = *pcVar4 + (char)uVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

