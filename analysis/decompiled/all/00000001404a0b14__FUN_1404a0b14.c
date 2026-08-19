// Function: FUN_1404a0b14
// Addr: 1404a0b14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0b14(char *param_1)

{
  int in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX + 0x26003e0;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 ^ (byte)uVar1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

