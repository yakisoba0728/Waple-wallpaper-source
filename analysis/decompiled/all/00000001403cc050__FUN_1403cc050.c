// Function: FUN_1403cc050
// Addr: 1403cc050
// Size: 131 bytes


int FUN_1403cc050(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (((((*(longlong *)(param_1 + 8) == 0) && (lVar3 = 1, *(longlong *)(param_1 + 0x10) == 0)) &&
       (lVar3 = 2, *(longlong *)(param_1 + 0x18) == 0)) &&
      ((lVar3 = 3, *(longlong *)(param_1 + 0x20) == 0 &&
       (lVar3 = 4, *(longlong *)(param_1 + 0x28) == 0)))) &&
     ((lVar3 = 5, *(longlong *)(param_1 + 0x30) == 0 &&
      ((lVar3 = 6, *(longlong *)(param_1 + 0x38) == 0 &&
       (lVar3 = 7, *(longlong *)(param_1 + 0x40) == 0)))))) {
    return -1;
  }
  uVar1 = *(ulonglong *)(param_1 + 8 + lVar3 * 8);
  if (uVar1 == 0) {
    return (int)lVar3 * 0x40 + 0x40;
  }
  lVar2 = 0;
  if (uVar1 != 0) {
    for (; (uVar1 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  return (int)lVar2 + (int)lVar3 * 0x40;
}

