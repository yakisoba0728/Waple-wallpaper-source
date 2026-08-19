// Function: FUN_1404ba324
// Addr: 1404ba324
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba324(char *param_1)

{
  uint uVar1;
  char in_CF;
  
  uVar1 = CONCAT31((int3)(uRam010c00050c01004b >> 8),
                   (char)uRam010c00050c01004b + *(char *)(ulonglong)uRam010c00050c01004b + in_CF) +
          0x25003f0;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 ^ (byte)uVar1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

