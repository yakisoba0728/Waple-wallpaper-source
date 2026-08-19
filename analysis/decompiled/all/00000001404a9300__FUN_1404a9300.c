// Function: FUN_1404a9300
// Addr: 1404a9300
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9300(int param_1,longlong param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  char *pcVar2;
  char unaff_SPL;
  
  *(uint *)(in_RAX * 2) = *(uint *)(in_RAX * 2) | 0x7b;
  *(uint *)(in_RAX * 2) = *(uint *)(in_RAX * 2) | 0xffffffe8;
  pcVar2 = (char *)(in_RAX & 0xffffffff);
  *pcVar2 = *pcVar2 + unaff_SPL;
  uVar1 = param_1 + 0x74050002;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
  *(byte *)(param_2 + -0x7502fff4) = *(byte *)(param_2 + -0x7502fff4) ^ (byte)pcVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

