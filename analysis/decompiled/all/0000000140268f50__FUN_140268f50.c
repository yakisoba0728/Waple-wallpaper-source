// Function: FUN_140268f50
// Addr: 140268f50
// Size: 200 bytes


longlong FUN_140268f50(longlong param_1,byte *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (((((ulonglong)*param_2 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_2[1]) *
            0x100000001b3 ^ (ulonglong)param_2[2]) * 0x100000001b3 ^ (ulonglong)param_2[3]) *
          0x100000001b3 & *(ulonglong *)(param_1 + 0x30);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar3 * 0x10);
  if (lVar2 != *(longlong *)(param_1 + 8)) {
    iVar1 = *(int *)(lVar2 + 0x10);
    while( true ) {
      if (*(int *)param_2 == iVar1) {
        return lVar2 + 0x14;
      }
      if (lVar2 == *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar3 * 0x10)) break;
      lVar2 = *(longlong *)(lVar2 + 8);
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0xaaaaaaaaaaaaaaa) {
    lVar2 = func_0x00014028aff0(0x18);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028c3b0("unordered_map/set too long");
}

