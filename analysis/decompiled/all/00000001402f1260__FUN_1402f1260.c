// Function: FUN_1402f1260
// Addr: 1402f1260
// Size: 110 bytes


int FUN_1402f1260(longlong *param_1,code *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != (code *)0x0)) {
    lVar2 = *param_1;
    do {
      if (lVar2 == 0) {
        return 0;
      }
      lVar1 = *(longlong *)(lVar2 + 8);
      iVar3 = (*param_2)(lVar2,param_3);
      lVar2 = lVar1;
    } while (iVar3 == 0);
    return iVar3;
  }
  return 6;
}

