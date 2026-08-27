// Function: FUN_1402c0e08
// Addr: 1402c0e08
// Size: 118 bytes


uint FUN_1402c0e08(int param_1,uint param_2,_locale_t param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 == (_locale_t)0x0) {
    lVar1 = FUN_1402d6668();
    if (param_1 + 1U < 0x101) {
      uVar2 = *(ushort *)(lVar1 + (longlong)param_1 * 2) & param_2;
    }
  }
  else if (param_1 + 1U < 0x101) {
    uVar2 = *(ushort *)(*(longlong *)param_3->locinfo + (longlong)param_1 * 2) & param_2;
  }
  else if ((int)param_3->locinfo->lc_collate_cp < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = _isctype_l(param_1,param_2,param_3);
  }
  return uVar2;
}

