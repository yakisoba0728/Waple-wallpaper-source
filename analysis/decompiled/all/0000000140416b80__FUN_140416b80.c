// Function: FUN_140416b80
// Addr: 140416b80
// Size: 169 bytes


void FUN_140416b80(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 *local_res8;
  
  if (*(code **)(param_1 + 0xa0) == FUN_14039d610) {
    lVar1 = *(longlong *)(param_1 + 0x98);
    lVar2 = *(longlong *)(lVar1 + 0x30);
    if (*(char *)(param_1 + 4) != '\0') {
      iVar4 = (int)((longlong)*(int *)(*(longlong *)(lVar2 + 0x80) + 0x1c) *
                    (ulonglong)*(ushort *)(lVar2 + 0x68) + 0x8000 >> 0x10);
      iVar3 = (int)((longlong)*(int *)(*(longlong *)(lVar2 + 0x80) + 0x20) *
                    (ulonglong)*(ushort *)(lVar2 + 0x68) + 0x8000 >> 0x10);
      if ((*(int *)(param_1 + 0x28) != iVar4) || (*(int *)(param_1 + 0x2c) != iVar3)) {
        *(int *)(param_1 + 0x2c) = iVar3;
        *(int *)(param_1 + 0x28) = iVar4;
        FUN_1403b3040(param_1);
      }
    }
    local_res8 = (undefined4 *)0x0;
    iVar3 = func_0x0001402fa770(lVar2,&local_res8);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_1402dd8b0(*local_res8,4);
    }
    if (lVar1 + 0x3cU <= lVar1 + 0x43cU) {
      func_0x000140421870(lVar1 + 0x3cU,0xffffffff,0x400);
    }
    *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(param_1 + 0x10);
  }
  return;
}

