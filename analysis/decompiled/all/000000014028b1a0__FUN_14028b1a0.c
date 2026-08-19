// Function: FUN_14028b1a0
// Addr: 14028b1a0
// Size: 60 bytes


void FUN_14028b1a0(int *param_1)

{
  ulonglong uVar1;
  
  (*DAT_1404262a0)(&DAT_1404e3b08);
  uVar1 = (ulonglong)DAT_1404e3b58;
  DAT_1404dc0d0 = DAT_1404dc0d0 + 1;
  *param_1 = DAT_1404dc0d0;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x130) = DAT_1404dc0d0;
  (*DAT_140426298)(&DAT_1404e3b08);
  (*DAT_1404262a8)(0x1404e3b00);
  return;
}

