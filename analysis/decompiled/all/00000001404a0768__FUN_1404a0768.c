// Function: FUN_1404a0768
// Addr: 1404a0768
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0768(longlong param_1)

{
  uint uVar1;
  uint *in_RAX;
  char *pcVar2;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar1 = (uint)in_RAX + *in_RAX;
  pcVar2 = (char *)(param_1 + -1);
  if (pcVar2 == (char *)0x0 || (uVar1 & 0xc8000352) == 0) {
    *pcVar2 = *pcVar2 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

