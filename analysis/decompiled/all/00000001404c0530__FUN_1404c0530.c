// Function: FUN_1404c0530
// Addr: 1404c0530
// Size: 1 bytes


void FUN_1404c0530(uint param_1)

{
  uint uVar1;
  int *in_RAX;
  char *pcVar2;
  
  uVar1 = (int)in_RAX + *in_RAX + (uint)(*(uint *)((longlong)in_RAX + 0x78300012) < param_1);
  pcVar2 = (char *)(ulonglong)uVar1;
  pcVar2[0x14] = pcVar2[0x14] - (char)(param_1 >> 8);
  *pcVar2 = *pcVar2 + (char)(uVar1 >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

