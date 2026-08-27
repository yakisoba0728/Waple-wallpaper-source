// Function: FUN_1403b10d0
// Addr: 1403b10d0
// Size: 191 bytes


void FUN_1403b10d0(uint *param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((param_1 != (uint *)0x0) && (*param_1 != 0)) {
    uVar4 = 0;
    if (*param_1 != 0) {
      do {
        if (*(longlong *)(param_1 + uVar4 * 2 + 10) != 0) {
          lVar1 = *(longlong *)(param_1 + uVar4 * 2 + 0x18);
          if ((lVar1 != 0) && (uVar3 = 0, *(int *)(lVar1 + 0x18) != 0)) {
            do {
              thunk_FUN_1402d9040(*(undefined8 *)((uVar3 + 1) * 0x40 + lVar1));
              uVar2 = (int)uVar3 + 1;
              uVar3 = (ulonglong)uVar2;
            } while (uVar2 < *(uint *)(lVar1 + 0x18));
          }
          thunk_FUN_1402d9040(*(undefined8 *)(param_1 + uVar4 * 2 + 0x18));
          if ((char)param_1[1] != '\0') {
            thunk_FUN_1402d9040(*(undefined8 *)(param_1 + uVar4 * 2 + 10));
          }
        }
        uVar2 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar2;
      } while (uVar2 < *param_1);
    }
    thunk_FUN_1402d9040(param_1);
  }
  return;
}

