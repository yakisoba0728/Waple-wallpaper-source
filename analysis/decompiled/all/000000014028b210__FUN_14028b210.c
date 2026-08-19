// Function: FUN_14028b210
// Addr: 14028b210
// Size: 22 bytes


void FUN_14028b210(int *param_1)

{
  int iVar1;
  
  (*DAT_1404262a0)(&DAT_1404e3b08);
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == 0) {
      *param_1 = -1;
      (*DAT_140426298)(&DAT_1404e3b08);
      return;
    }
    if (iVar1 != -1) break;
    (*DAT_1404262b0)(0x1404e3b00,&DAT_1404e3b08,0xffffffff,0);
    iVar1 = *param_1;
  }
  *(undefined4 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)DAT_1404e3b58 * 8) + 0x130) =
       DAT_1404dc0d0;
  (*DAT_140426298)(&DAT_1404e3b08);
  return;
}

