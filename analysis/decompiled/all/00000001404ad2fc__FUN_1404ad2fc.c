// Function: FUN_1404ad2fc
// Addr: 1404ad2fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad2fc(char param_1,byte *param_2)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX | 0x21700bc0;
  *param_2 = *param_2 | (byte)uVar1;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

