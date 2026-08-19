// Function: FUN_1401ac480
// Addr: 1401ac480
// Size: 11 bytes


void FUN_1401ac480(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  if (0 < *(int *)*param_1) {
    iVar6 = 0;
    lVar1 = *(longlong *)ThreadLocalStoragePointer;
    do {
      if (0 < *(int *)param_1[1]) {
        lVar2 = *(longlong *)(lVar1 + 0x228);
        iVar5 = 0;
        do {
          iVar3 = iVar5 * *(int *)*param_1;
          lVar4 = (longlong)iVar5;
          iVar5 = iVar5 + 1;
          *(undefined4 *)(lVar2 + lVar4 * 4) =
               *(undefined4 *)(param_2 + (longlong)(iVar6 + iVar3) * 4);
        } while (iVar5 < *(int *)param_1[1]);
      }
      func_0x0001401ac200(param_1[2]);
      if (0 < *(int *)param_1[1]) {
        lVar2 = *(longlong *)(lVar1 + 0x228);
        iVar5 = 0;
        do {
          iVar3 = iVar5 + 1;
          *(undefined4 *)(param_2 + (longlong)(iVar5 * *(int *)*param_1 + iVar6) * 4) =
               *(undefined4 *)(lVar2 + (longlong)iVar5 * 4);
          iVar5 = iVar3;
        } while (iVar3 < *(int *)param_1[1]);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)*param_1);
  }
  iVar6 = 0;
  if (0 < *(int *)param_1[1]) {
    do {
      func_0x0001401ac200(param_1[2],param_2 + (longlong)(*(int *)*param_1 * iVar6) * 4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)param_1[1]);
  }
  return;
}

