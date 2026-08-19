// Function: FUN_1404a16e4
// Addr: 1404a16e4
// Size: 1 bytes


void FUN_1404a16e4(void)

{
  byte bVar1;
  code *pcVar2;
  int in_EAX;
  uint uVar3;
  int *piVar5;
  char *pcVar6;
  byte in_CF;
  byte *pbVar4;
  
  uVar3 = in_EAX + 0x21004a + (uint)in_CF;
  pbVar4 = (byte *)(ulonglong)uVar3;
  bVar1 = *pbVar4;
  bRamf00003e8d40003e8 = (byte)uVar3;
  *pbVar4 = *pbVar4 + bRamf00003e8d40003e8;
  uVar3 = uVar3 + 0x21004a + (uint)CARRY1(bVar1,bRamf00003e8d40003e8);
  piVar5 = (int *)(ulonglong)uVar3;
  *(char *)piVar5 = (char)*piVar5 + (char)uVar3;
  uVar3 = uVar3 + *piVar5;
  pcVar6 = (char *)(ulonglong)uVar3;
  cRam21004a15d40003e8 = (char)uVar3;
  *pcVar6 = *pcVar6 + cRam21004a15d40003e8;
  pcVar6[-0x18] = pcVar6[-0x18] + (char)(uVar3 >> 8);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

