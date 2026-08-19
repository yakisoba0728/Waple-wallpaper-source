// Function: FUN_14049eab0
// Addr: 14049eab0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014049eada) */

void FUN_14049eab0(void)

{
  uint uVar1;
  uint *in_RAX;
  char *pcVar2;
  undefined1 (*unaff_RBX) [16];
  undefined1 in_XMM1 [16];
  
  sysenter();
  *in_RAX = *in_RAX | (uint)in_RAX;
  rsqrtps(in_XMM1,*unaff_RBX);
  uVar1 = (uint)in_RAX + 0xe4050002;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)uVar1;
  pcVar2 = (char *)CONCAT71((uint7)(uint3)(uVar1 >> 8),0xff);
  *pcVar2 = *pcVar2 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

