// Function: FUN_1404c04f8
// Addr: 1404c04f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c04f8(uint param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int *in_RAX;
  bool in_CF;
  char *pcVar5;
  
  bVar3 = (byte)in_RAX;
  if (in_CF) {
    *(byte *)in_RAX = (char)*in_RAX - bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar1 = (byte *)(param_2 + -0x68);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  *in_RAX = *in_RAX + (int)in_RAX + (uint)CARRY1(bVar2,bVar3);
  uVar4 = (int)in_RAX + *in_RAX + (uint)(*(uint *)((longlong)in_RAX + 0x78300012) < param_1);
  pcVar5 = (char *)(ulonglong)uVar4;
  pcVar5[0x14] = pcVar5[0x14] - (char)(param_1 >> 8);
  *pcVar5 = *pcVar5 + (char)(uVar4 >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

