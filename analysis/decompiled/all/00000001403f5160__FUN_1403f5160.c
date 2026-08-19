// Function: FUN_1403f5160
// Addr: 1403f5160
// Size: 35 bytes


void FUN_1403f5160(longlong param_1)

{
  uint uVar1;
  int iVar2;
  double *pdVar3;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    pdVar3 = (double *)&DAT_1404e4ff0;
    DAT_1404e4ff0 = DAT_14045dde0;
  }
  else {
    uVar1 = *(int *)(param_1 + 0x1c) - 1;
    *(uint *)(param_1 + 0x1c) = uVar1;
    pdVar3 = (double *)(param_1 + ((ulonglong)uVar1 + 4) * 8);
  }
  iVar2 = (int)*pdVar3;
  if (iVar2 < 0) {
    iVar2 = 0;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  if ((*(char *)(param_1 + 0x1201) == '\0') && (*(char *)(param_1 + 0x1202) == '\0')) {
    *(int *)(param_1 + 0x11ec) = iVar2;
    *(undefined1 *)(param_1 + 0x1201) = 1;
    return;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 1;
  *(undefined1 *)(param_1 + 0x1201) = 1;
  return;
}

