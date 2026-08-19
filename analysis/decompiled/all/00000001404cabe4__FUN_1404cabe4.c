// Function: FUN_1404cabe4
// Addr: 1404cabe4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cabe4(void)

{
  uint uVar1;
  undefined8 in_RAX;
  char in_CF;
  
  uVar1 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),((char)in_RAX + '\x1c') - in_CF) | 0x5000a74
  ;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

