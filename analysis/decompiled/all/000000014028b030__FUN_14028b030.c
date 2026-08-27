// Function: FUN_14028b030
// Addr: 14028b030
// Size: 141 bytes


undefined8 FUN_14028b030(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  piVar3 = *(int **)(lVar1 + 0x20);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)(lVar1 + 0x30);
  }
  else {
    iVar2 = *piVar3;
    if (iVar2 != 0x1e) goto LAB_14028b0a8;
    piVar3 = (int *)_malloc_base(0x100);
    thunk_FUN_1402d9040(0);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(lVar1 + 0x20);
  }
  iVar2 = 0;
  *(int **)(lVar1 + 0x20) = piVar3;
  *piVar3 = 0;
LAB_14028b0a8:
  *(undefined8 *)(piVar3 + (longlong)iVar2 * 2 + 4) = param_1;
  *piVar3 = *piVar3 + 1;
  return 0;
}

