// Function: FUN_14049fca8
// Addr: 14049fca8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fca8(byte *param_1,byte *param_2)

{
  int in_EAX;
  uint uVar1;
  undefined1 auStack_8 [8];
  
  uVar1 = in_EAX + 0x3600470;
  *param_2 = *param_2 ^ (byte)uVar1;
  *(int *)param_2 = *(int *)param_2 + (int)auStack_8;
  uVar1 = CONCAT31((int3)(uVar1 >> 8),((byte)uVar1 | *(byte *)(ulonglong)uVar1) & *param_1);
  *(int *)(ulonglong)uVar1 = *(int *)(ulonglong)uVar1 - uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

