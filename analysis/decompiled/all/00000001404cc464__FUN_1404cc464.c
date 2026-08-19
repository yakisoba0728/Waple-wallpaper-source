// Function: FUN_1404cc464
// Addr: 1404cc464
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc464(char *param_1,undefined8 param_2,char param_3)

{
  uint in_EAX;
  uint uVar1;
  
  *param_1 = *param_1 + param_3;
  uVar1 = in_EAX | uRam00000001474ecf73;
  bRam0000000142acc839 = bRam0000000142acc839 << 1 | (char)bRam0000000142acc839 < '\0';
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 ^ (byte)uVar1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

