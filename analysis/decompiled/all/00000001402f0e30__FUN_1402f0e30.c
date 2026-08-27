// Function: FUN_1402f0e30
// Addr: 1402f0e30
// Size: 230 bytes


int FUN_1402f0e30(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1[1];
  if ((iVar4 == 0) || (param_1[8] != 0)) {
    return 0;
  }
  iVar1 = iVar4 * 2;
  if (iVar1 < 0) {
    iVar4 = 6;
LAB_1402f0ee7:
    param_1[8] = 0;
  }
  else {
    if (iVar1 == 0) {
      param_1[8] = 0;
      lVar2 = 0;
    }
    else {
      if (0xfffffff < iVar1) {
        iVar4 = 10;
        goto LAB_1402f0ee7;
      }
      lVar2 = (**(code **)(*param_1 + 8))(*param_1,iVar4 << 4);
      iVar3 = 0x40;
      if ((lVar2 == 0) || (iVar3 = 0, iVar1 < 1)) {
        param_1[8] = lVar2;
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      else {
        FUN_1404217a0(lVar2,0,(longlong)(iVar4 << 4));
        param_1[8] = lVar2;
      }
    }
    iVar4 = 0;
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    param_1[9] = lVar2 + (ulonglong)*(uint *)(param_1 + 1) * 8;
    FUN_1402f07f0(param_1);
  }
  return iVar4;
}

