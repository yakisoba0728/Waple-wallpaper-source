// Function: FUN_1404ba2b4
// Addr: 1404ba2b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba2b4(char *param_1)

{
  uint uVar1;
  ulonglong in_RAX;
  
  uVar1 = (int)CONCAT71((int7)(in_RAX >> 8),(char)(char *)(in_RAX | 1) + *(char *)(in_RAX | 1)) +
          0x25003f0;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 ^ (byte)uVar1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

