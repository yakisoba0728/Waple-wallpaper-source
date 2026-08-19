// Function: FUN_1404a16d8
// Addr: 1404a16d8
// Size: 1 bytes


void FUN_1404a16d8(void)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined8 in_RAX;
  char *pcVar7;
  char in_CF;
  byte *pbVar5;
  int *piVar6;
  
  iVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0xc + in_CF);
  pbVar5 = (byte *)(ulonglong)(iVar3 + 0x7d40c00U);
  bVar2 = (byte)(iVar3 + 0x7d40c00U);
  (&stack0x00000000)[(longlong)pbVar5 * 8] = (&stack0x00000000)[(longlong)pbVar5 * 8] + bVar2;
  *pbVar5 = *pbVar5 | bVar2;
  pbVar5 = (byte *)(ulonglong)(iVar3 + 0x7f50c4aU);
  bVar2 = *pbVar5;
  bRamf00003e8d40003e8 = (byte)(iVar3 + 0x7f50c4aU);
  *pbVar5 = *pbVar5 + bRamf00003e8d40003e8;
  uVar4 = iVar3 + 0x8160c94 + (uint)CARRY1(bVar2,bRamf00003e8d40003e8);
  piVar6 = (int *)(ulonglong)uVar4;
  *(char *)piVar6 = (char)*piVar6 + (char)uVar4;
  uVar4 = uVar4 + *piVar6;
  pcVar7 = (char *)(ulonglong)uVar4;
  cRam21004a15d40003e8 = (char)uVar4;
  *pcVar7 = *pcVar7 + cRam21004a15d40003e8;
  pcVar7[-0x18] = pcVar7[-0x18] + (char)(uVar4 >> 8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

