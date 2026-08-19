// Function: FUN_1404d5b48
// Addr: 1404d5b48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5b48(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  char *in_RAX;
  uint unaff_ESI;
  
  *(uint *)(param_2 + 0x2d21c005) = *(uint *)(param_2 + 0x2d21c005) | unaff_ESI;
  uVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + *in_RAX) + 0xd7fffd88;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

