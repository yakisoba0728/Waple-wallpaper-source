// Function: FUN_1404d3708
// Addr: 1404d3708
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3708(char *param_1)

{
  int in_EAX;
  uint uVar1;
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX + 0x4a) = *(char *)(unaff_RBX + 0x4a) + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + (char)((uint)in_EAX >> 8);
  uVar1 = in_EAX + 0x74050002;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

