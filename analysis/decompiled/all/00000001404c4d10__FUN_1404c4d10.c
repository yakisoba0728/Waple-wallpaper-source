// Function: FUN_1404c4d10
// Addr: 1404c4d10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4d10(void)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX ^ 0x42;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  uRam0000000174514d20 = uRam0000000174514d20 & uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

