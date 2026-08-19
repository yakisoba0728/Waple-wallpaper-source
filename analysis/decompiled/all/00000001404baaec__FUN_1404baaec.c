// Function: FUN_1404baaec
// Addr: 1404baaec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404baaec(void)

{
  int iVar1;
  byte bVar2;
  int in_EAX;
  uint uVar3;
  char *in_R9;
  byte *pbVar4;
  
  uVar3 = in_EAX + 0x33000be4;
  pbVar4 = (byte *)(ulonglong)uVar3;
  bVar2 = (byte)uVar3;
  *pbVar4 = *pbVar4 & bVar2;
  *pbVar4 = *pbVar4 & bVar2;
  iVar1 = CONCAT31((int3)(uVar3 >> 8),bVar2 | *(byte *)(ulonglong)uVar3);
  uVar3 = iVar1 + 0x57000e54;
  *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 & (byte)uVar3;
  *in_R9 = *in_R9 + -8;
  uVar3 = iVar1 + 0xbb050e56;
  verw();
  *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 & (byte)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

