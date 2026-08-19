// Function: FUN_140160950
// Addr: 140160950
// Size: 204 bytes


longlong FUN_140160950(longlong param_1,byte *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (((((ulonglong)*param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_2[1]) *
            0x100000001b3 ^ (ulonglong)param_2[2]) * 0x100000001b3 ^ (ulonglong)param_2[3]) *
          0x100000001b3 & *(ulonglong *)(param_1 + 0x30);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar2 * 0x10);
  if (lVar1 != *(longlong *)(param_1 + 8)) {
    if (*(int *)param_2 == *(int *)(lVar1 + 0x10)) {
      return lVar1 + 0x14;
    }
    while (lVar1 != *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar2 * 0x10)) {
      lVar1 = *(longlong *)(lVar1 + 8);
      if (*(int *)param_2 == *(int *)(lVar1 + 0x10)) {
        return lVar1 + 0x14;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x10) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c3b0("unordered_map/set too long");
  }
  lVar1 = func_0x00014028aff0(0x18);
  return lVar1;
}

