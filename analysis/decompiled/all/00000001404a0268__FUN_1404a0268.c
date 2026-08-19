// Function: FUN_1404a0268
// Addr: 1404a0268
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0268(byte *param_1,uint *param_2)

{
  int in_EAX;
  uint uVar1;
  uint unaff_ESI;
  
  *param_2 = *param_2 | unaff_ESI;
  uVar1 = in_EAX + 0x26003f0;
  *param_1 = *param_1 ^ (byte)(uVar1 >> 8);
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

