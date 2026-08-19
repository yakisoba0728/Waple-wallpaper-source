// Function: FUN_1404a6964
// Addr: 1404a6964
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6964(longlong param_1)

{
  byte *pbVar1;
  int in_EAX;
  uint uVar2;
  byte *pbVar3;
  char *pcVar4;
  longlong unaff_RSI;
  byte in_CF;
  
  uVar2 = in_EAX + 0xe001c01 + (uint)in_CF;
  pbVar3 = (byte *)(ulonglong)uVar2;
  pcVar4 = (char *)(param_1 + -1);
  if (pcVar4 == (char *)0x0 || uVar2 == 0) {
    if (SCARRY4(in_EAX,0xe001c01) == SCARRY4(in_EAX + 0xe001c01,(uint)in_CF)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar3 = (byte *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + 'p');
  }
  else {
    pbVar1 = pbVar3 + unaff_RSI * 2;
    *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  }
  *pbVar3 = *pbVar3 ^ (byte)pbVar3;
  *pcVar4 = *pcVar4 + (char)((ulonglong)pbVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

