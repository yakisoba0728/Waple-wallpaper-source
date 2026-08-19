// Function: FUN_1404a13ac
// Addr: 1404a13ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a13ac(int param_1,longlong param_2)

{
  uint uVar1;
  int *in_RAX;
  uint *unaff_RBX;
  uint unaff_ESI;
  
  *in_RAX = *in_RAX + param_1;
  uVar1 = (int)in_RAX + *in_RAX;
  *(byte *)(param_2 + 0x3002d004) = *(byte *)(param_2 + 0x3002d004) | (byte)(uVar1 >> 8);
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  *unaff_RBX = *unaff_RBX & unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

