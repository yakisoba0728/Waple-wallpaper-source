// Function: FUN_1404a796c
// Addr: 1404a796c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a796c(char *param_1)

{
  uint uVar1;
  longlong in_RAX;
  byte unaff_BH;
  
  *(byte *)(in_RAX + 0x4a) = *(byte *)(in_RAX + 0x4a) | unaff_BH;
  *param_1 = *param_1 + (char)in_RAX;
  uVar1 = (uint)in_RAX | 0x10d0003;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 - (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

