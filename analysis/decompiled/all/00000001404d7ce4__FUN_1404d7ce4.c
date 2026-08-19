// Function: FUN_1404d7ce4
// Addr: 1404d7ce4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7ce4(char param_1,byte *param_2)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX | 0x21700bc0;
  *param_2 = *param_2 | (byte)uVar1;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + param_1;
  *(char *)((ulonglong)uVar1 ^ 0x10) = *(char *)((ulonglong)uVar1 ^ 0x10) + (char)(uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

