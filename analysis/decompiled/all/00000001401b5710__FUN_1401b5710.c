// Function: FUN_1401b5710
// Addr: 1401b5710
// Size: 192 bytes


longlong * FUN_1401b5710(longlong param_1,longlong *param_2,float *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  uVar1 = FUN_1401b56a0(param_1,param_3);
  uVar1 = uVar1 & *(ulonglong *)(param_1 + 0x30);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar1 * 0x10);
  if (lVar3 != *(longlong *)(param_1 + 8)) {
    while( true ) {
      if (*param_3 == *(float *)(lVar3 + 0x10)) {
        *param_2 = lVar3;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (lVar3 == *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar1 * 0x10)) break;
      lVar3 = *(longlong *)(lVar3 + 8);
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0x222222222222222) {
    plVar2 = (longlong *)func_0x00014028aff0(0x78);
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028c3b0("unordered_map/set too long");
}

