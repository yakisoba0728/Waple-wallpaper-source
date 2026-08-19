// Function: FUN_1404bb0fc
// Addr: 1404bb0fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb0fc(void)

{
  int in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX + 0x30000a74U & 0x25380021;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 & uVar1;
  uVar1 = (int)&stack0x00000000 + 0x2221004b;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

