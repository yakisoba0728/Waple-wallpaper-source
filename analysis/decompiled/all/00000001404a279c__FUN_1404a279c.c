// Function: FUN_1404a279c
// Addr: 1404a279c
// Size: 1 bytes


void FUN_1404a279c(char *param_1)

{
  uint uVar1;
  undefined2 *in_RAX;
  byte *unaff_RBX;
  undefined2 in_CS;
  
  *in_RAX = in_CS;
  uVar1 = (int)in_RAX + 0x4a053000;
  *param_1 = *param_1 + (byte)uVar1;
  *unaff_RBX = *unaff_RBX | (byte)uVar1;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)param_1;
  return;
}

