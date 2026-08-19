// Function: FUN_1404c4748
// Addr: 1404c4748
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4748(void)

{
  int in_EAX;
  uint uVar1;
  byte in_CF;
  
  uVar1 = (in_EAX + -0x1d000a64) - (uint)in_CF;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

