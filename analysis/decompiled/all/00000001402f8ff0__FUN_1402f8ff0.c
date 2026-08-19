// Function: FUN_1402f8ff0
// Addr: 1402f8ff0
// Size: 87 bytes


longlong FUN_1402f8ff0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    lVar2 = *param_1;
    while (lVar2 != 0) {
      iVar3 = FUN_140421e50(lVar2,param_2);
      if (iVar3 == 0) {
        return param_1[1];
      }
      plVar1 = param_1 + 2;
      param_1 = param_1 + 2;
      lVar2 = *plVar1;
    }
  }
  return 0;
}

