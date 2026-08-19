// Function: FUN_1404c54f0
// Addr: 1404c54f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c54f0(longlong param_1,int param_2)

{
  int in_EAX;
  uint uVar1;
  byte *pbVar2;
  longlong in_FS_OFFSET;
  byte in_CF;
  undefined1 auStack_8 [8];
  
  uVar1 = in_EAX + 0x15000a74 + (uint)in_CF;
  *(uint *)(in_FS_OFFSET + (ulonglong)uVar1) = *(uint *)(in_FS_OFFSET + (ulonglong)uVar1) | uVar1;
  uVar1 = uVar1 + 0x15000834 + (int)auStack_8 + (uint)(0xeafff7cb < uVar1);
  pbVar2 = (byte *)(ulonglong)uVar1;
  *(int *)(pbVar2 + param_1) = *(int *)(pbVar2 + param_1) + param_2;
  *pbVar2 = *pbVar2 | (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

