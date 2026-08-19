// Function: FUN_14049eb84
// Addr: 14049eb84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049eb84(byte *param_1,uint *param_2)

{
  int in_EAX;
  uint uVar1;
  uint unaff_ESI;
  
  *param_2 = *param_2 | unaff_ESI;
  *param_1 = *param_1 ^ (byte)((uint)(in_EAX + 0x27003e0) >> 8);
  uVar1 = in_EAX + 0x567503e2;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

