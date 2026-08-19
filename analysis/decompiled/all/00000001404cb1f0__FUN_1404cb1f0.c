// Function: FUN_1404cb1f0
// Addr: 1404cb1f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cb1f1) overlaps instruction at (ram,0x0001404cb1f0)
    */

void FUN_1404cb1f0(longlong param_1)

{
  char *in_RAX;
  char *pcVar1;
  char in_ZF;
  
  pcVar1 = (char *)(param_1 + -1);
  if (pcVar1 != (char *)0x0 && in_ZF == '\0') {
    *pcVar1 = *pcVar1 + (char)((ulonglong)in_RAX >> 8);
    *in_RAX = *in_RAX + (char)in_RAX;
  }
  *pcVar1 = *pcVar1 + 'L';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

