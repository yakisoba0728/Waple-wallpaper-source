// Function: FUN_1402915f0
// Addr: 1402915f0
// Size: 192 bytes


undefined8 * FUN_1402915f0(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res10 [24];
  
  *param_1 = std::locale::_Locimp::vftable;
  FUN_1402914b0(local_res10,0);
  lVar2 = param_1[3];
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    if ((*(longlong *)(param_1[2] + lVar2 * 8) != 0) &&
       (lVar1 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(), lVar1 != 0)) {
      (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar1,1);
    }
  }
  thunk_FUN_1402d9040(param_1[2]);
  FUN_140291550(local_res10);
  if (param_1[5] != 0) {
    thunk_FUN_1402d9040();
  }
  param_1[5] = 0;
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x38);
  }
  return param_1;
}

