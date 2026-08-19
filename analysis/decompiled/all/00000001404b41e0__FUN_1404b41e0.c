// Function: FUN_1404b41e0
// Addr: 1404b41e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b41e0(void)

{
  char *pcVar1;
  uint uVar2;
  undefined8 in_RAX;
  
  uVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + 0x74) + 0x18dc7000 +
          (uint)(0x8b < (byte)in_RAX);
  pcVar1 = (char *)((ulonglong)uVar2 - 0x13ffe724);
  *pcVar1 = *pcVar1 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

