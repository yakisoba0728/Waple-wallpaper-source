// Function: FUN_1403f0ff0
// Addr: 1403f0ff0
// Size: 61 bytes


int FUN_1403f0ff0(undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  double *pdVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    *param_1 = 1;
    pdVar3 = (double *)&DAT_1404e4f20;
    DAT_1404e4f20 = DAT_14045dd10;
  }
  else {
    uVar1 = *(int *)(param_1 + 4) - 1;
    *(uint *)(param_1 + 4) = uVar1;
    pdVar3 = (double *)(param_1 + ((ulonglong)uVar1 + 1) * 8);
  }
  iVar2 = (int)*pdVar3;
  if (iVar2 < 0) {
    *param_1 = 1;
    iVar2 = 0;
  }
  return iVar2;
}

