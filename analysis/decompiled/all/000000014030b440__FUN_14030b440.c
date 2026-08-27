// Function: FUN_14030b440
// Addr: 14030b440
// Size: 68 bytes


longlong FUN_14030b440(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_1403093e0();
  lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x200) + (ulonglong)param_2 * 4) *
          (longlong)iVar1;
  return (lVar2 >> 0x3f) + 0x8000 + lVar2 >> 0x10;
}

