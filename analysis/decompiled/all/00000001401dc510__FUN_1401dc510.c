// Function: FUN_1401dc510
// Addr: 1401dc510
// Size: 178 bytes


void FUN_1401dc510(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)(param_3 - 1) >> 1;
  lVar4 = param_2;
  while (lVar4 < lVar3) {
    lVar1 = (2 - (ulonglong)
                 (*(uint *)(*(longlong *)(param_1 + 0x10 + lVar4 * 0x10) + 4) <
                 *(uint *)(*(longlong *)(param_1 + 8 + lVar4 * 0x10) + 4))) + lVar4 * 2;
    *(undefined8 *)(param_1 + lVar4 * 8) = *(undefined8 *)(param_1 + lVar1 * 8);
    lVar4 = lVar1;
  }
  if ((lVar4 == lVar3) && ((param_3 & 1) == 0)) {
    *(undefined8 *)(param_1 + lVar4 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    lVar4 = param_3 - 1;
  }
  if (lVar4 <= param_2) {
    *(longlong *)(param_1 + lVar4 * 8) = *param_4;
    return;
  }
  lVar3 = *param_4;
  do {
    lVar2 = lVar4 + -1 >> 1;
    lVar1 = *(longlong *)(param_1 + lVar2 * 8);
    if (*(uint *)(lVar3 + 4) <= *(uint *)(lVar1 + 4)) break;
    *(longlong *)(param_1 + lVar4 * 8) = lVar1;
    lVar4 = lVar2;
  } while (param_2 < lVar2);
  *(longlong *)(param_1 + lVar4 * 8) = lVar3;
  return;
}

