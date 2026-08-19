// Function: FUN_1404c160c
// Addr: 1404c160c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c160c(char *param_1)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX | 0xb500c60;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 ^ (byte)uVar1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

