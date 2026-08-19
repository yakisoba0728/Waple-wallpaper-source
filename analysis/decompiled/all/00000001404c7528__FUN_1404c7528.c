// Function: FUN_1404c7528
// Addr: 1404c7528
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7528(char *param_1)

{
  int in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX + 0x25003c0;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 ^ (byte)uVar1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

