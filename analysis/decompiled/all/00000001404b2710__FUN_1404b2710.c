// Function: FUN_1404b2710
// Addr: 1404b2710
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2710(char param_1,ulonglong param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  char *pcVar2;
  char unaff_SPL;
  
  pcVar2 = (char *)CONCAT71((int7)((param_2 & 0xffffffff) >> 8),
                            (char)(param_2 & 0xffffffff) + '\x17');
  *pcVar2 = *pcVar2 + param_1;
  *param_4 = *param_4 + unaff_SPL;
  uVar1 = (int)pcVar2 + 0x74050002;
  cRam000000014571273d =
       cRam000000014571273d + (byte)uVar1 + *(byte *)(ulonglong)uVar1 +
       CARRY1((byte)uVar1,*(byte *)(ulonglong)uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

