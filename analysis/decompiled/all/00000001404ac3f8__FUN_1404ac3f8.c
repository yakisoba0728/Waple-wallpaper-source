// Function: FUN_1404ac3f8
// Addr: 1404ac3f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac3f8(char *param_1)

{
  uint in_EAX;
  uint uVar1;
  
  *param_1 = *param_1 + (char)in_EAX;
  uVar1 = in_EAX | 0x10d0005;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 - (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

