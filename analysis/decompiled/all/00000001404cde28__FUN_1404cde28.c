// Function: FUN_1404cde28
// Addr: 1404cde28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cde28(void)

{
  uint uVar1;
  undefined8 in_RAX;
  byte in_CF;
  
  uVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),uRam50003bf1d8003bf1) + 0x21004a +
          (uint)in_CF;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

