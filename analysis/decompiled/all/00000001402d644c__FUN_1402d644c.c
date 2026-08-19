// Function: FUN_1402d644c
// Addr: 1402d644c
// Size: 466 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1402d644c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  if (*(longlong *)param_1[1] != 0) {
    iVar2 = func_0x0001402c97c0();
    if ((iVar2 != 0x16) && (iVar2 != 0x22)) {
                    /* WARNING: Subroutine does not return */
      FUN_1402dd8b0(0,2);
    }
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  lVar3 = FUN_1402d2e60(*(undefined4 *)*param_1);
  if (lVar3 != 0) {
    lVar4 = FUN_1402d9964();
    lVar3 = *(longlong *)(lVar4 + 0x90);
    iVar2 = FUN_1402e7cd8();
    if (iVar2 == 0) {
      puVar5 = (undefined4 *)FUN_1402da070();
      if (puVar5 != (undefined4 *)0x0) {
        iVar2 = FUN_1402e7cd8();
        if (iVar2 == 0) {
          piVar1 = *(int **)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar3);
          if (piVar1 != (int *)0x0) {
            LOCK();
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              FUN_1402d9110(*(undefined8 *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar3));
              *(undefined8 *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar3) = 0;
            }
          }
          if (((_DAT_1404dd030 & *(uint *)(lVar4 + 0x3a8)) == 0) &&
             (piVar1 = *(int **)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar3),
             piVar1 != (int *)0x0)) {
            LOCK();
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              FUN_1402d9110(*(undefined8 *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar3));
              *(undefined8 *)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar3) = 0;
            }
          }
          *puVar5 = *(undefined4 *)(lVar3 + 0x10);
          *(undefined4 **)((longlong)*(int *)*param_1 * 0x20 + 0x30 + lVar3) = puVar5;
          *(undefined4 **)(((longlong)*(int *)*param_1 + 1) * 0x20 + lVar3) = puVar5 + 1;
          return puVar5 + 1;
        }
        if ((iVar2 == 0x16) || (iVar2 == 0x22)) goto LAB_1402d66d5;
        FUN_1402d9110(puVar5);
      }
    }
    else if ((iVar2 == 0x16) || (iVar2 == 0x22)) {
LAB_1402d66d5:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return (undefined4 *)0x0;
}

