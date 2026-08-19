// Function: FUN_1404c60c8
// Addr: 1404c60c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c60c8(longlong param_1,byte param_2)

{
  byte *pbVar1;
  uint in_EAX;
  uint uVar2;
  longlong in_FS_OFFSET;
  
  uVar2 = (in_EAX & 0xffffffe4) + 0x6d41c00;
  cRam000000014e4c684d = cRam000000014e4c684d + param_2;
  pbVar1 = (byte *)(in_FS_OFFSET + (ulonglong)uVar2);
  *pbVar1 = *pbVar1 | (byte)uVar2;
  *(byte *)(param_1 * 2) = *(byte *)(param_1 * 2) | param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

