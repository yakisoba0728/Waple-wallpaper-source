// Function: FUN_140130bf0
// Addr: 140130bf0
// Size: 239 bytes


longlong * FUN_140130bf0(longlong param_1,longlong *param_2,byte *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  uVar4 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3 & *(ulonglong *)(param_1 + 0x30);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar4 * 0x10);
  if (lVar2 != *(longlong *)(param_1 + 8)) {
    iVar1 = *(int *)(lVar2 + 0x10);
    while( true ) {
      if (*(int *)param_3 == iVar1) {
        *param_2 = lVar2;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (lVar2 == *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar4 * 0x10)) break;
      lVar2 = *(longlong *)(lVar2 + 8);
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0xaaaaaaaaaaaaaaa) {
    plVar3 = (longlong *)func_0x00014028aff0(0x18);
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028c3b0("unordered_map/set too long");
}

