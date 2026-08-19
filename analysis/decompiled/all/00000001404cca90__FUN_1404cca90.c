// Function: FUN_1404cca90
// Addr: 1404cca90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cca90(char param_1)

{
  uint uVar1;
  byte *in_RAX;
  uint *unaff_RBX;
  uint unaff_EBP;
  char *unaff_RSI;
  longlong in_FS_OFFSET;
  
  *unaff_RBX = *unaff_RBX & unaff_EBP;
  *in_RAX = *in_RAX | (byte)in_RAX;
  uVar1 = (int)in_RAX + 0x7741900;
  *unaff_RSI = *unaff_RSI + param_1;
  *(byte *)(in_FS_OFFSET + (ulonglong)uVar1) =
       *(byte *)(in_FS_OFFSET + (ulonglong)uVar1) | (byte)uVar1;
  uVar1 = CONCAT31((int3)(uVar1 >> 8),(byte)uVar1 + 0x54);
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

