// Function: FUN_1404cad10
// Addr: 1404cad10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cad10(char *param_1)

{
  int in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX + 0x27003d0;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 ^ (byte)uVar1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

