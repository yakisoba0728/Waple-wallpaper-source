// Function: FUN_1404ac67c
// Addr: 1404ac67c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac67c(void)

{
  int in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX + 0x89000954;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1 + (uVar1 < 0x3d930010);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

