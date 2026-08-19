// Function: FUN_1401e4390
// Addr: 1401e4390
// Size: 291 bytes


longlong * FUN_1401e4390(longlong param_1,longlong *param_2,byte *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  uVar4 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3 & *(ulonglong *)(param_1 + 0x30);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar4 * 0x10);
  if (lVar1 != *(longlong *)(param_1 + 8)) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    while( true ) {
      if (*(longlong *)param_3 == lVar2) {
        *param_2 = lVar1;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (lVar1 == *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar4 * 0x10)) break;
      lVar1 = *(longlong *)(lVar1 + 8);
      lVar2 = *(longlong *)(lVar1 + 0x10);
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0xaaaaaaaaaaaaaaa) {
    plVar3 = (longlong *)func_0x00014028aff0(0x18);
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028c3b0("unordered_map/set too long");
}

