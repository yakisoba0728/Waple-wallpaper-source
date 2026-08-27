// Function: FUN_1402ed360
// Addr: 1402ed360
// Size: 72 bytes


ulonglong FUN_1402ed360(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1402ed3b0(&IMAGE_DOS_HEADER_140000000);
  if ((int)uVar1 != 0) {
    lVar2 = FUN_1402ed310(&IMAGE_DOS_HEADER_140000000,param_1 + -0x140000000);
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = (ulonglong)(~*(uint *)(lVar2 + 0x24) >> 0x1f);
    }
  }
  return uVar1;
}

