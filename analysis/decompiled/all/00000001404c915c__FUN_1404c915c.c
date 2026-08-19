// Function: FUN_1404c915c
// Addr: 1404c915c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c915c(void)

{
  uint uVar1;
  undefined8 in_RAX;
  char in_CF;
  
  uVar1 = ((uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + 'T' + in_CF) | 0xf4) +
          0xf0000b34;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 ^ uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

