// Function: FUN_1404b2a64
// Addr: 1404b2a64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2a64(void)

{
  char *pcVar1;
  uint uVar2;
  undefined8 in_RAX;
  char in_CF;
  
  uVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x1c + in_CF) + 0xdc40500;
  pcVar1 = (char *)((ulonglong)uVar2 - 0x74);
  *pcVar1 = *pcVar1 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

