// Function: FUN_140395d80
// Addr: 140395d80
// Size: 133 bytes


void FUN_140395d80(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8);
      if ((lVar1 != 0) && (uVar3 = 0, *(int *)(lVar1 + 0x18) != 0)) {
        do {
          thunk_FUN_1402d9040(*(undefined8 *)((uVar3 + 1) * 0x40 + lVar1));
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
        } while (uVar2 < *(uint *)(lVar1 + 0x18));
      }
      thunk_FUN_1402d9040(lVar1);
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x10));
  FUN_1403bde80(param_1);
  return;
}

