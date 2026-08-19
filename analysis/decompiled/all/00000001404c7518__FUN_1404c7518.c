// Function: FUN_1404c7518
// Addr: 1404c7518
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7518(char *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 in_RAX;
  byte *pbVar3;
  
  bVar1 = (char)in_RAX + 0x70;
  pbVar3 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  *pbVar3 = *pbVar3 ^ bVar1;
  *param_1 = *param_1 + bVar1;
  uVar2 = (uint)pbVar3 | uRam00000001476e8027;
  bRam00000001429c78ed = bRam00000001429c78ed << 1 | (char)bRam00000001429c78ed < '\0';
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 ^ (byte)uVar2;
  *param_1 = *param_1 + (char)(uVar2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

