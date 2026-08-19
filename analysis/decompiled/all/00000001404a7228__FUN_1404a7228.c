// Function: FUN_1404a7228
// Addr: 1404a7228
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7228(char *param_1)

{
  uint uVar1;
  uint *in_RAX;
  uint *puVar2;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  puVar2 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),0xf3);
  *puVar2 = *puVar2 | (uint)puVar2;
  uVar1 = in(0xf3);
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
  *param_1 = *param_1 + (char)uVar1 + -0x71;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

