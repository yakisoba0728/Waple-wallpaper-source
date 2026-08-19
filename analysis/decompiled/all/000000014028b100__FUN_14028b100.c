// Function: FUN_14028b100
// Addr: 14028b100
// Size: 86 bytes


undefined8 FUN_14028b100(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)DAT_1404e3b58 * 8);
  piVar3 = *(int **)(lVar1 + 0x20);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)(lVar1 + 0x30);
  }
  else {
    iVar2 = *piVar3;
    if (iVar2 != 0x1e) goto code_r0x00014028b178;
    piVar3 = (int *)thunk_FUN_1402da070(0x100);
    func_0x0001402bf8e0(0);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(lVar1 + 0x20);
  }
  iVar2 = 0;
  *(int **)(lVar1 + 0x20) = piVar3;
  *piVar3 = 0;
code_r0x00014028b178:
  *(undefined8 *)(piVar3 + (longlong)iVar2 * 2 + 4) = param_1;
  *piVar3 = *piVar3 + 1;
  return 0;
}

