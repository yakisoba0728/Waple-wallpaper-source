// Function: FUN_1404d4aac
// Addr: 1404d4aac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4aac(char *param_1)

{
  int in_EAX;
  uint uVar1;
  byte unaff_BL;
  
  param_1[-0x66d5ffc3] = param_1[-0x66d5ffc3] & unaff_BL;
  *param_1 = *param_1 + (char)((uint)in_EAX >> 8);
  uVar1 = in_EAX + 0x64050002;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)uVar1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
  uVar1 = uVar1 | 0xe40d0004;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

