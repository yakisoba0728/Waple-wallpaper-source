// Function: FUN_1403a47c0
// Addr: 1403a47c0
// Size: 316 bytes


undefined8 FUN_1403a47c0(uint *param_1,uint param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = *param_1;
  if ((int)uVar5 < 0) {
    return 0;
  }
  if (param_3 == '\0') {
    uVar4 = uVar5;
    if (param_2 <= uVar5) {
      return 1;
    }
    do {
      uVar4 = uVar4 + 8 + (uVar4 >> 1);
    } while (uVar4 < param_2);
  }
  else {
    uVar4 = param_1[1];
    if (param_1[1] <= param_2) {
      uVar4 = param_2;
    }
    if ((uVar4 <= uVar5) && (uVar5 >> 2 <= uVar4)) {
      return 1;
    }
  }
  if (0x1ffffffe < uVar4) {
    *param_1 = ~uVar5;
    return 0;
  }
  if (uVar4 == 0) {
    if (1 < uVar5 + 1) {
      thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 2));
    }
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    lVar3 = _malloc_base((ulonglong)uVar4 << 3);
    if (lVar3 == 0) {
      if (*param_1 < uVar4) {
        *param_1 = -*param_1 - 1;
        return 0;
      }
    }
    else {
      uVar6 = 0;
      if (param_1[1] != 0) {
        do {
          uVar5 = (int)uVar6 + 1;
          lVar1 = uVar6 * 8;
          *(undefined8 *)(lVar1 + lVar3) = 0;
          lVar2 = *(longlong *)(param_1 + 2);
          *(undefined8 *)(lVar1 + lVar3) = *(undefined8 *)(lVar2 + lVar1);
          *(undefined8 *)(lVar2 + lVar1) = 0;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 < param_1[1]);
      }
      if (1 < *param_1 + 1) {
        thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 2));
      }
      *(longlong *)(param_1 + 2) = lVar3;
      *param_1 = uVar4;
    }
  }
  return 1;
}

