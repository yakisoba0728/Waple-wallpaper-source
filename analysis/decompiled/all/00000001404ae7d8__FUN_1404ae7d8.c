// Function: FUN_1404ae7d8
// Addr: 1404ae7d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae7d8(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint in_EAX;
  uint uVar2;
  char *pcVar4;
  longlong unaff_RSI;
  longlong in_FS_OFFSET;
  longlong unaff_retaddr;
  byte *pbVar3;
  
  *param_4 = *param_4;
  uVar2 = (in_EAX ^ 0xe6) + 0x64050002;
  pbVar3 = (byte *)(ulonglong)uVar2;
  *pbVar3 = *pbVar3 | (byte)uVar2;
  *(undefined1 *)(unaff_RSI + 0x13) = *(undefined1 *)(unaff_RSI + 0x13);
  uVar2 = uVar2 + *(int *)pbVar3 + (uint)((uVar2 & 0x100) != 0);
  pcVar4 = (char *)(ulonglong)uVar2;
  *param_4 = *param_4 + '\b';
  bVar1 = (byte)uVar2;
  *param_2 = *param_2 + bVar1;
  *pcVar4 = *pcVar4 + bVar1;
  pcVar4[in_FS_OFFSET] = pcVar4[in_FS_OFFSET] | bVar1;
  *(undefined1 *)(unaff_retaddr + 0x13) = *(undefined1 *)(unaff_retaddr + 0x13);
  *param_4 = *param_4 + '\x10';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

